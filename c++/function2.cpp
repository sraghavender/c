#include<iostream>
using namespace std;

int add(int i, int j) {
    return i+j;
}

int subtract(int i, int j) {
  return i-j;
}

int multi(int i, int j) {
  return i*j;
}

int division(int i, int j) {
    return i-j;
}

int (*operations()) (int i, int j) {
    int option =0;
    cout << "Enter 1 for adding" << "\n";
    cout << "Enter 2 for subtraction" << "\n";
    cout << "Enter 3 for multiplcation" << "\n";
    cout << "Enter 4 for division" << "\n";
    cin >> option;

    if (option == 1) 
    return add;
    else if (option ==2)
    return subtract;
    else if (option ==3)
    return multi;
    else if (option == 4)
    return division;
    else
    return NULL;



    return 0;
}

int main() {

   int (*calculate) (int, int ) = operations();

   cout << "Calculated value of two integers is: " << calculate(5,3) <<"\n";
    return 0;
}