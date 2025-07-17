#include <iostream>
#include <string>
using namespace std;

bool isAcceptedAtMost2(const string& s){
    if(s.length()>2) return false;
    for(char c:s) if (c != 'a' && c !='b') return false;
    return true;
}

int main() {

     string input;
     cin>>input;

     if(isAcceptedAtMost2(input))
     cout<<"Accepted"<<endl;
     else
     cout<<"Rejected "<<endl;


    return 0;
}