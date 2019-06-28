#include <iostream>
#include <string>
#include <vector>

int main(){
	int n;
	std::vector<std::string> v;

	std::cin >> n;
	v.resize(n);

	for(auto& str : v){
		std::cin >> str;
	}

	bool len_sort = true;
	for(int i = 1; i < n; ++i){
		if(v[i - 1].size() > v[i].size()){
			len_sort = false;
			break;
		}
	}

	bool lexi_sort = true;
	for(int i = 1; i < n; ++i){
		if(v[i - 1] > v[i]){
			lexi_sort = false;
			break;
		}
	}

	if(len_sort && lexi_sort){
		std::cout << "both" << std::endl;
	}
	else if(len_sort){
		std::cout << "lengths" << std::endl;
	}
	else if(lexi_sort){
		std::cout << "lexicographically" << std::endl;
	}
	else{
		std::cout << "none" << std::endl;
	}

	return 0;
}
