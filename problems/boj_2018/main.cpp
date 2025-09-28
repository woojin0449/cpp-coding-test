#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,count=0; //그냥 아싸리 n도 long long으로 하는게 좋음
    cin >>n;
    for(int i=1;i<=floor(sqrt(2*n));i++){ //그냥 sqrt 만 써도 됨 왜냐 int 문에서 알아서 double 뒷자리 버려줌
        long long a=n-1ll*i*(i-1)/2;
        if(a%i==0&&a>=1){
            count++;
        }
    }
    cout<<count<<"\n";
}