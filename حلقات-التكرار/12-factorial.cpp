#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    long s = 1;
    
    cout << "enter a number";
    cin >> n;
    
    while (i <= n) {
        s = s * i;
        i++;
    }
    
    cout << "s=" << s;
    
    return 0;
}
