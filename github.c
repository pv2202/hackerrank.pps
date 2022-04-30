#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    float km,m,cm,feet,inches;
    scanf("%f",&km);
    m=1000*km;
    cm=100000*km;
    feet=3280.84*km;
    inches=39370.1*km;
    printf("%.2f m\n%.2f ft\n%.2f in\n%.2f cm",m,feet,inches,cm);
    return 0; 
}
