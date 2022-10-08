//============================================================================
// Name        : CodeWar3.cpp
// Author      : grec88
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int get_sum(int a, int b) {
	int temp = 0;
	if (a == b) {
		temp = b;
	} else {
		temp = min(a, b);
		for (int i = temp + 1; i <= max(a, b); ++i) {
			temp += i;
		}
	}
	return temp;
}

int main() {
	cout << get_sum(1, 2);
	return 0;
}
