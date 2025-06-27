#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> matrix[i][j];
        }
    }
    vector<vector<int>> rotated(n, vector<int>(n));
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            rotated[j][n-1-i] = matrix[i][j];
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout << rotated[i][j];
            if(j != n-1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}
