
#include "readFile.h"
#include "robots.h"
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>;

using namespace std;

vector<robot> robotVector;


bool space(char c) {
    return isspace(c);
}

vector<string> split_line(const string& line) {
    vector<string> lineVector;
    auto start = find_if_not(line.cbegin(), line.cend(), space);
    while (start != line.cend()) {
        auto end = find_if(start, line.cend(), space);
        lineVector.push_back(string(start, end));
        start = find_if_not(end, line.cend(), space);
    }
    return lineVector;
}

int readText(string file) {

    ifstream readFile;
    readFile.open(file);
    string line;
    if (readFile.is_open()) {
        if (file == "start.txt") {
            while (getline(readFile, line)) {
                auto lineVector = split_line(line);
                robotVector.push_back(robot(stod(lineVector[0]), stod(lineVector[1]), stod(lineVector[2]), stod(lineVector[3])));
            }
        }
        else if (file == "commands.txt") {
            while (getline(readFile, line)) {
            }
        }

    }

    readFile.close();
    
    cout << "Robots: \n";
    for (const auto& r : robotVector) {
        cout << r.name() << ":" << r.team() << ":" << r.position() << ":" << r.travelled() << "\n" ;
    }

    return 0;
}
 


