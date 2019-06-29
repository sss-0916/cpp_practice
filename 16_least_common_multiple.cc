#include <iostream>

int gcd1(int num1, int num2){
	int remainder;
	while((remainder = num1 % num2)){
		num1 = num2;
		num2 = remainder;
	}

	return num2;
}

int gcd2(int num1, int num2){
	int result;
	for(result = std::min(num1, num2); result >= 1; --result){
		if(num1 % result == 0 && num2 % result == 0){
			break;
		}
	}

	return result;
}

int main(){
	int num1, num2;

	while(std::cin >> num1 >> num2){
		std::cout << num1 * num2 / gcd1(num1, num2) << std::endl;
		std::cout << num1 * num2 / gcd2(num1, num2) << std::endl;
	}

	return 0;
}
