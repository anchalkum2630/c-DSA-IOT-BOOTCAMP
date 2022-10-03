#include<stdio.h>
int main()
{
    float i,e;
    printf("ENTER THE ELECTRICITY UNIT FOR CALCULATING AMOUNT OF ELECTRICITY\n");
    scanf("%f",&i);
    switch(i<=50)
    {
    case 1:
        printf("ELECTRICITY BILL = %f",i*0.50);
    case 0:
        switch(i>50&&i<=150)
        {
        case 1:
            e=25+(i-50)*0.75;
            printf("ELECTRICITY BILL = %f",e);
            break;
        case 0:
            switch(i>150&&i<=250)
            {
            case 1:
                e=25+75+(i-150)*1.20;
                printf("ELECTRICITY BILL = %f",e);
                break;
            case 0:
                switch(i>250)
                {
                case 1:
                    e=220+(i-250)*1.50;
                    printf("ELECTRICITY BILL = %f",e);
                    break;
                case 0:
                    printf("INVALID");
                    break;
                }
            }
        }
    }
    return 0;
}
