#include <stdio.h>
#include <conio.h>


main()
{  
    clrscr();
      
    int num,sum=0;  
    for(num=1;num<=100;num=num+1)
    {  
        sum = sum +num; 
        printf(" %d\n",num);  
         
    }  
    printf("%d\n",sum);  
   getch();  
}  

