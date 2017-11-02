#include <iostream>
#include <cstdlib>
#include <bitset>

using namespace std;

int main() {
	srand(1983);
	char x[40] ="Are you passing in a second argument? i";
	int i = 0;
	int y[10];
	for(; i < 10; i++){
		y[i] = rand();
	}	
    cout << hex << *((int*) x) << endl;
	for(i=0;i<10;i++){
		cout << hex << (*((int*)x) ^ y[i]) << endl;
	}
}
