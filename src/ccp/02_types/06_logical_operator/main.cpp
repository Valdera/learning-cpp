#include <cstdio>

int main() {
    bool t = true;
    bool f = false;
    printf("!true: %d\n", !t);
    printf("true && false: 5d\n", t && f);
    printf("true && !false: 5d\n", t && !f);
    printf("true || false: 5d\n", t || f);
    printf("false || false: 5d\n", t || f);
}