#include <stdio.h>
int main(void) {
	int n, n2, arr[1000001] = { 0, }, count = 0;
	arr[1] = 1;

	for (int i = 2; i <= 260000; i++) {
		for (int j = 2; i * j <= 260000; j++) { // 안쪽 loop은 i * j 로 최대 범위를 정해둬서 arr범위 내로 사용하게 함. 
       							//123456 * 2까지니까 대략 260000으로 함.
			arr[i * j] = 1;
		}
	}

	
	while (1) {
		scanf("%d", &n);

		if (n == 0) break;
		
		n2 = n * 2;

		for (int i = n+1; i <= 2 * n; i++) {	// n은 포함하지 않는다고 명시됨
			if (arr[i] == 0) {
				count++;
			}

		}

		printf("%d\n", count);
		count = 0;
		n = 0;
	}

	return 0;
}