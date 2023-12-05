#include <stdio.h>
#include <limits.h>

int main()
{
  int n, k, a;
  scanf("%d %d %d", &n, &k, &a);

  long long result = (long long)((n * k) / a);

  if (result >= INT_MIN && result <= INT_MAX)
  {
    printf("int\n");
  }
  else if (result >= LLONG_MIN && result <= LLONG_MAX)
  {
    printf("long long\n");
  }
  else
  {
    printf("double\n");
  }

  return 0;
}
