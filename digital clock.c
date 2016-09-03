#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
int s,p;
int i,a=0,b=0,c=0;
void delay (unsigned int secs) {
    int Time = time(0) + secs;     // Get finishing time.
    while (time(0) < Time);    // Loop until it arrives.
}
int edit ();
int timer (){
     
    static int i,ch=0;
    while(1)
    {
        //edit ();
    //  char a[9]={"00:00:00"};
        printf("\n\n\t\t\tTIME : %02d:%02d:%02d\n\n\n",a,b,c);
        delay (1);
        c++;
        if (c==60){
            c=0;
            b++;
        }
        if (b==60){
            b=0;
            a++;
        }
        if (a==24){
            a=0;
            b=0;
            c=0;
        }
        printf("\n\n\n");
        if (!s)
        edit ();
        system("cls");
 
    }
}
int edit (){
        char ch[8];
        printf("1.Set the time\n2.continue\nenter your choice :");
        int z = getch();
        if (z==49){
            printf("\nenter the new time :");
            gets(ch);
            a=(ch[0]-48)*10+(ch[1]-48);
            b=(ch[3]-48)*10+(ch[4]-48);
            c=(ch[6]-48)*10+(ch[7]-48);
            s++;
            }
        else if (z==50){
            s++;
            return 1;
        }
        return 1;
}
 
int main ()
{
    //edit();   
    timer();
     
}
