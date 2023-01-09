#include <stdio.h>
#include <math.h>

int isPrime (int n)
{
	for (int i = 2 ; i <= sqrt(n) ; i++)
		if (n % i == 0)
			return 0;
	return 1;		
}

int SuperPrime (int n)
{
	if (n < 10 )
		return isPrime(n);
	if (!isPrime (n))
		return 0;
	return SuperPrime (n/10);		
}

int main ()
{
	int n ;
	printf ("n = ");
	scanf ("%d", &n);
	if (SuperPrime(n))
		printf ("%d la so sieu nguyen to",n);
	else printf ("%d khong la so sieu nguyen to",n);
	printf ("\n");
	return 0;	
		
}