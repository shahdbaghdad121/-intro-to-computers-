#include <iostream>
using namespace std;

int main() {
    int i = 20, sum = 0;
    
    while (i <= 300) {
        if (i % 2 == 1)
            sum += i;
        i++;
    }
    
    cout << "the sum is:" << sum << endl;
    
    return 0;
}
