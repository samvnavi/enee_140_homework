#include <stdio.h>

int main() 
{
#define LOWER   -100
#define UPPER   100
#define STEP    10
/*celcius to fahrenheit  for celsius = -100, -90, ... 0, 10, ... 100*/


int cel;
printf("celcius  fahrenheit\n");
for (cel = LOWER; cel <= UPPER; cel += STEP) {
printf("%7d  %10d\n",cel,((9*cel)/5) + 32);
   }   
}

