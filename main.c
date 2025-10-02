//
//  main.c
//  05
//
//  Created by 이예림 on 10/2/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a;
    int b;
    char op; //int로 받아도 가능
    int result=0;
    
    printf("enter the calculation : ");
    scanf("%d %c %d", &a, &op, &b);
        
    if(op=='+')
    {
        result = a+b;
    }
    else if(op=='-')
    {
        result = a-b;
    }
    else
    {
        printf("지원하지 않는 연산자 입니다.");
    }
    
    printf("=%d\n", result);
    
    return 0;
}
