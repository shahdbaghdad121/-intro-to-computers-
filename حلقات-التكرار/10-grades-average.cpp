#include <iostream>
using namespace std;

int main() {
    int counter = 1;
    float grade, total = 0, average;
    
    do {
        cout << "enter grade ";
        cin >> grade;
        total = total + grade;
        counter++;
    } while (counter <= 6);
    
    average = total / 6;
    cout << "average= " << average;
    
    return 0;
}
