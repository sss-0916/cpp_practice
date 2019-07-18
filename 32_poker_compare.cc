#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	string s;

	while(getline(cin, s)){
		// 王炸最大，直接输出
		if(s.find("joker JOKER") != string::npos){
			cout << "joker JOKER" << endl;
		}else{
			size_t pos = s.find('-');

			// 两手牌分开
			string card1 = s.substr(0, pos);
			string card2 = s.substr(pos + 1);

			// 获取空格次数，拍数为空格数+1
			int space1 = count(card1.begin(), card1.end(), ' ');
			int space2 = count(card2.begin(), card2.end(), ' ');

			string first1 = card1.substr(0, card1.find(' '));
			string first2 = card2.substr(0, card2.find(' '));

			string str = "345678910A2jokerJOKER";
			if(space1 == space2){
				// 只要牌数相同，则第一张大的即为大
				if(str.find(first1) > str.find(first2)){
					cout << card1 << endl;
				}else{
					cout << card2 << endl;
				}
			}else{
				// 牌数不相同，说明类型不同，只有炸弹可以和其他牌比较
				if(space1 == 3){
					cout << card1 << endl;
				}else if(space2 == 3){
					cout << card2 << endl;
				}else{
					cout << "ERROR" << endl;
				}
			}
		}
	}
}
