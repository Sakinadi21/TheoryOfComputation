#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isAccept_anb2n(const string& input) {

    stack<char >st;
    int i = 0;
    int n = input.length();

    while(i<n && input[i]=='a'){
        st.push('A');
        i++;
    }

    while(i<n){
        if(input[i]!='b') return false;
        int bCount =0;

        while(i<n && bCount<2 && input[i]=='b'){
            bCount++;
            i++;
        }

        if(bCount !=2 || st.empty()) return false;
        st.pop();
    }
    return st.empty();
}

int main(){
    string input;
    cin >> input;
    if(isAccept_anb2n(input))
        cout << "Accepted" << endl;
    else
        cout << "Rejected" << endl;

}