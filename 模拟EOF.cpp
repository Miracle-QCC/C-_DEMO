#include<iostream>
using namespace std;

/*
目前在ubuntu中没有实现Ctrl+Z实现EOF，可能在windows中可以
*/
int main(){
    char ch;
    while (cin.fail() == false){
        cin.get(ch);
        cout << ch << endl;
    }
}