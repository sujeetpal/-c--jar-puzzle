#include <iostream>

using namespace std;

int main()
{
  int a = 4;
  int b = 3;
  
  do 
  {
    if(a == 4){
      a = 0;
      continue;
    }
    
    if(a == 0){
      a = b;
      b = 3;
      continue;
    }
    
    if(a < 4 && a > 0){
      int temp_a = a;
      a = (a+b) - (a+b - 4);
      b = b - (a - temp_a);
    }
  } while (b! = 2);
  
  cout << "Water in jar B (in litres) : " << b;
  return 0;
}
