#include "middle.h"
int itc_second_max_num(long long number){
int max = itc_max_num(number);
int second_max = 0;
int second;
if(number<0)
    number = -number;
while(number>0){
    if(second_max < number % 10 && number % 10 != max)
        second_max = number % 10;
    if(number % 10 == max)
        max = 10;
    number = number / 10;
}
return second_max;
}
