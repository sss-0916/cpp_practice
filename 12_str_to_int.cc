#include <iostream>
#include <string>

int StrToInt(std::string s){
	int symbol = 1;
	int result = 0;

	if(s[0] == '-'){
		symbol = -1;
		s[0] = '0';
	}

	if(s[0] == '+'){
		s[0] = '0';
	}

	for(size_t i = 0; i < s.size(); ++i){
		if(s[i] >= '0' && s[i] <= '9'){
			result = result * 10 + s[i] - '0';
		}
		else{
			result = 0;
			break;
		}
	}

	return result * symbol;
}

int main(){
	std::string s;

	std::cin >> s;

	int result = StrToInt(s);

	std::cout << result << std::endl;

	return 0;
}
