#include <iostream>
using namespace std;

int main() {
    float avg;
    int x, y, z;
    
    cout << "Enter three numbers to find the average:" << endl;
    cin >> x >> y >> z;
    
    avg = (float)(x + y + z) / 3;
    
    cout << "average is: " << avg;
    return 0;
}
