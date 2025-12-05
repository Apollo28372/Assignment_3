#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

void clear_line(int line) {
    printf("\u001B[%d;1H\u001B[2K", line);  // Move to line start, erase line
    fflush(stdout);  // Ensure immediate display
}

int main() {
    srand(time(0));

    int x = 1,p=0,arr[20];
	short int Round=0,Time =5,random=rand()%3;              
    int firstobj = rand() % 100 , secondobj = rand() % 100 , thirdobj = rand() % 100;   // 0,1,2 lane

    while(1){last : {
	
		printf("--------------------------------\n---------The Memory Chain-------\n");
        if(p==0){
         	printf("  %c  Start the game  \n",175);
         	printf("      Exit the game");
		}
		else if(p==1){
         	printf("      Start the game  \n");
         	printf("  %c  Exit the game",175);
		}
		first :{  
		 	char ch1 = getch();
		 	if((ch1 == 'w'|| ch1 == 'W' )&& p > 0){
		 		p--;
			 }
			else if((ch1 == 's' || ch1 == 'S' )&& p < 1){
			 	p++;
			 }
			else if(ch1 == 32 && p==1){
			 	return 0;
			 }
			else if(ch1 == 32 && p==0){
		 	    Round =0;
			 
		 
		        system("cls");
		 		
			 	while(Round < 21){ system ("cls");Round++;Time = 5;
				printf("      Round : %d\n\n",Round);
        

        for(short int i=1;i<Round;i++){Time =5;
		clear_line(3);random=rand()%3;
		
        	if(i==1){
        		printf("Guess the 1st number : \n\n :");
			}
			else if(i==2){
				printf("Guess the 2nd number : \n\n :");
			}
			else if(i==3){
				printf("Guess the 3rd number : \n\n :");
			}
			else {
				printf("Guess the %dth number : \n\n :",i);
			}
			    firstobj=rand() % 100;
	            secondobj=rand() % 100;
	            thirdobj=rand() % 100;
	            thirdobj%=100;
	            if(random==0){
	            	firstobj=arr[i-1];
				}
				else if (random == 1){
					secondobj = arr[i-1];
				}
				else{
					thirdobj = arr[i-1];
				}
				printf("    %d    %d    %d\n\n",firstobj,secondobj,thirdobj);
				while(Time>-1){
				
				if (_kbhit()) {
            char ch = getch();

            if ((ch == 'a'||ch == 'A' ) && x > 0)        // LEFT arrow
                x--;

            if ((ch == 'd'|| ch == 'D' ) && x < 2)        // RIGHT arrow
                x++;
        }
				
				if(x==0){
        	printf("     %c     ",254);
		}
		else if(x==1){
			printf("           %c",254);
		}
		else{
			printf("                 %c",254);
		}
		printf("\n\n Time : %d seconds",Time);Sleep(1000);
		clear_line(7);Time--;
		
		
		}if(x==0){
			if(firstobj!=arr[i-1]){
				printf("\n\n         Game Over       ");
				Sleep(3000);
				system("cls");
				goto last;
			}
		}
		else if(x==1){
			if(secondobj!=arr[i-1]){
				printf("\n\n         Game Over       ");
				Sleep(3000);
				system("cls");
				goto last;
			}
		}
		if(x==2){
			if(thirdobj!=arr[i-1]){
				printf("\n\n         Game Over       ");
				Sleep(3000);
				system("cls");
				goto last;
			}
		}
		}
		system("cls");
		printf("      Round : %d\n\n",Round);
		Time = 5;
		clear_line(3);
		printf(" Select a number : \n\n");
	            firstobj=rand()%100;
	            secondobj=rand()%100;
	            thirdobj=rand()%100;
	    printf("    %d    %d    %d\n\n",firstobj,secondobj,thirdobj);
		
		while(Time>-1){
		
		if (_kbhit()) {
            char ch = getch();

            if ((ch == 'a'||ch == 'A' ) && x > 0)        // LEFT arrow
                x--;

            if ((ch == 'd'|| ch == 'D' ) && x < 2)        // RIGHT arrow
                x++;
        }

		
        if(x==0){
        	printf("     %c     ",254);
		}
		else if(x==1){
			printf("           %c",254);
		}
		else{
			printf("                 %c",254);
		}
		printf("\n\n Time : %d seconds",Time);Sleep(1000);
		clear_line(7);Time--;
    }
	if(x==0){
		arr[Round-1]=firstobj;
	}
	else if(x==1){
		arr[Round-1]=secondobj;
	}
	else{
		arr[Round-1]=thirdobj;
	}}}
	else{ goto first;
	}}
    system("cls");}}

    return 0;
}

