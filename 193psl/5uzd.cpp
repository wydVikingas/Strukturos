#include <iostream>
#include <fstream>

using namespace std;

struct Daugianaris {
    double a, b, c, d;
};

void nuskaitytiDaugianarius(Daugianaris m[], int &n) {
    ifstream in("daugianariai.txt");
    n = 0;
    while (in >> m[n].a >> m[n].b >> m[n].c >> m[n].d) {
        n++;
    }
    in.close();
}

int main() {
    Daugianaris d[12];
    int n;
    nuskaitytiDaugianarius(d, n);
    for (int i = 0; i < n; i++) {
        cout << d[i].a << "x^3 + " << d[i].b << "x^2 + " << d[i].c << "x + " << d[i].d << endl;
    }
    return 0;
}
