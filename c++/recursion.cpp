#include <iostream>
int sum(int k) {
if (k>0)
{

  return k + sum(k-1); 
  
} else
return 0;
}
int main() {
    using namespace std;
    int result = sum(10);
    cout << result;
    return 0;
}