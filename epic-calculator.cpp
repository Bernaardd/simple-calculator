#include <iostream>
using namespace std;
int main() {
    double num1, num2;
    int option;

    cout << "Write the first number here: ";
    cin >> num1;
    cout << "Write the second number here: ";
    cin >> num2;
//We put the option below.
cout << "Pease select one option: " << endl;
cout << "1. For Sum " << endl;
cout << "2. For subtraction " << endl;
cin >> option;
 
if (option == 1){
    cout << "The sum of those two numbers is: " << num1 + num2 << endl;
} else if (option == 2){
    cout << "The subtraction of those two numbers is: " << num1 - num2 << endl;
}else {
    cout << "Invalid option, Please select a valid option." << endl;
}

return 0;
}

