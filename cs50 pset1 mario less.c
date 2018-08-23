#include <cs50.h>
#include <stdio.h>

int main(){

int b;

    do{
        //get user input and check for condition
 b = get_int("enter number here : ");
    }
    while(b < 0||b > 23);


   for(int row = 0; row<b; row++){
       for(int col=0; col<b; col++){
           if(row + col < (b-1)){
               printf(" ");
           }else{
               printf("#");
           }

       }
       printf("\n");
   }
}



