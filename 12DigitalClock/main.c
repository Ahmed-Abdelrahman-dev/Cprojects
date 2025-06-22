#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>
#include <windows.h>

int main(){


    time_t rawTime = 0; // Jan 1 1970 (Epoch) reference time of zero 
    struct tm *pTime = NULL; // initialize to null to avoid garbage values. 
    
    bool isRunning = true; // a flag for the while loop 


    printf("*******Digital Clock*******\n");
    int i = 1;
    while(isRunning){
        time(&rawTime);
        
        pTime = localtime(&rawTime);
        
        printf("\r%02d:%02d:%02d",pTime->tm_hour,pTime->tm_min,pTime->tm_sec);

        
        //printf("%ld\n",rawTime);
        Sleep(1000);
    }

}