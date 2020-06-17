#include <stdio.h>
int main()
{
    int arr1[100];
    int n, i, j, tmp,suma=0,sumb=0,term,count=0;
    scanf("%d",&term);
    while(count<term){
            count++;
    scanf("%d", &n);

       for(i=0;i<n;i++)
            {
          scanf("%d",&arr1[i]);
        }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr1[j] <arr1[i])
            {
                tmp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = tmp;
            }
        }
    }
    for(i=0; i<n/2; i++)
    {
        suma=suma+arr1[i];
    }
    for(i=n/2; i<n; i++)
    {
        sumb=sumb+arr1[i];
    }

            printf("%d\n",sumb-suma);
            suma=0;
            sumb=0;

    }
    return 0;
}
