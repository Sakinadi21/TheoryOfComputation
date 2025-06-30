#include <bits/stdc++.h>
using namespace std;

bool isAccepted(const string& s) {
    if(s.length()%2!=0) return false; // Length must be even
    for(char c : s) {
        if(c != 'a' && c != 'b') return false; // Only 'a' and 'b' are allowed
    }
    return true;
}
int main(){
    string input;
    cin >> input;
  if(isAccepted(input)){
      cout << "Accepted" << endl;
  } else {
      cout << "Rejected" << endl;
  }
}