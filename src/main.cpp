#include <iostream>
#include <vector>
#include <random.h>
#include <schreiben.h>
#include <lesen.h>

using namespace std; 

int main () {
    SetConsoleOutputCP(CP_UTF8);
    int anzahl; 
    string path = "../src/daten.csv";

    cout << "Gib die anzahl der random generierten koordinaten an: "; 
    cin >> anzahl; 

    

    vector<xy> koors = randomKoordinaten(anzahl);

    schreiben(path, koors);

    lesen(path, anzahl);




}