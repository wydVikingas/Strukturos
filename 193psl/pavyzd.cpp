#include <iostream>

using namespace std;

const int CMaxKiek = 24;

struct TS {
    float l, v;
};

void Rodyk(TS P[], int kiek) {
    for (int i = 0; i < kiek; i += 1) {
        cout << P[i].l << " laispniu, " << P[i].v << " m/s." << endl;
    }
}

int main() {
    TS P[CMaxKiek] = {{45, 12}, {12, 20}, {30, 1}};
    int kiek = 3;
    Rodyk(P, kiek);

    return 0;
}
