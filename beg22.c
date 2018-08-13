#include <stdio.h>
#include<math.h>
int main(void) {
int a1,b,lcm,gcd;
scanf("%d %d",&a1,&b);
for(int i=2;i<=a1&&i<=b;i++)
{
	if(a1%i==0 && b%i==0)
	{
		gcd=i;
	}
}
printf("%d %d",gcd,gcd);

	return 0;
}
