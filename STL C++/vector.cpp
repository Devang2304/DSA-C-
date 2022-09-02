#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"Capacity="<<v.capacity()<<endl;
   v.push_back(1);
   cout<<"Capacity="<<v.capacity()<<endl;
   v.push_back(2);
   cout<<"Capacity="<<v.capacity()<<endl;
   cout<<"size="<<v.size()<<endl;

   cout<<"Element at 2nd index is "<<v.at(1)<<endl;

   cout<<"before pop"<<endl;
   for(int i:v){
    cout<<i<<" "<<endl;
   }
   cout<<endl;
   v.pop_back();
   cout<<"after pop"<<endl;
   for(int i:v){
    cout<<i<<" "<<endl;
   }
    return  0;
}