#include<iostream>
#include<vector>
using namespace std;
        //begin()=>first element sa start hota ha 
        void explainIterator1(){ 
            vector<int> v={2,4,6,8,10};
            vector<int>::iterator it = v.begin();
           for(it=v.begin();it!=v.end();it++){
                cout<<*it<<endl;
           }
            }
          //C++11 (auto method)
         void explainIterator2(){
          vector<int> ar={2,5,9,8};
          for( auto it =ar.begin();it !=ar.end();it++){
            cout<<*it<<" ";
          }
          cout<<endl;
         }   

         //rbegin()=>last element se start karta hai 
         //Reverse traversal
            void explainIterator3(){
          vector<int> vr={8,6,4,2};
          for(auto it = vr.rbegin(); it != vr.rend(); ++it){
            cout<<*it<<" ";
          }
           cout<<endl;
            }
          //   erase() kisi element ya range of elements ko delete karta hai.[ek element delete ]
          void explainIterator4(){
               vector<int> vec ={1,4,5,8,6,2};
               vec.erase(vec.begin()+3);
             cout<<vec[3]<<endl;//Important: erase() index nahi leta, iterator leta hai. Isliye v.begin() + 2 likha.
          }
           // Range delete
            void explainIterator5(){
               vector<int> vec ={1,4,5,8,6,2};
               vec.erase(vec.begin()+1,vec.begin()+4);
               for(int x:vec)
               cout<<x<<" "<<endl;
            }
   int main(){
     
       explainIterator1();
       explainIterator2();
       explainIterator3();
       explainIterator4();
        explainIterator5();
      //Normal vs Reverse
     // for(auto it = v.begin(); it != v.end(); it++)
     // for(auto it = v.rbegin(); it != v.rend(); it++)
     //rend
     // rbegin() -> last element
     // rend()   -> first se pehle wali imaginary position
     //visualization
//      Normal:
//     begin() -----------------> end()

//      Reverse:
//     rend() <----------------- rbegin()

    return 0;
   }