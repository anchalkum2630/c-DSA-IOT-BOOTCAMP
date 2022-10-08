  #include<stdio.h>
  int f1(int);
  int main()
  {
      int n;
      printf("ENTER NO. OF TERMS TO PRINT NATURAL NUMBERS\n");
      scanf("%d",&n);
      printf("NATURAL NUMBERS = ");
      f1(n);
      return 0;
  }
  int f1(int i)
  {
      int s;
      if(i==1)
        printf("%d",i);
      s=f1(i-1);
      printf("--->>>%d    ",s);
  }
