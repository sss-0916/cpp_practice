#include <iostream>
#include <string>

int main(){
	std::string s;

	while(getline(std::cin, s)){
		int cnt = 0;
		int len = s.size();

		for(int i = 0; i < len; ++i){
			if(s[i] == ' '){
				++cnt;
			}

			if(s[i] == '"'){
				do{
					++i;
				} while(s[i] != '"');
			}

		}

		std::cout << cnt + 1 << std::endl;

		bool flag = false;
		for(int i = 0; i < len; ++i){
			if(s[i] == '"'){
				flag = !flag;
			}

			if(s[i] != '"' && s[i] != ' '){
				std::cout << s[i] << std::endl;
			}

			if(s[i] == ' ' && !flag){
				std::cout << std::endl;
			}

			if(s[i] == ' ' && flag){
				std::cout << s[i] << std::endl;
			}
		}

		std::cout << std::endl;
	}

	return 0;
}
