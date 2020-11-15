#include <stdio.h>
#include "myMath.h"
#include "power.c"
#include "basicMath.c"
int main(int argc, char const *argv[]) {

  double x;
  printf("Please inset a real number: example 3.45\n");
  scanf("%lf",&x);

double ans= add(Exp(x),sub(Pow(x,3),2));
printf("The value of f(𝑥)=𝑒^𝑥+𝑥^3−2 at the point %.4f is: %.4f \n", x, ans);

double ans1=add( mul(3,x),mul(2,Pow(x,2)));
printf("The value of f(𝑥)=3x+2x^2 at the point %.4f is: %.4f \n", x, ans1);

double ans2=sub(div(mul(4,Pow(x,3)),5), mul(2,x));
printf("The value of f(𝑥)=(4x^3)/5-2x at the point %.4f is: %.4f \n", x, ans2);
  return 0;
}
