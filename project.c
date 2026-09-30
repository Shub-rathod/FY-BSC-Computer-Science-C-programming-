/* Docummentation : The menu for every programs*/

#include<stdio.h>
#define label label : printf("Bye!! Have a great coding sesion !!!!!\n\n ");

// Global decalaration of subprograms:
int menuselect();
int menu();
int multitable();
int prime();
int evenodd();
int power();
int armstrong();
int reverse();
int numword();
int i=1;

int main(){
    
    do{
        menu();
        menuselect();
        i++;
    }while(i<=5);

    return 0;
}

int menu(){
    printf("\n***************************************************\n");
    printf("\n=====| PROGRAMS THAT I HAVE LEARNED SO FAR |=====\n\n");
    printf("\n1. Multiplication Table of N.");
    printf("\n2. Prime number checker.");
    printf("\n3. Even or odd in N range.");
    printf("\n4. Power of any number x^n.");
    printf("\n5. Armstrong checker.");
    printf("\n6. Reversing the number.");
    printf("\n7. Converting number to Words.");
    printf("\n#. For Exit press # \n");
    printf("\n***************************************************\n");
}

int menuselect(){
    int op;
    printf("Enter your option : ");
    scanf("%d",&op);
    printf("\n[ OUTPUT ] :-\n");
    switch(op){
        case 1 :multitable();break;
        case 2 :prime();break;
        case 3 :evenodd();break;
        case 4 :power();break;
        case 5 :armstrong();break;
        case 6 :reverse();break;
        case 7 :numword();break;
        default :i = i+5;
        printf("\nBYE ! Have a great coding sesion!!!!! \n\n");
        break;
}
}

int multitable(){
    int n,i;
    printf("Enter the N : ");
    scanf("%d",&n);
    printf("The multiplication table of %d:\n",n);
    for(i=1;i<=10;i++){
        printf("%d x %d = %2d\n",n,i,n*i);
    }
}

int prime(){
    int n , i , cnt=0;
    printf("Enter the number for checking : ");
    scanf("%d",&n);
    for(i=1 ; i<= n ; i++ ){
        if(n%i==0){
            cnt = cnt +1 ;
        }}
    if(cnt == 2){
        printf("%d is an prime number.",n);}

    else{
        printf("%d is not an prime number.",n);
    }
    }
int evenodd(){
    int n , i ;
    printf("Enter the range N :");
    scanf("%d",&n);

        printf("\nEven numbers between 1 - %d : ",n); 
        for(i=1;i<=n;i++){
        if(i%2==0){
            printf(" %d ",i);
        }}  
    
        printf("\nOdd numbers between 1 - %d : ",n);  
        for(i=1;i<=n;i++){
        if(i%2!=0){
            printf(" %d ",i);
        }}
}

int power(){
    int x , n , i , f=1 ;
    printf("The the number x :");
    scanf("%d",&x);
    printf("Enter the power of %d^n : ",x);
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        f = f*x;
    }
    printf("The answer %d^%d = %d", x, n ,f );
}

int armstrong(){
    int n , i , an , sum=0;
    printf("Enter N for checking :: ");
    scanf("%d",&n);
    an = n ;
    for(i=1;i<=an;i++){
        sum = sum + (an%10)*(an%10)*(an%10);
        an = an/10;
    }
    if(sum = an){
    printf(" %d is armstrong. \n",n);}
    else{
    printf(" %d is not an armstrong. \n",n);}
}

int reverse(){
    int n,i,rev=0;
    printf("Enter the number :");
    scanf("%d",&n);
    
    printf("Before reversing the number = %d\n",n);
    for(i=1;n!=0;i++){
        rev = rev * 10 + n %10;
        n = n/10;
    }
    printf("Atfer reversing the number = %d\n",rev);
}


int numword(){
    int n,i,rev=0 , r=0 ,cnt =0 ;
    printf("Enter the number :");
    scanf("%d",&n);
    
    //printf("Before reversing the number = %d\n",n);
    for(i=1;n!=0;i++){
        rev = rev * 10 + n %10;
        n = n/10;
        cnt++;
    }
    printf("Atfer converting number To word = ");
    for(i=1;i<=cnt;i++){
        r = rev%10;
        rev = rev/10;
        switch(r){
            case 0:printf(" Zero ");break;
            case 1:printf(" One ");break;
            case 2:printf(" Two ");break;
            case 3:printf(" Three ");break;
            case 4:printf(" Four ");break;
            case 5:printf(" Five ");break;
            case 6:printf(" Six ");break;
            case 7:printf(" Seven ");break;
            case 8:printf(" Eight ");break;
            case 9:printf(" Nine ");break;
        }
    }
        printf("\n");



}