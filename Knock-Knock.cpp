#include <iostream>

using namespace std;

int main(){
	
	
	string word; //declare a string
	
	cout << "Knock! Knock!: ";
	getline(cin >> ws, word);		//ask for a response
	
	if(word == "Who's there?"){
		cout << "\nNobody, because we are staying at home ;)\n";	//if they get the classic response, have a quirky come back
		return 0;		//exit
	}
  
	else{
    cout << "\nNot what I was looking for...\n";		//else tell them that they didn't answer correctly
	  return 0;
  }
}
