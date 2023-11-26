#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long int
using namespace std;

bool cmp(int x,int y){
    return x>y;
}
 
ll minCostToBreakGrid(int n,int m,vector<ll>&X, vector<ll>&Y){
    sort(X.begin(),X.end(),cmp);
    sort(Y.begin(),Y.end(),cmp);
    int hz=1;
    int vr=1;
    int h=0,v=0;
    ll ans=0;
    while(h<X.size() and v<Y.size()){
        if(Y[v]>X[h]){
            ans+=Y[v]*vr;
            hz++;
            v++;

        }else{
            ans+=X[h]*hz;
            vr++;
            h++;
        }
    }

    while(h<X.size()){
        ans+=X[h]*hz;
        vr++;
        h++;
    }
    while(v<Y.size()){
          ans+=Y[v]*vr;
          hz++;
          v++;
    }

    return ans;

}
int main(){
    int n,m;
    cin>>m>>n;
    vector<ll>horizontal,vertical;
    for(int i=0;i<m-1;i++){
        int x;
        cin>>x;
        vertical.push_back(x);
        
    }
    for(int i=0;i<n-1;i++){
        int x;
        cin>>x;
        horizontal.push_back(x);
        
    }

    cout<<minCostToBreakGrid(n,m,horizontal,vertical);
    return 0;
}