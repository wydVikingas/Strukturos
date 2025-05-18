#include <iostream>

using namespace std;

const int Ilg = 30;

struct Miestas {
    char pavadinimas[Ilg];
    int gyventojai;
    char valstybe[Ilg];
};

void rikiuoti(Miestas miestai[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (miestai[i].gyventojai < miestai[j].gyventojai) {
                Miestas temp = miestai[i];
                miestai[i] = miestai[j];
                miestai[j] = temp;
            }
}

int main() {
    int n;
    cout << "Miestų skaičius: ";
    cin >> n;
    Miestas miestai[100];

    for (int i = 0; i < n; i++) {
        cout << "Miestas: ";
        cin >> miestai[i].pavadinimas;
        cout << "Gyventojai: ";
        cin >> miestai[i].gyventojai;
        cout << "Valstybė: ";
        cin >> miestai[i].valstybe;
    }

    rikiuoti(miestai, n);
    // geras(); // funkcija kuri atrenka Lietuvos miestus ir parodo ekrane

    return 0;
}
