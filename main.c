#include <stdio.h>
#include <math.h>

int main(void) {
  int liczba;
  int i;
  printf ("Wprowadź liczbę całkowitą:");
  scanf ("%d", &liczba);
  if (liczba<2)
  {
    printf ("%d nie jest liczbą pierwszą", liczba);
    return 0;
  }
  for(int i=2;i*i<=liczba;i++)
    {    
      if (liczba%i == 0)
      {
        printf ("%d nie jest liczbą pierwszą", liczba);
        return 0;
      }
    }
printf ("%d jest liczbą pierwszą", liczba);
return 0;
}