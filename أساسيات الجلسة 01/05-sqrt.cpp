#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a, v;
    
    cout << "Enter a number: ";
    cin >> a;
    
    if (a > 0) {
        v = sqrt(a);
        cout << "the sqrt is : " << v;
    }
    else {
        cout << "impossible";
    }
    
    return 0;
}
