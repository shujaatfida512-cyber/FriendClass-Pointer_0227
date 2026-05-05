#include <iostream>
using namespace std;

class Rhombus;

class Kite 
{
private:
    float diagonal1, diagonal2;
    float sideA, sideB;

public:
    void inputData() {
        cout << "Enter Kite Data\n";
        cout << "Diagonal 1: "; cin >> diagonal1;
        cout << "Diagonal 2: "; cin >> diagonal2;
        cout << "Side A: "; cin >> sideA;
        cout << "Side B: "; cin >> sideB;
    }