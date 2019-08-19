#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        // 每行多开两列，二维矩阵默认值为0
        vector<vector<int>> triangle(n, vector<int>(2 * n - 1 + 2, 0));
        // 前两行设为1
        for(int i = 0; i < 2; ++i){
            for(int j = n - i; j <= n + i; ++j){
                triangle[i][j] = 1;
            }
        }
        
        // 每一行的第一列和最后一列设为1
        for(int i = 2; i < n; ++i){
            triangle[i][n - i] = 1;
            triangle[i][n + i] = 1;
        }
        
        // 依次计算每一行
        for(int i = 2; i < n; ++i){
            for(int j = n - i + 1; j <= n + i - 1; ++j){
                triangle[i][j] = triangle[i - 1][j - 1] + 
                    triangle[i - 1][j] + triangle[i - 1][j + 1];
            }
        }
        
        int i;
        // 找到最后一行的第一个偶数的下标
        for(i = 1; i <= 2 * n - 1; ++i){
            if(triangle[n - 1][i] % 2 == 0){
                break;
            }
        }
        
        // 找到打印下标，否则打印-1
        if(i <= 2 * n - 1){
            cout << i << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    
    return 0;
}
