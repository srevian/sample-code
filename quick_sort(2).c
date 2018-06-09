#include<stdio.h>
void quick_sort(int[],int,int);

int main()
{
    int size,i,j,k;
    printf("\n Total no of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("\n Enter array elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);

    printf("\n Unsorted array is: ");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);

    quick_sort(arr,0,size-1);
    printf("\n\n after sorting sorted array is: ");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
    return 0;
}

void quick_sort(int arr[],int low,int high)
{
    int pivot,temp,i,j;
    if(low<high)
    {
        pivot=low;
        i=low;
        j=high;

        while(i<j)
        {
            while(arr[i]<=arr[pivot]&&i<=high)
                i++;

            while(arr[j]>arr[pivot]&&j>=low)
                j--;

            if(i<j)
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }
        temp=arr[j];
        arr[j]=arr[pivot];
        arr[pivot]=temp;;
        quick_sort(arr,low,j-1);
        quick_sort(arr,j+1,high);
    }
}
