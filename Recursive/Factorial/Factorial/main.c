//
//  main.c
//  Factorial
//
//  Created by 윤석영 on 2020/07/29.
//  Copyright © 2020 윤석영. All rights reserved.
//

#include <stdio.h>

int factorial(int n)
{
    if(n==1)
        return 1;
    else
        return n*factorial(n-1);
}

int main(void) {
    int n;
    scanf("%d",&n);
    printf("%d\n",factorial(n));
    return 0;
}
