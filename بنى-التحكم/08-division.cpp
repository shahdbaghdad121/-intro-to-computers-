#include <iostream>
using namespace std;

int main() {
    float a, b, rat;
    
    cout << "Enter tow numbers: ";
    cin >> a >> b;
    
    if (b == 0)
        cout << "Divison by zero!";
    else {
        rat = (float)a / b;
        cout << "rat=" << rat;
    }
    
    return 0;
}
