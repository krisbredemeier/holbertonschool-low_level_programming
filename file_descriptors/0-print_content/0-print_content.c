#include<fcntl.h>
#include<stdio.h>

int read(int handle, void *buffer, int nbyte);
int write(int handle, void *buffer, int nbyte);
int close(int handle);

int main(int argc, char *argv[])
{
 int fileiopened;
 int whattoprint;
 char buf[BUFSIZ];

 /* if the program name and 1 argument are received
  * try to open the file passed as argument
  */
 if (argc == 2)
   {
     /* open, read, write, and close with error
      * checking at each stage.
      */
     fileiopened = open(argv[1], O_RDONLY);
     if (fileiopened == -1)
       return 1;
     whattoprint = read(fileiopened, buf, BUFSIZ);
     if (whattoprint == -1)
       return 1;
     if ((write(1, buf, whattoprint)) == -1)
       return 1;
     if ((close(fileiopened)) == -1)
       return 1;
     return(0);
   }
 return 1;
}
