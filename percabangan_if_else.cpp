#include <iostream>
using namespace std;

//percabangan if else
void pilihan (int x){
    if (x==1) {
        cout << "Anda Memesan Nasi Goreng";
    }
    else {
        cout << "Anda Memesan Nasi Kucing";
    }
}

int main(){
    int pilih;

    cout << "1. Nasi Goreng" << '\n';
    cout << "2. Nasi Kucing" << '\n';
    cout << "Masukan Pilihan Anda (1-2): "; cin >> pilih;

    pilihan (pilih);
}