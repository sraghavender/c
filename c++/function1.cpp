#include<iostream>
using namespace std;

int add(int i,int j){
    return i+j;
}
int subtract(int i, int j) {
  return i-j;
}

int multi(int i, int j) {

return i*j;

}

int division(int i ,int j) {
    return i/j;
}
int main() {
    // funtion pointer to array
    int (*operations[]) (int,int) = {&add , &subtract, &multi, &division};

    cout << "Addition of numbers: " << (*operations[0])(3,4) << "\n";
    cout << "Subtraction of number: " << (*operations[1])(3,4) << "\n";
    cout << "Multiplication of number: " << (*operations[2])(3,4) << "\n";
    cout << "Division of number: " << (*operations[3])(4,3) << "\n";

        return 0;


}