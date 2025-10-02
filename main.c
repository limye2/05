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
    int result;
    
    printf("enter the calculation :");
    scanf("%d %c %d", &a, &op, &b);
    
    switch(op)
    {
        case '+':
            result = a+b;
            break;
            
        case '-':
            result = a-b;
            break;
            
        default:
            printf("지원하지 않는 연산자입니다.\n");
    }
    
    printf("=%d\n", result);
    
    return 0;
}
