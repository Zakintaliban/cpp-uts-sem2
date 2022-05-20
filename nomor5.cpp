#include <iostream>

using namespace std;

int main() {
        int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = rows; i > 0; i=i-2) {
        {
            for(int j = i; j >= 1; --j)
        {
            if(j % 2 != 0)
            cout << j << " ";
        }
        cout << endl;
    }

    }

    return 0;
}