// Marcus Rowe
// CIS 1202
// May 1, 2022

#include<iostream>
#include<cmath>
using namespace std;

template<typename T>

T half(T val) {
	return val / 2;
}
int half(int val) {
	if (val % 2 == 0) {
		return val / 2;
	}
	else {
		return (val / 2) + 1;
	}
}

int main() {
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;



	return 0;
}