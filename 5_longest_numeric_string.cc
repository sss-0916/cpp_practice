#include <iostream>
#include <string>
using std::cout;
using std::endl;

int main(){
	std::string s, cur, result;

	getline(std::cin, s);

	std::string::iterator it = s.begin();
	while(it != s.end()){
		if(*it >= '0' && *it <= '9'){
			cur += *it;
		}
		else{
			if(cur.size() > result.size()){
				result = cur;
			}
			else{
				cur.clear();
			}
		}

		++it;
	}

	cout << result << endl;

	return 0;
}
