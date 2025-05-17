#include <iostream>

using namespace std;

const int CMaxKiek = 200;
const int CIlgis = 16;

struct TS {
    char p[CIlgis];
    int metai, men, diena, dregn;
};

void Rodyk(TS P[], int kiek) {
    for (int i = 0; i < kiek; i += 1) {
        cout << P[i].p << " " << P[i].metai << " " << P[i].men << " " << P[i].diena << " " << P[i].dregn << "%" << endl; 


    }
}

int main() {
    TS P[CMaxKiek] = {{"Mandrinas   ", 2014, 6, 12, 50}, {"Meta     ", 1999, 11, 13, 99}};
    int kiekis = 2;
    Rodyk(P, kiekis);
    return 0;
}
