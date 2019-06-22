#include <iostream>
#include <string>

bool isPalindrome(const std::string& s){
	if(s.empty()){
		return true;
	}

	size_t left = 0;
	size_t right = s.size() - 1;

	while(left < right){
		if(s[left] != s[right]){
			return false;
		}
		++left;
		--right;
	}

	return true;
}

int main(){
	std::string str1, str2;
	int cnt = 0;

	getline(std::cin, str1);
	getline(std::cin, str2);

	for(size_t i = 0; i <= str1.size(); ++i){
		std::string temp = str1;
		if(isPalindrome(temp.insert(i, str2))){
			++cnt;
		}
	}

	std::cout << cnt << std::endl;

	return 0;
}
