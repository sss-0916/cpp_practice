#include <iostream>
#include <vector>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;

int main(){
	int n = 0;
	std::vector<int> v;

	while(cin >> n){
		v.resize(n * 3);

		for(int i = 0; i < n * 3; ++i){
			cin >> v[i];
		}

		std::sort(v.begin(), v.end());

		long long sum = 0;
		for(int i = n; i < 3 * n; i += 2){
			sum += v[i];
		}

		cout << "sum: " << sum << endl;
	}

	return 0;
}
