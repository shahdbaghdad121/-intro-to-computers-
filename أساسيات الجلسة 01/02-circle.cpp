#include <iostream>
using namespace std;

int main() {
    double radius;
    double area, perimeter;
    
    cout << "Enter radius: ";
    cin >> radius;
    
    area = 3.14 * radius * radius;
    perimeter = 2 * 3.14 * radius;
    
    cout << "Area is: " << area << endl;
    cout << "Perimeter is: " << perimeter << endl;
    
    return 0;
}
