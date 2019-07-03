#include <iostream>
#include <string>

int main(){
	std::string s;

	while(std::cin >> s){
		int small = 0;
		int large = 0;
		int number = 0;
		int symbol = 0;
		int sum = 0;

		if(s.size() <= 4){
			sum += 5;
		}
		else if(s.size() >= 5 && s.size() <= 7){
			sum += 10;
		}
		else{
			sum += 25;
		}

		for(auto e : s){
			if(e >= 'a' && e <= 'z'){
				++small;
			}
			else if(e >= 'A' && e <= 'Z'){
				++large;
			}
			else if(e >= '0' && e <= '9'){
				++number;
			}
			else{
				++symbol;
			}
		}

		if(small == 0 && large == 0){
		}
		else if(small == 0 || large == 0){
			sum += 10;
		}
		else if(small > 0 && large > 0){
			sum += 20;
		}

		if(number == 1){
			sum += 10;
		}
		else if(number > 1){
			sum += 20;
		}

		if(symbol == 1){
			sum += 10;
		}
		else if(symbol > 1){
			sum += 25;
		}

		if(small > 0 && large > 0 && number > 0 && symbol > 0){
			sum += 5;
		}
		else if(small + large > 0 && number > 0 && symbol > 0){
			sum += 3;
		}
		else if(small + large > 0 && number > 0){
			sum += 2;
		}

		if(sum >= 90){
			std::cout << "VERY_SECURE" << std::endl;
		}
		else if(sum >= 80){
			std::cout << "SECURE" << std::endl;
		}
		else if(sum >= 70){
			std::cout << "VERY_SECURE" << std::endl;
		}
		else if(sum >= 60){
			std::cout << "STRONG" << std::endl;
		}
		else if(sum >= 50){
			std::cout << "AVERAGE" << std::endl;
		}
		else if(sum >= 25){
			std::cout << "WEAK" << std::endl;
		}
		else{
			std::cout << "VERY_WEAK" << std::endl;
		}
	}

	return 0;
}
