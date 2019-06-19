#include <iostream>

int main(){
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;

	int A = (a + c) / 2;
	int C = (d - b) / 2;
	int B1 = (b + d) / 2;
	int B2 = (c - a) / 2;

	if(B1 != B2){
		std::cout << "No" << std::endl;
	}
	else{
		std::cout << A << " " << B1 << " " << C << std::endl;
	}

	return 0;
}
