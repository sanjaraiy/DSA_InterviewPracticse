#include<iostream>
#include<vector>
using namespace std;

void smallestNumber(int &d,int &s){
    vector<char>v(d,'0');
    if(9*d<s){
        cout<<"-1";
        return ;
    }

    s--;
    int i;
    for(int i=d-1;i>=0;i--){
        if(s<9) break;

        v[i]='9';
        s-=9;

        // if(s<9){
        //     i--;
        //     break;
        // }

    }

    // if(i==0){
    //     v[i]=char(s+1 +'0');
    // }else{

       v[0]='1';
       v[i]=char(s-1+'0');

    // }

    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }

}

int main(){
    int d,s;
    cin>>d>>s;
    smallestNumber(d,s);
    
}