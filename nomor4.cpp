#include <iostream>
   
using namespace std;

int main()  
{  
    int arr[] = {20, 15, 75, 25, 5, 4, 70};   
      
    int length = sizeof(arr)/sizeof(arr[0]);  
      
    cout << "Elements of given array present on odd position: \n";  
    for (int i = 0; i < length; i = i+2) {   
        cout << endl << arr[i];   
    }   
    return 0;  
}  
