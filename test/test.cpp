#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
	cout << argc << " arguments" << endl;
	for(int i=0; i < argc; i++){
		if(argv[i] == "-n") {
			if(argv[i+1] == "-t"){
				if(argv[i+2] == "Mr") {
					cout << "Hello Mr. " << argv[i+3] << "." << endl;
				} else if(argv[i+2] == "Mrs"){
					cout << "Hello Mrs. " << argv[i+3] << "." << endl;
				}
			} else {
				cout << "Hello " << argv[i+1] << endl;
	        }
	return 0;
        }
}
