#include <stdio.h>

int GetSet( int [] ) ;

int main() {
    int *data, num ;
    num = GetSet( &data ) ;
    return 0 ;
}

int GetSet(int a[]){
    printf("Number Main : ");
    scanf("%d" , &a[0]);

    for (int i = 1; i <= a[0]; i++)
    {
        printf ("Number Data [%d] : " , i );
        scanf("%d" , &a[i]);
    }

    printf("Number Element : %d\n" , a[0]);
        for (int i = 1; i <= a[0]; i++)
        {
            printf("| %d |" , a[i]);
        }
        
    return a;
}
