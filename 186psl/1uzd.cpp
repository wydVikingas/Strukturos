#include <iostream>

using namespace std;

const int CPIlg = 20;
const int CMaxKiek = 100;

struct TMars {
    char p[CPIlg]; // pavadinimas
    int v, m; // valandos ir minutes
};

void RodykMars(TMars P[], int kiek) {
    for (int i = 0; i < kiek; i += 1) {
        cout << P[i].p << " " << P[i].v << " valandos ir " << P[i].m << " minutes" << endl;
    }
}

int main() {
    TMars P[CMaxKiek] = {{"Vilnius-Kaunas   ", 4, 38}, {"Panevezys-Klapeda", 6, 12}};
    int kiek = 2;
    RodykMars(P, kiek);

    return 0;
}
