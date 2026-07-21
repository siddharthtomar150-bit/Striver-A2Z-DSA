// Queue kya hoti hai?
// Queue FIFO principle follow karti hai.
// FIFO = First In, First Out=>jo sabse pehle aayega, wahi sabse pehle bahar niklega.


// front()Queue ka first element return karta hai.
// back()Queue ka last element return karta hai.
// pop()Queue ka first element remove karta hai.

#include <iostream>
#include <queue>
using namespace std;

int main() {

    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << q.front() << endl; // 10
    cout << q.back() << endl;  // 30

    q.pop();

    cout << q.front() << endl; // 20
    cout << q.size() << endl;  // 2
    return 0;
}
//notice=>Stack mein pop() top ko remove karta tha.
// Queue mein pop() front ko remove karta hai.