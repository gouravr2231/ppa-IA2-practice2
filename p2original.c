#include<stdio.h>

int input_side()
{
  int side;
  printf("Enter a side of triangle\n");
  scanf("%d",&side);
  return side;
}

int check_scalene(int a, int b, int c)
{
  int scalene;
  if(a != b && b !=c && a != c)
  return scalene;
}

void output(int a, int b, int c, int scalene)
{
  if(a != b && b !=c && a != c)
  printf("Triangle is scalene\n");
  else
  printf("Triangle is not scalene\n");
}

int main()
{
  int a, b, c, scalene;
  a = input_side();
  b = input_side();
  c = input_side();
  scalene = check_scalene(a, b, c);
  output(a, b, c, scalene);
  return 0;
}