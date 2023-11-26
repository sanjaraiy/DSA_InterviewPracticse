#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
   int s,n,m;
   cin>>s>>n>>m;
   int totaldays=(s-s/7)*n;
   int totalFoodRequired=s*m;
   int minimumDaysToBuyFood=0;
   if(totaldays>=totalFoodRequired){
       cout<<"yes"<<endl;
       minimumDaysToBuyFood=ceil(totalFoodRequired/n);
    }else{
        cout<<"no"<<endl;
    }

    cout<<"MinimumDaysToBuyFood:"<<minimumDaysToBuyFood<<endl;

}