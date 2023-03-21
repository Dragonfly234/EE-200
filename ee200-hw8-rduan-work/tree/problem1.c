/* problem1.c - implementation of Linux `tree` */
#include<stdio.h>
#include<stdlib.h> 
#include<unistd.h>
#include<fcntl.h>
#include<errno.h>
#include<string.h>
#include<dirent.h>
void PrintCurrentDirectory(char* argv,int level);
int main(int argc, char* argv[])
{
  
     if(argc==2)
    { 
            chdir(argv[1]);
            printf("%s", argv[1]);
            PrintCurrentDirectory(argv[1], 1);
        
    }else if(argc==1)
    {
       
       printf(".");
       PrintCurrentDirectory(".", 1);

    }
    return(0);
}





void PrintCurrentDirectory(char*argv,int level)
{
    char buff[10000]= {0};    
    DIR* p_dir = NULL;
    struct dirent* p_dirent = NULL;
    p_dir = opendir(argv);
    int SpaceNumber = level*4;
 
    if(level==1)
    {
    printf("\n");
    }

    if (p_dir == NULL)
    {
        printf("Invalid Dircetory!\n");
	    printf("%s\n",argv);
        return;
    }


    while ((p_dirent = readdir(p_dir)) != NULL)
    {
        if (p_dirent->d_name[0] == '.')
        {
            continue;
        }

    else if (p_dirent->d_type == DT_DIR)
    {
		for(int i = 0;i<SpaceNumber;i++)
        {

            printf(" ");
        }

		    level++;
       if(level==2)
       {
           if (*argv == '.')
           {
               getcwd(buff, 1000);
           }
		
		strcat(buff, "/");
		strcat(buff, argv);
		strcat(buff, "/");
        strcat(buff,p_dirent->d_name);
		printf("%s\n", p_dirent->d_name);
        
        PrintCurrentDirectory(buff,level);
        level--;
        buff[0] = '\0';
        }else
        {
               
                strcat(buff, argv);
		        strcat(buff, "/");
                strcat(buff,p_dirent->d_name);
                printf("%s\n", p_dirent->d_name);
                PrintCurrentDirectory(buff,level);
                level--;
                buff[0] = '\0';
         }
    }

        else
        {
            for(int i = 0;i<SpaceNumber;i++)
            {
    
            printf(" ");
            }   
	       	printf("%s\n", p_dirent->d_name);
        }


    }
   
}
