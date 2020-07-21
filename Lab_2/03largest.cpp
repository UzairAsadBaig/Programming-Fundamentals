#include<iostream>

using namespace std;

int main()
{
	cout << "Enter three numbers one by one ";
	cout << endl;
	double n1, n2, n3;
	cin >> n1;
	cin >> n2;
	cin >> n3;
	double largest = n1;
	if (n2 > largest)
	{
		largest = n2;
	}
	if (n3 > largest)
	{
		largest = n3;
	}
	cout << "the greater among the number entered is " << endl;
	cout << largest << endl;

	return 0;
}
