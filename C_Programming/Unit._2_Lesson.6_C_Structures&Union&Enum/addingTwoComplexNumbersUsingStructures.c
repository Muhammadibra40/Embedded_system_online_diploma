#include <stdio.h>
#include <stdlib.h>

typedef struct complex
{
	double m_R;
	double m_I;
}SComplex;

SComplex ReadComplex(char name[])
{
	SComplex num;

	printf("Enter %s value(Real +j Img): ",name);
	fflush(stdin);  fflush(stdout);
	scanf("%lf +j %lf",&num.m_R,&num.m_I);

	return num;
}

SComplex AddComplex(SComplex a, SComplex b)
{
	SComplex result;

	result.m_R = a.m_R + b.m_R;

	result.m_I = a.m_I + b.m_I;

	return result;
}
int main(void) {

	SComplex x,y,result;

	x = ReadComplex("x");
	y = ReadComplex("y");

	result = AddComplex(x,y);

	printf("The result = %.2lf +j(%.2lf)",result.m_R,result.m_I);

	return 0;
}