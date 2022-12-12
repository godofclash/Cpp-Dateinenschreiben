#pragma once
#include <vector>
#include <iostream>
#include <fstream>
#include <random.h>

using namespace std; 

void schreiben(string path, vector<xy> koors) {
    ofstream file(path);

    for (int i = 0; i < koors.size(); i++) {
        xy koor = koors[i];
        file << koor.x << ";"; 
        file << koor.y << ";";
        file << endl; 
    }

}