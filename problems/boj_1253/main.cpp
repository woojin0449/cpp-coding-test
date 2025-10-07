#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,m,count=0;
    cin>>n;
    vector<int>V(n,0);

    for(int i=0;i<n;i++){
        cin>>V[i];
    }
    sort(V.begin(),V.end());

    for(int i=0;i<n;i++){
        int p=0,q=n-1;
        while(p<q){
            if(V[p]+V[q]>V[i]){ // 국어 이슈 : 어떤수가 두수의 합으로 표현될때.
                q--;
            }
            else if(V[p]+V[q]<V[i]){
                p++;
            }
            else if(V[p]+V[q]==V[i]){
                if(p!=i&&q!=i){
                    count++;
                    break;
                }
                else if(p==i){
                    p++;
                }
                else {
                    q--;
                }
            }
        }
    }
    cout<<count<<"\n";
}