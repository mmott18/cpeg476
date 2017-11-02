#include <cstring>
#include <stdexcept>
#include <iostream>

using namespace std;

void go(char *data) {
	char name[64];
	if (strlen(data) > 63) {
		throw overflow_error("an overflow error");
	} else {
		strcpy(name, data);
	}
}

int main(int argc, char **argv) {
	//try{
		go(argv[1]);
	//}
	//catch (overflow_error &e) {
		//cout << "Caught an overflow_error: " << e.what() << '\n';
	//}
}
