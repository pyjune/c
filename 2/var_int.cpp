#include <stdio.h>

int main(void)
{
	int a = 2;	// 저장공간 a를 준비하고 2를 저장
	int b = 3;	// 저장공간 b를 준비하고 3을 저장
  int c;      // 저장공간 c를 준비 
  	
  c = a + b;	// a와 b에 저장된 값을 더해 
	printf("%d+%d은 %d입니다.\n", c);	// 출력

	return 0;
}
