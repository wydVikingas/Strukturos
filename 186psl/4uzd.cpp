#include <iostream>

using namespace std;

const int CMaxKiek = 5000;
const int CIlgis = 24;
const int CMIlgis = 20;

struct TS {
    char p[CIlgis];
    char m[CMIlgis];
    int metai, men;
};

void Rodyk(TS P[], int kiek) {
    for (int i = 0; i < kiek; i += 1) {
        cout << P[i].p << " " << P[i].m << " " << P[i].metai << " " << P[i].men << endl;
    }
}

int main() {
    TS P[CMaxKiek] = {{"Variklis    ", "BMW     ", 2020, 6}, {"Veidrodelis", "Opel", 2004, 3}};
    int kiekis = 2;
    Rodyk(P, kiekis);
    return 0;
}
