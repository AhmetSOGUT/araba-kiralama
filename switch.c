#include <stdio.h>


main(){


char tur;

int km,ucret,gun;
 
 printf("Arabanin turunu giriniz\n");
 
   tur=getchar();
   printf("Km ve gunu giriniz\n");
  scanf("%d  %d",&km,&gun);
  
 switch (tur)
 {
 case 'a':
 case 'A': ucret=gun*20+km*18;
 printf("ucret = %d",ucret);
    
    break;
 case 'b':
 case 'B': ucret=gun*32+km*22;
 printf("ucret = %d",ucret);
 break;

 case 's':
 case 'S': ucret=gun*43+km*28;
 printf("ucret = %d",ucret);
 break;
 
case 'p':
case 'P':ucret=gun*51+km*36;
 printf("ucret = %d",ucret);
break;

 default:printf("araba turunu dogru giriniz");


    break;
    
    }
 
 
 
 
 
 


}