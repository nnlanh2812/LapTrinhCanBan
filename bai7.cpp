#include	<stdio.h>
//ham tinh uoc chung lon nhat

int UCLN(int a, int b)
{
	int i;
	for(i=a; ; i++)

		if(a%i==0 && b%i==0)
			return i;

}



int main()
{
	int UCLN(int a, int b);
	int a, b;
	printf("\n Nhap so nguyen thu nhat: ");
	scanf("%d", &a);
	printf("\n Nhap so nguyen thu hai: ");
	scanf("%d", &b);
	printf("\n Uoc chung lon nhat cua %d va %d la: %d",a, b, UCLN(a, b));
	return 0;
	
}

