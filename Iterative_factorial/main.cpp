#include <iostream>

int iterative_factorial(int n);

int main() {
	std::cout << iterative_factorial(9) << std::endl;
}

int iterative_factorial(int n) {
	if (n == 0) {
		return 1;
	}
	int sum{ n };
	for (int i = n - 1; i > 0; --i) {
		sum *= i;
	}
	return sum;
}