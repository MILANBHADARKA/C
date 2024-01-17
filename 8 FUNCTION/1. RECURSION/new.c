#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>

void border();
char menu();
void snake(int ,int ,int );
void point(int *, int *, int *);
int lev();
char out();
int food(int [], int [], int [], int , int);
void PrintAtPoint(int ,int ,char []);

void main(){
    int count = 0, highest = 0, i = 0, j = 0, level = 2;
    FILE *Highestcount;
    Highestcount = fopen("Highestcount.txt", "r");
    char highestcount[12];
    fscanf(Highestcount, "%[^\n]s", highestcount);

    for(i = 0;highestcount[i] != '\0';i++);
    while(j < i){
        highest*=10;
        highest+=(highestcount[j] - 48);
        j++;
    }
    start :
    if(highest < count){ 
        highest = count;
        Highestcount = fopen("Highestcount.txt", "w");
        fprintf(Highestcount, "%d", highest);
        fclose(Highestcount);
    }
    system("cls");
    border();
    int x, y, h, v, e = 0, _1X[700], _1Y[700], f[2], speed = 140, k = 0, a = 0;
    char key;


    PrintAtPoint(24,3,"");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
    printf("%d",level);

    PrintAtPoint(52,3,"");
    printf("%d",highest);

    switch (menu())
    {
    case 'l': 
        level = lev();
        break;
    case 'q': 
        goto end;
        break;
    }

    if(level == 1) speed = 120; 
    else if(level == 2) speed = 120; 
    else if(level == 3) speed = 100; 

    restart :
    if(highest < count){ 
        highest = count;
        Highestcount = fopen("Highestcount.txt", "w");
        fprintf(Highestcount, "%d", highest);
        fclose(Highestcount);
    }
    count = 0;
    x = 18;
    y = 17;
    h = 1;
    v = 0;
    e = -2;
    a = 0;
    i = 0;
    j = 0;

    system("cls");
    border();
    if(level == 1)SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
    else if(level == 2)SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
    else if(level == 3)SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
    PrintAtPoint(24,3,"");
    printf("%d",level);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
    PrintAtPoint(8,4,"Press 'P' to Pause OR 'Q' to Exit OR 'R' to Restart.");
    PrintAtPoint(35,3,"");
    printf("%d",count);
    PrintAtPoint(52,3,"");
    printf("%d",highest);

    food(f,_1X,_1Y,i,j);

    while (1)
    {   
        if(level == 3){
            a++;
            if(a == 35){
                a = 0;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
                PrintAtPoint(f[0],f[1]," ");
                while(food(f,_1X,_1Y,i,j));
            }
        }        
        if(_kbhit()){
            key = getch();
            switch (key)
            {
            case 'w':
                if(!((v)*!(h))){
                    v = 1;
                    h = 1;
                }
                break;
            case 'a':
                if(!(!(v)*(h))){
                    v = 0;
                    h = 0;
                }
                break;
            case 's':
                if(!((v)*(h))){
                    v = 1;
                    h = 0;
                }
                break;
            case 'd':
                if(!(!(v)*!(h))){
                    v = 0;
                    h = 1;
                }
                break;
            case 'r':
                goto restart ;
                break;
            case 'q':
                goto start ;
                break;
            case 'p':
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
                PrintAtPoint(8,4,"               Press Any Key to Play.               ");
                getch();
                PrintAtPoint(8,4,"Press 'P' to Pause OR 'Q' to Exit OR 'R' to Restart.");
                break;
            }
        }

        v?(h?(y--):(y++)):(h?(x+=2):(x-=2));

        if(x > 63 || x < 6 || y < 6 || y > 28){
            if(level > 1){
                out :
                switch (out()){
                    case 'q':
                        if(highest < count) highest = count;
                        goto start ;
                        break;
                    case 'r':
                        if(highest < count) highest = count;
                        goto restart ;
                        break;
                }
            }
            else if(x > 63) x = 6;
            else if(x < 6) x = 62;
            else if(y > 28) y = 6;
            else if(y < 6) y = 28;
        }

        if(i > 699)i = 0; 
        _1X[i] = x;
        _1Y[i++] = y; 

        if(e > 0){
            if(j > 699)j = 0; 
            PrintAtPoint(_1X[j],_1Y[j]," ");
            j++;
        }
        else e++;

        if( ( x == f[0] && y == f[1] ) ){
            e = 0;
            a = 0;
            count++;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            PrintAtPoint(35,3,"");
            printf("%d",count);
            while( food(f,_1X,_1Y,i,j) );
        }
        
        if(j < i){
            k = j + 1;
            while(k < i - 1){
                    if( _1X[k] == _1X[i - 1] && _1Y[k] == _1Y[i - 1]) goto out;
                    if(k%2 == 0) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
                    else SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
                    PrintAtPoint(_1X[k],_1Y[k],"o");
                k++;
            }
        }
        else{
            k = j + 1;
            while(k < 49){
                    if( _1X[k] == _1X[i - 1] && _1Y[k] == _1Y[i - 1]) goto out;
                    if(k%2 == 0) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
                    else SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
                    PrintAtPoint(_1X[k],_1Y[k],"o");
                k++;
            }
            k = 0;
            while(k < i - 1){
                    if ( _1X[k] == _1X[i - 1] && _1Y[k] == _1Y[i - 1]) goto out;
                    if(k%2 == 0) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
                    else SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
                    PrintAtPoint(_1X[k],_1Y[k],"o");
                k++;
            }
        }

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
        PrintAtPoint(x,y,"O");

        Sleep(speed);

    }
    end:

    if(highest < count) highest = count;
    
    Highestcount = fopen("Highestcount.txt", "w");
    fprintf(Highestcount, "%d", highest);
    fclose(Highestcount);
    
    PrintAtPoint(0,40,"");    
}

void border(){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
    PrintAtPoint(16,3,"LEVEL -    SCORE -      HIGHSCORE -    ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
    int i;
    PrintAtPoint(5,5,"");
    for(i = 0;i < 30;i++) printf("@ ");
    for(i = 1;i <= 23;i++) {
        PrintAtPoint(5,5+i,"@");
        PrintAtPoint(63,5+i,"@");
    }
    PrintAtPoint(5,29,"");
    for(i = 0;i < 30;i++) printf("@ ");
}

char menu(){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
    PrintAtPoint(25,12,"Press 'S' to Start.");
    PrintAtPoint(23,14,"Press 'L' to Set level.");
    PrintAtPoint(25,16,"Press 'Q' to Exit.");
    PrintAtPoint(29,21,"Play with -");
    PrintAtPoint(33,23,"W");
    PrintAtPoint(31,24,"A S D");

    int p = 1,r = 1,xr = 22,yr = 25,xp = 24,yp = 25, a = 0;
    char key;
    while (1)
    {   
        if(p == 33) p = 1;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
        switch(p){
            case 11:
            case 12:
                PrintAtPoint(33,23,"W");
                break;
            case 13:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
                PrintAtPoint(33,23,"W");
                break;

            case 16:
            case 17:
                PrintAtPoint(31,24,"A");
                break;
            case 18:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
                PrintAtPoint(31,24,"A");

                break;

            case 27:
            case 28:
                PrintAtPoint(33,24,"S");
                break;
            case 29:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
                PrintAtPoint(33,24,"S");
                break;
            case 1:
            case 2:
                PrintAtPoint(35,24,"D");
                break;
            case 3:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
                PrintAtPoint(35,24,"D");
                break;
        }

        snake(xp,yp,1);
        snake(xr,yr,0);
        
        if(p < 33) p++;
        if(a)r++;
        if(r == 33) r = 1;

        point(&p,&xp,&yp);
        if(p > 5 || a){
            point(&r,&xr,&yr);
            a = 1;
        }
        
        if(_kbhit()){
            key = getch();
            if(key == 's') return 's';
            else if(key == 'l') return 'l';
            else if(key == 'q') return 'q';
        }

        Sleep(160);
    }

}

void snake(int x, int y, int c){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
    PrintAtPoint(x,y,"");
    if((c)) printf("*");
    else printf(" ");
}

void point(int *a, int *x, int *y){
    if((*a) <= 11 || (*a) == 33) ((*x)+=2);
    else if((*a) <= 16) ((*y)--);
    else if((*a) <= 27) ((*x)-=2);
    else if((*a) <= 32) ((*y)++);
}

int food(int f[], int _1X[], int _1Y[], int i, int j){
    int k;
    f[0] = 6 + (2*(rand()%29));
    f[1] = 6 + (rand()%23);
    PrintAtPoint(f[0],f[1],"#");

    if(j < i){
        k = j + 1;
        while(k < i - 1){
            if(_1X[k] == f[0] && _1Y[k] == f[1]) return 1;
            k++;
        }
    }
    else{
        k = j + 1;
        while(k < 49){
            if(_1X[k] == f[0] && _1Y[k] == f[1]) return 1;
            k++;
        }
        k = 0;
        while(k < i - 1){
            if(_1X[k] == f[0] && _1Y[k] == f[1]) return 1;
            k++;
        }
    }
    return 0;
}

int lev(){
    system("cls");
    border();
    PrintAtPoint(7,16,"        1        |         2         |          3");
    PrintAtPoint(23,21,"Enter Level to start.");
    PrintAtPoint(28,23,"Enter : ");
    int i;
    char key;
    while(1){
        if(_kbhit()){
            key = getch();
            if(key == 49) return 1;
            else if(key == 50) return 2;
            else if(key == 51) return 3;
        }
    }
}

char out(){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
    PrintAtPoint(13,11,"      O O O O O  U       U  T T T T T      ");
    PrintAtPoint(13,12,"      O       O  U       U      T          ");
    PrintAtPoint(13,13,"      O       O  U       U      T          ");
    PrintAtPoint(13,14,"      O       O  U       U      T          ");
    PrintAtPoint(13,15,"      O       O  U       U      T          ");
    PrintAtPoint(13,16,"      O O O O O  U U U U U      T          ");
    PrintAtPoint(18,18,"      Press 'r' to Restart. ");
    PrintAtPoint(18,19,"       Press 'q' to Exit. ");
    char key;
    while(1){
        key = getch();
        if(key == 'r') return 'r';
        else if (key == 'q') return 'q';
    }
}

void PrintAtPoint(int x, int y, char c[]){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    printf("%s",c);
}