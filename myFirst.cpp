#include<iostream>
#include<climits>
#include<string>
#include<cstring>
#include<vector>
using namespace std;
void print(){}
template<typename Type, typename... Types>
void print(const Type& arg, const Types&... args)
{
     std::cout << arg << std::endl;
    print(args...);

}

void fun(vector<int> &list){
    list[0] = 10;

}
int main(int argc,char* argv[]){
    vector<int> list = {1,2,3};
    fun(list);
    cout << list[0] << endl;
    return 0;
}