#include <iostream>
#include <fstream>

using namespace std;

const int Cmax = 20;

struct Vaistazole {
    string pavadinimas;
    double kiekis;
};

void nuskaitytiVaistazoles(Vaistazole masyvas[], int &n) {
    ifstream in("vaistazoles.txt");
    n = 0;
    while (getline(in, masyvas[n].pavadinimas)) {
        in >> masyvas[n].kiekis;
        in.ignore();
        n++;
    }
    in.close();
}


int main() {
    Vaistazole v[Cmax];
    int n;
    nuskaitytiVaistazoles(v, n);
    for (int i = 0; i < n; i++) {
        cout << v[i].pavadinimas << " " << v[i].kiekis << endl;
    }
    return 0;
}
