#include <iostream>

int add(int num1, int num2){
	while(num2){
		int carry_bit = (num1 & num2) << 1;
		num1 = num1 ^ num2;
		num2 = carry_bit;
	}

	return num1;
}

int main(){
	int num1, num2;

	while(std::cin >> num1 >> num2){
		std::cout << add(num1, num2) << std::endl;
	}

	return 0;
}
