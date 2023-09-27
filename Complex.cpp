#include "Complex.h"

Complex::Complex(float Re, float Im) : re(Re), im(Im)
{
}

float Complex::Re() const
{
    return re;
}

float Complex::Im() const
{
    return im;
}

Complex Complex::Conj() const
{
    return Complex(re, -im);
}

Complex operator+(Complex const& A, Complex const& B)
{
    return Complex(
        A.Re()+B.Re(),
        A.Im()+B.Im()
    );
}
Complex operator+(float A, Complex const& B)
{
    return Complex(
        A+B.Re(),
        B.Im()
    );
}
Complex operator+(Complex const& B, float A)
{
    return Complex(
        A+B.Re(),
        B.Im()
    );
}
Complex operator*(Complex const& A, Complex const& B)
{
    return Complex(
        A.Re() * B.Re() - A.Im() * B.Im(),
        A.Re() * B.Im() + A.Im() * B.Re()
    );
}
Complex operator*(float A, Complex const& B)
{
    return Complex(
        A*B.Re(),
        A*B.Im()
    );
}
Complex operator*(Complex const& B, float A)
{
    return Complex(
        A*B.Re(),
        A*B.Im()
    );
}
Complex operator-(Complex const& A, Complex const& B)
{
    return A + (-B.Re()) + (-B.Im()) * i;
}
Complex operator-(float A, Complex const& B)
{
    return  A + (-B.Re()) + (-B.Im()) * i;
}
Complex operator-(Complex const& B, float A)
{
    return B + (-A);
}

Complex operator/(Complex const& B, float A)
{
    return Complex(
        B.Re()/A,
        B.Im()/A
    );
}

Complex operator/(Complex const& A, Complex const& B)
{
    return (A * B.Conj())/(B.Re() * B.Re() + B.Im() * B.Im());
}

Complex operator/(float A, Complex const& B)
{
    return (A*B.Conj())/(B.Re() * B.Re() + B.Im() * B.Im());
}

bool operator==(Complex const& A, Complex const& B)
{
    if(A - B == Complex(0,0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

std::ostream& operator<<(std::ostream& os, Complex Z)
{
    if(Z.Re() != 0)
    {
        os << Z.Re();
    }
    if(Z.Im() != 0 && Z.Im() != 1)
    {
        if(Z.Re() != 0)
        {
           os << " + ";
        }
        os << Z.Im() << 'i';
    }
    else if(Z.Im() == 1)
    {
        os << 'i';
    }
    

    return os;
}
