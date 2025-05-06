#include <iostream>
#include <stack>
using namespace std;

void solve(){
    int n;
    string note;
    cin >> n;
    stack<int> beatMap;
    for (int j = 0; j < n; j++){
        cin >> note;
        for (int k = 0; k < 4; k++){
            if (note[k] == '#'){
                beatMap.push(k+1);
            }
        }
    }

    for (int j = 0; j < n; j++){
        cout << beatMap.top() << ' ';
        beatMap.pop();
    }
    cout << endl;
}


int main(){
    int n_tests;
    cin >> n_tests;
    for (int i = 0; i < n_tests; i++){
        solve();
    }
}