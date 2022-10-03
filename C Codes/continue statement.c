include <stdio.h>
int main ()
{
  int i = 1;
  for (;i<=10;i++)
  {
    if (i == 5)
    {
      continue;
    }
   printf("%d\n",i);
  }
 return 0;
}
