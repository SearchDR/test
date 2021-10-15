#include "middle.h"
int itc_sum_num(long long number){
int sum = 0;
if(number<0)
    number = -number;
while(number>0){
    sum += number % 10;
    number = number / 10;
}
return sum;
}
