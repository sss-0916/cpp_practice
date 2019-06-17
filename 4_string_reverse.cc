#include <iostream>
#include <string>
#include <algorithm>
using std::cout;
using std::endl;

int main(){
	std::string s;	
	
	getline(std::cin, s);

	reverse(s.begin(), s.end());

	std::string::iterator start = s.begin();
	while(start != s.end()){
		auto end = start;
		while(end != s.end() && *end != ' '){
			++end;
		}

		reverse(start, end);

		if(end != s.end()){
			start = end + 1;
		}
		else{
			break;
		}
	}

	cout << "s: " << s << endl;

	return 0;
}
