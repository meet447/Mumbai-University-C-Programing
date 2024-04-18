#include <stdio.h>

int main() 
{
    float mins; 
    float hours;
    float secs;
    
    secs = 600;
    
    mins = 600/60;
    
    hours = mins / 60;
    
    printf("mins = %f hour = %f", mins, hours);
    
}
