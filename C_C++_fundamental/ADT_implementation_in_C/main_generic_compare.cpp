//
// Created by zwpdbh on 2018/8/26.
//

/**Generic function to determine the larger of two values referenced as void pointers.
 * Using pointer to function*/
void *larger(void *dataPtr1, void *dataPtr2, int (*ptrToComFun)(void *, void *))
{
    if ((*ptrToComFun)(dataPtr1, dataPtr2) > 0) {
        return dataPtr1;
    } else {
        return dataPtr2;
    }
}

#include <stdio.h>
#include <stdlib.h>

int compare(void *ptr1, void *ptr2);

int main(int argc, char *argv[]) {
    int i = 7;
    int j = 8;
    int result;

    result = (*(int *) larger(&i, &j, compare));

    printf("Larger value is: %d\n", result);
    return 0;
}

/**The function used to compare.
 * Because we intend to compare to integer, we cast void * to int *. */
int compare(void* ptr1, void* ptr2) {
    if ((*(int *)ptr1) >= (*(int *)ptr2)) {
        return 1;
    } else {
        return -1;
    }
}