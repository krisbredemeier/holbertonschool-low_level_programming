int op_add(int, int);
int op_sub(int, int);
int op_mul(int, int);
int op_div(int, int);
int op_mod(int, int);


int (*get_op_func(char c))(int, int)
{
  int(*op_function[256])(int, int);
  int i;
    for(i=0; i<256; i++)
    {
    op_function[i]=0;
    }
  op_function[(unsigned char)'+']=op_add;
  op_function[(unsigned char)'-']=op_sub;
  op_function[(unsigned char)'*']=op_mul;
  op_function[(unsigned char)'/']=op_div;
  op_function[(unsigned char)'%']=op_mod;

  return op_function[(unsigned char)c];
}
