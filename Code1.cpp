#include "Fraction.h"
#include <stdio.h>
#include <iostream>

int main()
{
	Fraction a;
	a.numerator = 5;
	a.denominator = 7;
	Fraction b;
	b.numerator = 3;
	b.denominator = 6;
	Fraction c = a.Sum(b);
	c.print();
}
