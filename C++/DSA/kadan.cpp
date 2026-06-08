#include <iostream>
using namespace std;

int maxsus(int ar[],int sz){
    int sum=0;                      // maximum subarray sum   D 
    int mx=INT_MIN;
    for(int i=0;i<sz;i++){
        sum+=ar[i];
        mx=max(sum,mx);
        if(sum<0){
            sum=0;
        }
        
    }
    return mx;

}
int main(){
    int sz=5;
    int ar[sz]={1,2,3,4,-5};
    cout<<maxsus(ar,sz);
    return 0;
}