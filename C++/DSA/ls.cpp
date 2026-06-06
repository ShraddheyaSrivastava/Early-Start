#include <iostream>
#include <vector>

using namespace std;
int linear_search(vector<int>nums,int tar){             
    for(int i=0;i<nums.size();i++){
        if(nums[i]==tar){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int>vec={1,2,3,4,5};
   cout<< linear_search(vec,2)<<endl;
   return 0;
}