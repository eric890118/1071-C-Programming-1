#include<stdio.h>

void prchar(char c, int n)
{
    for(int i=1; i<=n; i++)
        printf("%c", c);
}

void drawRect(int height, int width, int filled)
{
    if(filled)
    {
        for(int i=1; i<=height; i++)
        {
            prchar('*', width);
            printf("\n");
        }
    }
    else
    {
        for(int i=1; i<=height; i++)
        {
            for(int j=1; j<=width; j++)
            {
                if(i==1 || i==height || j==1 || j==width)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
}

void drawVertTri(int height, int type, int filled)
{
    switch(type)
    {
    case 1:
        if(filled)
        {
            for(int i=1; i<=height; i++)
            {
                prchar('*',i);
                printf("\n");
            }
        }
        else
        {
            for(int i=1; i<=height; i++)
            {
                if(i==1 || i==height)
                {
                    prchar('*',i);
                }
                else
                {
                    printf("*");
                    prchar(' ',i-2);
                    printf("*");
                }
                printf("\n");
            }
        }
        break;
    case 2:
        if(filled)
        {
            for(int i=1; i<=height; i++)
            {
                prchar(' ',height-i);
                prchar('*',i);
                printf("\n");
            }
        }
        else
        {
            for(int i=1; i<=height; i++)
            {
                if(i==1 || i==height)
                {
                    prchar(' ',height-i);
                    prchar('*',i);
                }
                else
                {
                    prchar(' ',height-i);
                    printf("*");
                    prchar(' ',i-2);
                    printf("*");
                }
                printf("\n");
            }
        }
        break;
    case 3:
        if(filled)
        {
            for(int i=1; i<=height; i++)
            {
                prchar('*',height-i+1);
                printf("\n");
            }
        }
        else
        {
            for(int i=1; i<=height; i++)
            {
                if(i==1 || i==height)
                {
                    prchar('*',height-i+1);
                }
                else
                {
                    printf("*");
                    prchar(' ',height-i-1);
                    printf("*");
                }
                printf("\n");
            }
        }
        break;
    case 4:
        if(filled)
        {
            for(int i=1; i<=height; i++)
            {
                prchar(' ',i-1);
                prchar('*',height-i+1);
                printf("\n");
            }
        }
        else
        {
            for(int i=1; i<=height; i++)
            {
                if(i==1 || i==height)
                {
                    prchar(' ',i-1);
                    prchar('*',height-i+1);
                }
                else
                {
                    prchar(' ',i-1);
                    printf("*");
                    prchar(' ',height-i-1);
                    printf("*");
                }
                printf("\n");
            }
        }
        break;

    }
}

void drawTso(int height, int type, int filled)
{
    switch(type)
    {
    case 1:
        if(filled)
        {
            for(int i=1; i<=height; i++)
            {
                prchar(' ',height-i);
                prchar('*',i+i-1);
                printf("\n");
            }
        }
        else
        {
            for(int i=1; i<=height; i++)
            {
                if(i==1 || i==height)
                {
                    prchar(' ',height-i);
                    prchar('*',i+i-1);
                }
                else
                {
                    prchar(' ',height-i);
                    printf("*");
                    prchar(' ',i+i-3);
                    printf("*");
                }
                printf("\n");
            }
        }
        break;
    case 2:
        if(filled)
        {
            for(int i=1; i<=height; i++)
            {
                prchar(' ',i-1);
                prchar('*',height+height-2*i+1);
                printf("\n");
            }
        }
        else
        {
            for(int i=1; i<=height; i++)
            {
                if(i==1 || i==height)
                {
                    prchar(' ',i-1);
                    prchar('*',height+height-2*i+1);
                }
                else
                {
                    prchar(' ',i-1);
                    printf("*");
                    prchar(' ',2*height-2*i-1);
                    printf("*");
                }
                printf("\n");
            }
        }
        break;
    case 3:
        if(filled)
        {
            for(int i=1; i<=height; i++)
            {
                prchar('*',i);
                printf("\n");
            }
        }
        else
        {
            for(int i=1; i<=height; i++)
            {
                if(i==1 || i==height)
                {
                    prchar('*',i);
                }
                else
                {
                    printf("*");
                    prchar(' ',i-2);
                    printf("\n");
                }
                printf("\n");
            }
        }

        break;

    case 4:
        if(filled)
        {
            for(int i=1; i<=height; i++)
            {
                prchar('*',i);
                printf("\n");
            }
        }
        else
        {
            for(int i=1; i<=height; i++)
            {
                if(i==1 || i==height)
                {
                    prchar('*',i);
                }
                else
                {
                    printf("*");
                    prchar(' ',i-2);
                    printf("\n");
                }
                printf("\n");
            }
        }

        break;

    }
}


int main()
{

    int choice;
    int height;
    int width;
    int type;
    int filled;

    while(1)
    {
        printf("Main Menu\n");
        printf("1. Rectangle\n");
        printf("2. Vertical Triangle\n");
        printf("3. Tsosceles triangle\n");
        printf("4. Exit\n");
        printf("=>");
        scanf("%d", &choice);
        if(choice==4)
            break;
        switch(choice)
        {
        case 1:
            printf("Enter height, width, filled: ");
            scanf("%d %d %d", &height, &width, &filled);
            drawRect(height,width,filled);
            break;
        case 2:
            printf("Enter height, type, filled: ");
            scanf("%d %d %d", &height, &type, &filled);
            drawVertTri(height,type,filled);
            break;
        case 3:
            printf("Enter height, type, filled: ");
            scanf("%d %d %d", &height, &type, &filled);
            drawTso(height,type,filled);
            break;
        }
    }
    return 0;
}
