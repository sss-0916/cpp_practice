#include <iostream>

int main(){
	unsigned int n;
	int cnt = 0;

	std::cin >> n;

	while(n){
		if(n & 1){
			++cnt;
		}

		n >>= 1;
	}

	std::cout << cnt << std::endl;

	return 0;
}
