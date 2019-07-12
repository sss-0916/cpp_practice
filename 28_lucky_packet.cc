#include <iostream>
#include <vector>
#include <algorithm>

int getLuckyPackets(const std::vector<int>& v, 
		int n, int pos, int sum, int multi){
	int cnt = 0;

	for(int i = pos; i < n; ++i){
		sum += v[i];
		multi *= v[i];
		if(sum > multi){
			cnt += 1 + getLuckyPackets(v, n, i + 1, sum, multi);
		}
		else if(v[i] == 1){
			cnt += getLuckyPackets(v, n, i + 1, sum, multi);
		}
		else{
			break;
		}

		sum -= v[i];
		multi /= v[i];

		while(i < n - 1 && v[i] == v[i + 1]){
			++i;
		}
	}

	return cnt;
}

int main(){
	int n;
	std::vector<int> v;

	std::cin >> n;

	v.resize(n);

	for(int i = 0; i < n; ++i){
		std::cin >> v[i];
	}

	std::sort(v.begin(), v.end());

	std::cout << getLuckyPackets(v, n, 0, 0, 1) << std::endl;

	return 0;
}
