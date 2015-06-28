#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc, argv,1);

    int MAX = 1000000;
    int x , y;
    for (int i = 0; i < 9; ++i){
        x = rnd.next(1, MAX);
        y = rnd.next(1, MAX);
        if(x < y)
            break;
    }
    cout<< x<<" "<<y<<endl;
    return 0;
}
