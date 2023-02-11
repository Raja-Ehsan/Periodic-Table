/*Perioidic Table 
Project by Raja Ehsan Riaz 
BSCS-10-B*/ 
#include<stdio.h> 
#include<conio.h> 
#include<windows.h> 
#include<stdlib.h> //Functions void gotoxy(size_t x, size_t y); void display(); void frame(); void element(); //Global variables 
size_t i, j; char g; void main() 
{ 
    system("cls");//Clearing the data from console 
    display(); 
} 
void gotoxy(size_t x, size_t y) 
{ 
    COORD pos; 
    pos.X = x;     pos.Y = y; 
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos); 
} 
void display()//Displaying the Periodic Table// 
{ 
    system("cls");     gotoxy(27, 0); 
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);     printf("PERIODIC TABLE OF ELEMENTS");     gotoxy(13, 3); 
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); 
    for (i = 25;i <= 64;i++) 
    { 
        gotoxy(i, 19);         printf("-"); 
 
    } 
    gotoxy(5, 2); 
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);//4 for Red 
    printf("s-block"); 
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); 
    for (i = 20;i <= 46;i++) 
    { 
        gotoxy(i, 8);         printf("-"); 
    } 
    gotoxy(32, 8); 
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); 
    printf("d-block"); 
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); 
 
    for (i = 13;i <= 17;i++) 
    { 
        gotoxy(i, 2);         printf("-"); 
    } 
 
 
    for (i = 49;i <= 66;i++) 
    { 
        gotoxy(i, 2);         printf("-"); 
    } 
    gotoxy(54, 2); 
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); printf("p-block"); 
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); 
 
    gotoxy(49, 19); 
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); 
    printf("f-block"); 
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); 
    gotoxy(18, 11);     gotoxy(1, 1);     printf("É");     for (i = 2;i <= 79;i++) 
    { 
        gotoxy(i, 1);         printf("Í"); 
    } 
    printf("»");     for (i = 2;i <= 23;i++) 
    { 
        gotoxy(80, i);         printf("º"); 
    } 
    gotoxy(80, 24);     printf("¼");     for (i = 2;i <= 11;i++) 
    { 
        gotoxy(i, 24);         printf("Í"); 
    } 
    gotoxy(1, 24);     printf("È");     for (i = 2;i <= 23;i++) 
    { 
        gotoxy(1, i);         printf("º"); 
    } 
    gotoxy(12, 4);     printf("ÚÄÄ¿");     gotoxy(63, 4); printf("ÚÄÄ¿"); gotoxy(12, 5);printf("³"); gotoxy(15, 5);printf("³");     gotoxy(63, 5);printf("³");     gotoxy(66, 5);printf("³");     gotoxy(12, 6);printf("ÃÄÄ´");     gotoxy(48, 6);printf("Ú");     for (i = 51;i <= 60;i++)         if (i % 3 == 0) 
        { 
            gotoxy(i, 6);             printf("³"); 
        } 
    for (i = 48;i <= 66;i++)         if (i % 3 != 0) 
        { 
            gotoxy(i, 6);             printf("Ä"); 
        } 
    gotoxy(63, 6);     printf("Å");     for (i = 48;i <= 66;i++)         if (i % 3 == 0) 
        { 
            gotoxy(i, 7);             printf("³"); 
        } 
    gotoxy(12, 7);printf("³");     gotoxy(12, 8);printf("ÃÄÄ´");     gotoxy(12, 9);printf("³");     gotoxy(15, 9);printf("³");     gotoxy(15, 6);printf("ÅÄÄ¿");     gotoxy(15, 8);printf("ÅÄÄ´");     gotoxy(18, 7);printf("³");     gotoxy(18, 9);printf("³");     gotoxy(48, 8);printf("Ã");     for (i = 51;i <= 63;i++)         if (i % 3 == 0) 
        { 
            gotoxy(i, 8);             printf("Å"); 
        } 
    for (i = 48;i <= 66;i++)         if (i % 3 != 0) 
        { 
            gotoxy(i, 8);             printf("Ä"); 
        } 
    for (i = 48;i <= 66;i++)         if (i % 3 == 0) 
        { 
            gotoxy(i, 9);             printf("³"); 
        } 
    gotoxy(12, 10);     printf("Ã");gotoxy(15, 10);     printf("Å");     for (i = 13;i <= 66;i++)         if (i % 3 != 0) 
        { 
            gotoxy(i, 10);             printf("Ä");         }for (i = 18;i <= 45;i++)             if (i % 3 == 0) 
            { 
                gotoxy(i, 10);                 printf("³");             }for (i = 46;i <= 63;i++)                 if (i % 3 == 0) 
                {                     gotoxy(i, 10);                     printf("Å");                 }gotoxy(18, 10);                 printf("Å");                 for (i = 12;i <= 66;i++)                     if (i % 3 == 0)                         for (j = 10;j <= 16;j++)                             if (j % 2 != 0) 
                            {                                 gotoxy(i, j);                                 printf("³");                             }for (i = 15;i <= 63;i++)                                 if (i % 3 == 0)                                     for (j = 12;j <= 14;j++)                                         if (j % 2 == 0)                                         {                                             gotoxy(i, j);                                             printf("Å");                                         }for (i = 15;i <= 63;i++)                                             if (i % 3 == 0)                                                 for (j = 12;j <= 14;j++)                                                     if (j % 2 == 0)                                                     {                                                         gotoxy(i, j);                                                         printf("Å");                                                     }for (i = 12;i <= 66;i++)                                                         if (i % 3 == 0)                                                             for (j = 12;j <= 13;j++)                                                                 if (j % 2 == 0)                                                                 {                                                                     gotoxy(i, j);                                                                     printf("Ä");                                                                 }for (i = 12;i <= 42;i++)                                                                     if (i % 3 == 0)                                                                     {                                                                         gotoxy(i, 17);                                                                         printf("³");                                                                     } gotoxy(12, 18);                                                                     printf("À");                                                                     for (i = 12;i <= 42;i++)                                                                         if (i % 3 != 0)                                                                         {                                                                             gotoxy(i, 18);                                                                             printf("Ä");                                                                         }  printf("Ù");                                                                         for (i = 15;i <= 40;i++)                                                                             if (i % 3 == 0) 
                                                                            {                                                                                 gotoxy(i, 18);                                                                                 printf("Á");                                                                             } for (i = 6;i <= 16;i++)                                                                                 if (i % 2 == 0) 
                                                                                {                                                                                     gotoxy(12, i);                                                                                     printf("Ã");                                                                                 } for (i = 6;i <= 14;i++)                                                                                     if (i % 2 == 0) 
                                                                                    {                                                                                         gotoxy(66, i);                                                                                         printf("´");                                                                                     }gotoxy(66, 16);                                                                                     printf("´");                                                                                     gotoxy(12, 20);                                                                                     printf("Ú");                                                                                     for (i = 13;i <= 23;i++) 
                                                                                    {                                                                                         gotoxy(i, 20);                                                                                         printf("Ä");                                                                                     }for (i = 24;i <= 63;i++)                                                                                         if (i % 3 == 0) 
                                                                                        {                                                                                             gotoxy(i, 20);                                                                                             printf("³");                                                                                         }for (i = 24;i <= 66;i++)                                                                                             if (i % 3 != 0) 
                                                                                            {                                                                                                 gotoxy(i, 20);                                                                                                 printf("Ä");                                                                                                 printf("¿");                                                                                                 gotoxy(12, 21);                                                                                                 printf("³"); 
                                                                                            }                                                                                         for (i = 24;i <= 66;i++) 
                                                                                        {                                                                                             if (i % 3 == 0) 
                                                                                            { 
                                                                                                gotoxy(i, 21);                                                                                                 printf("³"); 
                                                                                            }                                                                                         }                                                                                         for (i = 24;i <= 66;i++) 
                                                                                        {                                                                                             if (i % 3 == 0) 
                                                                                            {                                                                                                 gotoxy(i, 20);                                                                                                 printf("Ä");                                                                                             }printf("¿");                                                                                             gotoxy(i, 21);                                                                                             printf("³"); 
                                                                                        }                                                                                         for (i = 24;i <= 66;i++) 
                                                                                        {                                                                                             if (i % 3 == 0) 
                                                                                            {                                                                                                 gotoxy(i, 21);                                                                                                 printf("³");                                                                                             }gotoxy(i, 22);                                                                                             printf("Ã"); 
                                                                                        }                                                                                         for (i = 13;i <= 23;i++) 
                                                                                        {                                                                                             gotoxy(i, 22);                                                                                             printf("Ä"); 
                                                                                        }                                                                                         for (i = 24;i <= 63;i++) 
                                                                                        {                                                                                             if (i % 3 == 0) 
                                                                                            {                                                                                                 gotoxy(i, 22);                                                                                                 printf("Å"); 
                                                                                            }                                                                                         }                                                                                         for (i = 24;i <= 66;i++) 
                                                                                        {                                                                                             if (i % 3 != 0)                                                                                             {                                                                                                 gotoxy(i, 22);                                                                                                 printf("Ä");                                                                                             }  printf("´");                                                                                             gotoxy(12, 23);                                                                                             printf("³"); 
                                                                                        }                                                                                         for (i = 24;i <= 66;i++)                                                                                             if (i % 3 == 0) 
                                                                                            {                                                                                                 gotoxy(i, 23);                                                                                                 printf("³");                                                                                             }   gotoxy(12, 24);                                                                                             printf("À");                                                                                             for (i = 13;i <= 23;i++) 
                                                                                            {                                                                                                 gotoxy(i, 24);                                                                                                 printf("À"); 
                                                                                            }    for (i = 24;i <= 63;i++)                                                                                                 if (i % 3 == 0) 
                                                                                                {                                                                                                     gotoxy(i, 24);                                                                                                     printf("Á"); 
                                                                                                } for (i = 24;i <= 66;i++)                                                                                                     if (i % 3 != 0) 
                                                                                                    {                                                                                                         gotoxy(i, 24);                                                                                                         printf("Ä");                                                                                                     }printf("Ù");                                                                                                     gotoxy(15, 25);                                                                                                     printf("ARROWS TO SCROLL.ENTER TO SELECT.ESC TO EXIT."); 
                                                                                                    gotoxy(13, 5);                                                                                                     printf("H");                                                                                                     gotoxy(13, 7);                                                                                                     printf("Li");                                                                                                     gotoxy(13, 9);                                                                                                     printf("Na");                                                                                                     gotoxy(13, 11);                                                                                                     printf("K"); gotoxy(15, 7); printf("³"); 
                                                                                                    for (i = 13;i < 66;i++) 
                                                                                                    {                                                                                                         gotoxy(i, 14);printf("Ä");                                                                                                         gotoxy(i, 12);printf("Ä");                                                                                                         gotoxy(i, 16);printf("Ä");                                                                                                         if (i > 42) { gotoxy(i, 18);printf("  "); }                                                                                                         if (i % 3 == 0) 
                                                                                                        {                                                                                                             gotoxy(i, 14);printf("Å");                                                                                                             gotoxy(i, 12);printf("Å");                                                                                                             gotoxy(i, 16);printf("Å");                                                                                                             if (i > 42) gotoxy(i, 16);printf("Á"); 
                                                                                                        } 
                                                                                                    } 
                                                                                                     for (i = 23;i < 66;i++) 
                                                                                                    {                                                                                                         gotoxy(i, 20);printf("Ä");                                                                                                         gotoxy(i, 22);printf("Ä");                                                                                                         gotoxy(i - 11, 24);printf("Ä");                                                                                                         gotoxy(i, 24);printf("Ä");                                                                                                         if (i % 3 == 0) 
                                                                                                        {                                                                                                             gotoxy(i, 20);printf("Â");                                                                                                             gotoxy(i, 22);printf("Å");                                                                                                             gotoxy(i, 24);printf("Á"); 
                                                                                                        }                                                                                                     }                                                                                                     for (i = 23;i < 66;i++) 
                                                                                                    {                                                                                                         if (i % 3 == 0)                                                                                                             if (i > 10) 
                                                                                                            {                                                                                                                 gotoxy(i, 24);                                                                                                                 printf("Á"); 
                                                                                                            }                                                                                                     }                                                                                                     for (i = 67;i <= 80;i++) { gotoxy(i, 24);printf("Í"); } for (i = 0;i <= 10;i++) { gotoxy(i, 25);printf(" "); } 
                                                                                                    for (i = 19;i <= 47;i++) { gotoxy(i, 9);printf(" "); }                                                                                                     for (i = 2;i <= 5;i++) { gotoxy(61, i);printf(" "); }                                                                                                     for (i = 15;i <= 63;i++)                                                                                                         if (i % 3 == 0) 
                                                                                                        {                                                                                                             gotoxy(i, 16);                                                                                                             printf("Å"); 
                                                                                                        }                                                                                                     for (i = 41;i <= 66;i++) {                                                                                                         gotoxy(i, 18);                                                                                                         printf("Ä");                                                                                                         if (i % 3 == 0) 
                                                                                                        {                                                                                                             gotoxy(i, 18);                                                                                                             printf("Á");                                                                                                             gotoxy(i, 17);                                                                                                             printf("³"); 
                                                                                                        }                                                                                                         gotoxy(66, 18);                                                                                                         printf("Ù"); 
                                                                                                    }                                                                                                     gotoxy(12, 22);printf("Ã");                                                                                                     gotoxy(66, 20);printf("¿ ");                                                                                                     gotoxy(12, 24);printf("ÀÄ");                                                                                                     gotoxy(80, 24);printf("¼");                                                                                                     gotoxy(59, 9);printf(" ");                                                                                                     gotoxy(56, 9);printf(" "); 
                                                                                                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); 
                                                                                                    gotoxy(13, 3);                                                                                                     printf("1A");                                                                                                     gotoxy(16, 5);                                                                                                     printf("2A");                                                                                                     gotoxy(19, 9);                                                                                                     printf("3B");                                                                                                     gotoxy(22, 9);                                                                                                     printf("4B");                                                                                                     gotoxy(25, 9);                                                                                                     printf("5B"); gotoxy(28, 9); 
                                                                                                    printf("6B");                                                                                                     gotoxy(31, 9);                                                                                                     printf("7B"); 
                                                                                                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); 
                                                                                                    gotoxy(34, 9);                                                                                                     printf("--------"); 
                                                                                                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); 
                                                                                                    gotoxy(37, 9);                                                                                                     printf("8B");                                                                                                     gotoxy(43, 9);                                                                                                     printf("1B");                                                                                                     gotoxy(46, 9);                                                                                                     printf("2B");                                                                                                     gotoxy(49, 5);                                                                                                     printf("3A");                                                                                                     gotoxy(52, 5);                                                                                                     printf("4A");                                                                                                     gotoxy(55, 5);                                                                                                     printf("5A");                                                                                                     gotoxy(58, 5);                                                                                                     printf("6A");                                                                                                     gotoxy(61, 5);                                                                                                     printf("7A");                                                                                                     gotoxy(64, 3);                                                                                                     printf("8A"); 
                                                                                                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); 
                                                                                                    gotoxy(21, 10);                                                                                                     printf("-");                                                                                                     gotoxy(24, 10);                                                                                                     printf("-");                                                                                                     gotoxy(27, 10);                                                                                                     printf("-");                                                                                                     gotoxy(30, 10);                                                                                                     printf("-");                                                                                                     gotoxy(33, 10);                                                                                                     printf("-");                                                                                                     gotoxy(36, 10);                                                                                                     printf("-"); gotoxy(39, 10); 
                                                                                                    printf("-");                                                                                                     gotoxy(42, 10);                                                                                                     printf("-");                                                                                                     gotoxy(45, 10);                                                                                                     printf("-");                                                                                                     gotoxy(51, 6);                                                                                                     printf("-");                                                                                                     gotoxy(54, 6);                                                                                                     printf("-");                                                                                                     gotoxy(57, 6);                                                                                                     printf("-");                                                                                                     gotoxy(60, 6);                                                                                                     printf("-");                                                                                                     gotoxy(13, 13); printf("Rb"); gotoxy(13, 15);printf("Cs");                                                                                                     gotoxy(13, 17);printf("Fr"); gotoxy(16, 7);printf("Be");                                                                                                     gotoxy(16, 9);printf("Mg"); gotoxy(16, 11);printf("Ca");                                                                                                     gotoxy(16, 13);printf("Sr");gotoxy(16, 15);printf("Ba");                                                                                                     gotoxy(16, 17); printf("Ra"); gotoxy(19, 11);printf("Sc");                                                                                                     gotoxy(19, 13);printf("Y"); gotoxy(19, 15);printf("La");                                                                                                     gotoxy(19, 17);printf("Ac");gotoxy(22, 11);printf("Ti");                                                                                                     gotoxy(22, 13); printf("Zr");gotoxy(22, 15);printf("Hf");                                                                                                     gotoxy(22, 17);printf("Rf");gotoxy(25, 11);printf("V");                                                                                                     gotoxy(25, 13);printf("Nb"); gotoxy(25, 15); printf("Ta");                                                                                                     gotoxy(25, 17);printf("Ha");gotoxy(28, 11);printf("Cr");                                                                                                     gotoxy(28, 13); printf("Mo");gotoxy(28, 15);printf("W");                                                                                                     gotoxy(28, 17);printf("Sg");gotoxy(31, 11);printf("Mn");                                                                                                     gotoxy(31, 13);printf("Tc");gotoxy(31, 15);printf("Re");                                                                                                     gotoxy(31, 17); printf("Bh");gotoxy(34, 11);printf("Fe");                                                                                                     gotoxy(34, 13);printf("Ru");gotoxy(34, 15);printf("Os");                                                                                                     gotoxy(34, 17);printf("Hs");gotoxy(37, 11);printf("Co");                                                                                                     gotoxy(37, 13);printf("Rh");gotoxy(37, 15);printf("Ir");                                                                                                     gotoxy(37, 17);printf("Mt");gotoxy(40, 11);printf("Ni");                                                                                                     gotoxy(40, 13);printf("Pd");gotoxy(40, 15);printf("Pt");                                                                                                     gotoxy(40, 17);printf("Ds");gotoxy(43, 17);printf("Rg");                                                                                                     gotoxy(46, 17);printf("Cn");gotoxy(49, 17);printf("Nh");                                                                                                     gotoxy(52, 17);printf("FI"); gotoxy(55, 17);printf("Mc");                                                                                                     gotoxy(58, 17);printf("Lv");gotoxy(61, 17);printf("Ts");                                                                                                     gotoxy(64, 17); printf("Og");gotoxy(43, 11);printf("Cu"); gotoxy(43, 13);printf("Ag");gotoxy(43, 15);printf("Au"); 
                                                                                                    gotoxy(46, 11); printf("Zn");gotoxy(46, 13);printf("Cd");                                                                                                     gotoxy(46, 15);printf("Hg");gotoxy(49, 7);printf("B");                                                                                                     gotoxy(49, 9);printf("Al");gotoxy(49, 11);printf("Ga");                                                                                                     gotoxy(49, 13);printf("In");gotoxy(49, 15);printf("Tl");                                                                                                     gotoxy(52, 7);printf("C");gotoxy(52, 9);printf("Si");                                                                                                     gotoxy(52, 11);printf("Ge");gotoxy(52, 13);printf("Sn");                                                                                                     gotoxy(52, 15);printf("Pb"); gotoxy(55, 7); printf("N");                                                                                                     gotoxy(55, 9);printf("P");gotoxy(55, 11);printf("As");                                                                                                     gotoxy(55, 13);printf("Sb");gotoxy(55, 15); printf("Bi");                                                                                                     gotoxy(58, 7);printf("O");gotoxy(58, 9);printf("S");                                                                                                     gotoxy(58, 11);printf("Se");gotoxy(58, 13);printf("Te");                                                                                                     gotoxy(58, 15);printf("Po");gotoxy(61, 7);printf("F");                                                                                                     gotoxy(61, 9); printf("Cl");gotoxy(61, 11);printf("Br");                                                                                                     gotoxy(61, 13);printf("I");gotoxy(61, 15);printf("At");                                                                                                     gotoxy(64, 5);printf("He");gotoxy(64, 7); printf("Ne");                                                                                                     gotoxy(64, 9);printf("Ar");gotoxy(64, 11);printf("Kr");                                                                                                     gotoxy(64, 13);printf("Xe");gotoxy(64, 15);printf("Rn");                                                                                                     gotoxy(13, 21); 
                                                                                                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); 
                                                                                                    printf("Lanthanides"); 
                                                                                                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); 
                                                                                                    gotoxy(25, 21);                                                                                                     printf("Ce");                                                                                                     gotoxy(28, 21);                                                                                                     printf("Pr");                                                                                                     gotoxy(31, 21);                                                                                                     printf("Nd");                                                                                                     gotoxy(34, 21);                                                                                                     printf("Pm");                                                                                                     gotoxy(37, 21);                                                                                                     printf("Sm");                                                                                                     gotoxy(40, 21);                                                                                                     printf("Eu");                                                                                                     gotoxy(43, 21);                                                                                                     printf("Gd");                                                                                                     gotoxy(46, 21);                                                                                                     printf("Tb");                                                                                                     gotoxy(49, 21); printf("Dy"); 
                                                                                                    gotoxy(52, 21);                                                                                                     printf("Ho");                                                                                                     gotoxy(55, 21);                                                                                                     printf("Er");                                                                                                     gotoxy(58, 21);                                                                                                     printf("Tm");                                                                                                     gotoxy(61, 21);                                                                                                     printf("Yb");                                                                                                     gotoxy(64, 21);                                                                                                     printf("Lu");                                                                                                     gotoxy(13, 23); 
                                                                                                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); 
                                                                                                    printf("Actinides"); 
                                                                                                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); 
                                                                                                    gotoxy(25, 23);                                                                                                     printf("Th");                                                                                                     gotoxy(28, 23);                                                                                                     printf("Pa");                                                                                                     gotoxy(31, 23);                                                                                                     printf("U");                                                                                                     gotoxy(34, 23);                                                                                                     printf("Np");                                                                                                     gotoxy(37, 23);                                                                                                     printf("Pu");                                                                                                     gotoxy(40, 23);                                                                                                     printf("Am");                                                                                                     gotoxy(43, 23);                                                                                                     printf("Cm");                                                                                                     gotoxy(46, 23);                                                                                                     printf("Bk");                                                                                                     gotoxy(49, 23);                                                                                                     printf("Cf");                                                                                                     gotoxy(52, 23);                                                                                                     printf("Ea");                                                                                                     gotoxy(55, 23);                                                                                                     printf("Fm");                                                                                                     gotoxy(58, 23);                                                                                                     printf("Md"); gotoxy(61, 23); 
                                                                                                    printf("No");                                                                                                     gotoxy(64, 23);                                                                                                     printf("Lr");                                                                                                     gotoxy(2, 2);                                                                                                     i = 2;                                                                                                     j = 2;                                                                                                     gotoxy(i, j);                                                                                                     do 
                                                                                                    { 
                                                                                                        //This function will hold the output sceen and wait until you give any type of input 
                                                                                                        g = _getch();                                                                                                         switch (g) 
                                                                                                        {                                                                                                         case 27://27 is the ASCII value of escape key in c                                                                                                             exit(0);                                                                                                             break;                                                                                                         case 80: //80 is th ASCII value of down key in c                                                                                                             if (j == 23) j = 1;                                                                                                             gotoxy(i, ++j);                                                                                                             break;                                                                                                         case 77://77 is th ASCII value of right key in c                                                                                                             if (i == 79) i = 1;                                                                                                             gotoxy(++i, j);                                                                                                             break;                                                                                                         case 75://75 is th ASCII value of left key in c                                                                                                             if (i == 2) i = 80;                                                                                                             gotoxy(--i, j);                                                                                                             break;                                                                                                         case 72://72 is th ASCII value of up key in c                                                                                                             if (j == 2) j = 24;                                                                                                             gotoxy(i, --j);                                                                                                             break;                                                                                                         case 13://13 is the ASCII value of enter key in c                                                                                                             element();                                                                                                             break;  
                                                                                                        } 
                                                                                                    } while (g != 27); 
} 
void frame()//Frame around the display of information of selected Element 
{ 
    //Changing the console application text colour 
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);//9 for blue 
    gotoxy(19, 9);     printf("É");     for (i = 20;i <= 60;i++) 
    { 
        gotoxy(i, 9);         printf("Í"); 
    } 
    printf("»");     gotoxy(19, 17);     printf("È");     for (i = 20;i <= 60;i++) 
    { 
        gotoxy(i, 17);         printf("Í"); 
    } 
    printf("¼");     for (i = 10;i <= 16;i++) 
    { 
        gotoxy(19, i);         printf("º"); 
    } 
    for (i = 10;i <= 16;i++) 
    { 
        gotoxy(61, i);         printf("º"); 
    } 
    gotoxy(5, 24);     printf("Press Esc to Exit"); 
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);//7 for white 
} 
void element()//Information of all the element on the Periodic Table  
{ 
 
    if (((i == 13) || (i == 14)) && (j == 5)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No                :1\n");gotoxy(21, 11);         printf("Symbol                   :H\n");gotoxy(21, 12);         printf("Name                     :Hydrogen\n");gotoxy(21, 13);         printf("Atomic Radius            :0.37\n");gotoxy(21, 15);         printf("Electronegetivity        :2.20\n");gotoxy(30, 20);         printf("Press Any Key To Return....."); 
    } 
 
    else if (((i == 64) || (i == 65)) && (j == 5)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :2\n");gotoxy(21, 11);         printf("Symbol                   :He\n");gotoxy(21, 12);         printf("Name                     :Helium\n");gotoxy(21, 13);         printf("Atomic Radius            :1.2\n");gotoxy(21, 14);gotoxy(21, 15);         printf("Electronegativity        :------\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
 
    else if (((i == 13) || (i == 14)) && (j == 7)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :3\n");gotoxy(21, 11);         printf("Symbol                   :Li\n");gotoxy(21, 12);         printf("Name                     :Lithium\n");gotoxy(21, 13);         printf("Atomic Radius            :1.23\n");gotoxy(21, 15);         printf("Electronegativity        :0.97\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
 
    else if (((i == 16) || (i == 17)) && (j == 7)) 
    { 
system("cls"); frame();gotoxy(21, 10);         printf("Atomic No:               :4\n");gotoxy(21, 11);         printf("Symbol                   :Be\n"); gotoxy(21, 12);         printf("Name                     :Berryllium\n");gotoxy(21, 13);         printf("Atomic Radius            :0.89\n");gotoxy(21, 15);         printf("Electronegativity        :1.47\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
 
    else if (((i == 49) || (i == 50)) && (j == 7)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :5\n");gotoxy(21, 11);         printf("Symbol                   :B\n");gotoxy(21, 12);         printf("Name                     :Boron\n");gotoxy(21, 13);         printf("Atomic Radius            :0.80\n");gotoxy(21, 14);         printf("1st Ionisation potential :8.3\n");gotoxy(21, 15);         printf("Electronegativity        :2.01\n"); gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
 
    else if (((i == 52) || (i == 53)) && (j == 7)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :6\n");gotoxy(21, 11);         printf("Symbol                   :C\n");gotoxy(21, 12);         printf("Name                     :Carbon\n");gotoxy(21, 13);         printf("Atomic Radius            :0.77\n"); gotoxy(21, 14);         printf("1st Ionisation potential :11.26\n");gotoxy(21, 15);         printf("Electronegativity        :2.50\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 52) || (i == 53)) && (j == 7)) 
    { 
system("cls"); frame();gotoxy(21, 10); printf("Atomic No:               :6\n");gotoxy(21, 11); printf("Symbol                   :C\n");gotoxy(21, 12); 
 
printf("Name                     :Carbon n");gotoxy(21, 13); printf("Atomic Radius            :0.77\n");gotoxy(21, 14); printf("1st Ionisation potential :11.26\n");gotoxy(21, 15);         printf("Electronegativity        :2.50\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
 
    else if (((i == 55) || (i == 56)) && (j == 7)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :7\n");gotoxy(21, 11);         printf("Symbol                   :N\n");gotoxy(21, 12);         printf("Name                     :Nitrogen\n");gotoxy(21, 13);         printf("Atomic Radius            :0.74\n");gotoxy(21, 14);         printf("1st Ionisation potential :14.54\n");gotoxy(21, 15);         printf("Electronegativity        :3.07\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
 
    else if (((i == 58) || (i == 59)) && (j == 7)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :8\n");gotoxy(21, 11);         printf("Symbol                   :O\n");gotoxy(21, 12);         printf("Name                     :Oxygen\n");gotoxy(21, 13);         printf("Atomic Radius            :0.74\n");gotoxy(21, 14);         printf("1st Ionisation potential :13.61\n");gotoxy(21, 15);         printf("Electronegativity        :3.50\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
 
    else if (((i == 61) || (i == 62)) && (j == 7)) 
    { 
system("cls"); frame();gotoxy(21, 10); printf("Atomic No:               :9\n");gotoxy(21, 11); printf("Symbol                   :F\n");gotoxy(21, 12); printf("Name                     :Fluorine n");gotoxy(21, 13); printf("Atomic Radius            :0.72\n");gotoxy(21, 14); printf("1st Ionisation potential :17.42\n");gotoxy(21, 15);         printf("Electronegativity        :4.10\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
 
    else if (((i == 64) || (i == 65)) && (j == 7)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :10\n");gotoxy(21, 11);         printf("Symbol                   :Ne\n");gotoxy(21, 12);         printf("Name                     :Neon\n");gotoxy(21, 13);         printf("Atomic Radius            :1.60\n");gotoxy(21, 14);         printf("1st Ionisation potential :21.56\n");gotoxy(21, 15);         printf("Electronegativity        :-\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
 
    else if (((i == 13) || (i == 14)) && (j == 9)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :11\n");gotoxy(21, 11);         printf("Symbol                   :Na\n");gotoxy(21, 12);         printf("Name                     :Sodium\n");gotoxy(21, 13);         printf("Atomic Radius            :1.57\n");gotoxy(21, 15);         printf("Electronegativity        :1.01\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
 
    else if (((i == 16) || (i == 17)) && (j == 9)) 
    { 
        system("cls"); frame();gotoxy(21, 10); printf("Atomic No:               :12\n");gotoxy(21, 11); printf("Symbol                   :Mg\n");gotoxy(21, 12); printf("Name                :Magnesium\n"); gotoxy(21, 13); printf("Atomic Radius            :1.36 n");gotoxy(21, 15); printf("Electonegativity         :1.23\n");gotoxy(30, 20); printf("Press Any Key To Return.....   "); 
    } 
 
    else if (((i == 49) || (i == 50)) && (j == 9)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :13\n");gotoxy(21, 11);         printf("Symbol                   :Al\n");gotoxy(21, 12);         printf("Name                     :Aluminium\n");gotoxy(21, 13);         printf("Atomic Radius            :1.25\n");gotoxy(21, 14);         printf("1st Ionisation potential :6.0\n");gotoxy(21, 15);         printf("Electronegativity        :1.47\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
 
    else if (((i == 52) || (i == 53)) && (j == 9)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :14\n");gotoxy(21, 11);         printf("Symbol                   :Si\n");gotoxy(21, 12);         printf("Name                     :Silicon\n");gotoxy(21, 13);         printf("Atomic Radius            :1.17\n");gotoxy(21, 14);         printf("1st Ionisation potential :8.15\n");gotoxy(21, 15);         printf("Electronegativity        :1.74\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
 
    else if (((i == 55) || (i == 56)) && (j == 9)) 
    { 
        system("cls");         frame();gotoxy(21, 10); printf("Atomic No:               :15\n");gotoxy(21, 11); printf("Symbol                   :P\n");gotoxy(21, 12); printf("Name                     :Phosphorus\n");gotoxy(21, 13); printf("Atomic Radius            :1.10\n");gotoxy(21, 14); 
 
        printf("1st Ionisation potential :11.0\n");gotoxy(21, 15);         printf("Electronegativity        :2.06\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
 
    else if (((i == 58) || (i == 59)) && (j == 9)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :16\n");gotoxy(21, 11);         printf("Symbol                   :S\n");gotoxy(21, 12);         printf("Name                     :Sulphur\n");gotoxy(21, 13);         printf("Atomic Radius            :1.04\n");gotoxy(21, 14);         printf("1st Ionisation potential :10.36\n");gotoxy(21, 15);         printf("Electronegativity        :2.44\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
 
 
 
    else  if (((i == 61) || (i == 62)) && (j == 9)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :17\n");gotoxy(21, 11);         printf("Symbol                   :Cl\n");gotoxy(21, 12);         printf("Name                     :Chlorine\n"); gotoxy(21, 13);         printf("Atomic Radius            :0.99\n");gotoxy(21, 14);         printf("1st Ionisation potential :13.0\n");gotoxy(21, 15);         printf("Electronegativity        :2.83 \n"); gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
 
 
 
    else if (((i == 64) || (i == 65)) && (j == 9)) 
    { 
system("cls"); frame();gotoxy(21, 10); printf("Atomic No:               :18\n");gotoxy(21, 11); printf("Symbol                   :Ar\n");gotoxy(21, 12); printf("Name                     :Argon\n");gotoxy(21, 13);         printf("Atomic Radius            :1.90\n");gotoxy(21, 14);         printf("1st Ionisation potential :15.76\n");gotoxy(21, 15);         printf("Electronegativity        :-\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
 
    else if (((i == 13) || (i == 14)) && (j == 11)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :19\n");gotoxy(21, 11);         printf("Symbol                   :K\n");gotoxy(21, 12);         printf("Name                     :Potassium\n");gotoxy(21, 13);         printf("Atomic Radius            :2.03\n");gotoxy(21, 15);         printf("Electronegativity        :0.91\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
 
    else if (((i == 16) || (i == 17)) && (j == 11)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No               :20\n"); gotoxy(21, 11);         printf("Symbol                  :ca\n");gotoxy(21, 12);         printf("Name                :Calcium\n");gotoxy(21, 13);         printf("Atomic Radius           :1.74\n");gotoxy(21, 15);         printf("Electonegativity            :1.04\n");gotoxy(30, 20);         printf("Press Any Key To Return.....   "); 
    } 
 
    else if (((i == 13) || (i == 14)) && (j == 13)) 
    { 
        system("cls");         frame();gotoxy(21, 10); printf("Atomic No:               :37\n");gotoxy(21, 11); printf("Symbol                   :Rb\n");gotoxy(21, 12); printf("Name                     :Rubidium\n");gotoxy(21, 13); printf("Atomic Radius            :2.16\n");gotoxy(21, 15); printf("Electronegativity        :0.89\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
 
    else if (((i == 13) || (i == 14)) && (j == 15)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :55\n");gotoxy(21, 11);         printf("Symbol                   :Cs\n");gotoxy(21, 12);         printf("Name                     :Cesium\n");gotoxy(21, 13);         printf("Atomic Radius            :2.35\n"); gotoxy(21, 15);         printf("Electronegativity        :0.86\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
 
    else if (((i == 13) || (i == 14)) && (j == 17)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :87\n");gotoxy(21, 11);         printf("Symbol                   :Fr\n");gotoxy(21, 12);         printf("Name                     :Francium\n");gotoxy(21, 13);         printf("Atomic Radius            :-\n");gotoxy(21, 15);         printf("Electronegativity        :0.86\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
 
    else if (((i == 64) || (i == 65)) && (j == 23)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No.              :103\n");gotoxy(21, 11);         printf("Symbol                  :Lr\n");gotoxy(21, 12);         printf("Name                    :Lawencium \n"); gotoxy(21, 13); printf("Atomic Radius           :---\n");gotoxy(21, 14); printf("1st Ionisation Potential:---\n");gotoxy(21, 15); printf("Electonegativity        :1.2\n");gotoxy(21, 16); printf("Electronic Configuration:1s1");gotoxy(30, 20); printf("Press Any Key To Return....."); 
    } 
 
    else if (((i == 16) || (i == 17)) && (j == 13)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :38\n");gotoxy(21, 11);         printf("Symbol                   :Sr\n");gotoxy(21, 12);         printf("Name                     :Strontium\n"); gotoxy(21, 13);         printf("Atomic Radius            :2.45\n");gotoxy(21, 14);         printf("1st Ionisation potential :549.48\n");gotoxy(21, 15);         printf("Electronegativity        :2.50\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 16) || (i == 17)) && (j == 15)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :56\n");gotoxy(21, 11);         printf("Symbol                   :Ba\n");gotoxy(21, 12);         printf("Name                     :Barium\n");gotoxy(21, 13);         printf("Atomic Radius            :2.78\n");gotoxy(21, 14);         printf("1st Ionisation potential :503\n");gotoxy(21, 15);         printf("Electronegativity        :0.89\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
 
    else if (((i == 16) || (i == 17)) && (j == 17)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :88\n");gotoxy(21, 11);         printf("Symbol                   :Ra\n");gotoxy(21, 12);         printf("Name                     :Radium\n");gotoxy(21, 13);         printf("Atomic Radius            :283\n");gotoxy(21, 14);         printf("1st Ionisation potential :509\n");gotoxy(21, 15); printf("Electronegativity        :0.89\n");gotoxy(30, 20); printf("Press Any Key To Return......"); 
    } 
 
    else if (((i == 19) || (i == 20)) && (j == 11)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :21\n");gotoxy(21, 11);         printf("Symbol                   :Sc\n");gotoxy(21, 12);         printf("Name                     :Scandium\n");gotoxy(21, 13);         printf("Atomic Radius            :230\n");gotoxy(21, 14);         printf("1st Ionisation potential :631\n");gotoxy(21, 15);         printf("Electronegativity        :1.36\n"); gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
 
    else if (((i == 19) || (i == 20)) && (j == 13)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :39\n");gotoxy(21, 11);         printf("Symbol                   :Y\n");gotoxy(21, 12);         printf("Name                     :Yttrium\n");gotoxy(21, 13);         printf("Atomic Radius            :240\n");gotoxy(21, 14);         printf("1st Ionisation potential :599\n");gotoxy(21, 15);         printf("Electronegativity        :1.22\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 19) || (i == 20)) && (j == 15)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               : 57\n");gotoxy(21, 11);         printf("Symbol                   :La\n");gotoxy(21, 12);         printf("Name                     :Lanthanum\n");gotoxy(21, 13);         printf("Atomic Radius            :250\n");gotoxy(21, 14);         printf("1st Ionisation potential :538\n");gotoxy(21, 15); printf("Electronegativity        :1.10\n");gotoxy(30, 20); printf("Press Any Key To Return......"); 
    } 
 
    else if (((i == 19) || (i == 20)) && (j == 17)) 
    { 
        system("cls");         frame(); gotoxy(21, 10);         printf("Atomic No:               : 89\n");gotoxy(21, 11);         printf("Symbol                   :Ac\n");gotoxy(21, 12);         printf("Name                     :Actinium\n");gotoxy(21, 13);         printf("Atomic Radius            :200\n");gotoxy(21, 14);         printf("1st Ionisation potential :499\n");gotoxy(21, 15);         printf("Electronegativity        :1.1\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 22) || (i == 23)) && (j == 11)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               : 22\n");gotoxy(21, 11);         printf("Symbol                   :Ti\n");gotoxy(21, 12);         printf("Name                     :Titanium\n");gotoxy(21, 13);         printf("Atomic Radius            :215\n");gotoxy(21, 14);         printf("1st Ionisation potential :658 \n");gotoxy(21, 15);         printf("Electronegativity        :1.54\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 22) || (i == 23)) && (j == 13)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :40\n");gotoxy(21, 11);         printf("Symbol                   :Zr\n");gotoxy(21, 12);         printf("Name                     :Zirconium\n"); gotoxy(21, 13);         printf("Atomic Radius            :215\n");gotoxy(21, 14);         printf("1st Ionisation potential :206 \n");gotoxy(21, 15);         printf("Electronegativity        :1.33\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 22) || (i == 23)) && (j == 15)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :72\n");gotoxy(21, 11);         printf("Symbol                   :Hf\n");gotoxy(21, 12);         printf("Name                     :Hafnium\n");gotoxy(21, 13);         printf("Atomic Radius            :225 \n");gotoxy(21, 14);         printf("1st Ionisation potential :658 \n");gotoxy(21, 15);         printf("Electronegativity        :1.3\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 22) || (i == 23)) && (j == 17)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :104\n");gotoxy(21, 11);         printf("Symbol                   :Rf\n");gotoxy(21, 12);         printf("Name                     :Rutherfordium\n");gotoxy(21, 13);         printf("Atomic Radius            :200 \n");gotoxy(21, 14);         printf("1st Ionisation potential :265 \n");gotoxy(21, 15);         printf("Electronegativity        :1.3\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 25) || (i == 26)) && (j == 11)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :23\n"); gotoxy(21, 11);         printf("Symbol                   : V\n");gotoxy(21, 12);         printf("Name                     :Vanadium\n"); gotoxy(21, 13);         printf("Atomic Radius            :205 \n");gotoxy(21, 14);         printf("1st Ionisation potential :373 \n"); gotoxy(21, 15);         printf("Electronegativity        :1.63\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 25) || (i == 26)) && (j == 13)) 
    { 
system("cls"); 
frame();gotoxy(21, 10); printf("Atomic No:               :41\n");gotoxy(21, 11);         printf("Symbol                   :Nb\n");gotoxy(21, 12);         printf("Name                     :Niobium\n");gotoxy(21, 13);         printf("Atomic Radius            :207 \n");gotoxy(21, 14);         printf("1st Ionisation potential :664 \n");gotoxy(21, 15);         printf("Electronegativity        :1.6\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 25) || (i == 26)) && (j == 15)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               : 73\n"); gotoxy(21, 11);         printf("Symbol                   :Ta\n");gotoxy(21, 12);         printf("Name                     :Tantalum\n");gotoxy(21, 13);         printf("Atomic Radius            :220 \n");gotoxy(21, 14);         printf("1st Ionisation potential :761 \n");gotoxy(21, 15);         printf("Electronegativity        :.64\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 25) || (i == 26)) && (j == 17)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :105\n");gotoxy(21, 11);         printf("Symbol                   :Ha\n");gotoxy(21, 12);         printf("Name                     :Dubnium\n");gotoxy(21, 13);         printf("Atomic Radius            :139  \n");gotoxy(21, 14);         printf("1st Ionisation potential :761 \n");gotoxy(21, 15);         printf("Electronegativity        :.7\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 28) || (i == 29)) && (j == 13)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :42\n"); gotoxy(21, 11);         printf("Symbol                   :Mo\n");gotoxy(21, 12);         printf("Name                     :Molybdenum\n");gotoxy(21, 13);         printf("Atomic Radius            :220  \n");gotoxy(21, 14);         printf("1st Ionisation potential :675 \n");gotoxy(21, 15);         printf("Electronegativity        :2.16\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 28) || (i == 29)) && (j == 15)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :74\n");gotoxy(21, 11);         printf("Symbol                   :W\n");gotoxy(21, 12);         printf("Name                     :Tungsten\n");gotoxy(21, 13);         printf("Atomic Radius            :210  \n");gotoxy(21, 14);         printf("1st Ionisation potential :738 \n");gotoxy(21, 15);         printf("Electronegativity        :2.36\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 28) || (i == 29)) && (j == 17)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :106\n");gotoxy(21, 11);         printf("Symbol                   :Sg\n");gotoxy(21, 12);         printf("Name                     :Seaborgium\n");gotoxy(21, 13);         printf("Atomic Radius            :200  \n");gotoxy(21, 14);         printf("1st Ionisation potential :294 \n");gotoxy(21, 15);         printf("Electronegativity        :Unknown\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 25) || (i == 26)) && (j == 21)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :58\n");gotoxy(21, 11);         printf("Symbol                   :Ce\n");gotoxy(21, 12);         printf("Name                     :Cerium\n");gotoxy(21, 13);         printf("Atomic Radius            :248  \n");gotoxy(21, 14); printf("1st Ionisation potential :527\n");gotoxy(21, 15); printf("Electronegativity        :1.12\n");gotoxy(30, 20); printf("Press Any Key To Return......"); 
    } 
    else if (((i == 25) || (i == 26)) && (j == 23)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :90\n");gotoxy(21, 11);         printf("Symbol                   :Th\n");gotoxy(21, 12);         printf("Name                     :Thorium\n");gotoxy(21, 13);         printf("Atomic Radius            :240  \n");gotoxy(21, 14);         printf("1st Ionisation potential :608\n");gotoxy(21, 15);         printf("Electronegativity        :1.3\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 28) || (i == 29)) && (j == 21)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :59\n");gotoxy(21, 11);         printf("Symbol                   :Pr\n");gotoxy(21, 12);         printf("Name                     :Praseodymium\n");gotoxy(21, 13);         printf("Atomic Radius            :247  \n");gotoxy(21, 14);         printf("1st Ionisation potential :546\n");gotoxy(21, 15);         printf("Electronegativity        :2.96\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 28) || (i == 29)) && (j == 23)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :91\n");gotoxy(21, 11);         printf("Symbol                   :Pa\n");gotoxy(21, 12);         printf("Name                     :Protactinium\n");gotoxy(21, 13);         printf("Atomic Radius            :163  \n");gotoxy(21, 14);         printf("1st Ionisation potential :589\n");gotoxy(21, 15);         printf("Electronegativity        :1.5\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 31) || (i == 32)) && (j == 21)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :60\n");gotoxy(21, 11);         printf("Symbol                   :Nd\n");gotoxy(21, 12);         printf("Name                     :Neodymium\n");gotoxy(21, 13);         printf("Atomic Radius            :229  \n");gotoxy(21, 14);         printf("1st Ionisation potential :533\n");gotoxy(21, 15);         printf("Electronegativity        :1.14\n");(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 31) || (i == 32)) && (j == 23)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :92\n");gotoxy(21, 11);         printf("Symbol                   :U\n");gotoxy(21, 12);         printf("Name                     :Uranium\n");gotoxy(21, 13);         printf("Atomic Radius            :230 \n");gotoxy(21, 14);         printf("1st Ionisation potential :619\n");gotoxy(21, 15);         printf("Electronegativity        :1.38\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 34) || (i == 35)) && (j == 21)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :61\n");gotoxy(21, 11);         printf("Symbol                   :Pm\n");gotoxy(21, 12);         printf("Name                     :Promethium\n");gotoxy(21, 13);         printf("Atomic Radius            :183 \n");gotoxy(21, 14);         printf("1st Ionisation potential :536\n");gotoxy(21, 15);         printf("Electronegativity        :1.14\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 34) || (i == 35)) && (j == 23)) 
    { 
system("cls"); 
frame();gotoxy(21, 10); printf("Atomic No:               :93\n");gotoxy(21, 11);         printf("Symbol                   :Np\n");gotoxy(21, 12);         printf("Name                     :Neptunium \n");gotoxy(21, 13);         printf("Atomic Radius            :200 \n");gotoxy(21, 14);         printf("1st Ionisation potential :626\n");gotoxy(21, 15);         printf("Electronegativity        :1.36\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 37) || (i == 38)) && (j == 21)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :62\n");gotoxy(21, 11);         printf("Symbol                   :Sm\n");gotoxy(21, 12);         printf("Name                     :Samarium \n");gotoxy(21, 13);         printf("Atomic Radius            :242\n");gotoxy(21, 14);         printf("1st Ionisation potential :543\n");gotoxy(21, 15);         printf("Electronegativity        :1.17\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 37) || (i == 38)) && (j == 23)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :94\n");gotoxy(21, 11);         printf("Symbol                   :Pu\n");gotoxy(21, 12);         printf("Name                     :Plutonium \n");gotoxy(21, 13);         printf("Atomic Radius            :175\n");gotoxy(21, 14);         printf("1st Ionisation potential :1020\n");gotoxy(21, 15);         printf("Electronegativity        :1.17\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 40) || (i == 41)) && (j == 21)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :63\n");gotoxy(21, 11);         printf("Symbol                   :Eu\n");gotoxy(21, 12);         printf("Name                     :Europium \n");gotoxy(21, 13);         printf("Atomic Radius            :240\n");gotoxy(21, 14);         printf("1st Ionisation potential :543\n");gotoxy(21, 15);         printf("Electronegativity        :1.2\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 40) || (i == 41)) && (j == 23)) 
    { 
        system("cls");         frame(); gotoxy(21, 10);         printf("Atomic No:               :95\n");gotoxy(21, 11);         printf("Symbol                   :Am\n");gotoxy(21, 12);         printf("Name                     :Americium \n");gotoxy(21, 13);         printf("Atomic Radius            :200\n"); gotoxy(21, 14);         printf("1st Ionisation potential :578\n"); gotoxy(21, 15);         printf("Electronegativity        :1.3\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 43) || (i == 44)) && (j == 21)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :64\n"); gotoxy(21, 11);         printf("Symbol                   :Gd\n");gotoxy(21, 12);         printf("Name                     :Gadolinium \n"); gotoxy(21, 13);         printf("Atomic Radius            :238\n");gotoxy(21, 14);         printf("1st Ionisation potential :598\n");gotoxy(21, 15);         printf("Electronegativity        :1.2\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 43) || (i == 44)) && (j == 21)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :96\n"); gotoxy(21, 11);         printf("Symbol                   :Cm\n");gotoxy(21, 12);         printf("Name                     :Curium \n"); gotoxy(21, 13);         printf("Atomic Radius            :200\n");gotoxy(21, 14); printf("1st Ionisation potential :581\n"); gotoxy(21, 15); printf("Electronegativity        :1.3\n");gotoxy(30, 20); printf("Press Any Key To Return......"); 
    } 
    else if (((i == 46) || (i == 47)) && (j == 21)) 
    { 
        system("cls");         frame(); gotoxy(21, 10);         printf("Atomic No:               :65\n"); gotoxy(21, 11);         printf("Symbol                   :Tb\n");gotoxy(21, 12);         printf("Name                     :Terbium\n");gotoxy(21, 13);         printf("Atomic Radius            :237\n");gotoxy(21, 14);         printf("1st Ionisation potential :565\n");gotoxy(21, 15);         printf("Electronegativity        :1.2\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 46) || (i == 47)) && (j == 23)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :97\n");gotoxy(21, 11);         printf("Symbol                   :Bk\n");gotoxy(21, 12);         printf("Name                     :Berkelium\n");gotoxy(21, 13);         printf("Atomic Radius            :200\n");gotoxy(21, 14);         printf("1st Ionisation potential :601\n");gotoxy(21, 15);         printf("Electronegativity        :1.3\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 49) || (i == 50)) && (j == 21)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :66\n");gotoxy(21, 11);         printf("Symbol                   :Dy\n");gotoxy(21, 12);         printf("Name                     :Dysprosium\n");gotoxy(21, 13);         printf("Atomic Radius            :235\n");gotoxy(21, 14);         printf("1st Ionisation potential :578\n");gotoxy(21, 15);         printf("Electronegativity        :1.22\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 49) || (i == 50)) && (j == 23)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :98\n");gotoxy(21, 11);         printf("Symbol                   :Cf\n");gotoxy(21, 12);         printf("Name                     :Californium\n");gotoxy(21, 13);         printf("Atomic Radius            :200\n");gotoxy(21, 14);         printf("1st Ionisation potential :611\n");gotoxy(21, 15);         printf("Electronegativity        :1.3\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 52) || (i == 53)) && (j == 21)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :67\n");gotoxy(21, 11);         printf("Symbol                   :Ho\n");gotoxy(21, 12);         printf("Name                     :Holmium\n");gotoxy(21, 13);         printf("Atomic Radius            :233\n");gotoxy(21, 14);         printf("1st Ionisation potential :580\n");gotoxy(21, 15);         printf("Electronegativity        :1.23\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 52) || (i == 53)) && (j == 23)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :99\n");gotoxy(21, 11);         printf("Symbol                   :Es\n");gotoxy(21, 12);         printf("Name                     :Einsteinium\n");gotoxy(21, 13);         printf("Atomic Radius            :200\n");gotoxy(21, 14);         printf("1st Ionisation potential :619\n");gotoxy(21, 15);         printf("Electronegativity        :1.3\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 55) || (i == 56)) && (j == 21)) 
    { 
system("cls"); 
frame();gotoxy(21, 10); printf("Atomic No:               :68\n");gotoxy(21, 11);         printf("Symbol                   :Er\n");gotoxy(21, 12);         printf("Name                     :Erbium\n");gotoxy(21, 13);         printf("Atomic Radius            :232\n");gotoxy(21, 14);         printf("1st Ionisation potential :589\n");gotoxy(21, 15);         printf("Electronegativity        :1.24\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 55) || (i == 56)) && (j == 23)) 
    { 
        system("cls");gotoxy(21, 10);         printf("Atomic No:               :100\n");gotoxy(21, 11);         printf("Symbol                   :Fm\n");gotoxy(21, 12);         printf("Name                     :Fermium \n");gotoxy(21, 13);         printf("Atomic Radius            :200\n");gotoxy(21, 14);         printf("1st Ionisation potential :623\n");gotoxy(21, 15);         printf("Electronegativity        :1.24\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 58) || (i == 59)) && (j == 21)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :69\n");gotoxy(21, 11);         printf("Symbol                   :Tm\n");gotoxy(21, 12);         printf("Name                     :Thulium \n");gotoxy(21, 13);         printf("Atomic Radius            :230\n");gotoxy(21, 14);         printf("1st Ionisation potential :597\n");gotoxy(21, 15);         printf("Electronegativity        :1.33\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 58) || (i == 59)) && (j == 23)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :101\n");gotoxy(21, 11);         printf("Symbol                   :Md\n");gotoxy(21, 12);         printf("Name                     :Mendelevium \n");gotoxy(21, 13);         printf("Atomic Radius            :216\n");gotoxy(21, 14);         printf("1st Ionisation potential :635\n");gotoxy(21, 15);         printf("Electronegativity        :1.3\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 61) || (i == 62)) && (j == 21)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :70\n");gotoxy(21, 11);         printf("Symbol                   :Yt\n");gotoxy(21, 12);         printf("Name                     :Ytterbium \n");gotoxy(21, 13);         printf("Atomic Radius            :228\n");gotoxy(21, 14);         printf("1st Ionisation potential :603\n");gotoxy(21, 15);         printf("Electronegativity        :1.1\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 61) || (i == 62)) && (j == 23)) 
    { 
        system("cls");         frame(); gotoxy(21, 10);         printf("Atomic No:               :102\n"); gotoxy(21, 11);         printf("Symbol                   :No\n");gotoxy(21, 12);         printf("Name                     :Nobelium \n");gotoxy(21, 13);         printf("Atomic Radius            :218\n"); gotoxy(21, 14);         printf("1st Ionisation potential :623\n"); gotoxy(21, 15);         printf("Electronegativity        :1.32\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 64) || (i == 65)) && (j == 21)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :71\n");gotoxy(21, 11);         printf("Symbol                   :Lu\n");gotoxy(21, 12);         printf("Name                     :Lutetium \n");gotoxy(21, 13);         printf("Atomic Radius            :226\n");gotoxy(21, 14); printf("1st Ionisation potential :617\n");gotoxy(21, 15); printf("Electronegativity        :1.33\n");gotoxy(30, 20); printf("Press Any Key To Return......"); 
    } 
    else if (((i == 31) || (i == 32)) && (j == 11)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :25\n");gotoxy(21, 11);         printf("Symbol                   :Mn\n");gotoxy(21, 12);         printf("Name                     :Manganese  \n");gotoxy(21, 13);         printf("Atomic Radius            :197\n");gotoxy(21, 14);         printf("1st Ionisation potential :717\n");gotoxy(21, 15);         printf("Electronegativity        :1.55\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 31) || (i == 32)) && (j == 13)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :43\n");gotoxy(21, 11);         printf("Symbol                   :Tc\n");gotoxy(21, 12);         printf("Name                     :Technetium  \n");gotoxy(21, 13);         printf("Atomic Radius            :202\n");gotoxy(21, 14);         printf("1st Ionisation potential :702\n");gotoxy(21, 15);         printf("Electronegativity        :1.9\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 31) || (i == 32)) && (j == 15)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :75\n");gotoxy(21, 11);         printf("Symbol                   :Re\n");gotoxy(21, 12);         printf("Name                     :Rhenium \n");gotoxy(21, 13);         printf("Atomic Radius            :205\n");gotoxy(21, 14);         printf("1st Ionisation potential :137\n");gotoxy(21, 15);         printf("Electronegativity        :1.9\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 31) || (i == 32)) && (j == 17)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :107\n");gotoxy(21, 11);         printf("Symbol                   :Bh\n");gotoxy(21, 12);         printf("Name                     :Bohrium \n");gotoxy(21, 13);         printf("Atomic Radius            :197\n");gotoxy(21, 14);         printf("1st Ionisation potential :128\n");gotoxy(21, 15);         printf("Electronegativity        :2.2\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 34) || (i == 35)) && (j == 11)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :26\n");gotoxy(21, 11);         printf("Symbol                   :Fe\n");gotoxy(21, 12);         printf("Name                     :Iron \n");gotoxy(21, 13);         printf("Atomic Radius            :140\n");gotoxy(21, 14);         printf("1st Ionisation potential :496\n");gotoxy(21, 15);         printf("Electronegativity        :1.83\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 34) || (i == 35)) && (j == 13)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :44\n");gotoxy(21, 11);         printf("Symbol                   :Ru\n");gotoxy(21, 12);         printf("Name                     :Ruthenium \n");gotoxy(21, 13);         printf("Atomic Radius            :134\n");gotoxy(21, 14);         printf("1st Ionisation potential :711\n");gotoxy(21, 15);         printf("Electronegativity        :2.2\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 34) || (i == 35)) && (j == 15)) 
    { 
system("cls"); frame();gotoxy(21, 10); printf("Atomic No:               :76\n");gotoxy(21, 11); printf("Symbol                   :Os\n");gotoxy(21, 12);         printf("Name                     :Osmium \n");gotoxy(21, 13);         printf("Atomic Radius            :200\n");gotoxy(21, 14);         printf("1st Ionisation potential :840\n");gotoxy(21, 15);         printf("Electronegativity        :2.2\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 34) || (i == 35)) && (j == 17)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :108\n");gotoxy(21, 11);         printf("Symbol                   :Hs\n");gotoxy(21, 12);         printf("Name                     :Hassium \n");gotoxy(21, 13);         printf("Atomic Radius            :200\n");gotoxy(21, 14);         printf("1st Ionisation potential :750\n");gotoxy(21, 15);         printf("Electronegativity        :2.1\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
 
    else if (((i == 37) || (i == 38)) && (j == 11)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :27\n");gotoxy(21, 11);         printf("Symbol                   :Co\n");gotoxy(21, 12);         printf("Name                     :Cobalt \n");gotoxy(21, 13);         printf("Atomic Radius            :200\n");gotoxy(21, 14);         printf("1st Ionisation potential :760\n");gotoxy(21, 15);         printf("Electronegativity        :1.88\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 37) || (i == 38)) && (j == 13)) 
    { 
        system("cls");         frame();gotoxy(21, 10); printf("Atomic No:               :45\n");gotoxy(21, 11); printf("Symbol                   :Rh\n");gotoxy(21, 12);         printf("Name                     :Rhodium \n");gotoxy(21, 13);         printf("Atomic Radius            :200\n");gotoxy(21, 14);         printf("1st Ionisation potential :1312\n");gotoxy(21, 15);         printf("Electronegativity        :0.82\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 37) || (i == 38)) && (j == 15)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :77\n");gotoxy(21, 11);         printf("Symbol                   :Ir\n");gotoxy(21, 12);         printf("Name                     :Iridium \n");gotoxy(21, 13);         printf("Atomic Radius            :200\n");gotoxy(21, 14);         printf("1st Ionisation potential :865\n");gotoxy(21, 15);         printf("Electronegativity        :2.2\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 37) || (i == 38)) && (j == 17)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :109\n");gotoxy(21, 11);         printf("Symbol                   :Mt\n");gotoxy(21, 12);         printf("Name                     :Meitnerium \n");gotoxy(21, 13);         printf("Atomic Radius            :128\n");gotoxy(21, 14);         printf("1st Ionisation potential :800\n");gotoxy(21, 15);         printf("Electronegativity        :2.2\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 40) || (i == 41)) && (j == 11)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :28\n");gotoxy(21, 11);         printf("Symbol                   :Ni\n");gotoxy(21, 12);         printf("Name                     :Nickel \n");gotoxy(21, 13); printf("Atomic Radius            :163\n");gotoxy(21, 14); printf("1st Ionisation potential :737\n");gotoxy(21, 15); printf("Electronegativity        :1.91\n");gotoxy(30, 20); printf("Press Any Key To Return......"); 
    } 
    else if (((i == 40) || (i == 41)) && (j == 13)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :46\n");gotoxy(21, 11);         printf("Symbol                   :Pd\n");gotoxy(21, 12);         printf("Name                     :Palladium \n");gotoxy(21, 13);         printf("Atomic Radius            :163\n");gotoxy(21, 14);         printf("1st Ionisation potential :805\n");gotoxy(21, 15);         printf("Electronegativity        :2.2\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 40) || (i == 41)) && (j == 15)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :78\n");gotoxy(21, 11);         printf("Symbol                   :Pt\n");gotoxy(21, 12);         printf("Name                     :Platinum \n");gotoxy(21, 13);         printf("Atomic Radius            :175\n");gotoxy(21, 14);         printf("1st Ionisation potential :870\n");gotoxy(21, 15);         printf("Electronegativity        :2.28\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 40) || (i == 41)) && (j == 17)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :110\n");gotoxy(21, 11);         printf("Symbol                   :Ds\n");gotoxy(21, 12);         printf("Name                     :Darmstadtium \n");gotoxy(21, 13);         printf("Atomic Radius            :118\n");gotoxy(21, 14);         printf("1st Ionisation potential :955\n");gotoxy(21, 15);         printf("Electronegativity        :2.1\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 43) || (i == 44)) && (j == 11)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :29\n");gotoxy(21, 11);         printf("Symbol                   :Cu\n");gotoxy(21, 12);         printf("Name                     :Copper \n");gotoxy(21, 13);         printf("Atomic Radius            :135\n");gotoxy(21, 14);         printf("1st Ionisation potential :745\n");gotoxy(21, 15);         printf("Electronegativity        :1.9\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 43) || (i == 44)) && (j == 13)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :47\n");gotoxy(21, 11);         printf("Symbol                   :Ag\n");gotoxy(21, 12);         printf("Name                     :Silver \n");gotoxy(21, 13);         printf("Atomic Radius            :135\nn");gotoxy(21, 14);         printf("1st Ionisation potential :731\n");gotoxy(21, 15);         printf("Electronegativity        :1.93\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
 
    else if (((i == 43) || (i == 44)) && (j == 15)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :79\n");gotoxy(21, 11);         printf("Symbol                   :Au\n");gotoxy(21, 12);         printf("Name                     :Gold \n");gotoxy(21, 13);         printf("Atomic Radius            :166\nn");gotoxy(21, 14);         printf("1st Ionisation potential :890\n");gotoxy(21, 15);         printf("Electronegativity        :2.54\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 43) || (i == 44)) && (j == 17)) 
    { 
system("cls"); frame();gotoxy(21, 10); printf("Atomic No:               :111\n");gotoxy(21, 11); printf("Symbol                   :Rg\n");gotoxy(21, 12);         printf("Name                     :Roentgenium\n");gotoxy(21, 13);         printf("Atomic Radius            :138\nn");gotoxy(21, 14);         printf("1st Ionisation potential :218\n");gotoxy(21, 15);         printf("Electronegativity        :2.1\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 46) || (i == 47)) && (j == 11)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :30\n");gotoxy(21, 11);         printf("Symbol                   :Zn\n");gotoxy(21, 12);         printf("Name                     :Zinc\n");gotoxy(21, 13);         printf("Atomic Radius            :139\nn");gotoxy(21, 14);         printf("1st Ionisation potential :906\n");gotoxy(21, 15);         printf("Electronegativity        :1.65\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
 
    else if (((i == 46) || (i == 47)) && (j == 13)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :48\n");gotoxy(21, 11);         printf("Symbol                   :Cd\n");gotoxy(21, 12);         printf("Name                     :Cadmium\n");gotoxy(21, 13);         printf("Atomic Radius            :161\nn");gotoxy(21, 14);         printf("1st Ionisation potential :867\n");gotoxy(21, 15);         printf("Electronegativity        :1.69\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 46) || (i == 47)) && (j == 15)) 
    { 
        system("cls"); frame();gotoxy(21, 10); printf("Atomic No:               :80\n");gotoxy(21, 11); printf("Symbol                   :Hg\n");gotoxy(21, 12); printf("Name                     :Mercury\n");gotoxy(21, 13); printf("Atomic Radius            :155\nn");gotoxy(21, 14);         printf("1st Ionisation potential :1007\n");gotoxy(21, 15);         printf("Electronegativity        :2\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 46) || (i == 47)) && (j == 17)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :112\n");gotoxy(21, 11);         printf("Symbol                   :Cn\n");gotoxy(21, 12);         printf("Name                     :Copernicium\n");gotoxy(21, 13);         printf("Atomic Radius            :147\nn");gotoxy(21, 14);         printf("1st Ionisation potential :997\n");gotoxy(21, 15);         printf("Electronegativity        :2.12\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 49) || (i == 50)) && (j == 11)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :31\n");gotoxy(21, 11);         printf("Symbol                   :Ga\n");gotoxy(21, 12);         printf("Name                     :Gallium\n");gotoxy(21, 13);         printf("Atomic Radius            :187\nn");gotoxy(21, 14);         printf("1st Ionisation potential :578\n");gotoxy(21, 15);         printf("Electronegativity        :1.81\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 49) || (i == 50)) && (j == 13)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :49\n");gotoxy(21, 11);         printf("Symbol                   :In\n");gotoxy(21, 12);         printf("Name                     :Indium\n");gotoxy(21, 13); printf("Atomic Radius            :220\nn");gotoxy(21, 14); printf("1st Ionisation potential :370\n");gotoxy(21, 15); printf("Electronegativity        :1.78\n");gotoxy(30, 20); printf("Press Any Key To Return......"); 
    } 
 
    else if (((i == 49) || (i == 50)) && (j == 15)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :81\n");gotoxy(21, 11);         printf("Symbol                   :Th\n");gotoxy(21, 12);         printf("Name                     :Thallium \n");gotoxy(21, 13);         printf("Atomic Radius            :220\n");gotoxy(21, 14);         printf("1st Ionisation potential :581\n");gotoxy(21, 15);         printf("Electronegativity        :1.62\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 49) || (i == 50)) && (j == 17)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :113\n");gotoxy(21, 11);         printf("Symbol                   :Nh\n");gotoxy(21, 12);         printf("Name                     :Nihonium \n");gotoxy(21, 13);         printf("Atomic Radius            :170\nn");gotoxy(21, 14);         printf("1st Ionisation potential :632\n");gotoxy(21, 15);         printf("Electronegativity        :1.58\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 52) || (i == 53)) && (j == 11)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :32\n");gotoxy(21, 11);         printf("Symbol                   :Ge\n");gotoxy(21, 12);         printf("Name                     :Germinuium \n");gotoxy(21, 13);         printf("Atomic Radius            :221\nn");gotoxy(21, 14); printf("1st Ionisation potential :762\n");gotoxy(21, 15); printf("Electronegativity        :2.01\n");gotoxy(30, 20); printf("Press Any Key To Return......"); 
    } 
    else if (((i == 52) || (i == 53)) && (j == 13)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :50\n");gotoxy(21, 11);         printf("Symbol                   :Sn\n");gotoxy(21, 12);         printf("Name                     :Tin \n");gotoxy(21, 13);         printf("Atomic Radius            :255\nn");gotoxy(21, 14);         printf("1st Ionisation potential :709\n");gotoxy(21, 15);         printf("Electronegativity        :1.96\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 52) || (i == 53)) && (j == 15)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :82\n");gotoxy(21, 11);         printf("Symbol                   :Pb\n");gotoxy(21, 12);         printf("Name                     :Lead \n");gotoxy(21, 13);         printf("Atomic Radius            :180\nn");gotoxy(21, 14);         printf("1st Ionisation potential :716\n");gotoxy(21, 15);         printf("Electronegativity        :2.33\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 52) || (i == 53)) && (j == 17)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :114\n");gotoxy(21, 11);         printf("Symbol                   :FI\n");gotoxy(21, 12);         printf("Name                     :Flerovium  \n");gotoxy(21, 13);         printf("Atomic Radius            :179\nn");gotoxy(21, 14);         printf("1st Ionisation potential :814\n");gotoxy(21, 15);         printf("Electronegativity        :2.28\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 55) || (i == 56)) && (j == 11)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :33\n");gotoxy(21, 11);         printf("Symbol                   :As\n");gotoxy(21, 12);         printf("Name                     :Arsenic \n");gotoxy(21, 13);         printf("Atomic Radius            :185\nn");gotoxy(21, 14);         printf("1st Ionisation potential :823\n");gotoxy(21, 15);         printf("Electronegativity        :2.18\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 55) || (i == 56)) && (j == 13)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :51\n");gotoxy(21, 11);         printf("Symbol                   :Sb\n");gotoxy(21, 12);         printf("Name                     :Antimony \n");gotoxy(21, 13);         printf("Atomic Radius            :206\nn");gotoxy(21, 14);         printf("1st Ionisation potential :847\n");gotoxy(21, 15);         printf("Electronegativity        :2.05\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 55) || (i == 56)) && (j == 15)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :83\n");gotoxy(21, 11);         printf("Symbol                   :Bi\n");gotoxy(21, 12);         printf("Name                     :Bismuth \n");gotoxy(21, 13);         printf("Atomic Radius            :230\nn");gotoxy(21, 14);         printf("1st Ionisation potential :703\n");gotoxy(21, 15);         printf("Electronegativity        :2.02\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 55) || (i == 56)) && (j == 17)) 
    { 
system("cls"); 
frame();gotoxy(21, 10); printf("Atomic No:               :115\n");gotoxy(21, 11); printf("Symbol                   :Ms\n");gotoxy(21, 12);         printf("Name                     :Moscovium \n");gotoxy(21, 13);         printf("Atomic Radius            :187\nn");gotoxy(21, 14);         printf("1st Ionisation potential :538\n");gotoxy(21, 15);         printf("Electronegativity        :2.15\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
 
    else if (((i == 58) || (i == 59)) && (j == 11)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :34\n");gotoxy(21, 11);         printf("Symbol                   :Se\n");gotoxy(21, 12);         printf("Name                     :Selenium\n");gotoxy(21, 13);         printf("Atomic Radius            :187\nn");gotoxy(21, 14);         printf("1st Ionisation potential :941\n");gotoxy(21, 15);         printf("Electronegativity        :2.55\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 58) || (i == 59)) && (j == 13)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :52\n");gotoxy(21, 11);         printf("Symbol                   :Te\n");gotoxy(21, 12);         printf("Name                     :Tellurium\n");gotoxy(21, 13);         printf("Atomic Radius            :213\nn");gotoxy(21, 14);         printf("1st Ionisation potential :2370\n");gotoxy(21, 15);         printf("Electronegativity        :2.13\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 58) || (i == 59)) && (j == 15)) 
    { 
system("cls"); frame();gotoxy(21, 10); printf("Atomic No:               :84\n");gotoxy(21, 11); printf("Symbol                   :Po\n");gotoxy(21, 12); printf("Name                     :Polonium\n");gotoxy(21, 13); printf("Atomic Radius            :230\nn");gotoxy(21, 14);         printf("1st Ionisation potential :812\n");gotoxy(21, 15);         printf("Electronegativity        :2.0\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 58) || (i == 59)) && (j == 17)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :116\n");gotoxy(21, 11);         printf("Symbol                   :Lv\n");gotoxy(21, 12);         printf("Name                     :Livermorium\n");gotoxy(21, 13);         printf("Atomic Radius            :283\nn");gotoxy(21, 14);         printf("1st Ionisation potential :724\n");gotoxy(21, 15);         printf("Electronegativity        :1.61\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 61) || (i == 62)) && (j == 11)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :35\n");gotoxy(21, 11);         printf("Symbol                   :Br\n");gotoxy(21, 12);         printf("Name                     :Bromine\n");gotoxy(21, 13);         printf("Atomic Radius            :185\nn");gotoxy(21, 14);         printf("1st Ionisation potential :1140\n");gotoxy(21, 15);         printf("Electronegativity        :2.96\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 61) || (i == 62)) && (j == 13)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :53\n");gotoxy(21, 11); printf("Symbol                   :I\n");gotoxy(21, 12); printf("Name                     :Iodine\n");gotoxy(21, 13); printf("Atomic Radius            :198\nn");gotoxy(21, 14); printf("1st Ionisation potential :2370\n");gotoxy(21, 15); printf("Electronegativity        :2.66\n");gotoxy(30, 20); printf("Press Any Key To Return......"); 
    } 
    else if (((i == 61) || (i == 62)) && (j == 15)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :85\n");gotoxy(21, 11);         printf("Symbol                   :At\n");gotoxy(21, 12);         printf("Name                     :Astatine \n");gotoxy(21, 13);         printf("Atomic Radius            :198\nn");gotoxy(21, 14);         printf("1st Ionisation potential :2370\n");gotoxy(21, 15);         printf("Electronegativity        :2.66\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 61) || (i == 62)) && (j == 17)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :117\n");gotoxy(21, 11);         printf("Symbol                   :Ts\n");gotoxy(21, 12);         printf("Name                     :Tennessine \n");gotoxy(21, 13);         printf("Atomic Radius            :202\nn");gotoxy(21, 14);         printf("1st Ionisation potential :2170\n");gotoxy(21, 15);         printf("Electronegativity        :2.44\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 64) || (i == 65)) && (j == 11)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :36\n");gotoxy(21, 11);         printf("Symbol                   :Kr\n");gotoxy(21, 12);         printf("Name                     :Krypton \n");gotoxy(21, 13);         printf("Atomic Radius            :202\nn");gotoxy(21, 14); printf("1st Ionisation potential :1351\n");gotoxy(21, 15); printf("Electronegativity        :3\n");gotoxy(30, 20); printf("Press Any Key To Return......"); 
    } 
    else if (((i == 64) || (i == 65)) && (j == 13)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :54\n");gotoxy(21, 11);         printf("Symbol                   :Xe\n");gotoxy(21, 12);         printf("Name                     :Xenon \n");gotoxy(21, 13);         printf("Atomic Radius            :202\nn");gotoxy(21, 14);         printf("1st Ionisation potential :1170\n");gotoxy(21, 15);         printf("Electronegativity        :2.6\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 64) || (i == 65)) && (j == 15)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :86\n");gotoxy(21, 11);         printf("Symbol                   :Rn\n");gotoxy(21, 12);         printf("Name                     :Radon \n");gotoxy(21, 13);         printf("Atomic Radius            :134\nn");gotoxy(21, 14);         printf("1st Ionisation potential :1170\n");gotoxy(21, 15);         printf("Electronegativity        :2.2\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else if (((i == 64) || (i == 65)) && (j == 17)) 
    { 
        system("cls");         frame();gotoxy(21, 10);         printf("Atomic No:               :118\n");gotoxy(21, 11);         printf("Symbol                   :Og\n");gotoxy(21, 12);         printf("Name                     :Oganesson \n");gotoxy(21, 13);         printf("Atomic Radius            :158\nn");gotoxy(21, 14);         printf("1st Ionisation potential :987\n");gotoxy(21, 15);         printf("Electronegativity        :2.18\n");gotoxy(30, 20);         printf("Press Any Key To Return......"); 
    } 
    else 
    { 
    system("cls");     frame();     gotoxy(21, 13);     printf("Plz Select An Element"); 
    } 
     char key;     key = _getch();     if (key == 27) exit(0);     else display(); } 
OUPUT: 
 
  
  
