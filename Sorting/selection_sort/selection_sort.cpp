#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n]={5,7,4,8,3};
    for (int i = 0; i <n-1 ; i++)
    {
        int minIndex=i;
        for (int j =i+1 ; j < n; j++)
        {
            if (arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
            
        }
        swap(arr[minIndex],arr[i]);
        
    }
    cout<<"Array sorted using seleection sort:"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}