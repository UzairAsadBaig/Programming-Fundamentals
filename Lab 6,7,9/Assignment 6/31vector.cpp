#include<iostream>

using namespace std;

struct vector
{
	float x;
	float y;
};

int main()
{

	vector v1,v2,vr;
	
	cout << "Enter x and y components of a vector one by one" << endl;
	cin >> v1.x;
	cin >> v1.y;
	
	cout << "Enter x and y components of another vector one by one" << endl;
	cin >> v2.x;
	cin >> v2.y;
	
	vr.x = v1.x+v2.x;
	vr.y = v1.y+v2.y;
	
	cout << "Resultant of above vectors is ";
	cout << vr.x;
	cout << ',';
	cout << vr.y;
	
	return 0;
}
