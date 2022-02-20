#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
       string s;
       cin >> s;
       stack<char> st;
       for(int i = 0; i < s.length(); i++){
           if(st.empty() || st.top() != s[i]){
               st.push(s[i]);
           }
           else{
               st.pop();
           }
       }
       cout << st.size() << endl;
   }
   
   return 0;
}
