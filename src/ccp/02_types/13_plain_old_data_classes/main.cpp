/**
 * Classes are user-defined types that contain data and functions, and they’re
 * the heart and soul of C++.
 *
 * The simplest kind of classes are plain-old-data
 * classes (PODs). PODs are simple containers. Think of them as a sort of
 * heterogeneous array of elements of potentially different types. Each element of
 * a class is called a member.
 *
 * PODs have some useful low-level features: they’re C compatible, you can employ
 * machine instructions that are highly efficient to copy or move them, and they can
 * be efficiently represented in memory.
 */

#include <cstdio>

struct Book {
    char name[256];
    int year;
    int pages;
    bool hardcover;
};

int main() {
    Book neuromancer;
    neuromancer.pages = 271;
    printf("Neuromancer has %d pages.", neuromancer.pages);
}