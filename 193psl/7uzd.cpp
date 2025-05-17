#include <iostream>
#include <fstream>

using namespace std;

struct Mokinys {
    string vardas;
    string pavarde;
    string instrumentas;
    int klase;
};

void nuskaitytiMokinius(Mokinys m[], int &n) {
    ifstream in("mokykla.txt");
    n = 0;
    while (getline(in, m[n].vardas)) {
        getline(in, m[n].pavarde);
        getline(in, m[n].instrumentas);
        in >> m[n].klase;
        in.ignore();
        n++;
    }
    in.close();
}

int main() {
    Mokinys m[15];
    int n;
    nuskaitytiMokinius(m, n);
    for (int i = 0; i < n; i++) {
        cout << m[i].vardas << " " << m[i].pavarde << ", " << m[i].instrumentas << ", " << m[i].klase << " kl." << endl;
    }
    return 0;
}
