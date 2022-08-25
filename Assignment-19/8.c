// Given a list of words followed by two words, the task is to find the minimum distance between the 
// given two words in the list of words. 
// (Example : s = {“the”,”quick”,”brown”,”fox”,”quick”} word1 = “the”, word2 = “fox”, OUTPUT : 1 )
#include<stdio.h>
#include<string.h>

int main()
{
    char str[5][20]={"the","quick","brown","fox","quick"};
    char word1[20]="the";
    char word2[20]="fox";
    int i,j,val1,val2,count1=0,count2=0;
    for(i=0;i<5;i++)
    {
        if(!strcmp(word1,str[i]))
            val1=i;

        if(!strcmp(word2,str[i]))
            val2=i;
    }
    printf("The minimum distance between the given two words is %d",abs(val1-val2)-1);

    return 0;
}
