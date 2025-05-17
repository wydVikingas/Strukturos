#include <iostream>

using namespace std;

const int CMaxKiek = 30;

struct TS {
    double a, b, x;
};

void Rodyk(TS P[], int kiek) {
    for (int i = 0; i < kiek; i += 1) {
        cout << "a = " << P[i].a << ", b = " << P[i].b << ", x = " << P[i].x << endl;
    }
}

int main() {
    TS P[CMaxKiek] = {{5, 3, 12}, {1, 1, 6}, {15, 1234, 22}, {155115, -124124, -199999}};
    int kiekis = 4;
    Rodyk(P, kiekis);
    return 0;
}
