#include <iostream>
using namespace std;

int main(){
    int n = 0;
    while(cin >> n){
        int result = 0;
        int empty = n;
        
        while(empty >= 2){
            result += empty / 3;
            empty = empty % 3 + (empty / 3);
            
            if(empty == 2){
                ++result;
                break;
            }
        }
        
        cout << result << endl;
    }
    
    return 0;
}