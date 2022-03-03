#ifndef _GKQUIZ_H
#define _GKQUIZ_H
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
char Username[50];
int Userscore=0,Countscore=0;
int Calculatescore();
char result(char Chooseoption,char Correctoption);
int question();
int menu();
#endif