#include<iostream>
#include<vector>
using namespace std;

typedef int (*pf)(int); // 返回值为int，形参为int的函数指针pf

void estimate(vector<int> &v,int (*pf)(int)){
    for(auto x : v){
        cout << pf(x) << endl;
    }

}
void SWap(int a){

}
void SWap(int *a){

}   

int fun1(int x){
    return x;
}
int fun2(int x){
    return x * x;
}
int main(){
    // 函数数组指针
    int (*ptrs[3])(int) = {fun1,fun2,fun2};
    pf p[3]= {fun1,fun2,fun2};



    return 0;
}