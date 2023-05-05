#include <cstdio>

struct Taxonomist {
  Taxonomist() { printf("(no argument) \n"); }

  Taxonomist(char x) { printf("char: %c\n"); }

  Taxonomist(int x) { printf("int: %d\n"); }

  Taxonomist(float x) { printf("float: %f\n"); }
};

int main() {
  Taxonomist t1;
  Taxonomist t2{'c'};
  Taxonomist t3{65537};
  Taxonomist t4{6.02e23f};
  Taxonomist t5('g');
  Taxonomist t6 = {'1'};
  Taxonomist t7{};
  Taxonomist t8();
}
