#include <iostream>
#include <windows.h>
#include <string.h>
#include <conio.h>
#include <stdio.h>
using namespace std;

// tabu
//tabl tabf tabr
// tabd
// tabb

 char tabu[3][3], tabf[3][3], tabd[3][3], tabb[3][3], tabl[3][3], tabr[3][3];
 char temp0, temp1, temp2, temp3;

void ruchf()
{
//kostka
 temp1=tabl[0][2];
 temp2=tabl[1][2];
 temp3=tabl[2][2];
 tabl[0][2]=tabd[0][0];
 tabl[1][2]=tabd[0][1];
 tabl[2][2]=tabd[0][2];
 tabd[0][0]=tabr[2][0];
 tabd[0][1]=tabr[1][0];
 tabd[0][2]=tabr[0][0];
 tabr[2][0]=tabu[2][2];
 tabr[1][0]=tabu[2][1];
 tabr[0][0]=tabu[2][0];
 tabu[2][2]=temp1;
 tabu[2][1]=temp2;
 tabu[2][0]=temp3;

 //sciana narozniki
 temp0=tabf[0][0];
 tabf[0][0]=tabf[2][0];
 tabf[2][0]=tabf[2][2];
 tabf[2][2]=tabf[0][2];
 tabf[0][2]=temp0;
 //sciana krawedzie
 temp0=tabf[0][1];
 tabf[0][1]=tabf[1][0];
 tabf[1][0]=tabf[2][1];
 tabf[2][1]=tabf[1][2];
 tabf[1][2]=temp0;
}
void ruchb()
{
//kostka
 temp1=tabl[0][0];
 temp2=tabl[1][0];
 temp3=tabl[2][0];
 tabl[0][0]=tabu[0][2];
 tabl[1][0]=tabu[0][1];
 tabl[2][0]=tabu[0][0];
 tabu[0][2]=tabr[2][2];
 tabu[0][1]=tabr[1][2];
 tabu[0][0]=tabr[0][2];
 tabr[2][2]=tabd[2][0];
 tabr[1][2]=tabd[2][1];
 tabr[0][2]=tabd[2][2];
 tabd[2][0]=temp1;
 tabd[2][1]=temp2;
 tabd[2][2]=temp3;

 //sciana narozniki
 temp0=tabf[0][0];
 tabf[0][0]=tabf[2][0];
 tabf[2][0]=tabf[2][2];
 tabf[2][2]=tabf[0][2];
 tabf[0][2]=temp0;
 //sciana krawedzie
 temp0=tabf[0][1];
 tabf[0][1]=tabf[1][0];
 tabf[1][0]=tabf[2][1];
 tabf[2][1]=tabf[1][2];
 tabf[1][2]=temp0;
}
void ruchr()
{
//kostka
 temp1=tabf[0][2];
 temp2=tabf[1][2];
 temp3=tabf[2][2];
 tabf[0][2]=tabd[0][2];
 tabf[1][2]=tabd[1][2];
 tabf[2][2]=tabd[2][2];
 tabd[0][2]=tabb[2][0];
 tabd[1][2]=tabb[1][0];
 tabd[2][2]=tabb[0][0];
 tabb[2][0]=tabu[0][2];
 tabb[1][0]=tabu[1][2];
 tabb[0][0]=tabu[2][2];
 tabu[0][2]=temp1;
 tabu[1][2]=temp2;
 tabu[2][2]=temp3;

 //sciana narozniki
 temp0=tabr[0][0];
 tabr[0][0]=tabr[2][0];
 tabr[2][0]=tabr[2][2];
 tabr[2][2]=tabr[0][2];
 tabr[0][2]=temp0;
 //sciana krawedzie
 temp0=tabr[0][1];
 tabr[0][1]=tabr[1][0];
 tabr[1][0]=tabr[2][1];
 tabr[2][1]=tabr[1][2];
 tabr[1][2]=temp0;
}
void ruchl()
{
//kostka
 temp1=tabf[0][0];
 temp2=tabf[1][0];
 temp3=tabf[2][0];
 tabf[0][0]=tabu[0][0];
 tabf[1][0]=tabu[1][0];
 tabf[2][0]=tabu[2][0];
 tabu[0][0]=tabb[2][2];
 tabu[1][0]=tabb[1][2];
 tabu[2][0]=tabb[0][2];
 tabb[2][2]=tabd[0][0];
 tabb[1][2]=tabd[1][0];
 tabb[0][2]=tabd[2][0];
 tabd[0][0]=temp1;
 tabd[1][0]=temp2;
 tabd[2][0]=temp3;

 //sciana narozniki
 temp0=tabl[0][0];
 tabl[0][0]=tabl[2][0];
 tabl[2][0]=tabl[2][2];
 tabl[2][2]=tabl[0][2];
 tabl[0][2]=temp0;
 //sciana krawedzie
 temp0=tabl[0][1];
 tabl[0][1]=tabl[1][0];
 tabl[1][0]=tabl[2][1];
 tabl[2][1]=tabl[1][2];
 tabl[1][2]=temp0;
}
void ruchu()
{
//kostka
 temp1=tabf[0][0];
 temp2=tabf[0][1];
 temp3=tabf[0][2];
 tabf[0][0]=tabr[0][0];
 tabf[0][1]=tabr[0][1];
 tabf[0][2]=tabr[0][2];
 tabr[0][0]=tabb[0][0];
 tabr[0][1]=tabb[0][1];
 tabr[0][2]=tabb[0][2];
 tabb[0][0]=tabl[0][0];
 tabb[0][1]=tabl[0][1];
 tabb[0][2]=tabl[0][2];
 tabl[0][0]=temp1;
 tabl[0][1]=temp2;
 tabl[0][2]=temp3;

 //sciana narozniki
 temp0=tabu[0][0];
 tabu[0][0]=tabu[2][0];
 tabu[2][0]=tabu[2][2];
 tabu[2][2]=tabu[0][2];
 tabu[0][2]=temp0;
 //sciana krawedzie
 temp0=tabu[0][1];
 tabu[0][1]=tabu[1][0];
 tabu[1][0]=tabu[2][1];
 tabu[2][1]=tabu[1][2];
 tabu[1][2]=temp0;
}
void ruchd()
{
//kostka
 temp1=tabf[2][0];
 temp2=tabf[2][1];
 temp3=tabf[2][2];
 tabf[2][0]=tabl[2][0];
 tabf[2][1]=tabl[2][1];
 tabf[2][2]=tabl[2][2];
 tabl[2][0]=tabb[2][0];
 tabl[2][1]=tabb[2][1];
 tabl[2][2]=tabb[2][2];
 tabb[2][0]=tabr[2][0];
 tabb[2][1]=tabr[2][1];
 tabb[2][2]=tabr[2][2];
 tabr[2][0]=temp1;
 tabr[2][1]=temp2;
 tabr[2][2]=temp3;

 //sciana narozniki
 temp0=tabd[0][0];
 tabd[0][0]=tabd[2][0];
 tabd[2][0]=tabd[2][2];
 tabd[2][2]=tabd[0][2];
 tabd[0][2]=temp0;
 //sciana krawedzie
 temp0=tabd[0][1];
 tabd[0][1]=tabd[1][0];
 tabd[1][0]=tabd[2][1];
 tabd[2][1]=tabd[1][2];
 tabd[1][2]=temp0;
}
void resetkostka()
{
     for(int x=0; x<3; x++)
     for(int y=0; y<3; y++)
     tabu[x][y]= (char)'B';
     for(int x=0; x<3; x++)
     for(int y=0; y<3; y++)
     tabf[x][y]= (char)'W';
     for(int x=0; x<3; x++)
     for(int y=0; y<3; y++)
     tabd[x][y]= (char)'G';
     for(int x=0; x<3; x++)
     for(int y=0; y<3; y++)
     tabb[x][y]= (char)'Y';
     for(int x=0; x<3; x++)
     for(int y=0; y<3; y++)
     tabl[x][y]= (char)'O';
     for(int x=0; x<3; x++)
     for(int y=0; y<3; y++)
     tabr[x][y]= (char)'R';
}


void rysuj()
{
     SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), FOREGROUND_GREEN | FOREGROUND_INTENSITY );
     system("cls");
     cout << endl;
     for(int x=0; x<3; x++)
     {
     cout << "               " << " | " << tabu[x][0] << " | " << tabu[x][1] << " | " << tabu[x][2] << " | " << "               " << endl;
     cout << endl << endl;
     }
     cout << endl;
     for(int x=0; x<3; x++)
     {
     cout << " | " << tabl[x][0] << " | " << tabl[x][1] << " | " << tabl[x][2] << " | " << " | " << tabf[x][0] << " | " << tabf[x][1] << " | " << tabf[x][2] << " | " << " | " << tabr[x][0] << " | " << tabr[x][1] << " | " << tabr[x][2] << " | " << endl;
     cout << endl << endl;
     }
     cout << endl;
     for(int x=0; x<3; x++)
     {
     cout << "               " << " | " << tabd[x][0] << " | " << tabd[x][1] << " | " << tabd[x][2] << " | " << "               " << endl;
     cout << endl << endl;
     }
     cout << endl;
          for(int x=2; x>-1; x--)
     {
     cout << "               " << " | " << tabb[x][2] << " | " << tabb[x][1] << " | " << tabb[x][0] << " | " << "               " << endl;
     cout << endl << endl;
     }
     cout << endl;
}

main()
{
      resetkostka();
      rysuj();
      bool enter=false;
            while(enter==false)
        {
            char znak = getch();
            char znak2 = getch();
            if((znak==55) && (znak2=57))
            {
            ruchu();
            ruchu();
            ruchu();
            }
            else
            {
                if((znak==57) && (znak2==55))
                {
                    ruchu();
                }
                else
                {
                    if((znak==49) && (znak2==51))
                    {
                    ruchd();
                    }
                    else
                    {
                        if((znak==51) && (znak2==49))
                        {
                        ruchd();
                        ruchd();
                        ruchd();
                        }
                        else
                        {   if((znak==55) && (znak2==49))
                            {
                            ruchl();
                            }
                            else
                            {
                                if((znak==49) && (znak==55))
                                {
                                ruchl();
                                ruchl();
                                ruchl();
                                }
                                else
                                {
                                    if((znak==51) && (znak2==57))
                                    {
                                    ruchr();
                                    }
                                    else
                                        if((znak==57) && (znak2==51))
                                        {
                                        ruchr();
                                        ruchr();
                                        ruchr();
                                        }
                                        else
                                            if((znak==49) && (znak2==57))
                                            {
                                            ruchf();
                                            }
                                            else
                                                if((znak==57) && (znak2==49))
                                                {
                                                ruchf();
                                                ruchf();
                                                ruchf();
                                                }
                                                else
                                                {
                                                    if((znak==51) && (znak2==55))
                                                    {
                                                    ruchb();
                                                    }
                                                    else
                                                    {
                                                        if((znak==55 && znak2==51))
                                                        {
                                                        ruchb();
                                                        ruchb();
                                                        ruchb();
                                                        }


                                                    }
                                }
                            }
                        }
                    }
                }
            }
            }
        rysuj();
        }


//56 8
//50 2
//52 4
//54 6
//49 1
//51 3
//55 7
//57 9


      rysuj();
      system("pause");
}

