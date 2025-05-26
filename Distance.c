#include <stdio.h>

int main(){
  int meeter;
  printf("Please Distance in feet to convert into Metter:  ");
  scanf("%d", &meeter);
  printf("%d feet is %f Meters", meeter, meeter/0.3048);
  return 0;
}