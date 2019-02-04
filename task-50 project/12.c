#include <stdio.h>

int main(void)
{
	int m;
	int k = 0;
	scanf("%d", &m);
	while (m != 1) {
		if ((m % 2) == 0) {
			m = (m / 2);
			k++;
		}else{
			m = ((3 * m + 1) / 2);
			k++;
		}
	}
		printf("%d", k);
	return 0;
}
