#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[1000],c[1000],temp;
    scanf("%s",a);
    int n=strlen(a),i,j,k;
    for(i=0;i<n;i++){
        if(a[i]>='a'&&a[i]<='z')
            b[i]=a[i]-32;
        else if(a[i]>='A'&&a[i]<='Z')
            b[i]=a[i]+32;
        else
            b[i]=a[i];
    }
    for(i=0;i<n;i++) printf("%c", b[i]);
    getchar();
    while(1){
        temp=getchar();
        if(temp==EOF)
            break;
        if(temp==' ')
            continue;
        if(temp!=a[0]&&temp!=b[0])
            putchar(temp);
        else if(temp==a[0]||temp==b[0]){
            k=0;
            c[k]=temp;
            for(i=1;i<n;i++){
                temp=getchar();
                k++;
                if(temp==a[k]||temp==b[k])
                    c[k]=temp;
                else if(temp!=a[k]&&temp!=b[k]){
                    for(j=0;j<k;j++)
                        putchar(c[j]);
                    if(temp!=' ')
                        putchar(temp);
                    break;
                }
            }
        }
    }
    return 0;
}