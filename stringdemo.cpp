#include<iostream>
#include<string>
#include<cstring>
using namespace std;


int main(){
    char *s = "abcd";
    char b[] = "abcd";
    b[0] = 'v';
    // s[0] = 'v';
    cout  << s << "\n";
    cout << b << '\n';
    
    char a = 'c';
    char c[] = "c";
    return 0;
}