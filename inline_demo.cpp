/*
函数内联的demo，
声明和定义必须加上inline,
原始实现是C的#define
#define square(x) x*x
则使用时：
a = square(5.0);  实际上是：a = 5.0*5.0;
*/

#include<iostream>

inline int fun(int x ){
    return x;
}

int main(){
    int x = 1;
    fun(x);
}
