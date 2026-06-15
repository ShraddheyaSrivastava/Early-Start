#include <iostream>
#include <vector>

using namespace std;

 vector<int> ps(int ar[],int sz,int tar){
    vector<int>vec;
    for(int i=0;i<sz;i++){
        for(int j=i+1;j<sz;j++){             //D
            if(ar[i]+ar[j]==tar){
                vec.push_back(i);
                 vec.push_back(j);
                 return vec;
            }
        }
    }
    return vec;
}
int main(){
    int sz=5;
    int tar=9;
    int ar[sz]={1,2,5,4,5};
    vector<int>ans=ps(ar,sz,tar);
    cout<<ans[0]<<" ,"<<ans[1]<<endl;

    return 0;
}