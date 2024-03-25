#include <iostream>
using namespace std;

int bilSatu, bilDua;

void input(){
    cout << "Masukkan Bilangan Pertama = ";
    cin >> bilSatu;
    cout << "Masukkan Bilangan Kedua = ";
    cin >> bilDua;
}

float pemjumlahan(float a, float b){
    return a + b; 
}

float pembagian(float a, float b){
    return a / b; 
}

float perkalian(float a, float b){
    return a * b; 
}

float pengurangan(float a, float b){
    return a - b; 
}

int main(){
    int pilihan;

    do{
        cout << "MENU" << endl;
        cout << "1. penjumlahan " << endl;
        cout << "2. pembagian " << endl;
        cout << "3. perkalian " << endl;
        cout << "4. pengurangan " << endl;
        cout << "5. exit " << endl;
   }while (pilihan  != 5);
}