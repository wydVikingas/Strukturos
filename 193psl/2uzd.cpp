#include <iostream>
#include <fstream>

using namespace std;

const int Cmax = 24;

struct VejoDuomenys {
    int vejas[Cmax];
};

void nuskaitytiVejoDuomenis(VejoDuomenys &v) {
    ifstream in("vejas.txt");
    for (int i = 0; i < Cmax; i++) {
        in >> v.vejas[i];
    }
    in.close();
}

int main() {
    VejoDuomenys v;
    nuskaitytiVejoDuomenis(v);
    for (int i = 0; i < Cmax; i++) {
        cout << v.vejas[i] << " ";
    }
    return 0;
}
