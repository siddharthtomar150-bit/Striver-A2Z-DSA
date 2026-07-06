#include <iostream>
using namespace std;
void print1(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << "*";
    }
    cout << endl;
  }
}
  void print2(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <=i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}
 void print3(int n) {
  for (int i = 1; i <= n; i++) {
    for(int j=1;j<=i;j++){
      cout<<j<<" ";
    }
    cout<<endl;
  }
}
void print4(int n) {
  for (int i = 1; i <= n; i++) {
    for(int j=1;j<=i;j++){
      cout<<i<<" ";
    }
    cout<<endl;
  }
}
void print5(int n) {
  for (int i = 1; i <= n; i++) {
    for(int j=1;j<=n-i+1;j++){
      cout<<"*";
    }
    cout<<endl;
  }
}
void print6(int n) {
  for (int i = 1; i <= n; i++) {
    for(int j=1;j<=n-i+1;j++){
      cout<<j<<" ";
    }
    cout<<endl;
  }
}
void print7(int n) {
  for (int i = 0; i <= n; i++) {
   // space
   for(int j=0;j<=n-i-1;j++){
    cout<<" ";
   }
   //star
   for(int j=0;j<2*i+1;j++){
    cout<<"*";
   }
   //space
    for(int j=0;j<=n-i-1;j++){
    cout<<" ";
   }
   cout<<endl;
   
  }
}
void print8(int n) {
  for (int i = 0; i < n; i++) {
   // space
   for(int j=0;j<i;j++){
    cout<<" ";
   }
   //star
   for(int j=0;j<2*(n-i)-1;j++){
    cout<<"*";
   }
   //space
    for(int j=0;j<i;j++){
    cout<<" ";
   }
   cout<<endl;
   
  }
}
void print9(int n) {
  for (int i = 0; i < n; i++) {
   //upper space
   for(int j=0;j<n-i-1;j++){
    cout<<" ";
   }
   //star
   for(int j=0;j<2*i+1;j++){
    cout<<"*";
   }
  
   
   cout<<endl;
   
  }
  for(int i=0;i<n;i++){
    //space
    for(int j=0;j<i;j++){
      cout<<" ";
    }
    //star
    for(int j=0;j<2*(n-i)-1;j++){
      cout<<"*";
    }
    cout<<endl;
  }
}
void print10(int n){
  for(int i=0;i<=n;i++){
    for(int j=0;j<=i;j++){
      cout<<"*";
    }
    cout<<endl;
  }
  for(int i=1;i<=n;i++){
    for(int j=0;j<=n-i;j++){
      cout<<"*";
    }
    cout<<endl;
  }

}
void print11(int n){
  int start =1;
  for(int i=0;i<n;i++){
    if(i%2==0) start =1;
   else start =0;
   for(int j=0;j<=i;j++){
   cout<<start;
  start=1-start;
  }
 cout<<endl;
  }
}
void print12(int n){
  //LEFT NUMBER
  for(int i=1;i<=n;i++){
   for(int j=1;j<=i;j++){
       cout<<j;
    }
    //SPACE
    for(int j=1;j<=2*(n-i);j++){
     cout<<" ";
    }
    //RIGHT NUMBER
    for(int j=i;j>=1;j--){ 
      cout<<j;
    }
   cout<<endl;
  }

}
void print13(int n){
  int num=1;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<num<<" ";
      num++;
    }
    cout<<endl;
  }
}
void print14(int n){
  char ch;
  for(int i=1;i<=n;i++){
    for(int j=0;j<i;j++){
      cout<<char('A'+j);
      
    }
    cout<<endl;
  }
}

void print15(int n){
  char ch;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i+1;j++){
      cout<<char('A'+j-1);
      
    }
    cout<<endl;
  }
}

void print16(int n){
  char ch;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<char('A'+i-1);
      
    }
    cout<<endl;
  }
}

void print17(int n){
  char ch;
  for(int i=0;i<n;i++){
    //space
    for(int j=0;j<n-i;j++){
      cout<<" ";
    }
    //left side
    for(int j=0;j<=i;j++){
      cout<<char('A'+j);
    }
    //right side
    for(int j=i-1;j>=0;j--){
      cout<<char('A'+j);
    }
    cout<<endl;
  }
}

  int main(){
    int n;
    cin>>n;
    print17(n);
    
  return 0;
}