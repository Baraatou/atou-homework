#define _X0open_source
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <unistd.h>
int main (int argc, string argv [])
{
    if (argc != 2)
    {
        printf(" usage: crack <hash>");
        return 1;
    }
    int letters_count = 53;
    string letters ="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string hash = argv[1];
    char salt[3];
    memcpy(salt, hash, 2);
    salt[2] = '\0';
    char keyaty[5] = "\0\0\0\0\0";
    for(int quatre= 0; quatre<letters_count; quatre++)
     {
         for(int trois=0; trois<letters_count; trois++)
         {
             for(int deux=0; deux<letters_count; deux++)
             {
                 for(int un=0; un<letters_count; un++)
                 {
                     keyaty[0] = letters[un];
                     keyaty[1] = letters[deux];
                     keyaty[2] = letters[trois];
                     keyaty[3] = letters[quatre];

                     if(strcmp(crypt(keyaty, salt), hash) == 0)
                     {
                         printf("%s\n", keyaty);
                         return 0;
                    }
               }
           }
       }

    }
    printf("password could not be cracked");
    return 2;
}
