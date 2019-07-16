#include <iostream>
#include <math.h>

int cntPerfectNum(int n){
	int cnt = 0;

	for(int i = 2; i <= n; ++i){
		int sum = 1;

		for(int j = 2; j < (int)sqrt(i); ++j){
			if(i % j == 0){
				if(i / j == j){
					sum += j;
				}
				else{
					sum += j + i / j;
				}
			}
		}

		if(sum == i){
			++cnt;
		}
	}

	return cnt;
}

int main(){
	int n = 0;

	while(std::cin >> n){
		std::cout << cntPerfectNum(n) << std::endl;
	}

	return 0;
}
