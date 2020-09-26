#ifndef MATRIX2_H
#define MATRIX2_H

#include "matrix.h"

class Matrix2 : public Matrix
{
    public:
        Matrix2() = default;
        ~Matrix2() = default;
        virtual bool cmp(double a, double b) override
        {
            return a < b;
        }

};

#endif // MATRIX2_H
