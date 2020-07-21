#include <iostream>

#include "ppm.h"
using namespace std;
int main() {
    cout << "Program converting an image to its negative" << endl;
    cout << "This may take some time, please wait . . ." << endl;

    AsciiPPM BKA;
    fileRead("brian_kernighan_ascii.ppm", BKA);
    //fileWrite("brian_kernighan_new.ppm", BKA);

    AsciiPPM newBKA = BKA;
    for (long i = 0; i < BKA.width; i++) {
        for (long j = 0; j < BKA.height; j++) {
            // Image flip horizontly
            //newBKA.R[i][BKA.width - j - 1] = BKA.R[i][j];
            //newBKA.G[i][BKA.width - j - 1] = BKA.G[i][j];
            //newBKA.B[i][BKA.width - j - 1] = BKA.B[i][j];

            // Image negative
            //newBKA.R[i][j] = BKA.shades - BKA.R[i][j];
            //newBKA.G[i][j] = BKA.shades - BKA.G[i][j];
            //newBKA.B[i][j] = BKA.shades - BKA.B[i][j];

            // Individual color manipulation, uncomment any one or two line
            //newBKA.R[i][j] = 0;
            //newBKA.G[i][j] = 0;
            //newBKA.B[i][j] = 0;

            // Smooth gradinet, uncomment any one or many line
            //newBKA.R[i][j] = i % newBKA.width;
            //newBKA.G[i][j] = j % newBKA.width;
            //newBKA.B[i][j] = i % newBKA.width;

            // Smooth gradinet, uncomment any one or many line
            //newBKA.R[i][j] = i % newBKA.width;
            //newBKA.G[i][j] = j % newBKA.width;
            //newBKA.B[i][j] = i % newBKA.width;

            // multiplicate image, uncomment lines in three
            //newBKA.R[i/2][j/2] = newBKA.R[i][j];
            //newBKA.G[i/2][j/2] = newBKA.G[i][j];
            //newBKA.B[i/2][j/2] = newBKA.B[i][j];
            //newBKA.R[i/2][j/2 + newBKA.width/2] = newBKA.R[i][j];
            //newBKA.G[i/2][j/2 + newBKA.width/2] = newBKA.G[i][j];
            //newBKA.B[i/2][j/2 + newBKA.width/2] = newBKA.B[i][j];
            //newBKA.R[i/2 + newBKA.height/2][j/2] = newBKA.R[i][j];
            //newBKA.G[i/2 + newBKA.height/2][j/2] = newBKA.G[i][j];
            //newBKA.B[i/2 + newBKA.height/2][j/2] = newBKA.B[i][j];
            //newBKA.R[i/2 + newBKA.height/2][j/2 + newBKA.width/2] = newBKA.R[i][j];
            //newBKA.G[i/2 + newBKA.height/2][j/2 + newBKA.width/2] = newBKA.G[i][j];
            //newBKA.B[i/2 + newBKA.height/2][j/2 + newBKA.width/2] = newBKA.B[i][j];

            // multiplicate image, what is wrong here, uncomment lines in three
            //newBKA.R[i/2][j/2] = BKA.R[i][j];
            //newBKA.G[i/2][j/2] = BKA.G[i][j];
            //newBKA.B[i/2][j/2] = BKA.B[i][j];
            //newBKA.R[i/2][j/2 + newBKA.width/2] = BKA.R[i][j];
            //newBKA.G[i/2][j/2 + newBKA.width/2] = BKA.G[i][j];
            //newBKA.B[i/2][j/2 + newBKA.width/2] = BKA.B[i][j];
            //newBKA.R[i/2 + newBKA.height/2][j/2] = BKA.R[i][j];
            //newBKA.G[i/2 + newBKA.height/2][j/2] = BKA.G[i][j];
            //newBKA.B[i/2 + newBKA.height/2][j/2] = BKA.B[i][j];
            //newBKA.R[i/2 + newBKA.height/2][j/2 + newBKA.width/2] = BKA.R[i][j];
            //newBKA.G[i/2 + newBKA.height/2][j/2 + newBKA.width/2] = BKA.G[i][j];
            //newBKA.B[i/2 + newBKA.height/2][j/2 + newBKA.width/2] = BKA.B[i][j];

            // Image rotate 90
            //newBKA.R[i][j] = BKA.R[j][i];
            //newBKA.G[i][j] = BKA.G[j][i];
            //newBKA.B[i][j] = BKA.B[j][i];

            // Image rotate 180, write by yourself
            newBKA.R[BKA.height - i - 1][j] = BKA.R[i][j];
            newBKA.G[BKA.height - i - 1][j] = BKA.G[i][j];
            newBKA.B[BKA.height - i - 1][j] = BKA.B[i][j];
        }
    }

    //fileWrite("brian_kernighan_new.ppm", BKA);
    fileWrite("brian_kernighan_new.ppm", newBKA);

    cout << "Conversion completed, thanks" << endl;

    return EXIT_SUCCESS;
}