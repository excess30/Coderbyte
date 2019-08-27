#include <iostream>
#include <string>
using namespace std;

string TimeConvert(int num) { 

int hrs= num/60;
int min= num%60;
string result= to_string(hrs) + ":" + to_string(min);
    
  return result; 
            
}

int main() { 
  
  // keep this function call here
  cout << TimeConvert(gets(stdin));
  return 0;
    
}
