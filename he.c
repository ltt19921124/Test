#include <stdio.h>

int main(){

	int n;
	int sum = 0;
	scanf("%d",&n);

	for (int i = 0; i <= n; ++i)
	{
		/* code */
		sum += i;
	}
	printf("1到%d的和为：%d\n",n,sum);
	return 0;
}