/*

Why is normal cin sometimes slow?

To understand Fast I/O properly, we need to understand the machinery behind: (cin, cout)

C++ has its own I/O system:
iostream
 ├── cin
 ├── cout
 ├── cerr
 └── clog

C has another I/O system:
stdio
 ├── scanf()
 ├── printf()
 ├── getchar()
 └── putchar()

Historically, C++ tries to maintain compatibility between these two systems.

For example:

cout << "Hello";
printf("World");

C++ wants the order of output to remain meaningful.

To support this, C++ streams are normally synchronized with C stdio streams.

That synchronization adds overhead.

----------------------------------------------------------------------------------------------------
ios::sync_with_stdio(false);

This tells C++:

Don't synchronize the C++ streams (cin, cout) with the C streams (scanf, printf).

This allows cin and cout to use their own buffering more efficiently.

So:

cin >> x;

can become significantly faster.
------------------------------------------------------------------------------------------------------
What synchronization actually means

By default:

ios::sync_with_stdio(true);

Conceptually:

C++ I/O
cin / cout
    │
    │ synchronization
    ▼
C I/O
scanf / printf

With:

ios::sync_with_stdio(false);

we essentially allow:
+-----------------------+--------------------+
│C++ I/O                │   C I/O            │
+-----------------------│--------------------│
│cin / cout             │  scanf / printf    │
│    │                  │       │            │
│    │ independent      │       │            │
│    ▼                  │       ▼            │
│ buffers               │   buffers          │
+----------------------+---------------------+
Less coordination → less overhead.

*/