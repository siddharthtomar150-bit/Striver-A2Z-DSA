// pair is part of the C++ STL.
// It is a utility, not a container.
// It stores two values together.

#include<iostream>
#include<utility>
using namespace std;
//BASIC PAIR
void explainpair1(){
    pair<int,int> p={3,5};
    cout<<p.first<<" "<<p.second;
}
//REVERSE NESTED PAIR
void explainpair2(){
    pair<pair<int,int>,int> S={{3,8},7};
    cout<<S.first.first<<" "<<S.first.second<<" "<<S.second;
}
//PAIR WITH DIFFERENT DATA TYPE
void explainpair3(){
    pair<char,int> T={'A',9};
    cout<<T.first<<" "<<T.second;
}
int main(){
    explainpair3();
    return 0;
}