#include	<stdio.h>
int KT(int n)
{
int i, tong=0;
for(i=1;i<n;i++)
if(n%i==0 )
tong=tong+i;
 if(tong==n)
return 1;
else
return 0;}
int main()
{
	int n;
	printf("\n nhap vao mot so nguyen:");
	scanf("%d",&n);
	int KQ = KT(n);
	if(KQ==1)
	printf("\n %d la so hoan hao:",n);
	else
	printf("\n %d khong la so hoan hao:",n);
	return 0;
}
