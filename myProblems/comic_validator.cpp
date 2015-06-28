#include "testlib.h"

int main() {
    registerValidation();
    int MAX = 1000000;
    int n = inf.readInt(1, MAX, "x");
    inf.readSpace();
    inf.readInt(1, MAX, "y");
    inf.readEoln();
    inf.readEof();
}
