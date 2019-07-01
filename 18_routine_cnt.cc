#include <iostream>

int RoutineCnt(int n, int m){
	if(n == 1 || m == 1){
		return n + m;
	}
	else{
		return RoutineCnt(n, m - 1) + RoutineCnt(n - 1, m);
	}
}

int main(){
	int n, m;

	while(std::cin >> n >> m){
		std::cout << RoutineCnt(n, m) <<std::endl;
	}

	return 0;
}
