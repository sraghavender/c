#include <iostream>
int main() {
    using namespace std;
    //declaration of structure
    struct
    {
        string firstName,lastName;
        int age;
    } address;

//   Assigning values to members of the stucture

    address.firstName ="Raghavender";
    address.lastName ="Suravaram";
    address.age=48;

    //print members of the structure

    cout << address.firstName  << "\n";
    cout << address.lastName   <<"\n";
    cout <<address.age << "\n";
return 0;    
}