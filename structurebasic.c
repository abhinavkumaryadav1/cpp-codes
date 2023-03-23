#include<stdio.h>
 #include<string.h>
 struct student
 {
    int sid;
    int sl;
    char alias[10];
 };
 int main()
 {
struct student abhinav, aradhya, aditya,nimesh;
 
 abhinav.sid=1;
 abhinav.sl=1;
 strcpy(abhinav.alias,"alpha");

 aradhya.sid=2;
 aradhya.sl=2;
 strcpy(aradhya.alias,"beta");

 aditya.sid=3;
 aditya.sl=3;
 strcpy(aditya.alias,"theta");

 nimesh.sid=4;
 nimesh.sl=4;
 strcpy(nimesh.alias,"neta");

printf("abhinav:- %d \n %d \n %s  \n", abhinav.sid,abhinav.sl,abhinav.alias);
printf("aradhya:- %d \n %d \n %s \n", aradhya.sid,aradhya.sl,aradhya.alias);
printf("aditya:- %d \n %d  \n %s \n", aditya.sid,aditya.sl,aditya.alias);
printf("nimesh:- %d \n %d \n %s \n", nimesh.sid,nimesh.sl,nimesh.alias);
return  0;
 }