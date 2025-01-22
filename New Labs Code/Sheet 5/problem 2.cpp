#include <iostream>
using namespace std;
int main()
{
    int a = 42;
    int b = 7;
    int c = 999;
    int *t = &a;
    int *u = NULL;
    cout << *t << endl;
    c = b;
    u = t;
    cout << c << endl;
    cout << *u << endl;
    a = 8;
    b = 8;
    cout << c << endl;
    cout << *t << endl;
    cout << *u << endl;
    *t = 123;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << *t << endl;
    cout << *u << endl;
    return 0;
}

/*
Memory tracing explanation:

1. Initial state:
   a = 42
   b = 7
   c = 999
   t -> points to a
   u -> NULL

2. Output sequence and operations:
   42    (*t prints a's value)
   7     (c gets b's value)
   42    (*u prints same as *t since u now points to a)
   7     (c remains unchanged)
   8     (*t shows new value of a)
   8     (*u shows same value since it points to a)
   123   (a shows new value after *t = 123)
   8     (b remains unchanged)
   7     (c remains unchanged)
   123   (*t shows current value of a)
   123   (*u shows same value since it points to a)

Key points:
- t and u point to the same memory location (variable a)
- Changes through *t affect the value of a
- b and c assignments are independent of pointer operations
*/