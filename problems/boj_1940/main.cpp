#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,m,start_index=0,end_index=0,count=0,sum=0;
    cin>>n>>m;
    vector<int>vec(n,0);
    for(int i=0;i<n;i++){
        cin>>vec[i];
        if(vec[i]==m){
            sum++;
        }
    }
    sort(vec.begin(),vec.end());
    start_index=0;
    end_index=n-1;
    while(start_index!=end_index){
        if(vec[start_index]+vec[end_index]>m){
            end_index--;
        }
        else if(vec[start_index]+vec[end_index]==m){
            count++;
            end_index--;
        }
        else if(vec[start_index]+vec[end_index]<m){
            start_index++;
        }
    }
    cout<<count<<"\n";
}