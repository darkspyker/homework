
void setup() {
  Serial.begin(9600);
}

void loop() {
  #include<stdio.h>
  char string[100];
  int i=0;
  scanf("%c",string);
  printf("转化前的代码：%c/n",&string);
  while(string[i++]==NULL)
  {
    int code=string[i]-65;
    switch(code)
    {
      case 0:printf("*-/n");
      case 1:printf("-***/n");
      case 2:printf("-*-*/n");
      case 3:printf("-**/n");
      case 4:printf("*/n");
      case 5:printf("**-*/n");
      case 6:printf("--*/n");
      case 7:printf("****/n");
      case 8:printf("**/n");
      case 9:printf("*---/n");
      case 10:printf("-*-/n");
      case 11:printf("*-**/n");
      case 12:printf("--/n");
      case 13:printf("-*/n");
      case 14:printf("---/n");
      case 15:printf("*--*/n");
      case 16:printf("--*-/n");
      case 17:printf("*-*/n");
      case 18:printf("***/n");
      case 19:printf("-/n");
      case 20:printf("**-/n");
      case 21:printf("***-/n");
      case 22:printf("*--/n");
      case 23:printf("-**-/n");
      case 24:printf("-*--/n");
      case 25:printf("--**/n");break;
      
    }
  }
  
  }
