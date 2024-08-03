#include <iostream>
using namespace std;

void banyakPecahan(long uang, long pecahan[]);

int main() {
    long uang, pecahan[9] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100};
    int lembar[9], i;

    cout << "Jumlah Uang Kembali : Rp ";
    cin >> uang;

    cout << "Pecahan uang kembali: " << endl;
    banyakPecahan(uang, pecahan);

    return 0;
}

void banyakPecahan(long uang, long pecahan[]) {
    int lembar[9] = {0};

    for (int i = 0; i < 9; ++i) {
        lembar[i] = uang / pecahan[i];
        uang %= pecahan[i];
    }

    for (int i = 0; i < 9; ++i) {
        if (lembar[i] > 0) {
            cout << "Rp " << pecahan[i] << " : " << lembar[i] << " lembar" << endl;
        }
    }
}
