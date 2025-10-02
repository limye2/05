//
//  main.c
//  05
//
//  Created by 이예림 on 10/2/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int number;
    int sum=0;
    int i;
    
    printf("input a number : ");
    scanf("%d", &number);
        
    for(i=0; i<=number; i++)
    {
        sum=sum+i;
    }
    
    printf("The result is %d\n", sum);
    
    return 0;
}
