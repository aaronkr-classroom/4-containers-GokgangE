// chap4_ex2.cpp
#include <iostream>
#include <iomanip> // setw()

using std::cout;		using std::endl;		using std::setw;

int main() {
	for (int i = 1; i <= 100; i++) {
		cout << setw(3) << i << setw(6) << i * i << endl;
	}
	return 0;
}