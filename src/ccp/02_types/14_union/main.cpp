/**
 * The union is a cousin of the POD that puts all of its members in the same
 * place. You can think of unions as different views or interpretations of a
 * block of memory.
 *
 * They can be useful in some low-level situations, such as
 * when marshalling structures that must be consistent across architectures,
 * dealing with type-checking issues related to C/C++ interoperation, and
 * even when packing bitfields.
 *
 * Because all members of a union are in the same place, you can cause
 * data corruption very easily
 */

#include <cstdio>

union Variant {
    char string[10];
    int integer;
    double floating_point;
};

int main() {
    Variant v;
    v.integer = 42;
    printf("The ultimate answer: %d\n", v.integer);

    v.floating_point = 2.718218284;
    printf("Euler's number e: %f\n", v.floating_point);
    printf("A dumpster fire: %d\n", v.integer);
}