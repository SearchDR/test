#include "middle.h"
int itc_mirror_count(long long number){
int count = 0;
if(number<0)
    number = -number;
long long i = 1;
while(i<=number){
    if(itc_mirror_num(i))
        count++;
    i++;
}
return count;
}
