#include <iostream>
using namespace std;

int main() {
   
    float num1, num2, average;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
   
    average = (num1 + num2) / 2;

    cout << "The average is: " << average << endl;

    return 0;
}