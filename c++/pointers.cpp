#include <iostream>
int main(){
    using namespace std;

    string food = "Pizza";
    string* ptr =&food;

    cout <<"Print the value of varaiable food: " << food << "\n";
    cout  << "print the adderess of variable food: " << &food << "\n";
    cout <<"print the pointer value: " << ptr << "\n";

    // dereference the pointer 

    cout << "dereference pointer: "<< *ptr << "\n";

    cout << "changing the value of the pionter to 'Burger' " << "\n";

    *ptr = "Burger";

    cout << "Value of the pointer *ptr after change: " << *ptr << "\n";
    cout << "Value fo the variable food after the change: " << food << "\n";

    return 0;
}