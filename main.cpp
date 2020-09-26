#include "matrix1.h"
#include "matrix2.h"

int main()
{
    Matrix1 myMatrix1;
    printf("Matrix1 before function:\n");
    myMatrix1.print();

    printf("Matrix1 after function:\n");
    myMatrix1.func();
    printf("\n\n");

    Matrix2 myMatrix2;
    printf("Matrix2 before function:\n");
    myMatrix2.print();

    printf("Matrix2 after function:\n");
    myMatrix2.func();

    return 0;
}


