#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

void ignoreComment(ifstream& file);
struct AsciiPPM {
    char header[2];
    int width;
    int height;
    int shades;
    unsigned char R[300][300]; // max image size is 300 X 300
    unsigned char G[300][300]; // max image size is 90000
    unsigned char B[300][300]; // max image size is 100 X 500 < = 90000
};
void fileRead(string fileName, AsciiPPM& pic);
void fileWrite(string fileName, const AsciiPPM& pic);