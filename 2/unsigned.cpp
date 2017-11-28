#include <stdio.h>

int main(void)
{
	unsigned int a = 200000000; // 2e8로도 표시 가능
	unsigned int b = 200000000; // 2e8로도 표시 가능

  printf("%d+%d은 %d입니다.\n", a, b, a + b);
  
  return 0;
}
