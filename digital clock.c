#include <stdio.h>
#include <time.h> //for sleep() function
#include <unistd.h>
#include <stdlib.h>
 
int main()
{
int n;

printf("Enter 1 for Digital Stopwatch\n");
printf("Enter 2 for Digital clock\n \n");


 
scanf(“%d”,&n);
if (n>2||n<0)
{
    printf("invalid option");
}
else

if(n==1){

    int hour, minute, second;
     
    hour=minute=second=0;
    int h,m,s;

    printf("\n \n Enter the time where you want to stop\n");
    printf("\n");
     scanf("%d",&h);
    printf(":\n");
     scanf("%d",&m);
    printf(":\n");
    scanf("%d",&s);
     s=s+1;
   while(1)
    { 
                  
          if((h>25||h<0) || (m>60||m<0) ||  (s>60||s<0)){
             
             printf("invalid");
            
             break;
             
         }
     
        if((hour!=h) || (minute!=m) || (second!=s)){
        //clear output screen
        system("clear");
         
        //print time in HH : MM : SS format
        printf("%d : %d : %d \n",hour,minute,second);
         
         //clear output buffer in gcc
        fflush(stdout);
         
         //increase second
        second++;
 
        //update hour, minute and second
        if(second==60){
            minute+=1;
            second=0;
        }
        if(minute==60){
            hour+=1;
            minute=0;
        }
        if(hour==24){
            hour=0;
            minute=0;
            second=0;
        }
         
    
        }
        
       sleep(1);
    }
 }



else{
                   
                   int hour, minute, second;
                    int h,m,s;

                   
              
                   
         printf("\n \n Enter the time from where digi clock should start\n");
                       
                    printf("  \n enter hour , minute and seconds respectively\n");
                    scanf("%d",&hour);
                  
                  
                
                       
                    printf(":\n");
                    scanf("%d",&minute);
    
                     printf(":\n");
                     scanf("%d",&second);
                     
                    
                     
                    
                   
                    
           while(1)
            {
                if (hour<0||minute<0||second<0)
                {
             
             printf("invalid");
            
             break;
                }
                if((hour!=h) || (minute!=m) || (second!=s))
         //clear output screen
                 system("clear");
                //print time in HH : MM : SS format
                 printf("%d : %d : %d \n",hour,minute,second);
         
                 //clear output buffer in gcc
                 fflush(stdout);
         
                  //increase second
                     second++;
 
                     //update hour, minute and second
        if(second==60){
             minute+=1;
            second=0;
        
        }
        if(minute==60){
            hour+=1;
            minute=0;
        }
        if(hour==24){
            hour=0;
            minute=0;
            second=0;
        }

        sleep(1);   //wait till 1 second
       }//bracketttt to end loop
 

      }//bracket to end else loop
     
    return 0;
}