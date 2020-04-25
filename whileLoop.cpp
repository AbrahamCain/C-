#include <iostream>

int main() {
  
  int i = 0;
  
  //loop that runs its last run when i == 9
  while(i <= 9){
    
    //prints the number followed by its square and then a newline
    std::cout << i << "\t" << i*i <<"\n";   
    
    //raises the value of i
    i++;
    
  }
}
