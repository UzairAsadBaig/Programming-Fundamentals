#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

void ignoreComment(ifstream & file) {
    char c;
    while (true) {
        file >> ws;
        c = file.peek();
        if (c >= '0' && c <= '9') {
            return;
        } else if (c == '#') {
            file.ignore(4096, '\n');
        } else {
            file.ignore(1);
        }
    }
}

struct AsciiPPM {
    char header[2];
    int width;
    int height;
    int shades;
    unsigned char R[300][300]; // max image size is 300 X 300
    unsigned char G[300][300]; // max image size is 90000
    unsigned char B[300][300]; // max image size is 100 X 500 < = 90000
};

void fileRead(string fileName, AsciiPPM & pic) {
    ifstream img(fileName.c_str());
    if (!img.is_open()) {
        cout << "Error reading file: " << fileName << endl;
        throw 1;
    }

    //read header
    img >> pic.header[0];
    img >> pic.header[1];
    ignoreComment(img);
    img >> pic.width;
    ignoreComment(img);
    img >> pic.height;
    ignoreComment(img);
    img >> pic.shades;
    ignoreComment(img);

    //loop and read data
    int pval;
    for (int i = 0; i < pic.height; i++) {
        for (int j = 0; j < pic.width; j++) {
            img >> pval;
            pic.R[i][j] = pval;
            img >> pval;
            pic.G[i][j] = pval;
            img >> pval;
            pic.B[i][j] = pval;
        }
    }

    img.close();
}

void fileWrite(string fileName,
    const AsciiPPM & pic) {
    ofstream imag(fileName.c_str());
    if (!imag.is_open()) {
        cout << "Error writing file: " << fileName << endl;
        throw 2;
    }

    // minimum header, comment may be included if required
    imag << pic.header[0];
    imag << pic.header[1] << endl;
    imag << pic.width << endl;
    imag << pic.height << endl;
    imag << pic.shades << endl;

    //loop and write data
    for (int i = 0; i < pic.height; i++) {
        for (int j = 0; j < pic.width; j++) {
            if (i > 0 && i % 15 == 0) {
                imag << endl;
            }
            imag << int(pic.R[i][j]) << " ";
            imag << int(pic.G[i][j]) << " ";
            imag << int(pic.B[i][j]) << " ";
        }
    }

    imag.close();
}

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
