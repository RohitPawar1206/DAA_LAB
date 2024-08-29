/*Implement a problem of move all zeroes to end of 
array.
Statement: Given an array of random numbers, Push all the zero’s 
of a given array to the end of the array. For example, if the given 
arrays is {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0}, it should be changed to {1, 9, 
8, 4, 2, 7, 6, 0, 0, 0, 0}. The order of all other elements should be 
same.*/
/*  */
#include <iostream> 
using namespace std;

int main() {
    int a[10], size,i,temp;
    //bool flag = false;

    cout << "Enter array size (up to 10): ";
    cin >> size;

    cout << "Enter array elements : ";
    for (i = 0; i < size; i++) {
        cin >> a[i];
    }

    for(i=0;i<size;i++){
        for(int j=i; j<size; j++){
        if(a[i]==0){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;

        }
        else{
            break;

        }
    }}

    cout<<"Array is : ";
    for(i=0;i<size;i++){
        cout<<" "<<a[i];
    }
}