//
//  main.c
//  setburger
//
//  Created by 윤석영 on 2020/07/29.
//  Copyright © 2020 윤석영. All rights reserved.
//

#include <stdio.h>
int compare(int array[], int len)
{
    if(len == 1)
        return array[0];
    if(len == 2)
    {
        if(array[0] < array[1])
            return array[0];
        else
            return array[1];
    }
    if(len == 3)
    {
        if(array[0] < array[1])
        {
            if(array[0] < array[2])
                return array[0];
            else if(array[1] < array[2])
                return array[1];
            else
                return array[2];
        }
        else
        {
            if(array[1] < array[2])
                return array[1];
            else if(array[0] < array[2])
                return array[0];
            else
                return array[2];
        }
    }
    return 0;
}


int main(void){
    int burger[3], beverage[2];
    int cheap_burg, cheap_bever, set;
    scanf("%d %d %d %d %d", &burger[0], &burger[1], &burger[2], &beverage[0], &beverage[1]);
    cheap_burg = compare(burger, 3);
    cheap_bever = compare(beverage, 2);
    set = cheap_burg + cheap_bever - 50;
    printf("%d", set);
    
}
