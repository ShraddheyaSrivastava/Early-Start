#include <iostream>
#include <vector>

using namespace std;
int main(){         // subarray is only group of continuous elements and in n element array subarray=n*(n+1)/2
    int ar[5]={1,2,3,4,5};
    for(int st=0;st<5;st++){
        
        for(int en=st;en<5;en++){
            for(int i=st;i<=en;i++){  //D
                cout<<ar[i]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}