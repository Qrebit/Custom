#include <iostream>

using namespace std;

int Sum(int n, ...) {
	int sum = 0;
	int* num = &n;
	for (int i = 0; i < n ; i++) {
		sum += *num;
		num++;
	}
	return sum;
}

int Mul (int n, ...) {
	int mul = 1;
	int* num = &n;
	for (int i = 0; i < n; i++) {
		mul *= *num;
		num++;
	}
	return mul;
}

void main() {
	//Первое число количество аргументов
	cout << "Sum:" << Sum(4 ,100, 200, 300, 400) << endl;
	cout << "Multiple:" << Mul(4,5,8,15,23) << endl;
}