#include <iostream>
#include <vector>
using std::cout;
using std::endl;

int main(){
	int n = 0;
	std::vector<int> v;

	std::cin >> n;
	v.resize(n);

	for(int i = 0; i < n; ++i){
		std::cin >> v[i];
	}

	int cnt = 1;
	for(int i = 1; i < n - 1; ++i){
		if((v[i] > v[i - 1] && v[i] > v[i + 1]) ||
		   (v[i] < v[i - 1] && v[i] < v[i + 1])){
			++cnt;

			if(i != n - 3){
				++i;
			}
		}
	}

	cout << "cnt: " << cnt << endl;

	return 0;
}
