#include <iostream>

void max_three(int& num1, int & num2, int& num3) {
	

	int max = num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3) ? num2 : num3;
	num1 = num2 = num3 = max;

}

template <typename T>
void func_negg(T& arr, T& length) {
	for (T i = 0; i < length; i++) {
		if (i < 0)
			return i;
	}

	return arr[0];
}



// Задача 1
int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;


/*	int a = 3, b = 5, c = 4;
	max_three(a, b, c);
	std::cout << a << " " << b << " " << c << std::endl;*/


	//Задача 2
	const int size = 5;
	int arr[size]{ 5, 6, 8, -4, 3 };
	func_negg(arr[size], size);

	


	return 0;

}