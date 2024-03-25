#include <iostream>
using namespace std;

int bilSatu, bilDua;

void input(){
    cout << "Masukkan Bilangan Pertama = ";
    cin >> bilSatu;
    cout << "Masukkan Bilangan Kedua = ";
    cin >> bilDua;
}

float penjumlahan(float a, float b){
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
        cout << "Masukkan Pilihan 1/2/3/4/5 = ";
        cin >> pilihan;

        switch(pilihan){
            case 1:
            input();
            cout << "Hasil Penjumlahan = " << penjumlahan(bilSatu, bilDua) << endl;
            system("pause");
            break;

            case 2:
            input();
            cout << "Hasil Pembagian = " << pembagian(bilSatu, bilDua) << endl;
             system("pause");
            break;

            case 3:
            input();
            cout << "Hasil Perkalian = " << perkalian(bilSatu, bilDua) << endl;
             system("pause");
            break;

            case 4:
            input();
            cout << "Hasil Pengurangan = " << pengurangan(bilSatu, bilDua) << endl;
             system("pause");
            break;

            case 5:
            break;

            default:
            cout << "Pilihan tidak ada" << endl;
            break;

        }
        system("CLS");
   }while (pilihan  != 5);
}