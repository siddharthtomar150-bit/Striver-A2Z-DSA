// Ye DSA ke sabse important containers me se ek hai.
// stack=>LIFO(Last In,First Out)=>jo last aayega,wahi sabse pehle bahar niklega
 #include<iostream>
 #include<stack>
 using namespace std;
 int main(){
   stack<int> st;
   st.push(10);
   st.push(20);
   st.push(30);
   cout<<st.size()<<endl;
   cout<<st.top()<<endl;
   st.pop();
   cout<<st.top()<<endl;
   cout<<st.empty()<<endl;
    
    return 0;
 }
//  Stack kab use hota hai?

// Ye bahut important interview question hai.

// Stack use hota hai:

// ✅ Undo/Redo (MS Word, VS Code)
// ✅ Browser Back Button
// ✅ Function Calls (Call Stack)
// ✅ Parentheses Matching (){}[]
// ✅ Expression Evaluation
// ✅ Next Greater Element
// ✅ DFS (Depth First Search)