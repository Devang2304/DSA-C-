#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<n-i;j++){ // decreases the checking of the element which is already sorted
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        }
        cout<<"Array sorted using bubble sort:"<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    return 0;
}