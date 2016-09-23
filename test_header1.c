/*************************************************************************
	> File Name: test_header1.c
	> Author: 
	> Mail: 
	> Created Time: Fri 23 Sep 2016 09:42:29 AM CST
 ************************************************************************/

#include <stdio.h>
#include "test_header.h"

int test1()
{
    a++;
    b--;
    printf("%d\n", a);
    printf("%d\n", b);
    return a;
}
