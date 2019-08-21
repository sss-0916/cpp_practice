#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<long long> fib(91, 1);
    fib[0] = 0;
    for(int i = 3; i < 91; ++i){
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    
    int month;
    while(cin >> month){
        cout << fib[month] << endl;
    }
    
    return 0;
}
