#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int mj(int ar[],int sz){
   int idx;
    for(int i=0;i<sz;i++){  //you can use (for each) loop also
          int s=0;
        for(int j=0;j<sz;j++){
            if(ar[i]==ar[j]){
               s+=1;
               
            }
            if(s>sz/2){
              return ar[i];
            }
        }

    }
    return -1234;
   
}

int opt(int ar[],int sz){
    // sort the array
    int f=1;int ans=ar[0]; //only if array is sorted
    for(int i=1;i<sz;i++){
         if(ar[i]==ar[i-1]){
            f+=1;
         }else {f=1;ans=ar[i];}//can remove ans=ar[i],ans add return ar[i]
         if(f>sz/2){
            return ans;
         }
    }
    return -1;
}
int main(){
    int sz=5;
    int ar[sz]={1,2,2,2,1};
    //sort
    vector<int>vec={1,2,2,2,1};
    sort(vec.begin(),vec.end());
    for(int val:vec){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<mj(ar,sz);
    cout<<opt(ar,sz);
    return 0;
}