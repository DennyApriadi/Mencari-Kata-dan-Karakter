#include <iostream>
using namespace std;

    string kalimat;
    int kata,karakter,posisi;

void jumlKata () {
    while (true) {
    posisi = kalimat.find(" ",posisi + 1);
    kata++;
        if (posisi < 0) {
            break;
        }
    }
}

int main() {
    cout<<"\t\t+++Program Menghitung Karakter dan Kata Pada Kalimat+++";
    cout << "\n\nMasukan Kalimat Anda\t\t: "; getline(cin,kalimat);

    jumlKata();
    cout << "\nJumlah Katanya Adalah\t\t: "<<  kata << " Suku Kata" << endl;

    karakter = kalimat.length() - kata + 1;
    cout << "Jumlah Karakternya Adalah\t: " << karakter << " Karakter" << endl;

}