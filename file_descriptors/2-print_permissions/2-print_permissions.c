/*program that prints the permissions of a file*/
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
int print_char(char);

int main(int argc, char *argv[])
{
  struct stat fileStat;

  if (argc != 2)
  {
    return 1;
  }
  else
  {
    if (lstat(argv[1], &fileStat) == -1)
    {
      return 1;
    }
    else
    {
      print_char( (S_ISLNK(fileStat.st_mode)) ? 'l' :(S_ISDIR(fileStat.st_mode)) ? 'd' : '-');
      print_char( (fileStat.st_mode & S_IRUSR) ? 'r' : '-');
      print_char( (fileStat.st_mode & S_IWUSR) ? 'w' : '-');
      print_char( (fileStat.st_mode & S_IXUSR) ? 'x' : '-');
      print_char( (fileStat.st_mode & S_IRGRP) ? 'r' : '-');
      print_char( (fileStat.st_mode & S_IWGRP) ? 'w' : '-');
      print_char( (fileStat.st_mode & S_IXGRP) ? 'x' : '-');
      print_char( (fileStat.st_mode & S_IROTH) ? 'r' : '-');
      print_char( (fileStat.st_mode & S_IWOTH) ? 'w' : '-');
      print_char( (fileStat.st_mode & S_IXOTH) ? 'x' : '-');
      print_char( '\n');
    }
  }
  return 0;
}




int print_char(char c)
    {
          return (write(1, &c, 1));
    }
