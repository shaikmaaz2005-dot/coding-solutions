#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
float x,y,z,w;
scanf("%d %d ",&a,&b);
scanf("%f  %f",&x, &y);

c=a+b;
d=a-b;

z=x+y;
w=x-y;

printf("%d %d\n",c,d);
printf("%.1f %.1f",z,w);
    

    
    return 0;
}
