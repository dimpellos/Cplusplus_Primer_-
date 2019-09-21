// stonewt.cpp -- Stonewt methods
#include <iostream>
using std::cout;
#include "stonewt.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs, Mode s)
{
    stone = int (lbs) / Lbs_per_stn;    // integer division
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
	status = s;
}

Stonewt::Stonewt(int stn, double lbs, Mode s)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
	status = s;
}

Stonewt::Stonewt()          // default constructor, wt = 0
{
    stone = pounds = pds_left = 0;
	status = STN;
}

Stonewt::~Stonewt()         // destructor
{
}

Stonewt Stonewt::operator+(const Stonewt& st) const
{
	double pds_sum = pounds + st.pounds;
	Stonewt sum = Stonewt(pds_sum);
	return sum;
}

Stonewt Stonewt::operator-(const Stonewt& st) const
{
	double pds_diff = pounds - st.pounds;
	Stonewt diff = Stonewt(pds_diff);
	return diff;
}

Stonewt Stonewt::operator*(double p) const
{
	double multi = pounds * p;
	return Stonewt(multi);
}

std::ostream& operator<<(std::ostream& os, const Stonewt& st)
{
	if (st.status == Stonewt::STN)
		os << st.stone << " stone, " << st.pds_left << "pounds";
	else if (st.status == Stonewt::PDS)
		os << st.pounds << " pounds";
	else
		os << "Incorrect status";

	return os;
}
