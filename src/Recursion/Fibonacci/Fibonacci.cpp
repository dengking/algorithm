#include<iostream>
using namespace std;

int fib(int N)
{
    int last_last_one = 0; //上上个元素
    int last_one = 1;      // 上个元素
    if (N == 0)
        return 0;
    if (N == 1)
        return 1;
    int fib_number = 0;
    for (int i = 2; i <= N; ++i)
    {
        fib_number = last_one + last_last_one;
        last_last_one = last_one;
        last_one = fib_number;
    }
    return fib_number;
}

int main(){
    std::cout<<"input a number:"<<std::endl;
    int N=0;
    std::cin>>N;
    std::cout<<"fib:"<<fib(N)<<std::endl;
}