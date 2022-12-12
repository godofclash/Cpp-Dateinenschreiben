#pragma once
#include <iostream>
#include <fstream>
#include <vector>

using namespace std; 

void lesen(string path, int anzahl) {
    fstream file(path); 
    string text; 

    vector<xy> koors; 

    while (getline(file, text)) {
        vector<string> texte; 
        string wort = "";
        int stelle = 0; 
        xy koor;

        for (int i = 0; i < text.length(); i++) {
            if (text[i] == ';') {
                stelle++; 
                switch (stelle) {
                    case 1: 
                        koor.x = stoi(wort);
                    case 2: 
                        koor.y = stoi(wort);
                }
                wort.clear(); 
            }
            else {
                wort += text[i];
            }
        }
        koors.push_back(koor);
    }

    double mediumx = 0; 
    double mediumy = 0; 

    for (int i = 0; i < koors.size(); i++) {
        xy koor = koors[i]; 
        mediumx += koor.x; 
        mediumy += koor.y; 
        cout << koor.x << " " << koor.y << endl; 
    }

    cout << "Der Durchschnitt der X-Werte ist: " << round(mediumx * 10 / anzahl) / 10 << endl; 
    cout << "Der Durchschnitt der Y-Werte ist: " << round(mediumy * 10 / anzahl) / 10 << endl; 

}

