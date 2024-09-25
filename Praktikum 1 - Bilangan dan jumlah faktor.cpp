#include <iostream>
#include <cmath>
using namespace std;

bool Prima(int n){
    if (n <= 1) return false;
    for (int i = 2; i*i <= n; i++){
            if (n % i == 0) return false;
    }
    return true;
}

int main (){
    int batas;
    int jumlahGanjil = 0, jumlahGenap = 0, jumlahPrima = 0;

    cout << "Masukan batas bilangan: ";
    cin >> batas;

    cout << "Bilangan Ganjil: ";
    for (int i = 1; i <= batas; i++){
            if (i % 2 != 0){
                cout << i << " ";
                jumlahGanjil += i;
            }
    }
    cout << endl;

    cout << "Bilangan Genap: ";
    for (int i = 1; i <= batas; i++){
            if (i % 2 == 0){
                cout << i << " ";
                jumlahGenap += i;
            }
    }
    cout << endl;

    cout << "Bilangan Prima: ";
    for (int i = 1; i <= batas; i++){
            if (Prima(i)) {
                cout << i << " ";
                jumlahPrima += i;
            }
    }
    cout << endl;
    cout << endl;

    cout << "Jumlah bilangan ganjil adalah: " << jumlahGanjil << endl;
    cout << "Jumlah bilangan genap adalah: " << jumlahGenap << endl;
    cout << "Jumlah bilangan prima adalah: " << jumlahPrima << endl;
    cout << endl;

    cout << "Faktor dari setiap bilangan ganjil, genap, dan prima: " <<endl;
    for (int i = 1; i <= batas; i++) {
        cout << "Faktor dari " << i << " adalah: ";
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                cout << j << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
