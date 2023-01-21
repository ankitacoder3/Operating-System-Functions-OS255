/*Write a C program to change the permissions of files in a directory created after a certain date. Inputs to the program: directory, date and new permission to be set as run time arguments.*/

#include<stdio.h>
#include<dirent.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>

int main()
{ 
    DIR *directory; 
    struct dirent *dirent; 
    struct stat buffer_stat; 
    char dir_path[100]; 
    char dir_date[100]; 
    printf("Enter path: "); 
    scanf("%s", dir_path); 
    printf("Enter date in dd/mm/yyyy format: "); 
    scanf("%s", dir_date); 
    printf("Enter access modes [4 digit no]:"); 
    int mode = scanf("%d", &mode); 
    directory = opendir(dir_path); 

    if(directory == NULL) 
    { 
        printf("Error in opening the directory\n"); 
        return 1; 
    } 

    while((dirent = readdir(directory)) != NULL) 
    { 
        if(stat(dirent->d_name,&buffer_stat) == -1) 
        { 
            printf("Error in stat\n"); 
            return 1; 
        } 
        if(strcmp(dir_date,ctime(&buffer_stat.st_ctime)) <= 0) 
        { 
            printf("%s\n", dirent->d_name); 
            chmod(dir_path, mode); 
        } 
    } 
    closedir(directory); 
    return 0; 
}
