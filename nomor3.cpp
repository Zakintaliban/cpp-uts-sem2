#include <iostream>

using namespace std;

int main()
{
    int data[12] = {10, 6, 2, 9, 15, 7, 20, 1, 5, -8, 3, 25};
    int cari;
    int flag=0;
    
    cout << "Masukkan data pencarian : ";
    cin >> cari;
    
    for(int i=0;i<12;i++) {
        if (data[i] == cari) 
            flag=1;    
    }
    
    if (flag==1)
        cout << "Data ada";
    else
        cout << "Data tidak ada";
  
    return 0;
}