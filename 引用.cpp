#include<iostream>
/*
引用相当于将同一份数据传入函数，或者可以理解为常量指针
使用引用时，唯一的区别是函数申明时有变化
*/
void swap(int &a,int &b){
    int c = a;
    a = b;
    b = c;
}
int main(){
    int a = 1,b = 2;
    swap(a,b);
    std::cout << a << " " << b << std::endl;
    return 0;
}