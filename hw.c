//#include "ASA_Lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctime>
//#include <avg.h>
int loop=1;
void swap(int *x_p,int *y_p)
{
    int temp=*x_p;
    *x_p=*y_p;
    *y_p=temp;
}
int main(void)
{
    //here is init
    srand(time(0));

    while(loop==1){
    	int score_num;
    	printf("How many student?\n");
    	scanf("%d",&score_num);
    	int _score_mat[2][score_num+1];
    	//  _score_mat[0][X] is school number
    	//  _score_mat[1][X] is score
        for (int i = 1; i <= score_num; i++)
        {   
            /////////////////   if u want rand score                        /////////////////
            _score_mat[1][i]=rand()%100+1;
            printf("\nThe %d score is %d", i,_score_mat[1][i]);

            /////////////////   if u want input score by urself             /////////////////
            // printf("\nThe %d score is ",i);
            // scanf("%d",&_score_mat[1][i]);

            /////////////////   if u want rand school number                /////////////////
            _score_mat[0][i]=rand()%9000+1001;
            printf("\nThe %d school number is %d", i,_score_mat[0][i]);

            /////////////////   if u want input school number by urself     /////////////////
            // printf("\nThe %d school number is ",i);
            // scanf("%d",&_score_mat[0][i]);
        }
        for (int i = score_num; i >= 0; --i)
        {
            for (int j = 1; j < i; ++j)
            {   
                //i=4   j=123
                //i=3   j=12
                //i=2   j=1
                if(_score_mat[1][j]<_score_mat[1][j+1])
                {   
                    swap(&_score_mat[1][j],&_score_mat[1][j+1]);
                    swap(&_score_mat[0][j],&_score_mat[0][j+1]);

                }
            }
        }

        for (int k = 1; k <= score_num; ++k)
        {   

            printf("\nschool numer:%d student score:%d",_score_mat[0][k],_score_mat[1][k]);
        }
    //here is roop

    //roop end here
    printf("\ndo u want to continu?(y=1/n=0)\n");
    scanf("%d",&loop);
}}

/*
//////////////////////////////////
//////////////////////////////////
//#include "ASA_Lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <ctime>//for real rand
//#include <avg.h>
int loop=1;
int main(void)
{while(loop==1){
    //start here

    //end here
    printf("do u want to continu?(y=1/n=0)\n");
    scanf("%d",&loop);
}}
//////////////////////////////////
//////////////////////////////////

////////////////////////////////////////	exp4-2		////////////////////////////////////////
//#include "ASA_Lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctime>
//#include <avg.h>
int loop=1;
void swap(int *x_p,int *y_p)
{
    int temp=*x_p;
    *x_p=*y_p;
    *y_p=temp;
}
int main(void)
{
    //here is init
    srand(time(0));

    while(loop==1){
    	int score_num;
    	printf("How many student?\n");
    	scanf("%d",&score_num);
    	int _score_mat[2][score_num+1];
    	//  _score_mat[0][X] is school number
    	//  _score_mat[1][X] is score
        for (int i = 1; i <= score_num; i++)
        {   
            /////////////////   if u want rand score                        /////////////////
            _score_mat[1][i]=rand()%100+1;
            printf("\nThe %d score is %d", i,_score_mat[1][i]);

            /////////////////   if u want input score by urself             /////////////////
            // printf("\nThe %d score is ",i);
            // scanf("%d",&_score_mat[1][i]);

            /////////////////   if u want rand school number                /////////////////
            _score_mat[0][i]=rand()%9000+1001;
            printf("\nThe %d school number is %d", i,_score_mat[0][i]);

            /////////////////   if u want input school number by urself     /////////////////
            // printf("\nThe %d school number is ",i);
            // scanf("%d",&_score_mat[0][i]);
        }
        for (int i = score_num; i >= 0; --i)
        {
            for (int j = 1; j < i; ++j)
            {   
                //i=4   j=123
                //i=3   j=12
                //i=2   j=1
                if(_score_mat[1][j]<_score_mat[1][j+1])
                {   
                    swap(&_score_mat[1][j],&_score_mat[1][j+1]);
                    swap(&_score_mat[0][j],&_score_mat[0][j+1]);

                }
            }
        }

        for (int k = 1; k <= score_num; ++k)
        {   

            printf("\nschool numer:%d student score:%d",_score_mat[0][k],_score_mat[1][k]);
        }
    //here is roop

    //roop end here
    printf("\ndo u want to continu?(y=1/n=0)\n");
    scanf("%d",&loop);
}}
////////////////////////////////////////    exp4-1      ////////////////////////////////////////
//#include "ASA_Lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <ctime>//for real rand
//#include <avg.h>
int loop=1;
void swap(int *x_p,int *y_p)
{
    int temp;
    temp=*x_p;
    *x_p=*y_p;
    *y_p=temp;
}
int main(void)
{
    //here is init
    srand(time(0));
    int score_num;
    printf("How many score?\n");
    scanf("%d",&score_num);
    int score_mat[score_num+1];
    while(loop==1){
        for (int i = 1; i <= score_num; i++)
        {   
            //// if u want rand ////
            score_mat[i]=rand()%100+1;
            printf("\nThe %d score is %d", i,score_mat[i]);
            //// if u want input by urself ////
            // printf("\nThe %d score is ");
            // scanf("%d",&score_mat[i]);
        }
        for (int i = score_num; i >= 0; --i)
        {
            for (int j = 1; j < i; ++j)
            {   
                //i=4   j=123
                //i=3   j=12
                //i=2   j=1
                if(score_mat[j]<score_mat[j+1])
                {   
                    swap(&score_mat[j],&score_mat[j+1]);
                }
                printf("%d %d\n",i,j);
            }

        }

        for (int k = 1; k <= score_num; ++k)
        {
            printf(" %d ",score_mat[k]);
        }
    //here is roop

    //roop end here
    printf("do u want to continu?(y=1/n=0)\n");
    scanf("%d",&loop);
}}
////////////////////////////////////////    exp3-3      ////////////////////////////////////////
//#include "ASA_Lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <ctime>//for real rand
//#include <avg.h>
int loop=1;
float a=1,b=2,c=3,d=4,in_u;
float state_space(float);
int main(void)
{   printf("--part1--\n");
    while(loop=1){
    //start here
    printf("\na=%f,\nb=%f,\nc=%f,\nd=%f,\nu=",a,b,c,d);
    scanf("%f",&in_u);
    for (int i = 0; i < 10; ++i)
    {
        float y=state_space(in_u);
        printf("y=%f\n",y );
    }
    printf("do u want to continu?(y=1/n=0)\n");
    scanf("%d",&loop);
    printf("--part2--\n");
    printf("a=");
    scanf("%f",&a);
    printf("b=");
    scanf("%f",&b);
    printf("c=");
    scanf("%f",&c);
    printf("d=");
    scanf("%f",&d);
    //end here

}}
float state_space(float u)
{   float x_old,y;
    static float x=0;
    if(u==0){
        x=0;
        x_old=0;
        y=0;
    }
    else
    {
        x_old=x;
        x=x_old*a+b*u;
        y=c*x+d*u;
        return(y);
    }
}

////////////////////////////////////////    exp3-2      ////////////////////////////////////////
//#include "ASA_Lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <ctime>//for real rand
//#include <avg.h>
int loop=1;

void swap(int *x_p,int *y_p);
int main(void)
{while(loop==1){
    int a,b;
    printf("a=?\n");
    scanf("%d",&a);
    printf("b=?\n");
    scanf("%d",&b);
    swap(&a,&b);
    printf("a=%d\tb=%d\n",a,b);
    

}}
void swap(int *x_p,int *y_p)
{
    int temp;
    temp=*x_p;
    *x_p=*y_p;
    *y_p=temp;
}
////////////////////////////////////////    exp3-1      ////////////////////////////////////////
//#include "ASA_Lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <ctime>//for real rand
//#include <avg.h>
int loop=1;
float exp_function(float,int);
int main(void)
{while(loop==1){
    float in_base,out_ans;
    int in_exp;
    printf("what is ur base?(it can be float)\n");
    scanf("%f" , &in_base);
    printf("what is ur exp?(it must int)\n");
    scanf("%d" , &in_exp);
    out_ans=exp_function(in_base,in_exp);
    printf("%f is ur ans\n", out_ans);
    printf("do u want to continu?(y=1/n=0)\n");
    
    //loop=0;
    scanf("%d",&loop);
}}

float exp_function(float base,int n)
{
    float exp_ans=base;
    if (n==0)
    {
        return 1;
    }
    else{
        for(int i=1;i<n;i++){
            exp_ans=exp_ans*base;
        }
        return exp_ans;

    }

}
////////////////////////////////////////    exp2-4      ////////////////////////////////////////
//#include "ASA_Lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <ctime>//for real rand
//#include <avg.h>
int loop=1;
int main(void)
{
    printf("\n");
    int ans,i,j,flag;
    i=1;j=1,flag=0;
    printf("X\t");
    while(i<10)
    {   
        printf("%d\t",i);
        i++;
    }
    printf("\n");
    i=1;
    while(i<10)
    {   
        printf("%d\t",i);
        while(j<10)
        {   
            ans=i*j;
            printf("%d\t",ans);
            j++;
        }
        i++;
        j=1;
        printf("\n");
        
    }
}
////////////////////////////////////////    exp2-3      ////////////////////////////////////////
//#include "ASA_Lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <ctime>//for real rand
//#include <avg.h>
int loop=1;
int main(void)
{
    int ans;
    printf("\n\n\n");
    for (int i = 0; i < 10; i++)
    {   
        for (int j = 0; j < 10; j++)
        {
            if (i==0 && j==0)
            {   
                printf(" \t");
            }
            else if (i==0)
            {
                printf("%d\t",j );
            }
            else if (j==0)
            {
                printf("%d\t",i );
            }
            else
            {
                ans=i*j;
                printf("%d\t",ans );
            }
        }
        printf("\n");
        if(ans==10){return 0;}
    }
}
////////////////////////////////////////    exp2-1,2    ////////////////////////////////////////
//#include "ASA_Lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <ctime>//for real rand
//#include <avg.h>
int loop=1;
int main(void)
{
    char number[10];
    int q1,q2,ans,studentans,score;
    printf("what is your student number? \n");
    scanf("%s", number);
    score=0;
    for(int i=1;i<=10;i++)
    {   q1=rand()%10+1; 
        q2=rand()%10+1;
        ans=q1*q2;
        printf("q%d:%d * %d =?\n",i,q1,q2);
        scanf("%d",&studentans);
        if(ans==studentans)
        {   printf("correct\n");
            score=score+10;
        }
        else
        {   printf("not correct \nans is %d\n",ans);
        }
    }
    printf("END OF EXAMINATION\n");
    printf("your score is : %d\n",score);
    score=score/10;
    switch(score)
    {   case 10:
            printf("You are A\n");break;
        case 9:
            printf("You are A\n");break;
        case 8:
            printf("You are B\n");break;
        case 7:
            printf("You are C\n");break;
        case 6:
            printf("You are D\n");break;
        default:
            printf("You are F\n");
    }
}
////////////////////////////////////////    exp1-1      ////////////////////////////////////////
//#include "ASA_Lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <ctime>//for real rand
//#include <avg.h>
int loop=1;
int main(void)
{
    char number[10];
    int q1,q2,ans,studentans;
    printf("what is your student number? \n");
    scanf("%s", number);
    for(int i=1;i<=10;i++)
    {
        q1=rand()%10+1;
        q2=rand()%10+1;
        ans=q1*q2;
        printf("q%d:%d * %d =?\n",i,q1,q2);
        scanf("%d",&studentans);
        printf("ANS:%d \n",ans);
    }
    printf("END OF EXAMINATION");
}

*/


