#include <iostream>

int main(){
	int n_1 = 1;
	int n_2 = 0;
	int n_n = 0;
	int left, right, N;

	std::cin >> N;

	while(1){
		n_n = n_1 + n_2;
		n_2 = n_1;
		n_1 = n_n;

		if(n_n < N){
			left = N - n_n;
		}
		else{
			right = n_n - N;
			break;
		}
	}

	std::cout << std::min(left, right) << std::endl;

	return 0;
}
