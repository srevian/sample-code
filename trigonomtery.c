#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,r,h,b,a,c,choice,sp;
    float area,cir;
    printf("\n enter choice:\n 1 for circle\n 2 for square\n 3 for rectangle\n 4 for triangle\n 5 for trapizotal");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
         { 
               printf("\n enter specific choice:\n 11 for area\n 12 for circumference");
               scanf("%d",&sp);
               switch(sp)
               {
               case 11:
                    {
                       printf("\n enter radius of the circle: ");
                       scanf("%d",&r);
                       area=(3.14*r*r);
                       printf("\n area is:%f",area);
                       break;
                    }
               case 12:
                    {
                       printf("\n enter radius of the circle: ");
                       scanf("%d",&r);
                       cir=(2*3.14*r);
                       printf("\n circumference is:%f",cir);
                       break;
                    }
               
         }
         }
    case 2:
         {
               printf("\n enter specific choice:\n 11 for area\n 12 for circumference");
               scanf("%d",&sp);
               switch(sp)
               {
               case 11:
                    { 
                         printf("\n enter length of arm");
                         scanf("%d",&a);
                         area=a*a;
                         printf("\n area is :%f",area);
                         break;
                    }
               case 12:
                    {
                         printf("\n enter length of arm");
                         scanf("%d",&a);
                         cir=4*a;
                         printf("\n circumference is:%f",cir);
                         break;   
                    }
         }
         }
    case 3:
         {
              printf("\n enter specific choice:\n 11 for area\n 12 for circumference");
              scanf("%d",&sp);
              switch(sp)
              {
              case 11:
                   {
                        printf("\n enter length and bredth");
                        scanf("%d%d",&x,&y);
                        area=x*y;
                        printf("area is :%f",area);
                        break;
                   }
              case 12:
                   {
                        printf("\n enter length and bredth");
                        scanf("%d%d",&x,&y);
                        cir=(2*(x+y));
                        printf("\n circumference is:%f",cir);
                        break;
                   }
              
         }
         }
     case 4:
          {
              printf("\n enter specific choice:\n 11 for area\n 12 for circumference");
              scanf("%d",&sp);
              switch(sp)
              {
              case 11:
                   {
                        printf("\n enter all length of arms(h for height,b for base,a&c are another arms)");
                        scanf("%d%d%d%d",&a,&b,&c,&h);
                        area=((1/2)*h*b);
                        printf("area is :%f",area);
                        break;
                   }
              case 12:
                   {
                        printf("\n enter all length of arms(h for height,b for base,a&c are another arms)");
                        scanf("%d%d%d%d",&a,&b,&c,&h);
                        cir=(a+b+c);
                        printf("\n circumference is:%f",cir);
                        break;
                   }
          }
          }
          }                  
                        getch();
                        return 0;
}          
                        
