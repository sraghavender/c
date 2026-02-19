#include <iostream>
int main()
{
using namespace std;

for (int i = 0; i < 10; i++) {
  if (i == 4) {
    cout << "contition reached here.... continuing the loop."; cout << "\n";
    continue;
  }
  cout << i << "\n";
}
}