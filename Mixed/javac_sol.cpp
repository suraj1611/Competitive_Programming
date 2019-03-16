#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


int main()
{
    char s[301]={'\0'},s1[301]={'\0'},ch;int l,i,c=0,j=0,counter=0;bool flag=true;
    while (scanf("%s",s)!=EOF)
    {
        l=strlen(s);
        for (i=0;i<l;i++)
        {
            ch=s[i];
            if (ch=='_')
                {
                    c++;
                    if (i==l-1||i==0)
                    {
                        flag=false;
                        break;
                    }
                    else if (s[i+1]=='_'||(s[i+1]>='A'&&s[i+1]<='Z'))
                    {
                        flag=false;
                        break;
                    }
                    else
                        {
                            s1[counter++]=(char)((int)s[++i]-32);
                        }
                }
            else if (ch>='A'&&ch<='Z')
                {
                    j++;
                    if (i==0)
                    {
                        flag=false;
                        break;
                    }
                    else
                        {
                            s1[counter++]='_';
                            s1[counter++]=(char)((int)ch+32);
                        }
                }
            else
                s1[counter++]=ch;
            if (flag==false)
                break;
        }
        //printf("%s\n",s1);
        if ((c>0&&j>0)||flag==false)
            printf("Error!\n");
        else
            printf("%s\n",s1);
        for (i=0;i<counter;i++)
            s1[i]='\0';
        counter=0;
        c=0;j=0;
        flag=true;
    }
    return 0;
}
