#include<iostream>

using namespace std;

int main()
{
	int f1 = 0;
	int f2 = 1;
	cout << f2;
	int f = f1 + f2;
	while(f <= 1000)
	{
		cout << ", " << f;
		f1 = f2;
		f2 = f;
		f = f1 + f2;
	}

	return 0;
}
