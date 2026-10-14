#include <bits/stdc++.h>
#include "finder.h"
using namespace std;

array<int, 2> findInFile(std::string path, std::string target)
{
    ifstream file(path);
    string line;
    auto index{0};
    auto lineNo{0};
    while (getline(file, line))
    {
        if ((index = line.find(target)) == string::npos)
        {
            ++lineNo;
            continue;
        }
        file.close();
        return {lineNo, index};
    }
    file.close();
    return {-1, -1};
}