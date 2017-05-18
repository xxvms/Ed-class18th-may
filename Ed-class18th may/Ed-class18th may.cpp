// Ed-class18th may.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class safe
{
private:
	int arr[3];

public:

	safe()
	{}

	int& operator [](int n)
	{
		if (n >= 3)
		{
			cout << "element " << n << " doesn't exist!" << endl;
			cin.get();
			exit(1);  // exits whole program
		}
		return arr[n];
	}

};

////////////////////////////////
int main()
{
	safe sa;

	sa[0] = 5;			// OK
	cout << sa[0] << endl;	// OK  ->5

	sa[3] = 4;			// Not OK	program stops
	cout << sa[3] << endl;  	// Not OK	program stops

	cin.get();
	return 0;
}

//#include <iostream>
//using namespace std;
//
//int x;
//int& getSetX();
//
//int main()
//{
//	getSetX() = 9;
//	cout << x << endl;
//	cin.get();
//	return 0;
//}
//
//int& getSetX()
//{
//	return x;
//}
//
