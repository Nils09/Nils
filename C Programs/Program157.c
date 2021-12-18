#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
// #include<io.h>

int main()
{
    int fd = 0;
    
    fd = creat("Marvellous.txt",0777);
    
    if(fd == -1)
    {
        printf("Unable to create the file\n");
    }
    else
    {
        printf("File succesfully created\n");
    }
    
    return 0;
}

