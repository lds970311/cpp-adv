// Time ： 2021-10-17  19:06
// TOOLS : cLion
// NAME : Fibonacci.cpp
// STATEMENT : 斐波那契数列

#include <iostream>

using namespace std;

unsigned int fibonacci(unsigned int n) {
    if (n <= 2) {
        return 1;
    }
    int first = 1;
    int second = 1;
    int result = first + second;
    for (int i = 3; i <= n; i++) {
        first = second;
        second = result;
        result = first + second;
    }
    return result;
}


int main(int argc, char **argv) {
    unsigned int result = fibonacci(5); //求前5项和
    cout << result << endl;
}