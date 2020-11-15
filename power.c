#include "myMath.h"
double Exp(int x){
double result = 1;
double e=2.718;
int exp=x;
while (exp != 0) {
    result *= e;
    --exp;
}
return result;
}

double Pow(double x,int y){
  int base, exp;
  base=x;
  exp=y;
long long result = 1;
while (exp != 0) {
    result *= base;
    --exp;
}
return result;
}
