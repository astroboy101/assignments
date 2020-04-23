#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{int n,i,j;
printf("enter no of inputs: ");
scanf("%d",&n);
char a[n][100],k,l[100];
for(i=0;i<n;i++)
scanf("%s",a[i]);
for(i=0;i<n-1;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(isalpha(a[i][0])&& isalpha(a[j][0])&& a[i][0]>a[j][0])
        {
            k=a[i][0];
            a[i][0]=a[j][0];
            a[j][0]=k;
        }
        else
        {
            if(isalpha(a[i][0])==0&& isalpha(a[j][0])==0&& atoi(a[i])<atoi(a[j]))
            {
                strcpy(l,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],l);
            }
        }
    }
}
for(i=0;i<n;i++)
    printf("%s,",a[i]);
}
/*works for only alphabetical charactes(if it has only one variable then that can be called as character right.....)
and it wont check for errors in case of other characters i mean special charcters....fgdfgbl.*/

