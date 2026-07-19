// Deque = Double Ended Queue
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> dq;

dq.push_back(20);
dq.push_back(30);
dq.push_front(10);
dq.push_front(5);

dq.pop_back();

for(int x : dq)
    cout << x << " ";

    return 0;
}
// | Feature           | Vector | List   | Deque  |
// | ----------------- | ------ | ------ | ------ |
// | Indexing (`v[2]`) | ✅      | ❌      | ✅      |
// | `push_back()`     | ✅ Fast | ✅ Fast | ✅ Fast |
// | `push_front()`    | ❌ Slow | ✅ Fast | ✅ Fast |
// | `pop_back()`      | ✅ Fast | ✅ Fast | ✅ Fast |
// | `pop_front()`     | ❌ Slow | ✅ Fast | ✅ Fast |
