#include <iostream>
#include <algorithm>

bool isPrime(int num){
	int temp = sqrt(num);

	for(int i = 2; i <= temp; ++i){
		if(num % temp == 0){
			return false;
		}
	}

	return true;
}

int main(){
	int num;

	while(std::cin >> num){
		int mid = num / 2;

		while(mid){
			if(isPrime(mid) && isPrime(num - mid)){
				std::cout << mid << std::endl 
					<< num - mid << std::endl;
				break;
			}
		}
	}

	return 0;
}
