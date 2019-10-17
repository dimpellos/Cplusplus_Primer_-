#include <iostream>
#include "tv.h"

int main()
{
	Tv t;
	t.settings();

	Remote r;
	r.display_state();

	r.onoff(t);
	t.settings();

	t.toggle_remote(r);
	r.display_state();

	std::cout << "\nChapter15 Exc01.\n";
	return 0;
}

