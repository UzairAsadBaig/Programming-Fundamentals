#include<iostream>

using namespace std;

int main()
{
	cout << "An object in thrown upward vertically";
	cout << endl;
	cout << "Enter its initial velocity vi (m/s) ";
	double vi = 0;
	cin >> vi;
	cout << "Solving for time with terminal velocity 0";
	cout << " using vf = vi - g.t" << endl;
	double vf = 0;
	double g = 9.8;
	double t = vi / g;
	cout << "Solving for maximum S = vi.t - 1/2 g.t^2";
	cout << endl;
	double S = vi*t - g*t*t/2;
	cout << "Object turns back from " << S << "meters height";
	cout << endl;

	return 0;
}
