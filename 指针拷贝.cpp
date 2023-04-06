#include<iostream>
using namespace std;
/*
指针作为形参时，传进去也会进行拷贝，获得一个拷贝指针，但是指向同一个地址
因此可以对指针指向的内容进行修改，这样会影响原指针，但是如果拷贝的指针指向了新的地址，那么与原指针就没有关系了


1
2
1
内存分配失败！
内存分配成功！
*/
int num1 = 1;
int num2 = 2;

int *getMemory(int *ptr)
{
    ptr = new int;
    return ptr;
}
/*
像这个就会影响原指针，因为拷贝后的指针操作过后还是指向同一个地址
*/
int *getMemory(int **ptr)
{
    *ptr = new int;
    return *ptr;
}

void fun(int*ptr){
    ptr = &num2;
    /*
    这个拷贝的指针进行操作后，指向了新的地址，不会对实参造成影响；
    函数结束后，指针销毁
    */
    cout << *ptr << endl;
}

int main(){
    int *p = &num1;
    cout << *p << endl; // 1
    fun(p); // 2
    cout << *p << endl; // 1


    int *p1 = nullptr;
    getMemory(p1);
    /*
    内存分配失败
    还是因为传入之后会拷贝
    */
    if (p1 == nullptr)
        cout << "内存分配失败！" << endl;
    else
    {
        cout << "内存分配成功！" << endl;
        delete p1;
    }

    getMemory(&p1);
    /*
    内存分配成功
    因为对原地址进行修改
    */
    if (p1 == nullptr)
        cout << "内存分配失败！" << endl;
    else
    {
        cout << "内存分配成功！" << endl;
        delete p1;
    }
    return 0;
}