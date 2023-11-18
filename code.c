#include<stdio.h>
int main(){
    int i ;
    int ans1,ans2,ans3,ans4,ans5;
    int point1;
    printf("  Welcome to the Game \n\n");
    printf("> press 7 to start the game \n");
    printf("> press 0 to quit the game \n");
    scanf("%d",&i);
    if (i==7){
        printf("The Game has started\n\n");

    }
    else if(i==0){
        printf("The game has ended");
    }
    else{
        printf("invalid");

    }
    if(i==7){
        printf("1) which one is the first search engine in internet ?\n\n");
        printf("1) Goggle\n");
        printf("2) Archie \n");
        printf("3) Wais\n");
        printf("4) Altavista \n");
        
        printf("enter your answer :");
        scanf("%d",&ans1);
        if(ans1==2){
            printf("correct answer");
            point1=5;
            printf("you have scored %d point\n ",point1);
        }
        else {
            printf("wrong answer\n");
            point1=0;
            printf("you have scored 0 points\n");
        }
       

        printf("2) which one is the first web browser invented in 1990 \n\n");
        printf("1) Internet explorer\n");
        printf("2) mosaic\n");
        printf("3) MOzilla\n");
        printf("4) Nexus \n");

        printf("enter your answer :");
        scanf("%d",&ans2);
        if(ans2==4){
            printf("correct answer");
            point1=point1+5;
            printf("you have scored %d point\n ",point1);
        }
        else {
            printf("wrong answer\n");
           point1=point1+0;
            printf("you have scored 0 points\n");
        }
        

        printf("3) First computer virus is known as ? \n\n");
        printf("1) Rabbit\n");
        printf("2) Creeper virus\n");
        printf("3) elk cloner\n");
        printf("4) SCA virus \n");

        printf("enter your answer :");
        scanf("%d",&ans3);
        if(ans3==2){
            printf("correct answer");
            point1=point1+5;
            printf("you have scored %d point\n ",point1);
        }
        else {
            printf("wrong answer\n");
           point1=point1+0;
            printf("you have scored 0 points\n");
        }
        

        printf("4) Firewall in computer is used for ?\n\n");
        printf("1) security\n");
        printf("2) data transmission \n");
        printf("3) MOnitoring\n");
        printf("4) Authentication \n");

        printf("enter your answer :");
        scanf("%d",&ans4);
        if(ans4==1){
            printf("correct answer");
            point1=point1+5;
            printf("you have scored %d point\n ",point1);
        }
        else{
            printf("wrong answer\n");
            point1=point1+0;
            printf("you have scored 0 points \n");
        }
     
        printf("5) which of the following is not a database management software?\n\n");
        printf("1) Mysql\n");
        printf("2) Oracle \n");
        printf("3) cobal\n");
        printf("4) Sybase \n");

        printf("enter your answer :");
        scanf("%d",&ans5);
        if(ans5==3){
            printf("correct answer");
           point1=point1+5;
            printf("you have scored %d point\n ",point1);
        }
        else {
            printf("wrong answer\n");
            point1=point1+0;
            printf("you have scored 0 points \n");
        }
      

        printf(" \n\n Wohoo You Totally Scored %d Points ",point1);


   
    }
   
    return 0;

}