#include <iostream>
#include <vector>

int main(){
	int n = 0;
	std::vector<int> v;

	std::cin >> n;
	v.resize(n);

	for(int i = 0; i < n; ++i){
		std::cin >> v[i];
	}

	int sum = 0;
	int sum1 = 0;
	int result = v[0];

	for(int i = 0; i < n; ++i){
		sum = sum1 >= 0 ? sum1 + v[i] : v[i];

		if(sum > result){
			result = sum;
		}

		if(sum < 0){
			sum = 0;
		}

		sum1 = sum;
	}

	std::cout << result << std::endl;

	return 0;
}
