The Polynomial program, asks the user to input a polynomial order n>=1 and value x, 
at which they wish to approximate f(x)=exp(x) with the corresponding truncated Taylor series expansion. 
On completion, the estimates and absolute errors for truncations corresponding to polynomial orders <=n  
are printed to the screen, with the last printed line (marked by "<<< User's estimate") corresponding to the user's request.

The Array allocation program uses some basic principles of dynamic array allocation. 
The user is asked to input an array size . Within the program, allocatearray function allocates 
a memory block of appropriate size for the array. 
The corresponding array is passed into fillwithones function by reference, which initialises all 
the entries to 1. The resultant array is printed to the screen with printarray and ultimately 
the memory is freed and the corresponding pointer is set to NULL.