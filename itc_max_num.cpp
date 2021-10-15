#include "middle.h"
int itc_max_num(long long number){
int max = 0;
if(number<0)
    number = -number;
while(number>0){
    if(max < number % 10)
        max = number % 10;
    number = number / 10;
}
return max;
}
