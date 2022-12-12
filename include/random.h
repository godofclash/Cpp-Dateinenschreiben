#pragma once
#include <iostream>
#include <vector>
#include <cmath>
#include <random>
#include <windows.h>

using namespace std; 

struct xy {
    int x; 
    int y; 
};

vector<xy> randomKoordinaten(int anzahl) {
    srand(time(NULL));
    vector<xy> koordinaten; 
    for (int i = 0; i < anzahl; i++) {
        int random1 = rand() % 26 + 65; 
        int random2 = rand() % 26 + 65; 

        xy koordinate; 
        koordinate.x = random1;
        koordinate.y = random2; 
        koordinaten.push_back(koordinate);
    }
    return koordinaten;
}