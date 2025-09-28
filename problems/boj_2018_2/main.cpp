#include<iostream>
#include<cmath>
using namespace std;

int main(){ //투포인트
    long long n,sum=1,count=1,start_index=1,end_index=1; // count 가 1인이유는 n까지 갔을때 n은 투포인터로 못잡기 때문이다.
    cin>>n;
    
    while(end_index!=n){
        if(sum>n){
            sum-=start_index;
            start_index++;
        }
        if(sum==n){
            count++;
            end_index++; //여기서 start_index를 더해주면 합은 계속 작아진다.
            sum+=end_index; //차라리 end_index를 올려서 살짝 비효율적이여도 한칸 가는게 베스트
        }
        if(sum<n){
            end_index++;
            sum+=end_index;
        }
    }
    cout<<count<<"\n";
    }
