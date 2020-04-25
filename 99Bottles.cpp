#include <iostream>

int main() {

  
  for (int i=99; i > 0; i--){
	
	//sing the song
    std::cout << i << " bottles of beer on the wall.\nTake one down and pass it around.\n" << i-1 << " bottles of beer on the wall.\n\n";
	
  }
  return 0;
}
