#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isOpposite(char top,char current) {
    return (top=='a'&& current=='b')||(top =='b'&&current=='a');
}
bool isAcceptedByPDA(const string& input) {
    stack<char> st;
    for (char ch:input) {
        if (ch!='a'&& ch!='b') {
            return false;
        }
        if (!st.empty()&&isOpposite(st.top(),ch)) {
            st.pop();  
        }else{
            st.push(ch);  
        }
    }
    return st.empty();
}

int main() {
    string input;
    cin >> input;
    if (isAcceptedByPDA(input))
        cout << "Accepted" << endl;
    else
        cout << "Rejected" << endl;
    return 0;
}
