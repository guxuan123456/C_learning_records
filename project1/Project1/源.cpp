//	myfirst.cpp	-- reading chars with cin.get()

#include <iostream>
#include "coordin.h"

using namespace std;	// ±‡“Î÷∏¡Ó

int main()
{
	rect rplace;
	polar pplace;

	cout << "enter the x and y value:";
	while (cin >> rplace.x >> rplace.y)
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "next two number(q to quit):";
	}

	cout << "bye\n";
	return 0;
}