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
//NESTED PAIR 
void explainpair4(){
    pair<int,pair<int,int>> R={5,{6,9}};
    cout<<R.first<<" "<<R.second.second<<" "<<R.second.first;
}
//ARRAY OF PAIR
void explainpair5(){
         pair<int,int> arr[3]={{2,8},{5,9},{4,1}};
             cout<<arr[0].first<<" ";
              cout<<arr[0].second<<" ";
             cout<<arr[1].first<<" ";
         cout<<arr[1].second<<" ";
}
//SWAP OF PAIR
void explainpair6(){
        pair<int,int> p={40,60};
        swap(p.first,p.second);
         cout<<p.first<<" "<<p.second;
}
//PAIR COMPARISON
void explainpair7(){
         pair<int,int> p1={1,5};
             pair<int,int> p2={1,7};
              cout<<(p1==p2)<<"="<<(p1==p2)<<endl;//true
             cout<<(p1<p2)<<endl;
          cout<<(p1>p2)<<endl;
     }
     //PAIR WITH STRING  
      void explainpair8(){
         pair<string,int> p={"Siddharth",21};
         cout<<p.first<<" "<<p.second<<endl;
     }
//PAIR  INSIDE PAIR
       void explainpair9(){
       pair<pair<int,int>,pair<int,int>> p={{90,40},{22,55}};
       cout<<p.first.first<<" "<<p.first.second<<" "<<p.second.first<<" "<<p.second.second<<endl;
    }
int main(){
    explainpair9();
    return 0;
}