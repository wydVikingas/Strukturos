#include <iostream>
#include <fstream>

using namespace std;

struct Detale {
    string pavadinimas;
    double kaina;
};

void nuskaitytiDetales(Detale d[], int &n) {
    ifstream in("detales.txt");
    n = 0;
    while (getline(in, d[n].pavadinimas)) {
        in >> d[n].kaina;
        in.ignore();
        n++;
    }
    in.close();
}

int main() {
    Detale d[10];
    int n;
    nuskaitytiDetales(d, n);
    for (int i = 0; i < n; i++) {
        cout << d[i].pavadinimas << " " << d[i].kaina << endl;
    }
    return 0;
}
