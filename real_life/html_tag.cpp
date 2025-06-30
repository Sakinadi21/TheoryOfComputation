#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValidTags(const string& s) {
    stack<string> st;
    size_t i = 0, n = s.size();

    while (i < n) {
        if (s[i] == '<') {
            if (i + 1 < n && s[i + 1] == '/') {
                // Closing tag
                size_t j = s.find('>', i);
                if (j == string::npos) return false;
                string tag = s.substr(i + 2, j - i - 2);
                if (st.empty() || st.top() != tag) return false;
                st.pop();
                i = j + 1;
            } else {
                // Opening tag
                size_t j = s.find('>', i);
                if (j == string::npos) return false;
                string tag = s.substr(i + 1, j - i - 1);
                st.push(tag);
                i = j + 1;
            }
        } else {
            i++;
        }
    }
    return st.empty();
}

int main() {
    string html;
    getline(cin, html);

    if (isValidTags(html))
        cout << "Valid HTML tags\n";
    else
        cout << "Invalid HTML tags\n";

    return 0;
}
