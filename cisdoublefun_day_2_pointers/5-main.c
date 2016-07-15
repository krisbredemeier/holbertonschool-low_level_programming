void print_array(int *);
void sort_array(int *, int);
void print_number(int n);
int print_char(char c);

int main(void)
{
     int a[10] = {0, 3, 8, 2, 1, 1024, 98, 402, -1337, -1};

     print_array(a);
     sort_array(a, 10);
     print_array(a);
     return (0);
}



void print_array(int *a) {
  int i;

  for (i=0; i != '\0'; i++)
  {
    print_number(a[i]);
    print_char(',');
    print_char(' ');
  }
  print_char('\n');
  }
