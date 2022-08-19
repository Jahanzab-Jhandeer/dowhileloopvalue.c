#include<stdio.h>
// do while loop take value form user
int main () {
    int n;
    printf("Enter th value :");
    scanf("%d" , &n);

    int i = 0;
    do{
        printf("%d\n" , i);
        i++;
    } while(i<=n);

return 0;
}