void print_string(char *);
int print_char(char c);

void print_dl_list(List *list)
{
  while (list != NULL)
  {
    print_string(list->str);
    print_string("\n\t");
    if (list->prev == NULL)
    {
      print_string("NULL");
    }
    else {
      print_string (list->prev->str);
    }
    print_char('\n');
    list = list->next;
  }
}
