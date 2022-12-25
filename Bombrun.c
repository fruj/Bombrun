#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>  // чтобы пользоваться функцией rand
#include <math.h>

int main()
{
 printf ("\t BOMBRUN\n");
 printf ("\t CREATIVE COMPUTING\n");
 printf ("\t MORRISTOWN, NEW JERSEY\n\n\n");
 printf ("THIS PROGRAM SIMULATES A BOMBING RUN.\nDO YOU NEED INSTRUCTIONS? [Y/N]\n");
 int X5=3000,Z1,Z2,Z3,Z4,R,W1,W2,W3,W4,W5=0,T,A1,A,H;
 float V1,Y1,V,Y,E,X;
 char answer[1];
 char RS[1];
 scanf("%s", &answer);
    if (answer[0] == 'Y' || answer[0] == 'y')
        { 
        printf("YOU HAVE THE OPTION OF MAKING FOUR PASSES OVER THE TARGET,\n");
        printf("WITH THE ABILITY TO DROP A BOMB ONCE DURING EACH OF\n");
        printf("THESE PASSES.  ALTITUDE CHANGES MAY BE MADE THROUGH THE\n");
        printf("'CLIMB/DIVE' COMMAND BY PRINTING 'CLIMB' OR 'DIVE',FOL-\n");
        printf("LOWED BY A COMMA AND THE DESIRED ANGLE (IN DEGREES). NEW\n");
        printf("VELOCITIES (RANGING FROM 300 TO 900 FEET PER SECOND) MAY\n");
        printf("BE INPUT AFTER THE 'AIRSPEED' QUESTION MARK.  'CLIMB/DIVE'\n");
        printf("ANGLES, VARYING FROM 0 TO 15 DEGREES, WILL ADD AS SPEC-\n");
        printf("IFIED BY 'CLIMB' OR'DIVE' COMMANDS TO YIELD A NET INCLIN-\n");
        printf("ATION/DECLINATION ANGLE BETWEEN 0 TO 60 DEGREES, CLIMBING\n");
        printf("OR DIVING.  A MINIMUM ALTITUDE OF 100 FEET MUST ALSO BE\n");
        printf("MAINTAINED.  WILLFULLY EXCEEDING ANY OF THE MAX./MIN. SPECS\n");
        printf("WILL RESULT IN THE CRASH OF YOUR BOMBER. ALSO , A BOMB\n");
        printf("COMMAND OF 'DROP' DURING A DIVE WILL GIVE YOUR BOMB AN IN-\n");
        printf("ITIAL DOWNWARD VELOCITY, SHORTENING THE DROP TIME, AS A\n");
        printf("'CLIMB' COMMAND WILL LENGTHEN THIS TIME.  THE BOMB WILL BE\n");
        printf("LAUNCHED IMMEDIATELY FOLLOWING THE MOST RECENT 'STATS' READ-\n");
        printf("OUT UPON 'DROP' COMMAND, AND WILL BE HELD FOR FURTHER\n");
        printf("POSITIONING INFORMATION UPON THE COMMAND 'STAND BY'.  THE\n");
        printf("TARGET IS 1 FOOT IN DIAMETER.  GOOD LUCK\n");
        }
 metka290:
 Z1=1000;
 Z2=1000;
 Z3=1000;
 Z4=1000;
 metka330:
 R=R+1;
 W1=0;
 W2=0;
 W3=0;
 W4=0;
 T=0;
 A1=0;
 A=0;

 metka410:
 //srand(time(NULL));
 V1=(rand()%100)/(100*1.0); //генератор случайных чисел от 0 до 1
 V=V1*1000;
 if(V < 300 || V > 900) goto metka410;

 metka440:
 srand(time(NULL));
 Y1=(rand()%100)/(100*1.0); 
 Y=V1*500;
 if (Y < 100) goto metka440;
 X=4500;
 E=X/V;
 printf ("\t **INITIAL**\n");
 printf ("\t ***STATS***\n");
 goto metka1430;
 
 metka540:
 W1=0;
 W2=0;
 W3=0;
 W4=4;
 printf("\n");
 printf("BOMB COMMAND [STAND BY/DROP");
 char command[1];
 scanf("%s", &command[0]);
 printf("%s", command);
    if (command[0] == 'S') goto metka640;
    if (command[0] == 'D') goto metka1680;
 printf("UNRECOGNIZABLE COMMAND.  REPLY 'STAND BY' OR 'DROP'. \n");
 
 metka640:
 printf("STANDING BY.\n");
 goto metka700;
 
 metka670:
 A=A-A1;
 T=T-1;
 goto metka770;
 
 metka700:
 printf("MAINTAIN PRESENT RESULTANT ANGLE [YES/NO]");
 char P[3];
 
 metka710:
 scanf("%s", &P);
 printf("%s", P);
    if (P[0] == 'Y') goto metka1130;
    if (P[0] == 'N') goto metka770;
 printf("REPLY 'YES' OR'NO'. \n");
 goto metka710;
 
 metka770:
 printf("'CLIMB/DIVE' COMMAND + ,angle \n");
 char CLIMBDIVE[5];
 scanf("%s", &CLIMBDIVE, "%d", &A1, "\n");
 printf("%s", CLIMBDIVE, "%d", A1);
    if (A1 < 0) goto metka830;
    if (A1 > 15) goto metka870;
 goto metka930;
 
 metka830:
 printf("ANGLE INPUT MUST BE POSITVE.  IF NECESSARY, CHANGE THE \n");
 printf("'DIVE' COMMAND TO 'CLIMB', OR VICE VERSA. \n");
 goto metka770;
 
 metka870:
 W1=W1+1;
 if (W1=2) goto metka2120;
 printf("YOUR BOMBER CANNOT TOLERATE THE STRESS CAUSED BY ANGLE \n");
 printf("INPUTS EXCEEDING 15 DEGREES.  RECONSIDER YOUR CHOICE. \n");
 goto metka770;
 
 metka930:
 if (CLIMBDIVE[0] == 'C') goto metka950;
 A1=-A1;
 
 metka950:
 A=A+A1;
 if (A < -60) goto metka990;
 if (A > 60) goto metka1060;
 goto metka1140;
 
 metka990:
 W2=W2+1;
 if (W2=2) goto metka2170;
 printf("YOUR PRESENT 'DIVE' COMMAND WILL EXCEED THE MAXIMUM RE- \n");
 printf("SULTANT DIVE ANGLE OF 60 DEGREES, CAUSING AN IRREVERSIBLE \n");
 printf("NOSEDIVE.  RECONSIDER YOUR CHOICE. \n");
 goto metka670;
 
 metka1060:
 W3=W3+1;
 if (W3=2) goto metka2210;
 printf("YOUR PRESENT 'CLIMB' COMMAND WILL EXCEED THE MAXIMUM RE-\n");
 printf("SULTANT CLIMB ANGLE OF 60 DEGREES, CAUSING YOUR\n");
 printf("ENGINES TO FAIL AND YOUR PLANE TO CRASH. RECONSIDER YOUR\n");
 printf("CHOICE \n");
 goto metka670;
 
 metka1130:
 
 metka1140:
 printf("AIRSPEED");
 
 metka1150:
 scanf("%d", &V);
 if (V > 900) goto metka1190;
 if (V < 300) goto metka1230;
 goto metka1290;
 
 metka1190:
 printf("YOUR BOMBER ISN'T CAPABLE OF ATTAINING THAT VELOCITY.\n");
 printf("INPUT AN AIRSPEED LESS THAN 900 FEET PER SECOND. \n");
 goto metka1150;
 
 metka1230:
 W4=W4+1;
 if (W4=2) goto metka2250;
 printf("IF YOUR VELOCITY ISN'T INCREASED IMMEDIATELY, YOUR BOMBER \n");
 printf("WILL FALL TO EARTH AND BE DESTROYED. \n");
 goto metka1140;
 
 metka1290:
 T=T+1;
 float B;
 B=A*3.14159/180;
 Y=Y+V*sin(B);
 if (Y > 100) goto metka1390;
 W5=W5+1;
 if (W5=2) goto metka2290;
 printf("IF YOUR ALTITUTE ISN'T INCREASED IMMEDIATELY TO A MIN- \n");
 printf("IMUN OF 100 FEET, A CRASH IS IMMINENT. \n");
 goto metka670;
 
 metka1390:
 X=X-V*cos(B);
 if (X <=0) goto metka2350;
 E=X/(V*cos(B));
 printf("***STATS*** \n");
 
 metka1430:
 if (T!=1) goto metka1470;
 printf("ELAPSED TIME... 1 SECOND \n");
 goto metka1480;
 
 metka1470:
 printf("ELAPSED TIME...", "%d", T,"SECONDS \n");
 
 metka1480:
 if (A1!=0) goto metka1510;
 printf("PRESENT ANGLE COMMAND... 0 DEGREES\n");
 goto metka1550;
 
 metka1510:
 if (CLIMBDIVE[0] == 'C') goto metka1540;
 printf("PRESENT ANGLE COMMAND... DIVE,", "%d", -A1, "DEGREES \n");
 goto metka1550;
 
 metka1540:
 printf("PRESENT ANGLE COMMAND... CLIMB,", "%d", A1, "DEGREES \n");
 
 metka1550:
 if (A < 0) goto metka1590;
 if (A >0) goto metka1610;
 printf("RESULTANT ANGLE... 0 DEGREES \n");
 goto metka1620;
 
 metka1590:
 printf("RESULTANT ANGLE...", "%d", -A1,"DEGREES DIVING\n");
 goto metka1620;
 
 metka1610:
 printf("RESULTANT ANGLE...", "%d", A,"DEGREES CLIMBING \n");
 
 metka1620:
 printf("PRESENT VELOCITY... ", "%f", V,"FEET PER SECOND \n");
 printf("ALTITUDE... ", "%f", Y,"FEET \n");
 printf("DISTANCE FROM SITE... ", "%f", X, "FEET \n");
 printf("ESTIMATED TIME OF ARRIVAL... ", "%d", E, "SECONDS \n");
 goto metka540;
 
 metka1680:
 printf("BOMB DROPPED.\n");
 double T3;
 T3=(SQR(pow(V*SIN(B),2)+64.4*Y)+V*SIN(B))/32.2;
 printf("TIME TO EXPLOSION...");
 printf("%lf", T3);
 printf("SECONDS\n");
 X=X-V*cos(B)*T3;
 X= (int)(X*100)/100;
 if (X5 > abs(X5))
 {
   X5=abs(X5);
 }
 printf("\n");
 if (X <-.5)
 {
   goto metka1780;
 }
 if (X > .5)
 {
   goto metka1800;
 }
 printf("CONGRATULATIONS, YOU SCORED AS PERFECT HIT.\n");
 goto metka2030;

 metka1780:
 printf("THE BOMB LANDED","%d",-X,"FEET BEYOND THE TARGET'S CENTER.\n");
 goto metka1810;

 metka1800:
 printf("THE BOMB LANDED","%d",X,"FEET IN FRONT OF THE TARGET'S CENTER.\n");

 metka1810:
 if (R=1)
 {
   goto metka1850;
 }
 if (R=2)
 {
   goto metka1870;
 }
 if (R=3)
 {
   goto metka1890;
 }
 if (R=4)
 {
   goto metka1910;
 }

 metka1850:
 Z1=abs(X);
 goto metka2400;

 metka1870:
 Z2=abs(X);
 goto metka2420;

 metka1890:
 Z3=abs(X);
 goto metka2440;

 metka1910:
 Z4=abs(X);
 int Z10[5];
 Z10[0]=0;
 Z10[1]=0;
 Z10[2]=0;
 Z10[3]=0;
 Z10[4]=0;

 metka1920:
 Z1=Z10[1];
 Z2=Z10[2];
 Z3=Z10[3];
 Z4=Z10[4];
 for (int M = 1; M <= 4; M++)
 {
   for (int J = 4; J >= 1; J--)
   {
      if (Z10[M] < Z10[J])
      {
         Z10[M]=X5;
      }
      if ((M =J) && (M=1))
      {
         goto metka1926;
      }
      
   }
   metka1926:
   prinf("");
 }

 printf("\n");
 if (X5 <= 300)
 {
   goto metka2000;
 }

 printf("DURING YOUR","%d", R," -PASS BOMBRUN, YOU FAILED TO EVEN \n");
 printf("THREATEN THE TARGET WITH A HIT. BETTER LUCK NEXT TIME. \n");
 if (RS[0]== 'N') 
 {
   goto metka2590;
 }
 goto metka2040;
 goto metka2610;

 metka2000:
 printf("DURING YOUR","%d", R,"-PASS BOMBRUN, YOU MANAGED TO STRIKE \n");
 printf("WITHIN", "%d", X5, "FEET OF THE TARGET. \n");

 metka2030:
 if (RS[0]== 'N') 
 {
   goto metka2590;
 }

 metka2040:
 printf("WOULD YOU LIKE TO RELOAD AND PLAY AGAIN?");

 metka2050:
 scantf("%s", &CLIMBDIVE);
 if (CLIMBDIVE[0]=='N')
 {
   goto metka2590;
 }
 if (CLIMBDIVE[0]=='Y')
 {
   goto metka2100;
 }
 printf("YOU MUST BE A LOUSY SPELLER.  REPLY 'YES' OR'NQ'.");
 goto metka2050;

 metka2100:
 R=0;
 goto metka290;

 metka2120:
 printf("YOU TORE THE WINGS OFF OF YOUR BOMBER BY EXCEEDING THE \n");
 printf("MAXIMUM ANGLE INPUT OF 15 DEGREES. NEXT TIME TAKE MY ADVISE \n");
 H=1;
 goto metka1920;

 metka2170:
 printf("THE STEEP DIVE ANGLE DESIRED CAUSED AN IRREVERSIBLE NOSE- \n");
 printf("DIVE, RESULTING IN THE DESTRUCTION OF YOUR BOMBER.\n");
 H=1;
 goto metka1920;

 metka2210:
 printf("THE ENGINES OF YOUR BOMBER FAILED WHILE CLIMBING THE \n");
 printf("STEEP ANGLE INPUT DURING YOUR ANGLE COMMAND OPPORTUNITY. \n");
 H=1;
 goto metka1920;

 metka2250:
 printf("THE VELOCITY OF YOUR BOMBER WAS INSUFFICIENT TO SUPPORT \n");
 printf("ITS WEIGHT, AND CONSEQUENTLY IT CRASHED. \n");
 H=1;
 goto metka1920;

 metka2290:
 printf("YOUR BOMBER FAILED TO MAINTAIN THE LOW ALTITUDE YOU DE- \n");
 printf("SIRED AND SOON CRASHED. \n");
 printf("BETTER LUCK NEXT TIME. \n");
 H=1;
 goto metka1920;


 printf("YOUR BOMBER JUST PASSED UP THE TARGET, AND NEEDLESS TO \n");

 metka2350:
 printf("SAY, YOU NO LONGER THREATEN ITS EXISTANCE. \n");
 if (R=2)
 {
   goto metka2420;
 }
 if (R=3)
 {
   goto metka2440;
 }
 if (R=4)
 {
   goto metka1920;
 }

 metka2400:
 char QS[1];
 QS[0]='S';
 goto metka2450;

 metka2420:
 QS[0]='T';
 goto metka2450;

 metka2440:
 metka2450:
 QS[0]='F';
 if (R>1)
 {
   goto metka2490;
 }
 printf("YOU HAVE THUS FAR COMPLETED 1 RUN. WOULD YOU LIKE TO \n");
 printf("MAKE ANOTHER PASS \n");
 goto metka2510;

 metka2490:
 printf("YOU HAVE THUS FAR COMPLETED ","%d", R, "RUNS.  WOULD YOU LIKE TO \n");
 printf("ANOTHER PASS \n");
 metka2510:
 scanf("%c", RS);
 if (RS[0]=='Y')
 {
   goto metka2560;
 }
 if (RS[0]=='N')
 {
   goto metka1920;
 }
 printf("SIMPLY REPLY 'YES' OR 'NO'. \n");
 goto metka2510;

 
 metka2560:
 printf("YOUR PLANE HAS CIRCLED, AND IS NOW IN POSITION TO MAKE \n");
 printf("ITS","%c", QS, "PASS. \n");
 goto metka330;

 metka2590:
 printf("LOOK OVER THE PHYSICS LAWS GOVERNING FALLING BODIES, \n");
 printf("AND RETURN TO PLAY AGAIN SOON. \n");

  
 metka2610:
 getchar();
 getchar();
 return 0;
}
