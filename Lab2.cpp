/*
Natalia Kellerman
C++ FA2021
Due: September 15th 2021
Lab 2 Exploring Output
This lab is designed to get you familiar output to the command prompt using C++.
*/
#include <iostream>
using namespace std;
int main()
{
	// output class schedule to the screen
	const string m = "Monday";
	const string t = "Tuesday";
	const string w = "Wednesday";
	const string th = "Thursday";
	const string f = "Friday";
	const string fct = "8:20am"; //fct = first class time 
	const string sct = "10:00am"; // sct = second class time 
	const string tct = "12:00pm"; // tct = third class time 
	const string psct = "12:15am"; // psct = public speaking class time 
	const string cect = "6:30pm"; // cect = college experience class time 
	const string oglt = "8:00am"; // oglt = organic chemistry lab time 
	const string ps = "Public Speaking 112";
	const string ce = "College Experience 108";
	const string ep = "Engineering Problems 180";
	const string oc = "Organic Chemistry 261";
	cout << m << "\t\t" << sct << "\t" << "C++ 162" <<endl;
	cout << m << "\t\t" << psct << "\t" << ps << endl;
	cout << m << "\t\t" << cect << "\t" << ce <<endl;
	cout << t << "\t\t" << fct << "\t" << ep << endl;
	cout << t << "\t\t" << sct << "\t" << "C++ 162 Lab" << endl;
	cout << t << "\t\t" << tct << "\t" << oc << endl;
	cout << w << "\t" << sct << "\t" << "C++ 162" << endl;
	cout << w << "\t" << psct << "\t" << ps << endl;
	cout << th << "\t" << fct << "\t" << ep << endl;
	cout << th << "\t" << sct << "\t" << "C++ 162 Lab" << endl;
	cout << th << "\t" << tct << "\t" << oc << endl;
	cout << f << "\t\t" << oglt << "\t" << "Organic Chemistry 261 Lab" << endl;
	const string x = "*   *   *   *";
	const string y = "  *   *   *   *";
	cout << x << endl;
	cout << y << endl;
	cout << x << endl;
	cout << y << endl;
	cout << x << endl;
	cout << y << endl;
	cout << x << endl;
	cout << y << endl;



}
