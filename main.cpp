#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i;
    string nama;

    for (i = 1; i <= 7; i++)
    {
        std::cout << i << std::endl;
    }for(i = 0; i < 5; i++)
    {
       cout << "Masukan nama ke-" << i+1 << " : ";
       cin >> nama;
    }

    cout << endl;
    cout << "--------------" << endl;
    cout << "Kumpulan nama" << endl;
    for (i = 0; i < 5; i++)
   {
        std::cout << "Nama ke-" << i+1 << " : " << nama << std::endl;
    }

    return 0;
}