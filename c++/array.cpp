#include<iostream>
int main(){
    using namespace std;
    // create array of stings...

    string cars[4] = {"BMW","Volvo","Ford","Tesla"};

    for(int i =0; i<4; i++)
    {
    cout << cars[i] << "\n";
    }
    //The length of the array

    // create array of integers

    int myNumbers[4] = {10,20,30,40};

    for(int j =0; j<4;j++)
    {
    cout << myNumbers[j] << "\n";
     }
    cout << "The size of myNumbers array is :" << sizeof(myNumbers)/sizeof(int) << "\n";
    cout << "The size of the cars array is :" << sizeof(cars)/sizeof(string) << "\n";

    return 0;


 }