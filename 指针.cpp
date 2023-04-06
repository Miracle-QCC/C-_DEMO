/*
之所以要指定指针类型，是因为不同的类型所需内存不一样，对指针的操作也不一样
比如int指针+1是移动4B,而double是移动8B
int *p ;
p += 1;移动4B

double * p;
p +=1 ;移动8B
*/

#include<iostream>
using namespace std;
int main(){
    int* p1,p2; // 注意，只有p1是int指针，p2是int
    cout << p1 << endl;  // 0x5555555550e0,会变
    cout << p2 << endl;  // 0
   
    // int * p;
    // *p = 12000; // 这种容易出现问题，因为12000不知道被存在哪儿，而p没有初始化，可能有任何值，可能会导致冲突

    // 这样是允许的
    int *ptr1;
    ptr1 = (int *) 0XB8000000;
    cout << ptr1 <<  endl;
    // cout << * ptr1 << endl; // 可能会出现段错误

    // 用new
    int *ptr2 = new int;
    cout << *ptr2 << endl;
    delete ptr2;
    // delete ptr2; // 错误，不能释放两次

    int * pt = new int[100];
    delete [] pt; // 释放 数组需要使用delete []
}