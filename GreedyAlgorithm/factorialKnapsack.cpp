#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/**
 * Time: O(nlogn)
 * Space:O(sorting)
 * 
 */
 
struct Item{
    int value;
    int weight;
};

bool cmp(Item i1,Item i2){
    //custom comparator for sorting
    double v_w_i1=static_cast<double>(i1.value)/i1.weight;
    double v_w_i2=static_cast<double>(i2.value)/i2.weight;
    return v_w_i1 > v_w_i2;
}

double fractional(int W, vector<Item>&items){
      int ans=0;
    sort(items.begin(),items.end(),cmp);
    for(const auto& item:items){
        if(item.weight<=W){
            ans+=item.value;
            W-=item.weight;

        }else{
            //we cant pick the whole as space in knapsack is less
            double fraction=static_cast<double>(W)/item.weight;
            ans+=fraction*item.value;
            W=0;
        }

    }
    return ans;
}
int main(){
    int n,W;
    cin>>n>>W;
    vector<Item>items;
    for(int i=0;i<n;i++){
    int v,w;
    cin>>v>>w;
    Item it;
    it.value=v;
    it.weight=w;
 }

    cout<<fractional(W,items)<<"\n";
    return 0;
}