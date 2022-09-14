#include<stdio.h>
int pass(int pass1);
int exit();
int canplay(int p, int mon);
int betting(int bet,int x,int y);
int inputmoney(int mon1);
void agefun(int a);
int main(){
    int b=0;
    while(b<1){
        int c=0;
        int age=0;
        int passin=0;
        int passcode=1234;
        int passing=0;
        int money=0;
        int money1=0;
        int betmoney=0;
        int number=0;
        int total1=0;
        int nextbet=0;
        int time=0;
        int totalmoney=0;
        char exitting= 'y';
        char ex;
        printf("Enter your age:");
        scanf("%d",&age);
        agefun(age);
        if(age<18){
            break;}
            printf("Enter your passcode:");
            scanf("%d",&passin);
            passing=pass(passin);
            if(passing==passcode){
                printf("How much do u want to save in ur account:");
                scanf("%d",&money1);
                money=inputmoney(money1);
                printf("Each time u play u will cost 100! \n");
                printf("How many time do u want to play:");
                scanf("%d",&time);
                totalmoney=canplay(time,money);
                printf("This is the money u have in ur account now: %d \n",totalmoney);
                while(c<time){
                printf("How much do u want to bet:");
                scanf("%d",&betmoney);
                if(betmoney<=totalmoney){
                printf("Enter your number:");
                scanf("%d",&number);
                total1=betting(number,betmoney,totalmoney);
                printf("This is your money now: %d \n",total1);
                totalmoney=total1;
                if(exit() == 'y'){
                    break;

                }
                    if (totalmoney==0){
                        printf("You can't play cause u don't have enough money in your account!\n");
                        break;
                    }
                }
                else{
                    printf("U can't bet because ur betting money is more than ur money in ur account!\n");

                }
                c++;
            }
        }
        b=b+1;

}
return 0;
}

void agefun(int a){
     if(a>=18){
        printf("Your are %d. Therefore u can enter game!\n Your passcode is 1234 \n",a);
    }else {
        printf("Your are %d .Therefore u can't enter game!\n",a);
    }
}

int inputmoney(int mon1){
    int control=0;
    int remoney=0;
    while(control<1){
        if(mon1>100){
            return mon1;
            control+=1;
        }else{
            printf("The money in your account must be more than 100!Reenter ur amount of money:");
            scanf("%d",&remoney);
            mon1=remoney;
        }
    }
}

int betting(int bet,int x,int y){
    switch(bet){
        case 1111: printf("WOW U WIN!\n");
                    x=y+(x*2);

        break;
        case 2222: printf("WOW U WIN!\n");
                    x=y+(x*3);

        break;
        case 3333: printf("WOW U WIN!\n");
                    x=y+(x*5);

        break;
        case 4444: printf("WOW U WIN!\n");
                    x=y+(x*10);

        break;
        default: printf("You lose!");
                 x=y-x;

        return x;
    }
}

int canplay(int p,int mon){
    int cost=100;
    int ans=0;
    int ans1=0;
    int replay=0;
    int limit=0;
    limit=mon/cost;
    ans=mon-(cost*p);
    if(mon<=cost*p){
            do{printf("Ur playing amount must be less than ur money in account! \n");
             printf("Enter the play time again:");
             scanf("%d",&replay);}
             while(replay>=limit);
             ans1=mon-(cost*replay);
             return ans1;}
    else{
    return ans;}
}

int exit(){
    char exit1;
    char yes='y';
    char no='n';
    char answer;
    printf("If u want to exit enter y!If u don't exit press n!");
    scanf(" %c",&exit1);
    if(exit1 == yes){
         answer=yes;
    }else {
        answer=no;}
    return answer;
}

int pass(int pass1){
    int i=0;
    int pa=0;
    while (pass1!=1234){
       printf("Your pass code is wrong!\n Enter your passcode:");
       scanf("%d",&pa);
       if(pa==1234){
        return pa;
        break;
       }
}
}
