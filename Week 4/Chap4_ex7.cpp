//chap4_ex7.cpp

#include <iostream>
#include <string.h>
#include <vector>

using std::vector;		using std::string;
using std::cout;		using std::cin;		using std::endl;

int main() {
	vector<double> nums;

	cout << "Enter numbers. then EOF: " << endl;

	// 입력 받고
	double num;
	while (cin >> num) {
		nums.push_back(num);
	}


	//  계산하기
	double average;
	double sum = 0;
	for (int i = 0; i < nums.size(); i++) {
		sum += nums[i];
	}

	average = sum / nums.size();

	cout.precision(2);
	cout << "Average: " << average << endl;
	return 0;
}