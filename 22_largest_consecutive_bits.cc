#include <iostream>
#include <algorithm>

int main(){
	int cnt, max_cnt;
	unsigned int n;

	while(std::cin >> n){
		cnt = 0;
		max_cnt = 0;

		while(n){
			if(n & 1){
				++cnt;
			}
			else{
				max_cnt = std::max(cnt, max_cnt);
				cnt = 0;
			}

			n >>= 1;
		}
	}

	return 0;
}
