#include<iostream>
using namespace std;
bool temp_c(int temperature) {
if (temperature <=0)
return true;
else
return false;
}

bool temp_f(int temperature){
    if(temperature <=32)
    return true;
    else
    return false;
}

void is_freezing(bool (*check)(int)) {  // funtion pointer as a parameter e.g bool (*check) (int) = &temp_t 
int temperature =0;
   cout << "Enter the temperature" << "\n";
   cin >> temperature;
   
if(check(temperature)) 
    cout << "Its freezing!" << "\n";
    else 
    
    cout << " its not freezing" << "\n";

}

int main() {

    is_freezing(&temp_c);
    is_freezing(&temp_f);
   
   return 0;
}