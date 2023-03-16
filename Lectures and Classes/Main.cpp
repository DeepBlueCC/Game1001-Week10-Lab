#include <iostream>
#include <cmath>
#include "Carpet.h"

using namespace std;	// just being lazy here...


int main()
{
	Carpet purchase;
	double pricePerYd;
	double length;
	double width;

	cout << "Room length: ";
	cin >> length;
	cout << endl << "Room width: ";
	cin >> width;
	cout << endl << "Carpet price (per sq yard): ";
	cin >> pricePerYd;
	cout << endl;

	purchase.setDimension(length, width);
	purchase.setPricePerYd(pricePerYd);

	cout << "\nThe total price of my new " << length << " x " << width
		<< " carpet is $" << purchase.getTotalPrice() << endl;

	return 0;
}