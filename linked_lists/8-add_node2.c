int str_len(char *str);
char *string_copy(char *s1, const char *s2);

int add_node(List **list, char *content)
{
  List *node_to_add = malloc(sizeof(List));
  List *curr = *list;

  node_to_add->next = NULL;
  node_to_add->str = malloc(sizeof(char) * str_len(str));
  string_copy(str, node_to_add->str);
  if (node_to_add == NULL)
  {
    return 1;
  }
  if (curr == NULL)
  {
    *list = node_to_add;
    return 0;
  }
  while (curr->next != NULL)
  {
    curr = curr->next;
    curr->next = node_to_add;
  }
  return 0;
}

int str_len(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    i++;
  }
  return i;
}

char *string_copy(char *s1, const char *s2)
{
  char *s = s1;
  while ((*s++ = *s2++) !=0)
  ;
  return(s1);
}
