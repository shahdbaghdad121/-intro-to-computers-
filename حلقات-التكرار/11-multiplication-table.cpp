#include <iostream>
using namespace std;

int main() {
    int i = 1, j;
    
    while (i <= 10) {
        cout << "Multiply tabel for(" << i ")";
        cout << "\n------------------\n";
        
        j = 1;
        while (j <= 10) {
            cout << j << " * " << i << " = " << i * j << "\n";
            j++;
        }
        
        cout << "\n";
        i++;
    }
    
    return 0;
}
