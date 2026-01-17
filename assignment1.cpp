#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // // Q1
    cout<<"hello world";
    // // Q2
    int a;
    float b;
    char c;
    cout << "Enter integer, decimal and character: ";
    cin >> a >> b >> c;
    cout << "Integer: " << a << ", Decimal: " << b << ", Character: " << c << endl;

    // // Q3
    float x, y;
    cout << "\nEnter two numbers: ";
    cin >> x >> y;
    cout << "Add: " << x + y << endl;
    cout << "Subtract: " << x - y << endl;
    cout << "Multiply: " << x * y << endl;
    cout << "Divide: " << x / y << endl;

     // // Q4
    float cel;
    cout << "\nEnter temperature in Celsius: ";
    cin >> cel;
    cout << "Fahrenheit: " << (cel * 9 / 5) + 32 << endl;

    // // Q5
    cout << "\nHello\nWorld" << endl;
    cout << "Hello\tWorld" << endl;
    cout << "ABC\bD" << endl;
    cout << setw(10) << "C++" << endl;

   // // Q6
    int n;
    cout << "\nEnter a number: ";
    cin >> n;

    n += 5;
    cout << "After += 5 : " << n << endl;

    n -= 3;
    cout << "After -= 3 : " << n << endl;

    // // Q7
    int p, q;
    cout << "\nEnter two numbers to swap: ";
    cin >> p >> q;
    p = p ^ q;
    q = p ^ q;
    p = p ^ q;
    cout << "After swap: " << p << " " << q << endl;

    // Q8
    int days;
    cout << "\nEnter number of days late: ";
    cin >> days;

    if (days <= 5)
        cout << "Fine: 50 paise" << endl;
    else if (days <= 10)
        cout << "Fine: 1 rupee" << endl;
    else if (days <= 30)
        cout << "Fine: 5 rupees" << endl;
    else
        cout << "Membership cancelled" << endl;

    // // Q9
    int num1, num2, choice;
    cout << "\nEnter two numbers: ";
    cin >> num1 >> num2;
    cout << "1.Add 2.Subtract 3.Multiply 4.Divide: ";
    cin >> choice;

    switch (choice) {
        case 1: cout << "Result: " << num1 + num2; break;
        case 2: cout << "Result: " << num1 - num2; break;
        case 3: cout << "Result: " << num1 * num2; break;
        case 4: cout << "Result: " << num1 / num2; break;
        default: cout << "Invalid choice";
    }
    cout << endl;

     // // Q10
    int num;
    cout << "\nEnter a number: ";
    cin >> num;
    if (num % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;

   
    cout << ((num % 2 == 0) ? "Even" : "Odd") << endl;

    return 0;
}
