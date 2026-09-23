// This program calculates how far a car can travel on one tank of gas.
#include <iostream>
using namespace std;
int main()
{
	cout << "Total distance car can travel!" << endl;
	//Constants
	const double tankCapacity = 20;
	const double townMPG = 23.5;
	const double highwayMPG = 28.9;
	double distanceTown = tankCapacity * townMPG;
	double distanceHighway = tankCapacity * highwayMPG;
	// Displays
	cout << "Full tank of gas in town: " << distanceTown;
	cout << " miles" << endl;
	cout << "Full tank of gas on the highway: " << distanceHighway; cout << " miles" << endl;
	return 0;


}
