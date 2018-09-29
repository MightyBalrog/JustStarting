void swap(int *p, int *q);

int main()
{
   int x, y,*p,*q;

   printf("Enter the value of x and y\n");
   scanf("%d%d",&x,&y);

   p=&x;
   q=&y;

   printf("Before Swapping\nx = %d\ny = %d\n", *p, *q);

   swap(&x, &y);

   printf("After Swapping\nx = %d\ny = %d\n", *p, *q);

   return 0;
}

void swap(int *s, int *r)
{
   int temp;

   temp = *s;
   *s= *r;
   *r = temp;
    //printf("Values of a and b is %d  %d\n",a,b);
}
