#include<iostream>
#include<list>
#include<deque>
#include<stack>
#include<queue>
using namespace std;
int main(){
 // it will always take large number on top and remaining numbers also in order
 // like lagest first and then second largest and then third and so on
    priority_queue <int> s;

    s.push(1);
    s.push(4);
    s.push(2);
   s.push(43);
    while(!s.empty()){
        cout<<s.top()<<" ";// top for largest one
        s.pop();// to remove largest
    }
}
