//// MemoryAndPointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
////
//
//#include <iostream>
//#include <cmath>
//
//
//using std::cout;
//using std::endl;
//
//void foo() {
//    int d = 4;
//    cout << "d: " << &d << endl;
//}
//
//
//int main()
//{
//    //int *numPtr = new int;
//    ////int pointer (numPtr) will be on the stack
//    ////new int will be on the heap
//    //// stack memory will point to heap memory
//
//    //cout << "*numPtr: " << *numPtr << endl; //points to the heap (value), will be a random number
//    //cout << " numPtr: " << numPtr << endl; //address of heap memory, will be a low number 
//    //cout << "&numPtr: " << &numPtr << endl; //address is on stack, will be a high number
//
//    //*numPtr = 42;
//    //cout << "numPtr assigned 42." << endl; //heap value will be 42
//
//    //cout << "*numPtr: " << *numPtr << endl;
//    //cout << " numPtr: " << numPtr << endl; // Visual Studio may allocate memory differently
//    //cout << "&numPtr: " << &numPtr << endl; //
//
//
//    //int a = 1;
//    //int b = 2;
//    //int c = 3;
//    //
//    //cout << "a: " << &a << endl;
//    //cout << "b: " << &b << endl;
//    //cout << "c: " << &c << endl;
//
//    //foo();
//
//    //int *e = new int;
//    //cout <<"e: " << &e <<endl;
//    
//
//    // Heap Memory Management
//
//    //int *p = new int;
//    //int *c = new int;
//
//    //*p = 42;
//    //*c = 3;
//
//    //delete p; //returning memory from the heap
//    //p = nullptr; //setting the pointer's address to 0x0
//    //delete c;
//    //c = nullptr;
//
//    //int i = 2;
//    //int* p = &i;
//
//    //cout << *p; // =2
//
//    // Puzzle # 1
//
//    //int i = 2, j = 4, k = 8;
//    //int* p = &i, * q = &j, * r = &k;
//
//    //k = i;
//    //cout << i << j << k << *p << *q << *r << endl;
//    //
//    //p = q;
//    //cout << i << j << k << *p << *q << *r << endl;
//
//    //*q = *r;
//    //cout << i << j << k << *p << *q << *r << endl;
//
//    // Puzzle # 2
//
//   // int* x = new int;
//   // int& y = *x; // y will be an alias for *x
//   // y = 4; // so *x = 4
//
//   // cout << &x << endl; // memory address of x, on stack
//   // cout << x << endl; // value of x, pointer to heap memory
//   // cout << *x << endl; // dereferenced contents of x, (= to y)
//
//
//   // cout << &y << endl; // same as x
//   // cout << y << endl; // value of y = 4
//   //// cout << *y << endl; won't work, becaue y is not a pointer
//
//    // Puzzle # 3
//
//    //int* p, * q;
//    //p = new int;
//    //q = p;
//    //*q = 8;
//    //cout << *p << endl; // 8
//
//    //q = new int;
//    //*q = 9;
//    //cout << *p << endl;
//    //cout << *q << endl;
//
//    // Puzzle # 4
//
//    //int* x;
//    //int size = 3;
//    //x = new int[size]; // creates an array in heap
//
//    //for (int i = 0; i < size; i++) {
//    //    x[i] = i + 3;
//    //}
//
//    //delete[] x;
//    //x = nullptr;
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//    return 0;
//}
//
//// Heap Memory
//// independent of the lifecycle of a function
//// starts at a low address and grows up
//// the only way to create heap memory in C++ is to use the new operator
//// the new operator returns a pointer to the memory storing the data (not an instance of the data itself)
//// new operator will always do these 3 things:
//// 1. Allocate memory on the heap for the dat structure
//// 2. Initialize the data structure
//// 3. Return a pointer to the start of the data structure
//// * the memory is only ever reclaimed by the system when the pointer is passed 
//// to the delete operator