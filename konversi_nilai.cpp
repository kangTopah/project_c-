#include <iostream>
using namespace std;
int main() {

string nama;   
float nilai;

cout<<"Masukan Nama Anda    : ";
getline(cin,nama);
       
cout<<"Masukan Nilai Anda    : ";
    cin>>nilai;

cout<<"\n-------------------------------------------------"<<endl;
   
    if(nilai>=81 & nilai <=100){
        cout<<"Konversi Nilai Anda Adalah : A";
    }   
    else if(nilai>=66 & nilai <=80){
        cout<<"Konversi Nilai Anda Adalah : B";
    }
    else if(nilai>=55 & nilai <=65){
        cout<<"Konversi Nilai Anda Adalah : C";
    }
    else if(nilai>=30 & nilai <=54){
        cout<<"Konversi Nilai Anda Adalah : D";
    }
    else if(nilai>=0 & nilai <=29){
        cout<<"Konversi Nilai Anda Adalah : E";
    }
    return 0;
}
