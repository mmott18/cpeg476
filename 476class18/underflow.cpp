#include <string>
#include <stdexcept>
#include <iostream>   

using namespace std;

int main ()
{
	unsigned int reduce_by = 0;
	unsigned int starts_at = 12345;
	cout << "Reduce " << starts_at << " by:" << endl;
	cin >> reduce_by;
	if (reduce_by > 12345) {
		throw underflow_error("an underflow error");
	}
	else {
		starts_at = starts_at - reduce_by;
		cout << "Now: " << starts_at << endl;
	}
	return 0;
}
