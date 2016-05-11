/*program that copies the content of a file into another file8?
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>


int read(int handle, void *buffer, int nbyte);
int write(int handle, void *buffer, int nbyte);
int close(int handle);

int main(int argc, char *argv[])
{
  int fd;
  int fd2;
  int len;
  char buf[BUFSIZ];

  if (argc != 3)
  {
     return(1);
   }
   else
   {
     fd = open(argv[1], O_RDONLY);
     if (fd == -1)
     {
       return 1;
     }
     fd2 = open(argv[2], O_WRONLY | O_CREAT, 0644);
     if (fd2 == -1)
     {
       return 1;
     }
     len = read(fd, buf, BUFSIZ);
     if (len == -1)
     {
       close(fd);
       return 1;
     }
     if ((write(fd2, buf, len)) == -1)
     {
       close(fd);
       return 1;
     }
     if ((close(fd)) == -1)
         return 1;
       return 0;
     }
     return 1;
   }
