/*A queue is defined as a linear data structure that is open at both
ends and the operations are performed in First In First Out (FIFO)
order.We define a queue to be a list in which all additions to the list 
are made at one end, and all deletions from the list are made at the
other end.  The element which is first pushed into the order, the
operation is first performed on that.*/
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string>q;
    q.push("hello");
    q.push("world");
    q.push("BYE");
    cout<<q.front()<<" "<<q.back()<<" "<<q.size()<<endl;
    q.pop();
    cout<<q.front()<<" "<<q.back()<<" "<<q.size()<<endl;
    return 0;
}