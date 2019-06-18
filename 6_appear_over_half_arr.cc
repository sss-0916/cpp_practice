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

	int cnt = 1;
	int temp = v[0];
	for(size_t i = 1; i < v.size(); ++i){
		if(v[i] == temp){
			++cnt;
		}
		else{
			--cnt;
		}

		if(cnt == 0){
			temp = v[i];
			cnt = 1;
		}
	}

	std::cout << temp << std::endl;

	return 0;
}
