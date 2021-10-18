// Time ： 2021-10-17  20:02
// TOOLS : cLion
// NAME : BuyStationery.cpp
// STATEMENT : 

/**
 * 班主任给小玉一个任务，到文具店里买尽量多的签字笔。已知一只签字笔的价格是 11 元 99 角，而班主任给小玉的钱是 aa 元 bb 角，小玉想知道，她最多能买多少只签字笔呢。
 */

#include <iostream>

using namespace std;

unsigned int getNums(int a, int b) {
    int total = a * 10 + b;
    return total / 19;
}

int main(int argc, char *argv[]) {
    int a, b;
    cin >> a >> b;
    unsigned int res = getNums(a, b);
    cout << res << endl;
    return 0;
}