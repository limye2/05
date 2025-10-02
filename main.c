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
    
    if(number<0)
    {
        number = -number;
    }
    
    printf("절대값은 %d 입니다.\n", number);
    
    return 0;
}
