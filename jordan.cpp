#include<iostream>
using namespace std;

string nama;
int Nadidas, Npuma, Ncompass, Nnike;
int Hadidas, Hpuma, Hcompass, Hnike;

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
    cout << "Total Harga = Rp."<< totalHarga() << endl;
}
int main(){
    input();
    display();
}