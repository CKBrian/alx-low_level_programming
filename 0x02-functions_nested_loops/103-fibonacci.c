#include <stdio.h>
/**
 */
int main(void) {
    // Write C code here
    long int i;
    long int fNum = 2, sNum = 1, fbSum;
    long int arr[] = {2};
    printf("%d, %d, ",sNum, fNum);

    while (fNum <= 4000000){
        for (i = 1;i <= 12 ;i++){
        fbSum = fNum + sNum;
        sNum = fNum;
        fNum = fbSum ;
        if (fNum < 4000000 && fNum % 2 == 0){
            printf("%ld, ", fbSum);
           arr[i] = fbSum;

        }
        else if (fNum <= 4000000 && fNum % 2 == 0)
        {
            printf("%ld", fbSum);
        }

        }
    }
    putchar ('\n');
     long int j;
        for (i = 0; i < 12; i++){
         printf("%d ", arr[i]);
    }

    return 0;
}
