#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char s[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	char c;
	while(scanf("%c",&c)==1)
	{
	  c=tolower(c);
	  if(c==' '|| c=='\n')printf("%c",c);
	  else
	  {
	  	int i=s.find(c);
		cout<<s[i-2];
	  }
	}
}