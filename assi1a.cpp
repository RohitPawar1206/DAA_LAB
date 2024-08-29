 /*Given an array of 1s and 0s which has all 
1s first followed by all 0s? Find the number of 0s. 
Count the number of zeroes in the given array.*/

#include <iostream>
using namespace std;
int main(){
    int a[10],size,count=0;
    bool flag=false;
    cout<<"enter the array size(up to 10):";
    cin>>size;
    cout<<"enter the array elements(1/0):";
    for(int i=0;i<size;i++){
        cin>>a[i];  
    }
for(int i=0;i<size;i++){
    if (a[i]>1||a[i]<0){
        flag=true;
        break;
    }
}
if (flag){
    cout<<"invalid input\n";
}
else
{
    for(int i=0;i<size;i++){
        if (a[i]==0){
            count++;
        }
    }
    cout<<"number of 0s are:"<<count<<endl;
}

    return 0;
}