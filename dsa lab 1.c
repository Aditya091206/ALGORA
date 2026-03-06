#include <stdio.h>
#include<stdlib.h>
int main() {
    int*ptr,*ptr1;
    int n,i;
    n=7;

     ptr=(int*)calloc(n,sizeof(int));
     ptr1=(int*)malloc(n*sizeof(int));

     if (ptr==0){
         printf("memory not allocated");
     }

     else{
         for(i=0;i<n;i++){
             ptr[i]=i+1;
         }
     }
     printf("elements are");
     for(i=0;i<n;i++){
         printf("%d\n",ptr[i]);
     }

     n=12;
     ptr=realloc(ptr,n*sizeof(int));

     for(i=5;i<n;i++){
         ptr[i]=i+1;
     }
     for(i=0;i<n;i++){
         printf("%d\n",ptr[i]);
     }
     free(ptr);
     free(ptr1);

    return 0;
}
