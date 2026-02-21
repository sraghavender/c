#include<iostream>
using namespace std;

void function() {
    cout << "This program demos function pointers, function parameter is :" <<"\n";
}

int main() {

    void (*operation)();
    operation =&function;
    operation();
    

return 0;
}