#include<iostream>
using namespace std;

string nama;
int Nadidas, Npuma, Ncompass, Nnike;
int Hadidas = 100, Hpuma = 200, Hcompass = 250, Hnike = 300;

void input(){

    cout << "masukan jumlah adidas = ";
    cin >> Nadidas;
    cout << "masukan jumlah  puma = ";
    cin >> Npuma;
    cout << "masukan jumlah compass = ";
    cin >> Ncompass;
    cout << "masukan jumlah nike = ";
    cin >> Nnike;

} int totalHarga(){
    return (Nadidas * Hadidas) + (Npuma * Hpuma) + (Ncompass * Hcompass) + (Nnike * Hnike); 
}
void display(){
    cout << endl;
    cout << "==========================" << endl;
    cout << endl;
    cout << "jumlah puma = " << Npuma << endl;
    cout << "jumlah adidas = " << Nadidas << endl;
    cout << "jumlah compass = " << Ncompass << endl;
    cout << "jumlah nika = " << Nnike << endl;
    cout << endl;
    cout << "Total Harga = Rp."<< totalHarga() << endl;
}
int main(){
    input();
    display();
}