#include <iostream>
using namespace std;

int main(){
    // Arithmetic operators
    // example: addition, subtraction, multiplication, division, modulus, increment, decrement
     int a = 10;
     int b = 5;
     cout << "a + b = " << a + b << endl; // Output: 15
     cout << "a - b = " << a - b << endl; // Output: 5
     cout << "a * b = " << a * b << endl; // Output: 50
     cout << "a / b = " << a / b << endl; // Output: 2
     cout << "a % b = " << a % b << endl; // Output: 0
     cout << "a++ = " << a++ << endl; // Output: 10 (post-increment)
     cout << "++b = " << ++b << endl; // Output: 6 (pre-increment)
     cout << "a-- = " << a-- << endl; // Output: 11 (post-decrement)
     cout << "--b = " << --b << endl; // Output: 5 (pre-decrement)


    // Assignment operators
    /**
     * Compound assignment operators combine an arithmetic operation with assignment. They include:
     * = (simple assignment)
     * += (add and assign)
     * -= (subtract and assign)
     * *= (multiply and assign)
     * /= (divide and assign)
     * %= (modulus and assign)
     * &= (bitwise AND and assign)
     * |= (bitwise OR and assign)
     * ^= (bitwise XOR and assign)
     * <<= (left shift and assign)
     * >>= (right shift and assign)
     */
    int c = 10;
    c += 5; // c = c + 5
    cout << "c += 5: " << c << endl; // Output: 15
    c -= 3; // c = c - 3
    cout << "c -= 3: " << c << endl; // Output: 12
    c *= 2; // c = c * 2
    cout << "c *= 2: " << c << endl; // Output: 24
    c /= 4; // c = c / 4
    cout << "c /= 4: " << c << endl; // Output: 6
    c %= 5; // c = c % 5
    cout << "c %= 5: " << c << endl; // Output: 1
    c &= 3; // c = c & 3
    cout << "c &= 3: " << c << endl; // Output: 1
    c |= 2; // c = c | 2
    cout << "c |= 2: " << c << endl; // Output: 3
    c ^= 1; // c = c ^ 1
    cout << "c ^= 1: " << c << endl; // Output: 2
    c <<= 1; // c = c << 1
    cout << "c <<= 1: " << c << endl; // Output: 4
    c >>= 1; // c = c >> 1
    cout << "c >>= 1: " << c << endl; // Output: 2


    // Comparison operators
    int x = 10;
    int y = 20;
    cout << "x == y: " << (x == y) << endl; // Output: 0 (false)
    cout << "x != y: " << (x != y) << endl; // Output: 1 (true)
    cout << "x > y: " << (x > y) << endl; // Output: 0 (false)
    cout << "x < y: " << (x < y) << endl; // Output: 1 (true)
    cout << "x >= y: " << (x >= y) << endl; // Output: 0 (false)
    cout << "x <= y: " << (x <= y) << endl; // Output: 1 (true)

    // Logical operators
    bool p = true;
    bool q = false;
    cout << "p && q: " << (p && q) << endl; // Output: 0 (false)
    cout << "p || q: " << (p || q) << endl; // Output: 1 (true)
    cout << "!p: " << (!p) << endl; // Output: 0 (false)
    cout << "!q: " << (!q) << endl; // Output: 1 (true)

    // Bitwise operators
    int m = 5; // 0101 in binary
    int n = 3; // 0011 in binary
    cout << "m & n: " << (m & n) << endl; // Output: 1 (0001 in binary)
    cout << "m | n: " << (m | n) << endl; // Output: 7 (0111 in binary)
    cout << "m ^ n: " << (m ^ n) << endl; // Output: 6 (0110 in binary)
    cout << "~m: " << (~m) << endl; // Output: -6 (in two's complement)
    cout << "m << 1: " << (m << 1) << endl; // Output: 10 (1010 in binary)
    cout << "m >> 1: " << (m >> 1) << endl; // Output: 2 (0010 in binary)
    return 0;
}
