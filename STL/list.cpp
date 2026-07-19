// Q. Vector aur List mein kya difference hai?

// Simple Answer:

// Vector contiguous memory mein data store karta hai aur indexing support karta hai.
// List doubly linked list hoti hai, indexing support nahi karti, lekin front aur middle mein insertion/deletion efficient hota hai (jab iterator already ho).
#include <iostream>
#include <list>
using namespace std;
// To alag se #include <list> likhne ki zaroorat nahi hoti, kyunki bits/stdc++.h lagbhag saare STL headers include kar deta hai.
int main() {
    list<int> ls;

    ls.push_back(10);
    ls.push_back(20);
    ls.push_front(5);

    for (int x : ls) {
        cout << x << " ";
    }

return 0;
}