#include <stdio.h>
#include "Fraction.h"

Fraction Fraction::Sum(const Fraction b)
{
	Fraction c;
	c.numerator = numerator*b.denominator + b.numerator*denominator;
	c.denominator = numerator + b.denominator;
	return c;
}

void Fraction::print()
{
	printf("%d/%d", numerator, denominator);
}
