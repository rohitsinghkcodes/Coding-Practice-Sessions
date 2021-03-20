#include<iostream>
using namespace std;

int isSorted(int arr[],int n)
{
    if(n==1)
    {
        return 1;
    }
    return (arr[n-1]<arr[n-2])?0:isSorted(arr,n-1);
}

int main()
{
    int arr[] = {1,2,5,6,8};    //Sorted
    //int arr[] = {1,98,5,6,8};   //Unsorted
    if(isSorted(arr,5)==1)
    {
        cout<<"Sorted"<<endl;
    }
    else
    {
        cout<<"Unsorted"<<endl;
    }
    return 0;
}