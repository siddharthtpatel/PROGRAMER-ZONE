/* 

Author: Siddharth Patel
Program: Tic-Tac-Toe game

*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

char box[9], a, b, result; //global variables

void ui()
{
        system("cls");
        printf("\n\t\tTIC TAC TOE");
        printf("\n\t\t~~~~~~~~~~~");
        printf("\n\nPlayer 1 symbol x");
        printf("\n\nPlayer 2 symbol o");
}

void print_boxes()//funtion to print the boxes with the updated values
{
        printf("\n\n\t_%c_|_%c_|_%c_",box[1],box[2],box[3]);
        printf("\n\t_%c_|_%c_|_%c_",box[4],box[5],box[6]);
        printf("\n\t %c | %c | %c \n",box[7],box[8],box[9]);
}

char logic()
    {
        
          // checking horizontal rows
          if((box[1]=='x' && box[2]=='x' && box[3]=='x') || (box[4]=='x' && box[5]=='x' && box[6]=='x') || (box[7]=='x' && box[8]=='x' && box[9]=='x')
          {
             ui();
             print_boxes();
             printf("\n\n\t\t PLAYER 1 WINS\n\n");
             result='o';
         }
         else if((box[1]=='o' && box[2]=='o' && box[3]=='o') || (box[4]=='o' && box[5]=='o' && box[6]=='o') || (box[7]=='o' && box[8]=='o' && box[9]=='o'))
         {
             ui();
             print_boxes();
             printf("\n\n\t\t PLAYER 2 WINS\n\n");
             result='o';
         }
         // checking vertical columns    
         else if ((box[1]=='x' && box[4]=='x' && box[7]=='x') || (box[2]=='x' && box[5]=='x' && box[8]=='x') ||( box[3]=='x' && box[6]=='x' && box[9]=='x'))
         {
             ui();
             print_boxes();
             printf("\n\n\t\t PLAYER 1 WINS\n\n");
             result='o';
         }
         else if ((box[1]=='o' && box[4]=='o' && box[7]=='o') || (box[2]=='o' && box[5]=='o' && box[8]=='o') || (box[3]=='o' && box[6]=='o' && box[9]=='o'))
         {
             ui();
             print_boxes();
             printf("\n\n\t\t PLAYER 2 WINS\n\n");
             result='o';
         }
         // checking diagnals    
         else if ((box[1]=='x' && box[5]=='x' && box[9]=='x') || (box[3]=='x' && box[5]=='x' && box[7]=='x'))
         {
             ui();
             print_boxes();
             printf("\n\n\t\t PLAYER 1 WINS\n\n");
             result='o';
         }
         else if ((box[1]=='o' && box[5]=='o' && box[9]=='o') || (box[3]=='o' && box[5]=='o' && box[7]=='o'))
         {
             ui();
             print_boxes();
             printf("\n\n\t\t PLAYER 2 WINS\n\n");
             result='o';
         }
        else if ( box[1]!='1' && box[2]!='2' && box[3]!='3' && box[4]!='4' &&  box[5]!='5' && box[6]!='6' && box[7]!='7' && box[8]!='8' && box[9]!='9' && result!='o')
         {
             ui();
             print_boxes();
             printf("\n\n\t\t THE MATCH IS DRAWN\n\n");
             result='o';
         }
         else
         {
             result='n';
         }

         return result;
    }

int main()
{

    box[1]='1';box[2]='2';box[3]='3';box[4]='4';box[5]='5';box[6]='6';box[7]='7';box[8]='8';box[9]='9';

    do{
        one:
        ui();
        printf("\n\n\t\t\t\tPlayer 1's turn");
        print_boxes();
        printf("\n\t\t\t\tWhere do you want to play: ");
        fflush(stdin);
        scanf("%c" ,&a);
        if(a=='1' && box[1]=='1'){box[1]='x';}
        else if(a=='2' && box[2]=='2'){box[2]='x';}
        else if(a=='3' && box[3]=='3'){box[3]='x';}
        else if(a=='4' && box[4]=='4'){box[4]='x';}
        else if(a=='5' && box[5]=='5'){box[5]='x';}
        else if(a=='6' && box[6]=='6'){box[6]='x';}
        else if(a=='7' && box[7]=='7'){box[7]='x';}
        else if(a=='8' && box[8]=='8'){box[8]='x';}
        else if(a=='9' && box[9]=='9'){box[9]='x';}
        else {goto one;}


        //GAME RESULT LOGIC
        result=logic();
        if(result=='o')
        {
            break;
        }

        two:
        ui();
        printf("\n\n\t\t\t\tPlayer 2's turn");
        print_boxes();
        printf("\n\t\t\t\tWhere do you want to play: ");
        fflush(stdin);
        scanf("%c" ,&b);
        if(b=='1' && box[1]=='1'){box[1]='o';}
        else if(b=='2' && box[2]=='2'){box[2]='o';}
        else if(b=='3' && box[3]=='3'){box[3]='o';}
        else if(b=='4' && box[4]=='4'){box[4]='o';}
        else if(b=='5' && box[5]=='5'){box[5]='o';}
        else if(b=='6' && box[6]=='6'){box[6]='o';}
        else if(b=='7' && box[7]=='7'){box[7]='o';}
        else if(b=='8' && box[8]=='8'){box[8]='o';}
        else if(b=='9' && box[9]=='9'){box[9]='o';}
        else {goto two;}


        //GAME RESULT LOGIC
        result=logic();
        if(result=='o')
        {
            break;
        }

     } while(result='n');


    return 0;
}
