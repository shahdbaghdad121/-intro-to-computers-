#include <iostream>
using namespace std;

int main() {
    int x, y, temp;
    
    cout << "enter 2 numbers: ";
    cin >> x >> y;
    
    cout << "Before swapping:" << endl;
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;
    
    temp = x;
    x = y;
    y = temp;
    
    cout << "After swapping:" << endl;
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;
    
    return 0;
}
