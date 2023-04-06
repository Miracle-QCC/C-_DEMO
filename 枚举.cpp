#include<iostream>
using namespace std;

/*
注意枚举不要重复
*/
// 一般枚举的第一个值为0,第二个为1,以此类推
enum color{red ,orange,yellow};

// 当然可以显示的设置在
// enum co{red ,orange,yellow}; 错误，与上面重复
enum type {r=2 ,o=1,y}; // y会是2,因为后面的数只需要比前面的大
int main(){
    color c;
    c = red;
    cout << c << endl; // 0

    type d;
    d = y;
    cout << d <<endl; // 2
    // c = 1; 错误
    // c = 2;错误
    // c = 0;错误
    // c = 2000;  错误
}