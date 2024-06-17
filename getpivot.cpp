#include<iostream>
using namespace std;
int getpivot(int arr[],int n){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main()
{
    int arr[7]={2,6,7,5,9,4,2};
    cout<<"Pivot index is:"<<getpivot(arr,7);
    return 0;
}
