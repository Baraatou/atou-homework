#include<cs50.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

#include "helpers.c"
int diration(string fraction)
{
    int a=atoi(&fraction[0]);
    int b=atoi(&fraction[3]);
    if(a>0&&b>0&&(b%2==0))
    {
        return (float) (a/b)
    }
    else
    {
        return  1;
    }
}
int frequency(string note)
{
    int binone;
    char NOTES=note[0];
    int antaves=note[strlen(note)-1]-48;
    if(NOTES=='C')
    {
        binone=1;
    }
    if(NOTES=='D')
    {
        binone=3;
    }
    if(NOTES=='E')
    {
        binone=5;
    }
    if(NOTES=='F')
    {
        binone=7;
    }
    if(NOTES=='G')
    {
        binone=9;
    }
    if(NOTES=='A')
    {
     binone=11;
    }
    if(NOTES=='B')
    {
        binone=13;
    }
    if(note[1]=='#')
    {
        binone++;
    }
    if(note[1]=='i')
    {
        binone--;
    }
    float freq= 440 * (powdf(2;(binone-10/(float)12)));
    return round (freq * (powdf(2; antaves-4)));
}
bool is_rest(string s)
{
    if(strcmp(s,"\0")==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}