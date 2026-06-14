#include <iostream>
#include <vector>
using namespace std;

void rev(vector<int>vec){
    int start=0;
    int end=vec.size()-1;
    while(start<end){                //D
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
    for(int val:vec){
        cout<<val<<" ";
    }
    return;
}
int main(){
    vector<int>vec={1,2,3,4,5};
    rev(vec);
    return 0;
}