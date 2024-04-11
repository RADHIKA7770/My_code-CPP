// 1. This is the worst answer among all, but still a valid answer. We can use one of the C++ specific keywords as variable names. The program won’t compile in C++, but would compiler in C.
#include <stdio.h>
int main(void)
{
    int new = 5; // new is a keyword in C++, but not in C
    printf("%d", new);
}
//2. In C++, it is a compiler error to call a function before it is declared. But in C, it may compiled\

#include <stdio.h>
int main()
{
    foo(); // foo() is called before its declaration/definition
}

int foo()
{
    printf("Hello");
    return 0;
}
// 3. In C++, it is compiler error to make a normal pointer to point a const variable, but it is allowed in C.
#include <stdio.h>

int main(void)
{
    int const j = 20;

    /* The below assignment is invalid in C++, results in error
       In C, the compiler *may* throw a warning, but casting is
       implicitly allowed */
    int *ptr = &j; // A normal pointer points to const

    printf("*ptr: %d
", *ptr); 
  
    return 0;
}
// 4. In C, a void pointer can directly be assigned to some other pointer like int *, char *. But in C++, a void pointer must be explicitly typcasted.
#include <stdio.h>
int main()
{
    void *vptr;
    int *iptr = vptr; // In C++, it must be replaced with int *iptr=(int *)vptr;
    return 0;
}

// 5) Following program compiles & runs fine in C, but fails in compilation in C++. const variable in C++ must be initialized but in c it isn’t necessary. Thanks to Pravasi Meet for suggesting this point.

#include <stdio.h>
int main()
{
    const int a; // LINE 4
    return 0;
}
// 6. C++ does more strict type checking than C. For example the following program compiles in C, but not in C++. In C++, we get compiler error “invalid conversion from ‘int’ to ‘char*'”. Thanks to Pravasi Meet for adding this point.
#include <stdio.h>
int main()
{
    char *c = 333;
    printf("c = %u", c);
    return 0;
}