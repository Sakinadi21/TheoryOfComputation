#include <iostream>
#include <string>
using namespace std;

bool isBinDiv2(const string& s){
    if(s.empty())return false;
    for(char c:s){
        if( c !='0' && c !='1') return false;

    }
    return s.back()=='0';
}
int main()
{
    string input;
    cin >>input;
    if(isBinDiv2(input))
    cout <<"Accepted"<<endl;
    else
    cout <<"Rejected"<<endl;

    return 0;
}