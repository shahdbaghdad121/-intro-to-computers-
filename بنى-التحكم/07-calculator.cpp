#include <iostream>
using namespace std;

int main() {
    float x, y;
    char symbol;
    
    cout << "Enter tow numbers: " << endl;
    cin >> x >> y;
    
    cout << "Enter a symbol: ";
    cin >> symbol;
    
    switch (symbol) {
        case '+': cout << "x+y= " << x + y; break;
        case '-': cout << "x-y= " << x - y; break;
        case '*': cout << "x*y= " << x * y; break;
        case '/': cout << "x/y= " << x / y; break;
        default: cout << "error";
    }
    
    return 0;
}
