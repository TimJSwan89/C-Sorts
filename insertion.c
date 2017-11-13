    /*
     * C Program to Implement Insertion Sort
     */
    #include <stdio.h>
    #define MAX 7
     
    void insertion_sort(int *);
     
    int main()
    {
        int a[MAX], i;
     
        printf("enter elements to be sorted:");
        for (i = 0;i < MAX;i++)
        {
            scanf("%d", &a[i]);
        }
        insertion_sort(a);
        printf("sorted elements:\n");
        for (i = 0;i < MAX; i++)
        {
            printf(" %d", a[i]);
        }
        return 0;
    }
     
    /* sorts the input */
    void insertion_sort(int * x)
    {
        int temp, i, j;
     
        for (i = 1;i < MAX;i++)
        {
            temp = x[i];
            j = i - 1;
            while (j >= 0 && temp < x[j])
            {
                x[j + 1] = x[j];
                j = j - 1;
            }
            x[j + 1] = temp;
        }
    }
