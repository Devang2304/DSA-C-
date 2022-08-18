//Question link -https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=1

#include<iostream>
#include<vector>
using namespace std;
int firstOccurance(vector<int>& arr,int n,int key){
int start=0;
int end=n-1;
int ans=-1;
int mid=start+(end-start)/2;
while (start<=end)        
{
    if (key==arr[mid])
    {
        ans=mid;
        end=mid-1;
    }
    else if (key>arr[mid])
    {
        start=mid+1;
    }
    else if (key<arr[mid])
    {
        end=mid-1;
    }
    mid=start+(end-start)/2;
}
return ans;
}
int lastOccurance(vector<int>& arr,int n,int key){
int start=0;
int end=n-1;
int ans=-1;
int mid=start+(end-start)/2;
while (start<=end)        
{
    if (key==arr[mid])
    {
        ans=mid;
        start=mid+1;
    }
    else if (key>arr[mid])
    {
        start=mid+1;
    }
    else if (key<arr[mid])
    {
        end=mid-1;
    }
    mid=start+(end-start)/2;
}
return ans;
}
pair<int,int> firstAndLastPosition(vector<int>&arr,int n,int k){
    pair<int,int> p;
    p.first=firstOccurance(arr,n,k);
    p.second=lastOccurance(arr,n,k);

    return p;
}