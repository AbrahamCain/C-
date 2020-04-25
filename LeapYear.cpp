#include <iostream>

using namespace std;

int main() {
  
  //initialize our variables
  int year;
  bool isyear;
  bool isleap;
  
  //ask for a year
  cout << "Please input a 4 digit year: ";
  cin >> year;
  
  //verify it is a 4 digit year
  if(year > 999 && year < 10000){
    isyear = true;
    cout << "This is a year.\n";
  }
  else{
    cout << "Not a four digit year.\n";
    isyear = false;
    return 0;
  }
  
  //See if it is a leap year
  if(year%4 == 0){                          //is it evenly divisible by 4
    if(year%100 == 0 && year%400 !=0){      //is it evenly divisible by 100, but not by 400
      isleap = false;
      cout << "This isn't a leap year though\n";
    }
    else if(year%400 ==0){                  //is it evenly divisible by 100 and 400
      isleap = true;
      cout << "This is also a leap year!\n";
    }
    else{
      isleap = true;                        //is it evenly divisible by 4, but not 400 or 100
      cout << "This is also a leap year!\n";
    }
  }
  else{                                     //it isn't divisible by 4
    isleap = false;
    cout << "This isn't a leap year though\n"; 
  }
  
}
