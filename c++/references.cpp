#include <iostream>
int main(){
    using namespace std;

    string food ="pizza";
    string &meal =food;

    cout << "print variable:" << food <<"\n";
    cout << "print reference variable:" << meal << "\n";

    meal = "fruit";

     cout << "print variable:" << food <<"\n";
    cout << "print reference variable:" << meal << "\n";

    cout << "Adresss of variable food is :" << &food;
    cout << "Adresss of variable meal is :" << &meal;
    return 0;

}