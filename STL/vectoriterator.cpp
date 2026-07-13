#include<iostream>
#include<vector>
using namespace std;
        void explainIterator(){ 
            vector<int> v={20,40,10,30,22};
            vector<int>::iterator it = v.begin();
           for(it=v.begin();it!=v.end();it++){
                cout<<*it<<endl;
           }
           
           
        
         
        }
        
   int main(){
     
     explainIterator();

    return 0;
   }