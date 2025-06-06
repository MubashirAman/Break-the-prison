#include<iostream>
#include<windows.h>
using namespace std;
#include<conio.h>
#include<math.h>
#include <stdlib.h>
#include<fstream>
void gotoRowCol(int rpos, int cpos)
{
int xpos=cpos, ypos = rpos;
COORD scrn;
HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
scrn.X = cpos;
scrn.Y = rpos;
SetConsoleCursorPosition(hOuput, scrn);
}
void sleep(int m)
{
 for(int j=0;j<m*21000;j++)
 {
 }
}

void gameinfo()
{
	 gotoRowCol(3,115);
    cout<<" Game Information: ";
    gotoRowCol(5,115);
    cout<<" Man in Prison: P ";
     gotoRowCol(7,115);
    cout<<" Use A, S, D and W to control Man ";
    gotoRowCol(9,115);
    cout<<" W for upward  ";
     gotoRowCol(11,115);
    cout<<" A for Left  ";
    gotoRowCol(13,115);
    cout<<" D for Riht ";
    gotoRowCol(15,115);
    cout<<" S for Downward ";
}

void wallandpath(char arry[50][90],char ch,char ch1,int aryrow,int arycolm)
{
	int i=0,j=0;
     arry[aryrow][arycolm];
     ofstream save("game.txt");

        for(i=0;i<aryrow;i++)
        {
            for( j=0;j<arycolm;j++)
            {

                     if(i==24&&j==44)
                     {
                         arry[i][j]='P';
                         save<<arry[i][j];
                         //savegame(arry,i,j,'p');
                     }
                     else
                        arry[i][j]=ch;
                       save<<arry[i][j];


            }
            save<<endl;

        }
        save.close();
         for(int i=23;i<=26;i++)
        {
            for(int j=43;j<=45;j++)
            {
                if(i==24&&j==44)
                {
                     arry[i][j]='P';
                }
                else
                     arry[i][j]=ch1;
            }
        }


         for (int i = 2; i < 18; i++)
         {
             for(int j=0;j<2;j++)
             {
                 arry[i][85+j] = ch1;
             }
         }

           for (int i = 2; i < 3; i++)
           {
               for(int j=89;j>69;j--)
               {
                    arry[i][j] =ch1;
               }
           }


             for (int i = 2; i < 8; i++)
           {
               for(int j=0;j<2;j++)
               {
                    arry[i][73+j] =ch1;
               }
           }

 for (int i = 8; i < 9; i++)
           {
               for(int j=74;j>64;j--)
               {
                    arry[i][j] =ch1;
               }
           }


             for (int i = 8; i > 2; i--)
           {
               for(int j=0;j<2;j++)
               {
                    arry[i][63+j] =ch1;
               }
           }

 for (int i = 4; i <5; i++)
           {
               for(int j=63;j>57;j--)
               {
                    arry[i][j] =ch1;
               }
           }




             for (int i = 4; i < 15; i++)
           {
               for(int j=0;j<2;j++)
               {
                    arry[i][57+j] =ch1;
               }
           }




             for (int i = 15; i<16; i++)
           {
               for(int j=57;j<86;j++)
               {
                    arry[i][j] =ch1;
               }
           }

            for (int i = 2; i < 3; i++)
           {
               for(int j=67;j>47;j--)
               {
                    arry[i][j] =ch1;
               }
           }


             for (int i = 2; i < 7; i++)
           {
               for(int j=0;j<2;j++)
               {
                    arry[i][49+j] =ch1;
               }
           }


             for (int i = 7; i < 8; i++)
           {
               for(int j=50;j>41;j--)
               {
                    arry[i][j] =ch1;
               }
           }


            for (int i = 7; i>2; i--)
           {
               for(int j=0;j<2;j++)
               {
                    arry[i][41+j] =ch1;
               }
           }


            for (int i = 4; i<5; i++)
           {
               for(int j=41;j>30;j--)
               {
                    arry[i][j] =ch1;
               }
           }

            for (int i = 4; i<11; i++)
           {
               for(int j=0;j<2;j++)
               {
                    arry[i][30+j] =ch1;
               }
           }

                for (int i = 11; i<12; i++)
           {
               for(int j=31;j>22;j--)
               {
                    arry[i][j] =ch1;
               }
           }

                for (int i = 11; i>2; i--)
           {
               for(int j=0;j<2;j++)
               {
                    arry[i][21+j] =ch1;
               }
           }




             for (int i = 2; i < 3; i++)
           {
               for(int j=44;j>27;j--)
               {
                    arry[i][j] =ch1;
               }
           }








           for (int i = 2; i < 3; i++)
           {
               for(int j=24;j>2;j--)
               {
                    arry[i][j] =ch1;
               }
           }






              for (int i = 2; i < 24; i++)
           {
               for(int j=0;j<2;j++)
               {
                    arry[i][2+j] =ch1;
               }
           }

                for (int i = 20; i<21; i++)
           {
               for(int j=2;j<25;j++)
               {
                    arry[i][j] =ch1;
               }
           }



                for (int i = 20; i<30; i++)
           {
               for(int j=0;j<2;j++)
               {
                    arry[i][12+j] =ch1;
               }
           }



                for (int i = 30; i<31; i++)
           {
               for(int j=2;j<14;j++)
               {
                    arry[i][j] =ch1;
               }
           }







                for (int i = 20; i<21; i++)
           {
               for(int j=26;j<48;j++)
               {
                    arry[i][j] =ch1;
               }
           }



                for (int i = 20; i<25; i++)
           {
               for(int j=0;j<2;j++)
               {
                    arry[i][48+j] =ch1;
               }
           }


             for (int i = 25; i < 47; i++)
           {
               for(int j=0;j<2;j++)
               {
                    arry[i][2+j] =ch1;
               }
           }



             for (int i = 47; i < 48; i++)
           {
               for(int j=2;j<22;j++)
               {
                    arry[i][j] =ch1;
               }
           }


             for (int i = 47; i >41; i--)
           {
               for(int j=0;j<2;j++)
               {
                    arry[i][12+j] =ch1;
               }
           }


           for (int i = 41; i < 42; i++)
           {
               for(int j=12;j<30;j++)
               {
                    arry[i][j] =ch1;
               }
           }



           for (int i = 41; i <47; i++)
           {
               for(int j=0;j<2;j++)
               {
                    arry[i][30+j] =ch1;
               }
           }



            for (int i = 47; i < 48; i++)
           {
               for(int j=24;j<44;j++)
               {
                    arry[i][j] =ch1;
               }
           }



            for (int i = 47; i > 43; i--)
           {
               for(int j=0;j<2;j++)
               {
                    arry[i][40+j] =ch1;
               }
           }



            for (int i = 43; i < 44; i++)
           {
               for(int j=40;j<47;j++)
               {
                    arry[i][j] =ch1;
               }
           }



            for (int i = 43; i > 40; i--)
           {
               for(int j=0;j<2;j++)
               {
                    arry[i][43+j] =ch1;
               }
           }


            for (int i = 43; i < 47; i++)
           {
               for(int j=0;j<2;j++)
               {
                    arry[i][47+j] =ch1;
               }
           }




           for (int i = 47; i < 48; i++)
           {
               for(int j=46;j<66;j++)
               {
                    arry[i][j] =ch1;
               }
           }




           for (int i = 47; i < 48; i++)
           {
               for(int j=68;j<87;j++)
               {
                    arry[i][j] =ch1;
               }
           }






             for (int i = 47; i >27; i--)
           {
               for(int j=0;j<2;j++)
               {
                    arry[i][86+j] =ch1;
               }
           }


            for (int i = 30; i <31; i++)
           {
               for(int j=86;j>79;j--)
               {
                    arry[i][j] =ch1;
               }
           }

            for (int i = 20; i < 21; i++)
         {
             for(int j=80;j>60;j--)
             {
                 arry[i][j] = ch1;
             }
         }


                for (int i = 20; i<25; i++)
           {
               for(int j=0;j<2;j++)
               {
                    arry[i][60+j] =ch1;
               }
           }



                for (int i = 25; i<26; i++)
           {
               for(int j=61;j>45;j--)
               {
                    arry[i][j] =ch1;
               }
           }








         for (int i = 20; i < 38; i++)
         {
             for(int j=0;j<2;j++)
             {
                 arry[i][80+j] = ch1;
             }
         }



          for (int i = 37; i <38; i++)
           {
               for(int j=80;j>74;j--)
               {
                    arry[i][j] =ch1;
               }
           }



            for (int i = 24; i < 40; i++)
         {
             for(int j=0;j<2;j++)
             {
                 arry[i][74+j] = ch1;
             }
         }




            for (int i = 40; i < 41; i++)
         {
             for(int j=75;j>42;j--)
             {
                 arry[i][j] = ch1;
             }
         }


             for(int i=10;i<11;i++)
           {
                for (int j = 88; j > 65; j--)
                    if(j>83)
                    arry[i][j] = ch;
                    else
                    arry[i][j] = ch1;

           }
 for(int i=10;i<11;i++)
           {
                for (int j = 64; j > 54; j--)
                    arry[i][j] = ch;

           }



             for(int i=10;i<30;i++)
           {
                for (int j = 0; j <2; j++)
                    if(i==19)
                        arry[i][66+j] = ch;
                    else
                        arry[i][66+j] = ch1;

           }


             for(int i=30;i<31;i++)
           {
                for (int j = 67; j >56; j--)

                        arry[i][j] = ch1;

           }


           for(int i=30;i<35;i++)
           {
                for (int j = 0; j <2; j++)

                        arry[i][56+j] = ch1;

           }


             for(int i=35;i<36;i++)
           {
                for (int j = 56; j <63; j++)

                        arry[i][j] = ch1;

           }


             for(int i=34;i>31;i--)
           {
                for (int j = 0; j <2; j++)

                        arry[i][61+j] = ch1;

           }



                        for(int i=32;i<33;i++)
           {
                for (int j = 61; j <67; j++)

                        arry[i][j] = ch1;

           }

             for(int i=32;i<38;i++)
           {
                for (int j = 0; j <2; j++)

                        arry[i][67+j] = ch1;

           }


                        for(int i=38;i<39;i++)
           {
                for (int j = 68; j >37; j--)

                        arry[i][j] = ch1;

           }




             for(int i=38;i>16;i--)
           {
                for (int j = 0; j <2; j++)

                        arry[i][37+j] = ch1;

           }

           for(int i=17;i<18;i++)
           {
                for (int j = 38; j <66; j++)

                        arry[i][j] = ch1;

           }


}
void output(char arry[50][90],int aryrow,int arycolm)
{
	int i=0,j=0;
	 for( i=0;i<aryrow;i++)
        {

            for( j=0;j<arycolm;j++)
            {

                    cout<<arry[i][j];

            }
            cout<<endl;

        }

}
void movement(char arry[50][90],int plyrpstnx,int plyrpstny,char wall,char path)
{
int exitrow=2,exitcolm=89;
	char key;
	bool exit=false;
	while(!exit)
	{

		if(kbhit())
		{
		    gotoRowCol(plyrpstnx,plyrpstny);
		    arry[plyrpstnx][plyrpstny]=path;
	    cout<<	arry[plyrpstnx][plyrpstny];
			key=getch();
			if((key=='w'||key=='W')&&(arry[plyrpstnx-1][plyrpstny]!=wall))
			plyrpstnx--;
			else if((key=='s'||key=='S')&&(arry[plyrpstnx+1][plyrpstny]!=wall))
			plyrpstnx++;
			else	if((key=='a'||key=='A')&&(arry[plyrpstnx][plyrpstny-1]!=wall))
			plyrpstny--;
			else	if((key=='d'||key=='D')&&(arry[plyrpstnx][plyrpstny+1]!=wall))
			plyrpstny++;

			arry[plyrpstnx][plyrpstny]='P';
			gotoRowCol(plyrpstnx,plyrpstny);
			cout<<	arry[plyrpstnx][plyrpstny];



			if(plyrpstnx==exitrow&&plyrpstny==exitcolm)
			{
			    exit=true;
			    gotoRowCol(17,115);
			    cout<<"congrates you win:";
			}
		}
	}

    }
int main ()
{
    sleep(1000);
	char arry[50][90],wall=178,path=176,man='P';
	int aryrow=50,arycolm=90,plyrpstnx,plyrpstny;
	plyrpstnx=24;
	plyrpstny=44;
	wallandpath(arry,wall,path,aryrow,arycolm);
	output(arry,aryrow,arycolm);
	 gameinfo();
	 movement(arry,plyrpstnx,plyrpstny,wall,path);

	return 0;
}
