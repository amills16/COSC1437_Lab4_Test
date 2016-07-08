//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//
//																																											//
//																																											//
//														Andrew Mills																										//
//															Lab 4																											//
//														Bill Slater																											//
//														COSC 1437.3S7																										//
//																																											//
//																																											//
//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//

#include <iostream>

#include "Person.h"
#include "Address.h"
#include "Name.h"

using namespace std;

void main()
{
	Name N1("John", "H.", "Doe");
	Address A1("1234 Some Street", "Dallas", "Texas", "12345");
	Person P1(N1, A1);
	WCS_String S1 ("Mills");
	Name N2();

	cout << "Displaying Name..." << endl;
	cout << N1;
	cout << endl << "Displaying Address..." << endl;
	cout << A1;
	cout << endl << "Displaying Person..." << endl;
	cout << P1 << endl;

	N1.SetLast(S1);

	cin >> N1;

	cout << "Displaying new name..." << N1 << endl;
}