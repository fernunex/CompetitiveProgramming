// https://atcoder.jp/contests/abc074/tasks/arc083_a

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;

    double ma_sugar = 0;
    double ma_water = 0;
    double ma_concentration = 0.0; 

    for (int i = 0; i*100*a < f; i++)
    {
        for(int j = 0; j*100*b < f; j++){
            double wat = i*a*100 + j*b*100;
            double as = wat/100 * e;
            double ps = max( (int)(as/c)*c +(int)((as-(int)(as/c)*c)/d)*d, (int)(as/d)*d +(int)((as-(int)(as/d)*d)/c)*c);

            if(wat+ps <= f){
                double por = (100*(double)ps)/((double)wat+ps);
                if(por > ma_concentration){
                    ma_sugar = ps;
                    ma_water = wat;
                    ma_concentration = por;
                }
            }
        }
    }
    cout << int(ma_sugar)+int(ma_water) << " " << int(ma_sugar) << '\n';
    
    return 0;
}