#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s1, s2;
    while(cin >> s1 >> s2){
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        
        size_t len1 = s1.size();
        size_t len2 = s2.size();
        int bigger = 1;
        if(len1 < len2){
            bigger = 0;
        }
        string result;
        
        int flag = 0;
        for(size_t i = 0; i < min(len1, len2); ++i){
            int temp = (s1[i] - '0' + s2[i] - '0' + flag) % 10;
            flag = (s1[i] - '0' + s2[i] - '0' + flag) / 10;
            
            result.push_back(temp + '0');
        }
        
        for(size_t i = min(len1, len2); i < max(len1, len2); ++i){
            int temp = 0;
            if(bigger == 0){
                temp = (s2[i] - '0' + flag) % 10;
                flag = (s2[i] - '0' + flag) / 10;
            }
            else{
                temp = (s1[i] - '0' + flag) % 10;
                flag = (s1[i] - '0' + flag) / 10;
            }
            
            result.push_back(temp + '0');
        }
        
        if(flag == 1){
            result.push_back(flag + '0');
        }
        
        reverse(result.begin(), result.end());
        cout << result << endl;
    }
    
    return 0;
}