#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Please enter first number:";       cin >> a;
    cout << "Please enter second number:";      cin >> b;
    cout << endl; // just to get a line break    
    cout << "Operator in C++:" << endl;
    cout << "Here are some types C++ operators:" << endl;
    cout << endl; // just to get a line break    
    // Arithmetic Operators
    cout << "Arithmetic Operators:" << endl;
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl;
    cout << "The value of a % b is " << a % b << endl;
    cout << "The value of a++ is " << a++ << endl; // Before this the value of `a` is 10 so program printed 10 and than we do `++` which adds 1 to the value so now the value of a is 11.
    cout << "The value of a-- is " << a-- << endl; // So before the value of `a` was 11 so now it prints 11 subtracts 1 from the `a` and makes the value of `a` to 10
    cout << "The value of ++a is " << ++a << endl; // So before the value of `a` was 10 and now it first adds the 1 to the value of `a` so it becomes 11 and than it prints it
    cout << "The value of --a is " << --a << endl; // So before the value of `a` was 11 and now it first subtract 1 from the value of `a` so it becomes 10 and than it prints it 
    cout << endl; // just to get a line break    
    // ++ means adding 1
    // -- means subtracting 1
    // If you put `++` or `--` after the variable than it will first print and than it will add or subtract the 1 to its value
    // If you put `++` or `--` before the variable than it will first do add or subtract the value of variable and than print its value

    // Assignment Operators // They are used to assign a value to a variable
    int three = 3, nine = 9;
    char character = 'd';

    // Comparison Operators // If the output is 0 that means false and if the ouput is 1 that means true
    cout << "Comparison Operators:" << endl;
    cout << "The value of a == b is: " << (a==b) << endl; // `==` means equal to  
    cout << "The value of a != b is: " << (a!=b) << endl; // `!=` means not equal to
    cout << "The value of a => b is: " << (a>=b) << endl; // `>=` means greater than or equal to
    cout << "The value of a <= b is: " << (a<=b) << endl; // `<=` means less than or equal to
    cout << "The value of a > b is: " << (a>b) << endl; // `>` means greater than
    cout << "The value of a < b is: " << (a<b) << endl; // `<` means less than
    cout << endl; // just to get a line break

    // Logical Operators
    cout << "Logical Operators:" << endl;
    cout << "The value of this logical operator and operator ((a==b) && (a<b)) is: " << ((a==b) && (a<b)) << endl; // Both needs to be true if you want to print 1 or else it will print 0
    cout << "The value of this logical operator or operator ((a==b) || (a<b)) is: " << ((a==b) || (a<b)) << endl; // If either this or that must true than it will print 1 else if both are false it will print 0
    cout << "The value of this logical operator not operator (!(a==b)) is: " << (!(a==b)) << endl; // not will print vise-versa of the output, if the output is 0 than not operator will print 1 else if the output is 1 than not operator will print 0

    return 0;
}