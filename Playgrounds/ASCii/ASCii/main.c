//
//  main.c
//  ASCii
//
//  Created by 윤석영 on 2020/07/29.
//  Copyright © 2020 윤석영. All rights reserved.
//

#include <stdio.h>

int main(void) {
    char x;
    printf("insert any character\n");
    scanf("%s",&x);
    printf("The ascii code is %d\n",(int)x);
    return 0;
}
