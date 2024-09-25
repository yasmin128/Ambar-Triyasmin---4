#include <iostream>
using namespace std;

int main ()
{
    // rumus fibonacci f_n = f_n1 + f_n2
    int n;
    int f_n;
    int f_n1;
    int f_n2;

    // meminta input
    cout << "Program deret fibonacci" << endl;
    cout << "Masukan nilai ke-n: ";
    cin >> n;

    // eksekusi
    f_n1 = 1;
    f_n2 = 0;
    f_n = f_n1 + f_n2;
    cout << f_n << " ";
    for (int i = 1; i < n; i++){
            f_n = f_n1 + f_n2;
            f_n2 = f_n1;
            f_n1 = f_n;
            cout << f_n << " ";
    }
    cout << "\t";
    return 0;
}
