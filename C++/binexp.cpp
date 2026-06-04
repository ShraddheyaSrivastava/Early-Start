#include <iostream>
using namespace std;

int exp(int num,int pow){
    int ans=1;

    while(pow>0){
        int re=pow%2;
        if(re==1){
           ans*=re*num;
        }
        num*=num;
        pow/=2;
    }
    return ans;
}
int main(){
    cout<<exp(4,3);
    return 0;
}
