#include <bits/stdc++.h>
using namespace std;
int main(){
    string input ;
    cin>>input;

    stack<char> st;
    int i = 0;
    int n=input.length();

    while(i<n && input[i]=='a'){
        st.push('a');
        i++;
    }

    if(st.empty()){
        cout<<"Rejected"<<endl;
        return 0;
    }
    while(i<n && input[i]=='b'){
if(st.empty()){
            cout<<"Rejected"<<endl;
            return 0;
        }
        st.pop();
        i++;
    }

    if(!st.empty()){
        cout<<"Rejected"<<endl;
        return 0;
    }

    cout<<"Accepted"<<endl;
    return 0;
}