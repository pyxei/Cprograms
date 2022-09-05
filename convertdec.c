#include <stdio.h>
#include <math.h>

int main()
{
  printf ("Please enter a number from 0 to 255");

  int value = 0;

  scanf("%d", &value);

  value / 128;
  printf (value = value % 128);

  value / 64;
  printf (value = value % 64);

  value / 32;
  printf (value = value % 32);

  value / 16;
  printf (value = value % 16);

  value / 8;
  printf (value = value % 8);

  value / 4;
  printf (value = value % 4);

  value / 2;
  printf (value = value % 2);

  printf (value);


  return 0;

}
