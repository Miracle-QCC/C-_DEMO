#include<vector>
#include<array>
#include<iostream>
using namespace std;

/*
可以发现array 和数组都是在栈区
而vector是在堆区，其中vector和array都可以用=进行copy

array和vector可以用.at(idx)来进行安全索引，也就是无法进行a4.at(-1),代价是运行时检查时间增加
*/
int main(){
    int a1[] = {1,2,3,4};
    int b[4];
    // b = a1; // invalid
    
    vector<int> a2 = {1,2,3,4};
    vector<int> a3 = a2;
    
    array<int,4> a4 = {1,2,3,4};
    array<int,4> a5 = a4;
   
    // 4
    // a1[0]:   1  at  0x7fffffffd8f0
    // a2[0]:   1  at  0x55555556ceb0
    // a3[0]:   1  at  0x55555556ced0
    // a4[0]:   1  at  0x7fffffffd900
    // a5[0]:   1  at  0x7fffffffd910

    cout << a4[-1] << endl;  // 得到4,因为a4往前移就到了a1的最后一个元素

    cout << "a1[0]:   " << a1[0] << "  at  " << &a1[0] << endl;
        
    cout << "a2[0]:   " << a2[0] << "  at  " << &a2[0] << endl;

    cout << "a3[0]:   " << a3[0] << "  at  " << &a3[0] << endl;

    cout << "a4[0]:   " << a4[0] << "  at  " << &a4[0] << endl;

    cout << "a5[0]:   " << a5[0] << "  at  " << &a5[0] << endl;

    return 0;
}