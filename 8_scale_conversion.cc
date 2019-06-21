#include <iostream>
#include <string>
#include <algorithm>

int main(){
	std::string s, table = "0123456789ABCDEF";
	int M, N;
	bool flag = false;

	std::cin >> M >> N;

	if(M < 0){
		M = -M;
		flag = true;
	}

	while(M){
		s += table[M % N];
		M /= N;
	}

	if(flag){
		s += '-';
	}

	reverse(s.begin(), s.end());

	std::cout << s << std::endl;

	return 0;
}
