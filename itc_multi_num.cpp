#include "middle.h"
long long itc_multi_num(long long number){
int sum = 1;
if(number<0)
    number = -number;
while(number>0){
    sum *= number % 10;
    number = number / 10;
}
return sum;
}

