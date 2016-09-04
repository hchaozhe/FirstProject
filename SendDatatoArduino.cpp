// a sample code will be added here 
// SendDatatoArduino.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
//#include <pthread.h>
//#include "unistd.h"
//unsigned int sleep(unsigned int seconds);

int main()
{
    int data[] = {10,5,13};  //Random data we want to send
    FILE *file;
    file = fopen("COM3","w");  //Opening device file
    int i = 0;
    for(i = 0 ; i < 3 ; i++)
    {
        fprintf(file,"%d",data[i]); //Writing to the file
        fprintf(file,"%c",','); //To separate digits
        sleep(1);
    }
    fclose(file);
}
