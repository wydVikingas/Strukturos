#include <iostream>
#include <fstream>

using namespace std;

const int CPIlg = 30;
const int CMaxKiek = 100;

struct TMars {
    char p[CPIlg]; // pavadinimas
    int v, m; // valandos ir minutes
};

void Skaityk(TMars P[CMaxKiek], int &n) {
    fstream fin("duom.txt");
    fin >> n;
    fin.ignore();
    for (int i = 0; i < n; i += 1) {
        fin.get(P[i].p, CPIlg); 
        fin >> P[i].v >> P[i].m;
        fin.ignore();
    }
}

int main() {
    TMars P[CMaxKiek];
    int n;
    Skaityk(P, n);
    return 0;
}
