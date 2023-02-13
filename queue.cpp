#include<iostream>
#include<queue>
using namespace std;
void printing(queue<int> myqueue){
    while(!myqueue.empty()){
        cout<<myqueue.front()<<endl;
        myqueue.pop();       
    }
}
int main(){
    queue<int> myqueue;
    myqueue.push(1);
    myqueue.push(2);
    myqueue.push(3);
    printing(myqueue);
    cout<<"my queue size:"<<myqueue.size()<<endl;
    cout<<"my queue first element:"<<myqueue.front()<<endl;
    cout<<"my queue last element:"<<myqueue.back()<<endl;
    
}