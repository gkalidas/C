//reverse the array of n given elements

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i,j,temp;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    //arr1 = (int * )malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    for(i=0,j=num-1;i<num/2;i++,j--){
        temp = arr[i];
        arr[i]=arr[j];
        arr[j] = temp;
    }
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}

