#include <iostream>
#include <fstream>

using namespace std;

struct Knyga {
    string pavadinimas;
    string autorius;
    double kaina;
    int kiekis;
};

void nuskaitytiKnygas(Knyga k[], int &n) {
    ifstream in("knygos.txt");
    n = 0;
    while (getline(in, k[n].pavadinimas)) {
        getline(in, k[n].autorius);
        in >> k[n].kaina >> k[n].kiekis;
        in.ignore();
        n++;
    }
    in.close();
}

int main() {
    Knyga k[15];
    int n;
    nuskaitytiKnygas(k, n);
    for (int i = 0; i < n; i++) {
        cout << k[i].pavadinimas << ", " << k[i].autorius << ", " << k[i].kaina << ", " << k[i].kiekis << endl;
    }
    return 0;
}
