#include <iostream>
#include<vector>
using namespace std;

long long combin_2(long long a){ // 먹는놈도 싸는놈도 long long
    return a*(a-1)/2;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,m;
    long long total=0;
    cin>>n>>m;
    vector<long long>A(n+1,0);
    vector<long long>D(n+1,0);
    vector <long long>index(m+1,0); // if m=3, then 0 1 2 because modular
    for(int i=1;i<=n;i++){
        cin>>A[i];
    }
    for(int i=1;i<=n;i++){ //합 수열
        D[i]=D[i-1]+A[i];
    }
    for(int i=1;i<=n;i++){ //합쳐도 될거 같은데..
        D[i]=D[i]%m;
    }
    for(int i=1;i<=n;i++){
        if(D[i]==0){
            total++;
        }
        index[D[i]]++;
        
    }
    for(int i=0;i<m;i++){
        if(index[i]>1){
            total += combin_2(index[i]);
        }
        
    }
    cout<<total<<"\n";
    return 0;
}