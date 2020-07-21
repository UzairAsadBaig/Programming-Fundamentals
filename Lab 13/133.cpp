#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
{
	ifstream img1("brian_kernighan_ascii.ppm");
	ofstream img2("brian_kernighan_new1.ppm");
	string header[7];
	int pixel[200][200][3],i,j,k;
    if (!img2.is_open()) {
        cout << "Error writing file: brian_kernighan_new1.ppm" << endl;
        return 0;
    }
    if (!img1.is_open()) {
        cout << "Error reading file: brian_kernighan_ascii.ppm" << endl;
        return 0;
    }
    for (i=0;i<7;i++)
	{
		img1.ignore(500,'\n');
	}
	img2 << "P3\n400\n200\n255\n";
    for(i=0;i<200;i++)
    {
    	for (j=0;j<200;j++)
    	{
    		for(k=0;k<3;k++)
			{
				img1 >> pixel[i][j][k];
    			img2 << pixel[i][j][k] << " ";
    		}
		}
		for (j=199;j>=0;j--)
    	{
    		for(k=0;k<3;k++)
    		{
				img2 << pixel[i][j][k] << " ";
			}
		}
		img2 << endl;
	}
	img1.close();
	img2.close();
	cout<<"Your image has been converted to flip!"<<endl;
	
	return 0;
}
