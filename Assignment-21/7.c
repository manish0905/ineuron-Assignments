//Write a program to calculate the difference between two time periods

#include<stdio.h>

struct time
{
    int hr,min,sec;
};

void time_diff(struct time,struct time);

int main()
{
    struct time start,end,diff_time;

    printf("Please enter the start time in hrs:min:sec - ");
    scanf("%d:%d:%d",&start.hr,&start.min,&start.sec);

    printf("Please enter the end time in hrs:min:sec - ");
    scanf("%d:%d:%d",&end.hr,&end.min,&end.sec);

    time_diff(start,end);


}

void time_diff(struct time st,struct time en)
{
    struct time diff;

    if(en.sec<st.sec)
    {
        en.min-=1;
        en.sec+=60;
    }
    else if(en.min<st.min)
    {
        en.hr-=1;
        en.min+=60;
    }

    diff.sec=en.sec-st.sec;
    diff.min=en.min-st.min;
    diff.hr=en.hr-st.hr;

    printf("The difference in time = %d:%d:%d",diff.hr,diff.min,diff.sec);
}
