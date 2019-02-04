#include <stdio.h>

int main(void)
{
	int i, m;
	long long a1[10], a2[10], a3[10];
	while (scanf("%d", &m) != EOF) {
		for (i = 0; i < m; i++) {
			scanf("%lld", &a1[i]);
			scanf("%lld", &a2[i]);
			scanf("%lld", &a3[i]);
		}
		for (i = 0; i < m; i++) {
			if ((a1[i] + a2[i]) > a3[i]) {
				printf("Case #%d: true\n", i + 1);
			}
			else if((a1[i] + a2[i]) <= a3[i]){
				printf("Case #%d: false\n", i + 1);
			}
		}
	}
	return 0;
}
