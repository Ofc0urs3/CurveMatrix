#ifndef MATRIX_H
#define MATRIX_H

#define SIZE 3

#include <stdio.h>
#include <cstdlib>
#include <time.h>


class Matrix
{
    public:
        double *A[SIZE];

        Matrix();
        ~Matrix();

        void print(FILE* output = stdout);
        virtual bool cmp(double a, double b) = 0; // a ? b
        void func(FILE* output = stdout);

};



Matrix::Matrix()
{
    srand(time(0));
    for(int i = 0; i < SIZE; i++)
    {
        int stringLen = 1 + rand() % 10;
        A[i] = new double[stringLen + 2];

        A[i][0] = double(stringLen);
        for(int j = 1; j < stringLen + 1; j++)
        {
            A[i][j] = -25 + rand()%50;
        }
    }
}

Matrix::~Matrix()
{
    for(int i = 0; i < SIZE; i++)
    {
        delete [] A[i];
    }
}


void Matrix::print(FILE* output)
{
    for(int i = 0; i < SIZE; i++)
    {
        int stringLen = int(A[i][0]);

        for(int j = 1; j < stringLen + 1; j++)
        {
            fprintf(output, "|%-10.2f| " ,A[i][j]);
        }
        fprintf(output, "\n");
    }
    fprintf(output, "\n\n");
}


void Matrix::func(FILE* output)
{
    for(int i = 0; i < SIZE; i++)
    {
       double tmp = A[i][1];
       int stringLen = int(A[i][0]);

       for(int j = 1; j < stringLen + 1; j ++)
       {
           fprintf(output, "|%-10.2f| " ,A[i][j]);
           if(cmp(A[i][j], tmp))
           {
                tmp = A[i][j];
           }
       }
       A[i][stringLen + 1] = tmp;
       fprintf(output, "\x1b[31m|%-10.2f|\x1b[0m" ,A[i][stringLen + 1]);
       fprintf(output, "\n");
    }
}

#endif // MATRIX_H



