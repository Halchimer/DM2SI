#pragma once

#include <iostream>

class Complex
{
    public :
        Complex(float Re, float Im);

        float Re() const;
        float Im() const;
        Complex Conj() const;

        Complex operator=(float const& real)
        {
            return Complex(real, 0);
        }
    
    private :
        float re;
        float im;
};

namespace ComplexUtils
{
    Complex Convert(float value)
    {
        return Complex(value, 0);
    }
}

const Complex i(0,1);