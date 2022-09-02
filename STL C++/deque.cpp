/*Double-ended queues are sequence containers with the feature of 
expansion and contraction on both ends. They are similar to vectors
,but are more efficient in case of insertion and deletion of elements
Unlike vectors, contiguous storage allocation may not be guaranteed. 
*/
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    d.push_back(1);
    d.push_front(2);

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<"Print first index element->"<<d.at(1)<<endl;

    cout<<"Front element->"<<d.front()<<endl;
    cout<<"Back element->"<<d.back()<<endl;

    cout<<"Empty or not [should return false(0) or true(1)]"<<d.empty()<<endl;

    cout<<"Before erase"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"After erase"<<d.size()<<endl;
    d.pop_front();
    cout<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    return 0;
}