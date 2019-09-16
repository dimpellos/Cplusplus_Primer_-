#include <iostream>
#include <string>

using namespace std;

const int SLEN = 30;

struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student* ps);
void display3(const student pa[], int n);

int main()
{
	cout << "Enter class size : ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete[] ptr_stu;
	cout << "Done\n";
	return 0;
}


int getinfo(student pa[], int n)
{
	int entries = 0;
	string line;

	for (; entries < n; entries++,pa++)
	{
		cout << "\nProvide name:";
		getline(cin, line);
		if (line.find_first_not_of(' ') != std::string::npos)
		{
			strcpy_s(pa->fullname, line.c_str());
		}
		else
			break;

		cout << "Provide hobby:";
		getline(cin, line);
		strcpy_s(pa->hobby, line.c_str());

		cout << "Provide ooplevel:";
		getline(cin, line);
		pa->ooplevel = stoi(line);

	}
	return entries;
}

void display1(student st)
{
	cout << "- Display1 -" << endl;
	cout << "Name: " << st.fullname << endl;
	cout << "Hobby: " << st.hobby << endl;
	cout << "Ooplevel: " << st.ooplevel << endl;

	return;
}

void display2(const student* ps)
{
	cout << "- Display2 -" << endl;
	cout << "Name: " << ps->fullname << endl;
	cout << "Hobby: " << ps->hobby << endl;
	cout << "Ooplevel: " << ps->ooplevel << endl;
	return;
}

void display3(const student pa[], int n)
{
	cout << "- Display3 -" << endl;
	for (int i = 0; i < n; i++, pa++)
	{
		cout << "Name: " << pa->fullname << endl;
		cout << "Hobby: " << pa->hobby << endl;
		cout << "Ooplevel: " << pa->ooplevel << endl;
	}
	return;
}