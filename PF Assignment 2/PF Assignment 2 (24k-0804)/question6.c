# include <stdio.h>
int matchgame(void);
int main(void){
    int pos;
    pos = matchgame();
    printf("%d",pos);
}
int matchgame(void){
    int n;
    printf("Enter Total Number of Matchsticks: ");
    scanf("%d",&n);
    int  res=-1;
    if (n%5==0){
        return res;
    }
    else{
        res = n%5;
        return res;
    }
}
