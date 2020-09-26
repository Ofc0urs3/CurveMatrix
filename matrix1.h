#ifndef MATRIX1_H
#define MATRIX1_H

#include "matrix.h"
#include "math.h"

class Matrix1: public Matrix
{

    public:
        Matrix1() = default;
        ~Matrix1() = default;
        virtual bool cmp(double a, double b) override
        {
            return fabs(a) > fabs(b);
        }

};

#endif // MATRIX1_H
