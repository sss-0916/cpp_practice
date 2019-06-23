#include <iostream>
#include <vector>

int main(){
	int w, h;
	int result = 0;
	std::vector< std::vector<int> > v;

	std::cin >> w >> h;

	v.resize(w);

	for(auto& e : v){
		e.resize(h, 1);
	}

	for(int i = 0; i < w; ++i){
		for(int j = 0; j < h; ++j){
			if(v[i][j] == 1){
				++result;

				if((i + 2) < w){
					v[i + 2][j] = 0;
				}

				if((j + 2) < h){
					v[i][j + 2] = 0;
				}
			}
		}
	}

	std::cout << result << std::endl;

	return 0;
}
