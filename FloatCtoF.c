#include <stdio.h>

/*  print Celsius-Fahrenheit table
    for Celsius = 0, 20, ..., 300
*/

main(){
  float fahr, celsius;
  int lower, upper, step;
  lower = 0; /* lower limit of temperature table */
  upper = 300; /* upper limit of temperature table */
  step = 20; /* step size */
  celsius = lower;

printf("Celsius to Fahrenheit\n");

  while (celsius <= upper){
    fahr = celsius * (9.0/5.0) + 32.0;
    printf("%3.0f\t%6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
