#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "ppm.h"
using namespace std;

void ignoreComment(ifstream& file) {
    char c;
    while (true) {
        file >> ws;
        c = file.peek();
        if (c >= '0' && c <= '9') {
            return;
        }
        else if (c == '#') {
            file.ignore(4096, '\n');
        }
        else {
            file.ignore(1);
        }
    }
}

void fileRead(string fileName, AsciiPPM& pic) {
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
    const AsciiPPM& pic) {
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