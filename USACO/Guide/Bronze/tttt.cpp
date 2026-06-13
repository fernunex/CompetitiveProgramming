// https://usaco.org/index.php?page=viewproblem2&cpid=831

#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("tttt.in", "r", stdin);
    freopen("tttt.out", "w", stdout);

    vector<string> v(3), res;

    for (int i = 0; i < 3; i++) cin >> v[i];
    
    int res1=0, res2=0;

    for(int i = 0; i < 3; i++){
        string s = "";
        for(int j = 0; j < 3; j++){
            s += v[i][j];
        }
        res.push_back(s);
    }

    for(int i = 0; i < 3; i++){
        string s = "";
        for(int j = 0; j < 3; j++){
            s += v[j][i];
        }
        res.push_back(s);
    }

    string s = "";
    for(int j = 0; j < 3; j++){
    s += v[j][j];}
    res.push_back(s);

    s = "";
    s += v[0][2];
    s += v[1][1];
    s += v[2][0];
    res.push_back(s);

    for(int i = 0; i < res.size(); i++){
        sort(res[i].begin(), res[i].end());
        res[i].erase(unique(res[i].begin(), res[i].end()), res[i].end());
    }
    sort(res.begin(), res.end());
    res.erase(unique(res.begin(), res.end()), res.end());

    for(int i = 0; i < res.size(); i++){
        if (res[i].size() == 1) res1++;
        else if(res[i].size() == 2) res2++;
    }

    cout << res1 << '\n' << res2;

    return 0;
}





// // https://usaco.org/index.php?page=viewproblem2&cpid=831

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     freopen("tttt.in", "r", stdin);
//     freopen("tttt.out", "w", stdout);

//     vector<string> v(3);
//     vector<char> tea(26);

//     for (int i = 0; i < 3; i++) cin >> v[i];
    
//     int res1=0, res2=0;
//     vector<int> c(26,0);
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             c[v[i][j]-'A']++;
//         }
//         for(int p = 0; p < 26; p++){
//             if(c[p] == 2) res2++;
//             else if(c[p] == 3) res1++;
//             c[p]=0;
//         }
//     }

//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             c[v[j][i]-'A']++;
//         }
//         for(int p = 0; p < 26; p++){
//             if(c[p] == 2) res2++;
//             else if(c[p] == 3) res1++;
//             c[p]=0;
//         }
//     }

//     for(int j = 0; j < 3; j++){
//             c[v[j][j]-'A']++;
//     }
//     for(int p = 0; p < 26; p++){
//             if(c[p] == 2) res2++;
//             else if(c[p] == 3) res1++;
//             c[p]=0;
//     }

//     c[v[0][2]-'A']++;
//     c[v[1][1]-'A']++;
//     c[v[2][0]-'A']++;
//     for(int p = 0; p < 26; p++){
//         if(c[p] == 2) res2++;
//         else if(c[p] == 3) res1++;
//         c[p]=0;
//     }

//     cout << res1 << '\n' << res2;

//     return 0;
// }