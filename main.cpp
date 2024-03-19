#include<iostream>
using namespace std;

int main(){
    int i;
    string nama;
    
    for ( i = 0; i < 7 ; i++)
    {
        cout << 1 << endl;
    }

    for( i = 0 ; i < 5 ; i++ ) {
        cout <<"masukan nama = ";
        cin >> nama[i];
    }

    cout << endl;
    cout <<"-------------"<< endl;
    cout <<"kumpulan nama"<< endl;

    for (i = 0; i < 5; i++)
    {
        cout << "namanya adalah" << nama[i] << endl;
    }
    
    
}