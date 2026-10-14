#include <iostream>
#include <array>
#include "finder.h"
using namespace std;

int main(int argc, char *argv[])
{
    if (argc < 3)
        cout << "Invalid Usage" << endl;
    else
    {
        array<int, 2> foundPos{findInFile(argv[1], argv[2])};
        if (foundPos[0] >= 0)
            cout << "Fount at line " << foundPos[0] << " index " << foundPos[1] << endl;
        else
            cout << "Not present" << endl;
    }
    return 0;
}