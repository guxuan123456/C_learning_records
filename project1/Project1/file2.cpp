#include <iostream>
#include <cmath>
#include "coordin.h"

polar rect_to_polar(rect xypos)
{
	using namespace std;
	polar answer;
	answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
	answer.angle = atan2(xypos.y, xypos.x);
	return answer;
}


void show_polar(polar dpos)
{
	using namespace std;
	const double rad_to_deg = 57.29577951;

	cout << "distance = " << dpos.distance;
	cout << ", angle = " << dpos.angle * rad_to_deg;
	cout << "degrees\n";
}