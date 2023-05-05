/**
 * Using braces {} to initialize a variable is, unsurprisingly, called braced
 * initialization. Part of the reason C++ initialization syntax is such a mess is
 * that the language grew out of C, where object life cycles are primitive, into a
 * language with a robust and featureful object life cycle.
 *
 * Language designers incorporated braced initialization into modern C++ to help smooth over
 * the sharp corners this has caused in the initialization syntax. In short, no
 * matter the object’s scope or type, braced initialization is always applicable,
 * whereas the other notations are not
 */

int main() {
    int e = 42;    // Initialized to 42
    int f{42};     // Initialized to 42
    int g = {42};  // Initialized to 42
    int h(42);     // Initialized to 42
}