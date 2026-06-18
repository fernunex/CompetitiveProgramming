// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1329

#include<bits/stdc++.h>
using namespace std;

void solve(){

    string pa, pb, upa="", upb="";
    cin >> pa >> pb;

    int r = 0, ia=0, ib=0;
    while(r <= 1000){
        if(ia == pa.size()) pa = upa, upa="", ia=0;
        if(ib == pb.size()) pb = upb, upb = "", ib=0;

        if(pa.size() == 0 && upa.size() == 0) {cout << "John wins.\n"; break;}
        else if(pb.size() == 0 && upb.size() == 0) {cout << "Jane wins.\n"; break;}


        upa.push_back(pa[ia]);
        upb.push_back(pb[ib]);

        if(pa[ia] == pb[ib]){
            int choice = random()/141%2;
            if(choice == 0) {upa += upb; upb="";
                cout << "Snap! for Jane: ";
                for(int i = upa.size()-1; i >= 0; i--){
                    cout << upa[i];
                }
                cout << '\n';
            }
            else {upb += upa, upa="";
                cout << "Snap! for John: ";
                for(int i = upb.size()-1; i >= 0; i--){
                    cout << upb[i];
                }
                cout << '\n';
            }
        }
        r++; ia++; ib++;
        // cout << "hola " << r << endl;
    }

    if(r > 1000) cout << "Keeps going and going ...\n";




}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    while(n--){
        solve();
        if(n>0) cout << '\n';
    }

    return 0;
}