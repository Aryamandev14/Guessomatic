#include<stdio.h>
#include<stdlib.h>
static int x=3;
void fun1(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='a'||ch=='b'||ch=='c'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='t'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='y'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='A'||ch=='B'||ch=='C'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='T'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Y'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='n'||ch=='N'){
            printf("_N__A\n");
            fun5();
                break;

            }
        else if(ch=='d'||ch=='D'){
                printf("__D_A\n");
            fun6();
    break;

            }
            else if(ch=='I'||ch=='i'){
                printf("I__IA\n");
                fun7();
    break;

            }

}

}
void fun2(){
    char ch;
    for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='i'||ch=='b'||ch=='c'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='t'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='y'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='I'||ch=='B'||ch=='C'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='T'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Y'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
else if(ch=='a'||ch=='A'){
    printf("I__IA\n");
    fun7();
    break;

}
else if(ch=='n'||ch=='N'){
    printf("IN_I_\n");
    fun8();
    break;

}
else if(ch=='d'||ch=='D'){
    printf("I_DI_\n");
    fun9();
    break;

}
}

}
void fun3(){
    char ch;
    for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='d'||ch=='b'||ch=='c'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='t'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='y'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='D'||ch=='B'||ch=='C'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='T'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Y'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
else if(ch=='n'||ch=='N'){
    printf("_ND__\n");
    fun10();
    break;

}
else if(ch=='i'||ch=='I'){
    printf("I_DI_\n");
    fun9();
    break;

}
else if(ch=='a'||ch=='A'){
    printf("__D_A\n");
fun6();
    break;


}
}
}
void fun4(){
    char ch;
for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='n'||ch=='b'||ch=='c'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='t'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='y'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='N'||ch=='B'||ch=='C'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='T'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Y'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
                    break;


            }

        }
else if(ch=='i'||ch=='I'){
    printf("IN_I_\n");
    fun8();
        break;


}
else if(ch=='d'||ch=='D'){
    printf("_ND__\n");
    fun10();
        break;


}
else if(ch=='a'||ch=='A'){
    printf("_N__A\n");
    fun5();
        break;

}



}

}
void fun5(){
    //_N__A


        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='n'||ch=='a'||ch=='b'||ch=='c'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='t'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='y'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
                    break;

            }

        }
        else if(ch=='N'||ch=='A'||ch=='B'||ch=='C'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='T'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Y'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
                    break;

            }

        }
        else if(ch=='d'||ch=='D'){
            printf("_ND_A\n");
            fun11();
                break;

        }
        else if(ch=='i'||ch=='I'){
            printf("IN_IA\n");
            fun12();
                break;

        }


}

}
void fun6(){
    //__D_A

        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='d'||ch=='a'||ch=='b'||ch=='c'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='t'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='y'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
                    break;

            }

        }
        else if(ch=='D'||ch=='A'||ch=='B'||ch=='C'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='T'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Y'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
                    break;

            }

        }
        else if(ch=='I'||ch=='i'){
            printf("I_DIA\n");
            fun13();
                break;

        }
        else if(ch=='n'||ch=='N'){
            printf("_ND_A\n");
            fun11();
                break;

        }


}

}

void fun7(){
    //I__IA

        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='i'||ch=='a'||ch=='b'||ch=='c'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='t'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='y'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
                    break;

            }

        }
        else if(ch=='I'||ch=='A'||ch=='B'||ch=='C'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='T'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Y'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
                    break;

            }

        }
        else if(ch=='d'||ch=='D'){
            printf("I_DIA\n");
            fun13();
                break;

        }
        else if(ch=='N'||ch=='n'){
            printf("IN_IA\n");
            fun12();
                break;

        }


}

}
void fun8(){
    //IN_I_
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='i'||ch=='n'||ch=='b'||ch=='c'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='t'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='y'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
                    break;

            }

        }
        else if(ch=='I'||ch=='N'||ch=='B'||ch=='C'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='T'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Y'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
                    break;

            }

        }
        else if(ch=='d'||ch=='D'){
            printf("INDI_\n");
            fun14();
                break;

        }
        else if(ch=='a'||ch=='A'){
            printf("IN_IA\n");
            fun12();
                break;

        }


}

}
void fun9(){
    //I_DI_

        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='i'||ch=='d'||ch=='b'||ch=='c'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='t'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='y'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
                break;
            }

        }
        else if(ch=='I'||ch=='D'||ch=='B'||ch=='C'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='T'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Y'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
                break;
            }

        }
        else if(ch=='n'||ch=='N'){
            printf("INDI_\n");
            fun14();
            break;
        }
        else if(ch=='a'||ch=='A'){
            printf("I_DIA\n");
            fun13();
            break;
        }

}


}
void fun10(){
    //_ND__

        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='d'||ch=='n'||ch=='b'||ch=='c'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='t'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='y'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
                    break;

            }

        }
        else if(ch=='D'||ch=='N'||ch=='B'||ch=='C'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='T'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Y'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
                    break;

            }

        }
        else if(ch=='i'||ch=='I'){
            printf("INDI_\n");
            fun14();
                break;

        }
        else if(ch=='a'||ch=='A'){
            printf("_ND_A\n");
            fun11();
                break;

        }

}


}
void fun11(){
    //_ND_A

        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='a'||ch=='d'||ch=='n'||ch=='b'||ch=='c'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='t'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='y'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
                    break;

            }

        }
        else if(ch=='A'||ch=='D'||ch=='N'||ch=='B'||ch=='C'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='T'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Y'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
                    break;

            }

        }
       else if(ch=='i'||ch=='I'){
        printf("INDIA!\n");
        printf("WINNER\n");
        break;
       }

}


}
void fun12(){
    //IN_IA

        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='a'||ch=='i'||ch=='n'||ch=='b'||ch=='c'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='t'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='y'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
                    break;

            }

        }
        else if(ch=='A'||ch=='I'||ch=='N'||ch=='B'||ch=='C'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='T'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Y'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
                    break;

            }

        }
       else if(ch=='d'||ch=='D'){
        printf("INDIA!\n");
        printf("WINNER\n");
        break;
       }


}

}
void fun13(){
    //I_DIA

        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='a'||ch=='d'||ch=='i'||ch=='b'||ch=='c'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='t'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='y'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
                break;
            }

        }
        else if(ch=='A'||ch=='D'||ch=='I'||ch=='B'||ch=='C'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='T'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Y'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
                break;
            }

        }
       else if(ch=='n'||ch=='N'){
        printf("INDIA!\n");
        printf("WINNER\n");
        break;
       }


}

}
void fun14(){
    //INDI_

        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='i'||ch=='d'||ch=='n'||ch=='b'||ch=='c'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='t'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='y'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
                    break;

            }

        }
        else if(ch=='I'||ch=='D'||ch=='N'||ch=='B'||ch=='C'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='T'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Y'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
                    break;

            }

        }
       else if(ch=='A'||ch=='a'){
        printf("INDIA!\n");
        printf("WINNER\n");
        break;
       }

        }


}
void mun1(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='a'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='A'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='M'||ch=='N'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='t'||ch=='T'){
            printf("_TA__\n");
            mun6();
                break;

            }
        else if(ch=='i'||ch=='I'){
                printf("I_A__\n");
            mun7();
    break;

            }
            else if(ch=='l'||ch=='L'){
                printf("__AL_\n");
                mun8();
    break;

            }
            else if(ch=='y'||ch=='Y'){
                printf("__A_Y\n");
                mun9();
                break;
            }

}

}
void mun2(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='i'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='I'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='M'||ch=='N'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='t'||ch=='T'){
            printf("IT___\n");
            mun10();
                break;

            }
        else if(ch=='A'||ch=='a'){
                printf("I_A__\n");
            mun7();
    break;

            }
            else if(ch=='l'||ch=='L'){
                printf("I__L_\n");
                mun11();
    break;

            }
            else if(ch=='y'||ch=='Y'){
                printf("I___Y\n");
                mun12();
                break;
            }

}

}
void mun3(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='l'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='L'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='M'||ch=='N'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='t'||ch=='T'){
            printf("_T_L_\n");
            mun13();
                break;

            }
        else if(ch=='i'||ch=='I'){
                printf("I__L_\n");
            mun11();
    break;

            }
            else if(ch=='a'||ch=='A'){
                printf("__AL_\n");
                mun8();
    break;

            }
            else if(ch=='y'||ch=='Y'){
                printf("___LY\n");
                mun14();
                break;
            }

}

}
void mun4(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='t'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='T'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='M'||ch=='N'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='A'||ch=='a'){
            printf("_TA__\n");
            mun15();
                break;

            }
        else if(ch=='i'||ch=='I'){
                printf("IT___\n");
            mun10();
    break;

            }
            else if(ch=='l'||ch=='L'){
                printf("_T_L_\n");
                mun13();
    break;

            }
            else if(ch=='y'||ch=='Y'){
                printf("_T__Y\n");
                mun16();
                break;
            }

}

}
void mun5(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='y'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='Y'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='M'||ch=='N'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='A'||ch=='a'){
            printf("__A_Y\n");
            mun9();
                break;

            }
        else if(ch=='i'||ch=='I'){
                printf("I___Y\n");
            mun12();
    break;

            }
            else if(ch=='l'||ch=='L'){
                printf("___LY\n");
                mun14();
    break;

            }
            else if(ch=='t'||ch=='T'){
                printf("_T__Y\n");
                mun16();
                break;
            }

}

}
void mun6(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='t'||ch=='a'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='T'||ch=='A'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='M'||ch=='N'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='L'||ch=='l'){
            printf("_TAL_\n");
            mun17();
                break;

            }
        else if(ch=='i'||ch=='I'){
                printf("ITA__\n");
            mun18();
    break;

            }

            else if(ch=='y'||ch=='Y'){
                printf("_TA_Y\n");
                mun19();
                break;
            }

}

}
void mun7(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='i'||ch=='a'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='I'||ch=='A'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='M'||ch=='N'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='L'||ch=='l'){
            printf("I_AL_\n");
            mun20();
                break;

            }
        else if(ch=='t'||ch=='T'){
                printf("ITA__\n");
            mun18();
    break;

            }

            else if(ch=='y'||ch=='Y'){
                printf("I_A_Y\n");
                mun21();
                break;
            }

}

}
void mun8(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='l'||ch=='a'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='L'||ch=='A'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='M'||ch=='N'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='i'||ch=='I'){
            printf("I_AL_\n");
            mun20();
                break;

            }
        else if(ch=='t'||ch=='T'){
                printf("_TAL_\n");
            mun17();
    break;

            }

            else if(ch=='y'||ch=='Y'){
                printf("__ALY\n");
                mun22();
                break;
            }

}

}
void mun9(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='y'||ch=='a'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='Y'||ch=='A'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='M'||ch=='N'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='i'||ch=='I'){
            printf("I_A_Y\n");
            mun21();
                break;

            }
        else if(ch=='t'||ch=='T'){
                printf("_TA_Y\n");
            mun19();
    break;

            }

            else if(ch=='l'||ch=='L'){
                printf("__ALY\n");
                mun22();
                break;
            }

}

}
void mun10(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='i'||ch=='t'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='I'||ch=='T'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='M'||ch=='N'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='a'||ch=='A'){
            printf("ITA__\n");
            mun18();
                break;

            }
        else if(ch=='l'||ch=='L'){
                printf("IT_L_\n");
            mun25();
    break;

            }

            else if(ch=='y'||ch=='Y'){
                printf("IT__Y\n");
                mun26();
                break;
            }

}

}
void mun11(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='i'||ch=='l'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='I'||ch=='L'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='M'||ch=='N'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='a'||ch=='A'){
            printf("I_AL_\n");
            mun20();
                break;

            }
        else if(ch=='t'||ch=='T'){
                printf("IT_L_\n");
            mun25();
    break;

            }

            else if(ch=='y'||ch=='Y'){
                printf("I__LY\n");
                mun27();
                break;
            }

}

}
void mun12(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='i'||ch=='y'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='I'||ch=='Y'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='M'||ch=='N'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='a'||ch=='A'){
            printf("I_A_Y\n");
            mun21();
                break;

            }
        else if(ch=='t'||ch=='T'){
                printf("IT__Y\n");
            mun26();
    break;

            }

            else if(ch=='l'||ch=='L'){
                printf("I__LY\n");
                mun27();
                break;
            }

}

}
void mun13(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='t'||ch=='l'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='T'||ch=='L'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='M'||ch=='N'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='a'||ch=='A'){
            printf("_TAL_\n");
            mun17();
                break;

            }
        else if(ch=='y'||ch=='Y'){
                printf("_T_LY\n");
            mun28();
    break;

            }

            else if(ch=='i'||ch=='I'){
                printf("IT_L_\n");
                mun25();
                break;
            }

}

}
void mun14(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='l'||ch=='y'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='L'||ch=='Y'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='M'||ch=='N'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='a'||ch=='A'){
            printf("__ALY\n");
            mun22();
                break;

            }
        else if(ch=='t'||ch=='T'){
                printf("_T_LY\n");
            mun28();
    break;

            }

            else if(ch=='i'||ch=='I'){
                printf("I__LY\n");
                mun27();
                break;
            }

}

}
void mun15(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='t'||ch=='a'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='T'||ch=='A'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='M'||ch=='N'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='l'||ch=='L'){
            printf("_TAL_\n");
            mun17();
                break;

            }
        else if(ch=='y'||ch=='Y'){
                printf("_TA_Y\n");
            mun19();
    break;

            }

            else if(ch=='i'||ch=='I'){
                printf("ITA__\n");
                mun18();
                break;
            }

}

}
void mun16(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='t'||ch=='y'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='T'||ch=='Y'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='M'||ch=='N'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='l'||ch=='L'){
            printf("_T_LY\n");
            mun25();
                break;

            }
        else if(ch=='a'||ch=='A'){
                printf("_TA_Y\n");
            mun19();
    break;

            }

            else if(ch=='i'||ch=='I'){
                printf("IT__Y\n");
                mun26();
                break;
            }

}

}
void mun17(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='l'||ch=='t'||ch=='a'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='L'||ch=='T'||ch=='A'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='M'||ch=='N'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='y'||ch=='Y'){
            printf("_TALY\n");
            mun29();
                break;

            }

            else if(ch=='i'||ch=='I'){
                printf("ITAL_\n");
                mun30();
                break;
            }

}

}

void mun18(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='i'||ch=='t'||ch=='a'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='I'||ch=='T'||ch=='A'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='M'||ch=='N'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='l'||ch=='L'){
            printf("ITAL_\n");
            mun30();
                break;

            }

            else if(ch=='y'||ch=='Y'){
                printf("ITA_Y\n");
                mun31();
                break;
            }

}

}
void mun19(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='y'||ch=='t'||ch=='a'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='Y'||ch=='T'||ch=='A'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='M'||ch=='N'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='l'||ch=='L'){
            printf("_TALY\n");
            mun29();
                break;

            }

            else if(ch=='i'||ch=='I'){
                printf("ITA_Y\n");
                mun31();
                break;
            }

}

}
void mun20(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='i'||ch=='l'||ch=='a'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='I'||ch=='L'||ch=='A'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='M'||ch=='N'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='t'||ch=='T'){
            printf("ITAL_\n");
            mun30();
                break;

            }

            else if(ch=='y'||ch=='Y'){
                printf("I_ALY\n");
                mun32();
                break;
            }

}

}
void mun21(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='i'||ch=='y'||ch=='a'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='I'||ch=='Y'||ch=='A'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='M'||ch=='N'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='l'||ch=='L'){
            printf("I_ALY\n");
            mun32();
                break;

            }

            else if(ch=='t'||ch=='T'){
                printf("ITA_Y\n");
                mun31();
                break;
            }

}

}
void mun22(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='l'||ch=='y'||ch=='a'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='L'||ch=='Y'||ch=='A'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='M'||ch=='N'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='i'||ch=='I'){
            printf("I_ALY\n");
            mun32();
                break;

            }

            else if(ch=='t'||ch=='T'){
                printf("_TALY\n");
                mun29();
                break;
            }

}

}
void mun25(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='l'||ch=='t'||ch=='i'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='L'||ch=='T'||ch=='I'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='M'||ch=='N'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='a'||ch=='A'){
            printf("ITAL_\n");
            mun32();
                break;

            }

            else if(ch=='y'||ch=='Y'){
                printf("IT_LY\n");
                mun33();
                break;
            }

}

}
void mun26(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='y'||ch=='t'||ch=='i'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='Y'||ch=='T'||ch=='I'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='M'||ch=='N'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='a'||ch=='A'){
            printf("ITA_Y\n");
            mun31();
                break;

            }

            else if(ch=='l'||ch=='L'){
                printf("IT_LY\n");
                mun33();
                break;
            }

}

}
void mun27(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='y'||ch=='l'||ch=='i'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='Y'||ch=='L'||ch=='I'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='M'||ch=='N'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='a'||ch=='A'){
            printf("I_ALY\n");
            mun32();
                break;

            }

            else if(ch=='t'||ch=='T'){
                printf("IT_LY\n");
                mun33();
                break;
            }

}

}
void mun28(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='y'||ch=='l'||ch=='t'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='Y'||ch=='L'||ch=='T'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='M'||ch=='N'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='a'||ch=='A'){
            printf("_TALY\n");
            mun32();
                break;

            }

            else if(ch=='i'||ch=='I'){
                printf("IT_LY\n");
                mun33();
                break;
            }

}

}
void mun29(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='a'||ch=='y'||ch=='l'||ch=='t'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='A'||ch=='Y'||ch=='L'||ch=='T'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='M'||ch=='N'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='i'||ch=='I'){
            printf("ITALY\n");
           printf("WINNER!!!!!\n");
                break;

            }

}

}
void mun30(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='a'||ch=='i'||ch=='l'||ch=='t'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='A'||ch=='I'||ch=='L'||ch=='T'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='M'||ch=='N'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='y'||ch=='Y'){
            printf("ITALY\n");
           printf("WINNER!!!!!\n");
                break;

            }

}

}
void mun31(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='a'||ch=='i'||ch=='y'||ch=='t'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='A'||ch=='I'||ch=='Y'||ch=='T'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='M'||ch=='N'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='l'||ch=='L'){
            printf("ITALY\n");
           printf("WINNER!!!!!\n");
                break;

            }

}

}
void mun32(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='a'||ch=='i'||ch=='l'||ch=='y'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='A'||ch=='I'||ch=='L'||ch=='Y'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='M'||ch=='N'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='t'||ch=='T'){
            printf("ITALY\n");
           printf("WINNER!!!!!\n");
                break;

            }

}

}
void mun33(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='y'||ch=='i'||ch=='l'||ch=='t'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='Y'||ch=='I'||ch=='L'||ch=='T'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='M'||ch=='N'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='a'||ch=='A'){
            printf("ITALY\n");
           printf("WINNER!!!!!\n");
                break;

            }

}

}
void sun1(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='s'||ch=='a'||ch=='b'||ch=='c'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='t'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='y'||ch=='u'||ch=='v'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='S'||ch=='A'||ch=='B'||ch=='C'||ch=='F'||ch=='G'||ch=='H'||ch=='I'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='T'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='Y'||ch=='U'||ch=='V'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='w'||ch=='W'){
            printf("SW____\n");
            sun6();
                break;

            }
        else if(ch=='e'||ch=='E'){
                printf("S_E_E_\n");
            sun7();
    break;

            }
            else if(ch=='d'||ch=='D'){
                printf("S__D__\n");
                sun8();
    break;

            }
            else if(ch=='n'||ch=='N'){
                printf("S____N\n");
                sun9();
                break;
            }

}

}
void sun2(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='W'||ch=='a'||ch=='b'||ch=='c'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='t'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='y'||ch=='u'||ch=='v'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='w'||ch=='A'||ch=='B'||ch=='C'||ch=='F'||ch=='G'||ch=='H'||ch=='I'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='T'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='Y'||ch=='U'||ch=='V'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='s'||ch=='S'){
            printf("SW____\n");
            sun6();
                break;

            }
        else if(ch=='e'||ch=='E'){
                printf("_WE_E_\n");
            sun10();
    break;

            }
            else if(ch=='d'||ch=='D'){
                printf("_W_D__\n");
                sun11();
    break;

            }
            else if(ch=='n'||ch=='N'){
                printf("_W___N\n");
                sun12();
                break;
            }

}

}
void sun3(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='e'||ch=='a'||ch=='b'||ch=='c'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='t'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='y'||ch=='u'||ch=='v'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='E'||ch=='A'||ch=='B'||ch=='C'||ch=='F'||ch=='G'||ch=='H'||ch=='I'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='T'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='Y'||ch=='U'||ch=='V'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='s'||ch=='S'){
            printf("S_E_E_\n");
            sun7();
                break;

            }
        else if(ch=='w'||ch=='W'){
                printf("_WE_E_\n");
            sun10();
    break;

            }
            else if(ch=='d'||ch=='D'){
                printf("__EDE_\n");
                sun13();
    break;

            }
            else if(ch=='n'||ch=='N'){
                printf("__E_EN\n");
                sun14();
                break;
            }

}

}
void sun4(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='n'||ch=='a'||ch=='b'||ch=='c'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='t'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='y'||ch=='u'||ch=='v'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='N'||ch=='A'||ch=='B'||ch=='C'||ch=='F'||ch=='G'||ch=='H'||ch=='I'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='T'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='Y'||ch=='U'||ch=='V'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='s'||ch=='S'){
            printf("S____N\n");
            sun9();
                break;

            }
        else if(ch=='e'||ch=='E'){
                printf("__E_EN\n");
            sun14();
    break;

            }
            else if(ch=='d'||ch=='D'){
                printf("___D_N\n");
                sun15();
    break;

            }
            else if(ch=='w'||ch=='W'){
                printf("_W___N\n");
                sun12();
                break;
            }

}

}
void sun5(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='d'||ch=='a'||ch=='b'||ch=='c'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='t'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='y'||ch=='u'||ch=='v'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='D'||ch=='A'||ch=='B'||ch=='C'||ch=='F'||ch=='G'||ch=='H'||ch=='I'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='T'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='Y'||ch=='U'||ch=='V'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='s'||ch=='S'){
            printf("S__D__\n");
            sun8();
                break;

            }
        else if(ch=='e'||ch=='E'){
                printf("__EDE_\n");
            sun13();
    break;

            }
            else if(ch=='w'||ch=='W'){
                printf("_W_D__\n");
                sun11();
    break;

            }
            else if(ch=='n'||ch=='N'){
                printf("___D_N\n");
                sun15();
                break;
            }

}

}
void sun6(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='s'||ch=='W'||ch=='a'||ch=='b'||ch=='c'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='t'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='y'||ch=='u'||ch=='v'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='S'||ch=='w'||ch=='A'||ch=='B'||ch=='C'||ch=='F'||ch=='G'||ch=='H'||ch=='I'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='T'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='Y'||ch=='U'||ch=='V'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }

        else if(ch=='e'||ch=='E'){
                printf("SWE_E_\n");
            sun16();
    break;

            }
            else if(ch=='d'||ch=='D'){
                printf("SW_D__\n");
                sun17();
    break;

            }
            else if(ch=='n'||ch=='N'){
                printf("SW___N\n");
                sun18();
                break;
            }

}

}
void sun7(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='s'||ch=='e'||ch=='a'||ch=='b'||ch=='c'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='t'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='y'||ch=='u'||ch=='v'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='S'||ch=='E'||ch=='A'||ch=='B'||ch=='C'||ch=='F'||ch=='G'||ch=='H'||ch=='I'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='T'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='Y'||ch=='U'||ch=='V'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }

        else if(ch=='w'||ch=='W'){
                printf("SWE_E_\n");
            sun16();
    break;

            }
            else if(ch=='d'||ch=='D'){
                printf("S_EDE_\n");
                sun19();
    break;

            }
            else if(ch=='n'||ch=='N'){
                printf("S_E_EN\n");
                sun20();
                break;
            }

}

}
void sun8(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='s'||ch=='d'||ch=='a'||ch=='b'||ch=='c'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='t'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='y'||ch=='u'||ch=='v'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='S'||ch=='D'||ch=='A'||ch=='B'||ch=='C'||ch=='F'||ch=='G'||ch=='H'||ch=='I'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='T'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='Y'||ch=='U'||ch=='V'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }

        else if(ch=='e'||ch=='E'){
                printf("S_EDE_\n");
            sun19();
    break;

            }
            else if(ch=='w'||ch=='W'){
                printf("SW_D__\n");
                sun17();
    break;

            }
            else if(ch=='n'||ch=='N'){
                printf("S__D_N\n");
                sun21();
                break;
            }

}
}
void sun9(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='s'||ch=='n'||ch=='a'||ch=='b'||ch=='c'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='t'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='y'||ch=='u'||ch=='v'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='S'||ch=='N'||ch=='A'||ch=='B'||ch=='C'||ch=='F'||ch=='G'||ch=='H'||ch=='I'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='T'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='Y'||ch=='U'||ch=='V'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }

        else if(ch=='e'||ch=='E'){
                printf("S_E_EN\n");
            sun20();
    break;

            }
            else if(ch=='d'||ch=='D'){
                printf("S__D_N\n");
                sun21();
    break;

            }
            else if(ch=='w'||ch=='W'){
                printf("SW___N\n");
                sun18();
                break;
            }

}

}
void sun10(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='e'||ch=='W'||ch=='a'||ch=='b'||ch=='c'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='t'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='y'||ch=='u'||ch=='v'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='E'||ch=='w'||ch=='A'||ch=='B'||ch=='C'||ch=='F'||ch=='G'||ch=='H'||ch=='I'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='T'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='Y'||ch=='U'||ch=='V'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }

        else if(ch=='s'||ch=='S'){
                printf("SWE_E_\n");
            sun16();
    break;

            }
            else if(ch=='d'||ch=='D'){
                printf("_WEDE_\n");
                sun22();
    break;

            }
            else if(ch=='n'||ch=='N'){
                printf("_WE_EN\n");
                sun23();
                break;
            }

}

}
void sun11(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='d'||ch=='W'||ch=='a'||ch=='b'||ch=='c'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='t'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='y'||ch=='u'||ch=='v'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='D'||ch=='w'||ch=='A'||ch=='B'||ch=='C'||ch=='F'||ch=='G'||ch=='H'||ch=='I'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='T'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='Y'||ch=='U'||ch=='V'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }

        else if(ch=='e'||ch=='E'){
                printf("_WEDE_\n");
            sun22();
    break;

            }
            else if(ch=='s'||ch=='S'){
                printf("SW_D__\n");
                sun17();
    break;

            }
            else if(ch=='n'||ch=='N'){
                printf("_W_D_N\n");
                sun24();
                break;
            }

}

}
void sun12(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='n'||ch=='W'||ch=='a'||ch=='b'||ch=='c'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='t'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='y'||ch=='u'||ch=='v'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='N'||ch=='w'||ch=='A'||ch=='B'||ch=='C'||ch=='F'||ch=='G'||ch=='H'||ch=='I'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='T'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='Y'||ch=='U'||ch=='V'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }

        else if(ch=='e'||ch=='E'){
                printf("_WE_EN\n");
            sun23();
    break;

            }
            else if(ch=='s'||ch=='S'){
                printf("SW___N\n");
                sun18();
    break;

            }
            else if(ch=='d'||ch=='D'){
                printf("_W_D_N\n");
                sun24();
                break;
            }

}

}
void sun13(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='d'||ch=='e'||ch=='a'||ch=='b'||ch=='c'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='t'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='y'||ch=='u'||ch=='v'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='D'||ch=='E'||ch=='A'||ch=='B'||ch=='C'||ch=='F'||ch=='G'||ch=='H'||ch=='I'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='T'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='Y'||ch=='U'||ch=='V'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }

        else if(ch=='w'||ch=='W'){
                printf("_WEDE_\n");
            sun22();
    break;

            }
            else if(ch=='s'||ch=='S'){
                printf("S_EDE_\n");
                sun19();
    break;

            }
            else if(ch=='n'||ch=='N'){
                printf("__EDEN\n");
                sun25();
                break;
            }

}

}
void sun14(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='n'||ch=='e'||ch=='a'||ch=='b'||ch=='c'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='t'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='y'||ch=='u'||ch=='v'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='N'||ch=='E'||ch=='A'||ch=='B'||ch=='C'||ch=='F'||ch=='G'||ch=='H'||ch=='I'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='T'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='Y'||ch=='U'||ch=='V'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }

        else if(ch=='w'||ch=='W'){
                printf("_WE_EN\n");
            sun23();
    break;

            }
            else if(ch=='s'||ch=='S'){
                printf("S_E_EN\n");
                sun20();
    break;

            }
            else if(ch=='d'||ch=='D'){
                printf("__EDEN\n");
                sun25();
                break;
            }

}

}
void sun15(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='d'||ch=='n'||ch=='a'||ch=='b'||ch=='c'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='t'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='y'||ch=='u'||ch=='v'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='D'||ch=='N'||ch=='A'||ch=='B'||ch=='C'||ch=='F'||ch=='G'||ch=='H'||ch=='I'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='T'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='Y'||ch=='U'||ch=='V'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }

        else if(ch=='w'||ch=='W'){
                printf("_W_D_N\n");
            sun24();
    break;

            }
            else if(ch=='s'||ch=='S'){
                printf("S__D_N\n");
                sun21();
    break;

            }
            else if(ch=='e'||ch=='E'){
                printf("__EDEN\n");
                sun25();
                break;
            }

}

}
void sun16(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='e'||ch=='s'||ch=='w'||ch=='a'||ch=='b'||ch=='c'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='t'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='y'||ch=='u'||ch=='v'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='E'||ch=='S'||ch=='W'||ch=='A'||ch=='B'||ch=='C'||ch=='F'||ch=='G'||ch=='H'||ch=='I'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='T'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='Y'||ch=='U'||ch=='V'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }

        else if(ch=='d'||ch=='D'){
                printf("SWEDE_\n");
            sun28();
    break;

            }
            else if(ch=='n'||ch=='N'){
                printf("SWE_EN\n");
                sun27();
    break;

            }


}

}
void sun17(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='d'||ch=='s'||ch=='w'||ch=='a'||ch=='b'||ch=='c'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='t'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='y'||ch=='u'||ch=='v'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='D'||ch=='S'||ch=='W'||ch=='A'||ch=='B'||ch=='C'||ch=='F'||ch=='G'||ch=='H'||ch=='I'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='T'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='Y'||ch=='U'||ch=='V'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }

        else if(ch=='e'||ch=='E'){
                printf("SWEDE_\n");
            sun28();
    break;

            }
            else if(ch=='n'||ch=='N'){
                printf("SW_D_N\n");
                sun29();
    break;

            }


}

}
void sun18(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='n'||ch=='s'||ch=='w'||ch=='a'||ch=='b'||ch=='c'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='t'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='y'||ch=='u'||ch=='v'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='N'||ch=='S'||ch=='W'||ch=='A'||ch=='B'||ch=='C'||ch=='F'||ch=='G'||ch=='H'||ch=='I'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='T'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='Y'||ch=='U'||ch=='V'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }

        else if(ch=='e'||ch=='E'){
                printf("SWE_EN\n");
            sun27();
    break;

            }
            else if(ch=='d'||ch=='D'){
                printf("SW_D_N\n");
                sun29();
    break;

            }


}

}
void sun19(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='d'||ch=='s'||ch=='e'||ch=='a'||ch=='b'||ch=='c'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='t'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='y'||ch=='u'||ch=='v'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='D'||ch=='S'||ch=='E'||ch=='A'||ch=='B'||ch=='C'||ch=='F'||ch=='G'||ch=='H'||ch=='I'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='T'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='Y'||ch=='U'||ch=='V'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }

        else if(ch=='w'||ch=='W'){
                printf("SWEDE_\n");
            sun28();
    break;

            }
            else if(ch=='n'||ch=='N'){
                printf("S_EDEN\n");
                sun30();
    break;

            }


}

}
void sun20(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='n'||ch=='s'||ch=='e'||ch=='a'||ch=='b'||ch=='c'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='t'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='y'||ch=='u'||ch=='v'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='N'||ch=='S'||ch=='E'||ch=='A'||ch=='B'||ch=='C'||ch=='F'||ch=='G'||ch=='H'||ch=='I'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='T'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='Y'||ch=='U'||ch=='V'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }

        else if(ch=='w'||ch=='W'){
                printf("SWE_EN\n");
            sun27();
    break;

            }
            else if(ch=='d'||ch=='D'){
                printf("S_EDEN\n");
                sun30();
    break;

            }


}

}
void sun21(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='d'||ch=='s'||ch=='n'||ch=='a'||ch=='b'||ch=='c'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='t'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='y'||ch=='u'||ch=='v'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='D'||ch=='S'||ch=='N'||ch=='A'||ch=='B'||ch=='C'||ch=='F'||ch=='G'||ch=='H'||ch=='I'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='T'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='Y'||ch=='U'||ch=='V'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }

        else if(ch=='e'||ch=='E'){
                printf("S_EDEN\n");
            sun30();
    break;

            }
            else if(ch=='w'||ch=='W'){
                printf("SW_D_N\n");
                sun29();
    break;

            }


}

}
void sun22(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='d'||ch=='e'||ch=='w'||ch=='a'||ch=='b'||ch=='c'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='t'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='y'||ch=='u'||ch=='v'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='D'||ch=='E'||ch=='W'||ch=='A'||ch=='B'||ch=='C'||ch=='F'||ch=='G'||ch=='H'||ch=='I'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='T'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='Y'||ch=='U'||ch=='V'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }

        else if(ch=='n'||ch=='N'){
                printf("_WEDEN\n");
            sun26();
    break;

            }
            else if(ch=='s'||ch=='S'){
                printf("SWEDE_\n");
                sun28();
    break;

            }


}

}
void sun23(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='e'||ch=='w'||ch=='n'||ch=='a'||ch=='b'||ch=='c'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='t'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='y'||ch=='u'||ch=='v'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='W'||ch=='E'||ch=='N'||ch=='A'||ch=='B'||ch=='C'||ch=='F'||ch=='G'||ch=='H'||ch=='I'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='T'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='Y'||ch=='U'||ch=='V'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }

        else if(ch=='s'||ch=='S'){
                printf("SWE_EN\n");
            sun27();
    break;

            }
            else if(ch=='d'||ch=='D'){
                printf("_WEDEN\n");
                sun26();
    break;

            }


}

}
void sun24(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='d'||ch=='w'||ch=='n'||ch=='a'||ch=='b'||ch=='c'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='t'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='y'||ch=='u'||ch=='v'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='W'||ch=='D'||ch=='N'||ch=='A'||ch=='B'||ch=='C'||ch=='F'||ch=='G'||ch=='H'||ch=='I'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='T'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='Y'||ch=='U'||ch=='V'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }

        else if(ch=='s'||ch=='S'){
                printf("SW_D_N\n");
            sun29();
    break;

            }
            else if(ch=='e'||ch=='E'){
                printf("_WEDEN\n");
                sun26();
    break;

            }


}

}
void sun25(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if( ch=='e'||ch=='d'||ch=='n'||ch=='a'||ch=='b'||ch=='c'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='t'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='y'||ch=='u'||ch=='v'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='D'||ch=='E'||ch=='N'||ch=='A'||ch=='B'||ch=='C'||ch=='F'||ch=='G'||ch=='H'||ch=='I'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='T'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='Y'||ch=='U'||ch=='V'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }

        else if(ch=='s'||ch=='S'){
                printf("S_EDEN\n");
            sun30();
    break;

            }
            else if(ch=='w'||ch=='W'){
                printf("_WEDEN\n");
                sun26();
    break;

            }


}

}
void sun26(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if(ch=='w'|| ch=='e'||ch=='d'||ch=='n'||ch=='a'||ch=='b'||ch=='c'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='t'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='y'||ch=='u'||ch=='v'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='W'||ch=='D'||ch=='E'||ch=='N'||ch=='A'||ch=='B'||ch=='C'||ch=='F'||ch=='G'||ch=='H'||ch=='I'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='T'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='Y'||ch=='U'||ch=='V'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }

        else if(ch=='s'||ch=='S'){
                printf("SWEDEN\n");
            printf("WINNER!!!");
    break;

            }


}

}
void sun27(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if(ch=='w'|| ch=='e'||ch=='s'||ch=='n'||ch=='a'||ch=='b'||ch=='c'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='t'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='y'||ch=='u'||ch=='v'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='W'||ch=='S'||ch=='E'||ch=='N'||ch=='A'||ch=='B'||ch=='C'||ch=='F'||ch=='G'||ch=='H'||ch=='I'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='T'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='Y'||ch=='U'||ch=='V'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }

        else if(ch=='d'||ch=='D'){
                printf("SWEDEN\n");
            printf("WINNER!!!");
    break;

            }


}

}
void sun28(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if(ch=='w'|| ch=='e'||ch=='d'||ch=='s'||ch=='a'||ch=='b'||ch=='c'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='t'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='y'||ch=='u'||ch=='v'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='W'||ch=='D'||ch=='E'||ch=='S'||ch=='A'||ch=='B'||ch=='C'||ch=='F'||ch=='G'||ch=='H'||ch=='I'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='T'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='Y'||ch=='U'||ch=='V'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }

        else if(ch=='n'||ch=='N'){
                printf("SWEDEN\n");
            printf("WINNER!!!");
    break;

            }


}

}
void sun29(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if(ch=='w'|| ch=='s'||ch=='d'||ch=='n'||ch=='a'||ch=='b'||ch=='c'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='t'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='y'||ch=='u'||ch=='v'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='W'||ch=='D'||ch=='S'||ch=='N'||ch=='A'||ch=='B'||ch=='C'||ch=='F'||ch=='G'||ch=='H'||ch=='I'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='T'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='Y'||ch=='U'||ch=='V'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }

        else if(ch=='e'||ch=='E'){
                printf("SWEDEN\n");
            printf("WINNER!!!");
    break;

            }


}

}
void sun30(){
        char ch;
        for(int i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);
    if(ch=='s'|| ch=='e'||ch=='d'||ch=='n'||ch=='a'||ch=='b'||ch=='c'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='t'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='y'||ch=='u'||ch=='v'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }
        else if(ch=='S'||ch=='D'||ch=='E'||ch=='N'||ch=='A'||ch=='B'||ch=='C'||ch=='F'||ch=='G'||ch=='H'||ch=='I'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='T'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='Y'||ch=='U'||ch=='V'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
    break;

            }

        }

        else if(ch=='w'||ch=='W'){
                printf("SWEDEN\n");
            printf("WINNER!!!");
    break;

            }


}

}




int main(){
    while(1){
           int yn;
    printf("1. GUESS THE COUNTRY\n");
    printf("1->EASY\n");
    printf("2->MEDIUM\n");
    printf("3->HARD\n");

int choice,i;
char ch;
 printf("ENTER THE LEVEL YOU WANT TO PLAY\n");
scanf("%d",&choice);
switch(choice){
    case 1:
        printf("enter the characters to guess the country name\n");
         printf("_____\n");

for(i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);

        if(ch=='b'||ch=='c'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='t'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='y'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
                    break;


            }


        }
         if(ch=='B'||ch=='C'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='T'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Y'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
                    break;


            }


        }
 if(ch=='A'||ch=='a'){
    printf("____A\n");
    fun1();
    break;
    }
 if(ch=='I'||ch=='i'){
        printf("I__I_\n");
    fun2();
        break;

    }
if(ch=='d'||ch=='D'){
        printf("__D__\n");
    fun3();
        break;

}
if(ch=='n'||ch=='N'){
    printf("_N___\n");
fun4();
    break;
}

}
break;
case 2:
        printf("enter the characters to guess the country name\n");
         printf("_____\n");

for(i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);

        if(ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='n'||ch=='m'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
                    break;


            }


        }
         if(ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='M'||ch=='N'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
                    break;


            }


        }
 if(ch=='A'||ch=='a'){
    printf("__A__\n");
    mun1();
    break;
    }
 if(ch=='I'||ch=='i'){
        printf("I____\n");
    mun2();
        break;

    }
if(ch=='l'||ch=='L'){
        printf("___L_\n");
    mun3();
        break;

}
if(ch=='t'||ch=='T'){
    printf("_T___\n");
mun4();
    break;
}
if(ch=='y'||ch=='Y'){
    printf("____Y\n");
    mun5();
    break;
}
}
break;
case 3:
printf("enter the characters to guess the country name\n");
         printf("______\n");

for(i=0;i<10;i++){
            printf("enter the character:\n");
    scanf("%c",&ch);

        if(ch=='a'||ch=='b'||ch=='c'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='t'||ch=='u'||ch=='v'||ch=='x'||ch=='y'||ch=='z'){
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
                    break;


            }


        }
         if(ch=='A'||ch=='B'||ch=='C'||ch=='F'||ch=='G'||ch=='H'||ch=='I'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='U'||ch=='V'||ch=='X'||ch=='Y'||ch=='Z')
        {
            printf("number of chances left:%d\n",x--);
            if(x==-1){
                printf("YOU LOSE\n");
                    break;


            }


        }
 if(ch=='S'||ch=='s'){
    printf("S_____\n");
    sun1();
    break;
    }
 if(ch=='w'||ch=='W'){
        printf("_W____\n");
    sun2();
        break;

    }
if(ch=='e'||ch=='E'){
        printf("__E_E_\n");
    sun3();
        break;

}
if(ch=='n'||ch=='N'){
    printf("_____N\n");
sun4();
    break;
}
if(ch=='d'||ch=='D'){
    printf("___D__\n");
    sun5();
    break;
}
}
break;
}
printf("\nDo you want to continue(yes=1/no=press any other number):");
scanf("%d",&yn);
if (yn==1){
    continue;
}
else{
    exit(1);
}
    }
return 0;
}
