//
//  main.c
//  05
//
//  Created by 이예림 on 10/2/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int answer = 59;
    int number;
    int trial = 0;
    
    do {
        printf("Guess a number :");
        scanf("%d", &number);
        
        trial=trial+1;
        
        if(number<answer)
        {
            printf("low!\n");
        }
        else if(number>answer)
        {
            printf("high!\n");
        }
        //else
        //{
            //printf("Congratulation! trials:%d\n", trial);
        //}
        
        
    } while (number!=answer); // 위 루프는 정답이 아닐때만 반복
    
    printf("Congratulation! trials:%d\n", trial);
        
    return 0;
}
