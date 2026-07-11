     #include<iostream>
     #include<vector>
     using namespace std;
    void vec(){
    vector<int>v;
       v.push_back(5);
           v.push_back(7);
           v.push_back(9);
           cout<<"size of vec:"<<v.size()<<" "<<endl;
           cout<<v[1]<<" ";
           cout<<v[2]<<endl;
           

    }

      int main(){
         vector<int>v;//empty vector
             v.push_back(20);//element vector
             v.push_back(30);
             v.push_back(22);
             cout<<"size is:"<<v.size()<<endl;
              for(int i=0;i<v.size();i++){
             cout<<v[i]<<" ";
           }
            cout<<endl;
     //call function
     vec();

            //vector with fix index
           vector<int> vr(5,100);
           cout<<vr.size()<<" "<<vr[0]<<endl;
            //vector with pair
            vector<pair<int,int>> arr;
            arr.push_back({1,8});
            arr.push_back({7,5});
            cout<<arr[0].first<<endl;
            cout<<arr[0].second<<endl;
            
         //copy vector 
         vector<int>v1(5,20);
         vector<int>v2(v1);
         cout<<v2[1]<<" "<<v2[0]<<" "<<v2[3]<<endl;
          

   
          



        
     return 0;
     }                                                        