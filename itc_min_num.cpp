#include "middle.h"
int itc_min_num(long long number){
int min = 9;
if(number<0)
    number = -number;
while(number>0){
    if(min >= number % 10)
        min = number % 10;
    number = number / 10;
}
return min;
}
