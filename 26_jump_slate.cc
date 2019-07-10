#include <iostream>
#include <vector>
#include <algorithm>

void divisorNum(int n, std::vector<int>& divNum){
	for(int i = 2; i <= sqrt(n); ++i){
		if(n % i == 0){
			divNum.push_back(i);

			if(n / i != i){
				divNum.push_back(n / i);
			}
		}
	}
}

int jumpSlate(int N, int M){
	std::vector<int> stepNum(M + 1, 0);
	stepNum[N] = 1;

	for(int i = N; i < M; ++i){
		std::vector<int> divNum;

		if(stepNum[i] == 0){
			continue;
		}

		divisorNum(i, divNum);

		for(int j = 0; j < (int)divNum.size(); ++j){
			if((divNum[j] + i) <= M && stepNum[divNum[j] + i] != 0){
				stepNum[divNum[j] + i] = std::min(stepNum[divNum[j] + i], stepNum[i] + 1);
			}
			else if(divNum[j] + i <= M){
				stepNum[divNum[j] + i] = stepNum[i] + 1;
			}
		}
	}

	if(stepNum[M] == 0){
		return -1;
	}
	else{
		return stepNum[M] - 1;
	}
}

int main(){
	int n, m;

	std::cin >> n >> m;

	std::cout << jumpSlate(n, m) << std::endl;

	return 0;
}
