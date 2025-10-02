//
//  main.c
//  05
//
//  Created by 이예림 on 10/2/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int number;
    printf("정수 하나를 입력하시오 :");
    scanf("%d", &number);
    
    if(number>0)
    {
        printf("양수입니다.\n");
    }
    else if(number<0)
    {
        printf("음수입니다.\n");
    }
    else
    {
        printf("0 입니다.\n");
    }
    return 0;
}
