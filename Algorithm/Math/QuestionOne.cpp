// Time ： 2021-10-17  19:29
// TOOLS : cLion
// NAME : QuestionOne.cpp
// STATEMENT :
/**
 * 马克思手稿中有一道趣味数学问题：有30个人，其中有男人、女人和小孩，这些人在一家饭馆吃饭花了50
 * 先令；每个男人花3先令，每个女人花2先令，每个小孩花1先令；问男人、女人和小孩各有几人
 */


#include <iostream>

using namespace std;

void getResult() {
    int y;
    int z;
    for (int i = 1; i < 10; i++) {
        z = i + 10;
        y = 30 - z - i;
        if ((3 * i + 2 * y + z) == 50) {
            cout << "x=" << i << " y=" << y << " z=" << z << endl;
        }
    }
}

int main(int argc, char *argv[]) {
    getResult();
    return 0;
}