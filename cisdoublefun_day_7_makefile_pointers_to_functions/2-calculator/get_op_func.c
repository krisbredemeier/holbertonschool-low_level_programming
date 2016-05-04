/*figures out what op_function to use*/
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
 

int (*get_op_func(char c))(int, int)
{
  int i;
  int (*op_function[256])(int, int);

  i = 0;
  while (i<256)
  {
    op_function[i] = 0;
    i++;
  }
  op_function[(unsigned char)'+']=op_add;
  op_function[(unsigned char)'-']=op_sub;
  op_function[(unsigned char)'*']=op_mul;
  op_function[(unsigned char)'/']=op_div;
  op_function[(unsigned char)'%']=op_mod;

  return op_function[(unsigned char)c];
}
