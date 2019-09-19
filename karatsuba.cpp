#include <stdio.h>
#include <math.h>
 
int karatsuba(int x, int y);
int ndigit(int x, int y);
int leftHalf(int x, int n);
int rightHalf(int x, int n);
 
int main()
{
 	int x, y;
 	printf("Enter two numbers: ");
 	scanf("%d%d", &x, &y);
 	printf("%d * %d = %d\n", x, y, karatsuba(x, y));
}
 
int karatsuba(int x, int y)
{
 	if(x < 10 || y < 10)
 		return x * y;
 	
	int n = ndigit(x, y) / 2;
 	
	int a = leftHalf(x, n);
 	int b = rightHalf(x, n);
 	int c = leftHalf(y, n);
 	int d = rightHalf(y, n);
 
	int ac = karatsuba(a, c);
 	int bd = karatsuba(b, d);
 	int abcd = karatsuba((a + b), (c + d));
 
	return ac * pow(10, n * 2) 
			+ (abcd - ac - bd) * pow(10, n) 
			+ bd;
}
 
int ndigit(int x, int y)
{
	 int xdigit = 0, ydigit = 0;
 	
	do
 	{
 		++xdigit;
 		x /= 10;
 	}
 	while(x);
 
	do
 	{
 		++ydigit;
 		y /= 10;
 	}
 	while(y);
 	
	return (xdigit > ydigit) ? xdigit : ydigit;
}
 
int leftHalf(int x, int n)
{
 	return x / pow(10, n);
}
 
int rightHalf(int x, int n)
{
 	return x % (int)(pow(10, n));
}
