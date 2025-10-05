#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m,count=0;
    cin>>n;
    vector<int>V(n,0);
    

    for(int i=0;i<n;i++){
        cin>>V[i];
    }
    
    for(int i=0;i<n;i++){
        int p=0,q=n-1;
        while(p<q){
            if(V[p]+V[q]>V[i]){
                q--;
            }
            else if(V[p]+V[q]<V[i]){
                p++;
            }
            else if(V[p]+V[q]==V[i]){
                count++;
                break;
            }
        }
    }
    cout<<count<<"\n";
}