#include <string>
#include <stdexcept>
#include <iostream>

using namespace std;

int main(){
	try {
		string().replace(100, 1, 1, 'c');
	}
	catch (out_of_range &e){
		cout << "Caught an out_of_range exception: "
			<< e.what () << '\n';
	}
	catch (exception &e) {
		cout << "Caught an exception of an unexpected type: "
			<< e.what () << '\n';
	}
	try {
		throw runtime_error("a runtime error");
	}
	catch (runtime_error &e){
		cout << "Caught a runtime_error exception: "
			<< e.what () << '\n';
	}
	catch (exception &e) {
		cout << "Caught an exception of an unexpected type: "
			<< e.what () << '\n';
	}
	catch (...) {
		cout << "Caught an unknown exception\n";
	}
	return 0;
}
