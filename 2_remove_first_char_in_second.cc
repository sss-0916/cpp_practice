#include <iostream>
#include <string>
using std::cout;
using std::endl;

int main(){
	std::string str1, str2;

	getline(std::cin, str1);
	getline(std::cin, str2);

	int hash_table[256] = {0};
	for(size_t i = 0; i < str2.size(); ++i){
		++hash_table[(int)str2[i]];
	}

	std::string result;
	for(size_t i = 0; i < str1.size(); ++i){
		if(hash_table[(int)str1[i]] == 0){
			result += str1[i];
		}
	}

	cout << "result: " << result << endl;

	return 0;
}
