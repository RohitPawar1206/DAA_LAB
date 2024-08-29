#include <iostream>
using namespace std;

int main() {
    int a[10],i,j,size,pos=-1,count=0;
    cout<<"enter array size:";
    cin>>size;
    cout<<"enter array elements:";
    for(i=0;i<size;i++){
        cin>>a[i];
    }
    for(i=0;i<size;i++){
        if(a[i]==0){
            pos=i;
            break;
        }
    }
     for(i=pos;i<size;i++){
         if(a[i]==0)
         {
             count=count+1;
         }
     }
     cout<<"total number of zeros followed by one are:"<<count;
    
}
