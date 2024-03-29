#include <stdio.h>
#include <stdlib.h>

typedef struct Mobiles
{
    int ram;
    int battery;
    int storage;
    int camera;
    int price;
    char company[20];
    char model[20];
    char color[10];
    int priority;
} Mobiles;

Mobiles m[50];  // to get info
Mobiles tp[50]; // to set priority
Mobiles dummy[50];  // for merge sort

void show();
void Merge(Mobiles *a, int low, int mid, int high);

void createMobiles()
{
    int j = 4;    // ram
    int b = 3000; // battery
    int s = 32;   // storage
    int c = 32;   // camera
    int p = 8000; // pric.e
    for (int i = 0; i < 50; i++)
    {
        if (j < 13)
        {
            if (j == 10)
            {
                j += 2;
            }
            m[i].ram = j;
            j += 2;
        }
        else
        {
            j = 4;
            m[i].ram = j;
        }

        if (b <= 5500)
        {
            m[i].battery = b;
            b += 500;
        }
        else
        {
            b = 3000;
            m[i].battery = b;
        }

        if (s <= 256)
        {
            m[i].storage = s;
            s *= 2;
        }
        else
        {
            s = 32;
            m[i].storage = s;
        }

        if (c <= 65)
        {
            m[i].camera = c;
            c += 16;
        }
        else
        {
            c = 32;
            m[i].camera = c;
        }

        if (m[i].ram < 4)
        {
            m[i].price = 7999;
        }
        else if (m[i].ram == 4)
        {
            m[i].price = 11999;
        }
        else if (m[i].ram == 6)
        {
            m[i].price = 15990;
        }
        else if (m[i].ram == 8)
        {
            m[i].price = 19630;
        }
        else if (m[i].ram == 12)
        {
            m[i].price = 32000;
        }

        if (m[i].price >= 8000 && m[i].price < 16000)
        {
            m[i].color[0] = 'G';
            m[i].color[1] = 'r';
            m[i].color[2] = 'a';
            m[i].color[3] = 'y';
        }
        else if (m[i].price >= 16000 && m[i].price <= 25000)
        {
            m[i].color[0] = 'B';
            m[i].color[1] = 'l';
            m[i].color[2] = 'a';
            m[i].color[3] = 'c';
            m[i].color[4] = 'k';
        }
        else if (m[i].price > 25000 && m[i].price <= 36000)
        {
            m[i].color[0] = 'B';
            m[i].color[1] = 'l';
            m[i].color[2] = 'u';
            m[i].color[3] = 'e';
        }

        if (i >= 0 && i < 10)
        {
            m[i].company[0] = 'S';
            m[i].company[1] = 'a';
            m[i].company[2] = 'm';
            m[i].company[3] = 's';
            m[i].company[4] = 'u';
            m[i].company[5] = 'n';
            m[i].company[6] = 'g';
        }
        else if (i >= 10 && i < 20)
        {
            m[i].company[0] = 'R';
            m[i].company[1] = 'e';
            m[i].company[2] = 'd';
            m[i].company[3] = 'm';
            m[i].company[4] = 'i';
        }
        else if (i >= 20 && i < 30)
        {
            m[i].company[0] = 'V';
            m[i].company[1] = 'i';
            m[i].company[2] = 'v';
            m[i].company[3] = 'o';
        }
        else if (i >= 30 && i < 40)
        {
            m[i].company[0] = 'O';
            m[i].company[1] = 'p';
            m[i].company[2] = 'p';
            m[i].company[3] = 'o';
        }
        else if (i >= 40 && i < 50)
        {
            m[i].company[0] = 'I';
            m[i].company[1] = 'Q';
            m[i].company[2] = 'O';
            m[i].company[3] = 'O';
        }

        if (i >= 0 && i < 10)
        {
            m[i].model[0] = 'N';
            m[i].model[1] = 'o';
            m[i].model[2] = 't';
            m[i].model[3] = 'e';
            m[i].model[4] = ' ';
            m[i].model[5] = (i + 1) + '0';
            if (i == 9)
            {
                m[i].model[5] = 'X';
            }
        }
        else if (i >= 10 && i < 20)
        {

            m[i].model[0] = 'N';
            m[i].model[1] = 'o';
            m[i].model[2] = 't'; // series
            m[i].model[3] = 'e';
            m[i].model[4] = ' ';
            m[i].model[5] = (i - 9) + '0';
            if (i == 19)
            {
                m[i].model[5] = 'Y';
            }
        }
        else if (i >= 20 && i < 30)
        {
            m[i].model[0] = 'V';
            m[i].model[1] = (i - 19) + '0';
            if (i == 29)
            {
                m[i].model[1] = '+';
            }
        }
        else if (i >= 30 && i < 40)
        {
            m[i].model[0] = 'F';
            m[i].model[1] = (i - 29) + '0';
            if (i == 39)
            {
                m[i].model[1] = '+';
            }
        }
        else if (i >= 40 && i < 50)
        {
            m[i].model[0] = (i - 39) + '0';
            if (i == 49)
            {
                m[i].model[0] = '*';
            }
        }

        m[i].priority = 0;
    }
}

void Mergesort(Mobiles *mobile, int low, int high)
{

    if (low < high)
    {
        int mid = (low + high) / 2;
        Mergesort(mobile, low, mid);
        Mergesort(mobile, mid + 1, high);
        Merge(mobile, low, mid, high);
    }
}
void Merge(Mobiles *a, int low, int mid, int high)
{
    int i, j, k;
    i = low;
    j = mid + 1;
    k = low;

    while ((i <= mid) && (j <= high))
    {
        if (a[i].price <= a[j].price)
        {
            dummy[k] = a[i];
            i++;
        }
        else
        {
            dummy[k] = a[j];
            j++;
        }
        k++;
    }

    while (i <= mid)
    {
        dummy[k] = a[i];

        k++;
        i++;
    }
    while (k <= high)
    {
        dummy[k] = a[j];

        k++;
        j++;
    }
    for (i = low; i <= high; i++)
    {
        a[i] = dummy[i];
    }
}

void show(Mobiles mob[], int n)
{
    int i;
    for (i = 0; i < 120; i++)
    {
        printf("-");
    }
    printf("Company  Model  RAM\t\t Battery\t Storage\t Camera\t\t Price\t\t Color\n");
    for (i = 0; i < 120; i++)
    {
        printf("-");
    }
    for (i = 1; i < n; i++)
    {
        printf("\n\n%-7s %-7s\t %-7d\t %-7d\t %-7d\t %-7d\t %-7d\t %-7s\t\n", mob[i].company, mob[i].model, mob[i].ram, mob[i].battery, mob[i].storage, mob[i].camera, mob[i].price, mob[i].color);
    }
}

int main(void)
{
    int i, ch;
    int ans;

    while (1)
    {
        for (i = 0; i < 120; i++)
        {
            printf("%c", 4);
        }
        printf("                                                     Mobile Suggestor                                                   ");
        // printf("========================================================================================================================");
        for (i = 0; i < 120; i++)
            printf("%c", 4);
        printf("\nEnter which specification to use for sorting: ");
        printf("\n\t1.RAM");
        printf("\n\t2.Battery");
        printf("\n\t3.Storage");
        printf("\n\t4.Camera");
        printf("\n\t5.Price");
        printf("\n\t6.RAM and Price");
        printf("\n\t7.Battery and Price");
        printf("\n\t8.Camera and Price");
        printf("\n\t9.Storage and Price");
        printf("\n\nEnter Your choice: ");
        scanf("%d", &ch); // choice = ch
        int ram, batt, cam, lprice, uprice, st, x;
        int a = 0;

        switch (ch)
        {
        case 1:
            createMobiles();
            a = 0;
            printf("\nEnter minimum RAM requirement between 2GB and 12GB: ");
            scanf("%d", &ram);
            if (ram < 0 || ram > 12)
                printf("No phones available with given RAM.");
            else
            {
                int j;
                for (j = 0; j < 50; j++)
                {
                    if (m[j].ram >= ram)
                        m[j].priority++;
                }

                for (i = 0; i < 50; i++)
                {
                    if (m[i].priority > 0)
                    {
                        tp[a].battery = m[i].battery;
                        tp[a].camera = m[i].camera;
                        tp[a].price = m[i].price;
                        tp[a].priority = m[i].priority;
                        tp[a].ram = m[i].ram;
                        tp[a].storage = m[i].storage;
                        for (j = 0; j < 20; j++)
                            tp[a].company[j] = m[i].company[j];
                        for (j = 0; j < 20; j++)
                            tp[a].model[j] = m[i].model[j];
                        for (j = 0; j < 20; j++)
                            tp[a].color[j] = m[i].color[j];
                        a++;
                    }
                }

                Mergesort(tp, 0, a);

                printf("\nOur best suggestion is: ");
                Mobiles s;
                s.battery = 0;
                s.camera = 0;
                for (j = 0; j < 20; j++)
                    s.company[j] = ' ';
                for (j = 0; j < 20; j++)
                    s.model[j] = ' ';
                for (j = 0; j < 20; j++)
                    s.color[j] = ' ';
                s.price = 0;
                s.priority = 0;
                s.ram = 0;
                s.storage = 0;
                for (i = 1; i < a; i++)
                {
                    if (tp[i].ram > s.ram && tp[i].camera > s.camera)
                    {
                        s.battery = tp[i].battery;
                        s.camera = tp[i].camera;
                        s.price = tp[i].price;
                        s.priority = tp[i].priority;
                        s.ram = tp[i].ram;
                        s.storage = tp[i].storage;
                        for (j = 0; j < 20; j++)
                        {
                            s.company[j] = tp[i].company[j];
                        }
                        for (j = 0; j < 20; j++)
                        {
                            s.model[j] = tp[i].model[j];
                        }
                        for (j = 0; j < 20; j++)
                        {
                            s.color[j] = tp[i].color[j];
                        }
                    }
                }
                printf("\n%s %s", s.company, s.model);
                printf("\nIt's RAM is of %dGB.", s.ram);
                printf("\nIt's Battery is of %dMAh.", s.battery);
                printf("\nIt's Storage is of %dGB.", s.storage);
                printf("\nIt's Camera is of %dMP.", s.camera);
                printf("\nIt's price is Rs.%d.", s.price);
                printf("\nIt's color is %s.", s.color);

                printf("\n\nFor more suggestions click 1: ");
                scanf("%d", &x);
                if (x == 1)
                {
                    show(tp, a);
                }
            }

            break;

        case 2:
            createMobiles();
            a = 0;
            printf("\nEnter minimum Battery requirement between 3000 MAh and 5000 MAh: ");
            scanf("%d", &batt);
            if (batt < 3000 || batt > 5000)
            {
                printf("No phones available with given Battery Specification.");
            }
            else
            {
                int j;
                for (j = 0; j < 50; j++)
                {
                    if (m[j].battery >= batt)
                    {
                        m[j].priority++;
                    }
                }
                for (i = 0; i < 50; i++)

                {
                    if (m[i].priority > 0)
                    {
                        tp[a].battery = m[i].battery;
                        tp[a].camera = m[i].camera;
                        tp[a].price = m[i].price;
                        tp[a].priority = m[i].priority;
                        tp[a].ram = m[i].ram;
                        tp[a].storage = m[i].storage;
                        for (j = 0; j < 20; j++)
                        {
                            tp[a].company[j] = m[i].company[j];
                        }
                        for (j = 0; j < 20; j++)
                        {
                            tp[a].model[j] = m[i].model[j];
                        }
                        for (j = 0; j < 20; j++)
                        {
                            tp[a].color[j] = m[i].color[j];
                        }
                        a++;
                    }
                }

                Mergesort(tp, 0, a);
                printf("\nOur best suggestion is: ");
                Mobiles s;
                s.battery = 0;
                s.camera = 0;
                for (j = 0; j < 20; j++)
                {
                    s.company[j] = ' ';
                }
                for (j = 0; j < 20; j++)
                {
                    s.model[j] = ' ';
                }
                for (j = 0; j < 20; j++)
                {
                    s.color[j] = ' ';
                }
                s.price = 0;
                s.priority = 0;
                s.ram = 0;
                s.storage = 0;
                for (i = 1; i < a; i++)
                {
                    if (tp[i].battery > s.battery && tp[i].ram > s.ram)
                    {
                        s.battery = tp[i].battery;
                        s.camera = tp[i].camera;
                        s.price = tp[i].price;
                        s.priority = tp[i].priority;
                        s.ram = tp[i].ram;
                        s.storage = tp[i].storage;
                        for (j = 0; j < 20; j++)
                        {
                            s.company[j] = tp[i].company[j];
                        }
                        for (j = 0; j < 20; j++)
                        {
                            s.model[j] = tp[i].model[j];
                        }
                        for (j = 0; j < 20; j++)
                        {
                            s.color[j] = tp[i].color[j];
                        }
                    }
                }
                printf("\n%s %s", s.company, s.model);
                printf("\nIt's RAM is of %dGB.", s.ram);
                printf("\nIt's Battery is of %dMAh.", s.battery);
                printf("\nIt's Storage is of %dGB.", s.storage);
                printf("\nIt's Camera is of %dMP.", s.camera);
                printf("\nIt's price is Rs.%d.", s.price);
                printf("\nIt's color is %s.", s.color);

                printf("\n\nFor more suggestions click 1: ");
                scanf("%d", &x);
                if (x == 1)
                {
                    show(tp, a);
                }
            }

            break;

        case 3:
            createMobiles();
            a = 0;
            printf("\nEnter minimum Storage requirement between 16GB and 256GB: ");
            scanf("%d", &st);
            if (st < 16 || st > 256)
            {
                printf("No phones available with given Storage Specification.");
            }
            else
            {
                int j;
                for (j = 0; j < 50; j++)
                {
                    if (m[j].storage >= st)
                    {
                        m[j].priority++;
                    }
                }
                for (i = 0; i < 50; i++)
                {
                    if (m[i].priority > 0)
                    {
                        tp[a].battery = m[i].battery;
                        tp[a].camera = m[i].camera;
                        tp[a].price = m[i].price;
                        tp[a].priority = m[i].priority;
                        tp[a].ram = m[i].ram;
                        tp[a].storage = m[i].storage;
                        for (j = 0; j < 20; j++)
                        {
                            tp[a].company[j] = m[i].company[j];
                        }
                        for (j = 0; j < 20; j++)
                        {
                            tp[a].model[j] = m[i].model[j];
                        }
                        for (j = 0; j < 20; j++)
                        {
                            tp[a].color[j] = m[i].color[j];
                        }
                        a++;
                    }
                }

                Mergesort(tp, 0, a);
                printf("\nOur best suggestion is: ");
                Mobiles s;
                s.battery = 0;
                s.camera = 0;
                for (j = 0; j < 20; j++)
                {
                    s.company[j] = ' ';
                }
                for (j = 0; j < 20; j++)
                {
                    s.model[j] = ' ';
                }
                for (j = 0; j < 20; j++)
                {
                    s.color[j] = ' ';
                }
                s.price = 0;
                s.priority = 0;
                s.ram = 0;
                s.storage = 0;
                for (i = 1; i < a; i++)
                {
                    if (tp[i].ram > s.ram && tp[i].storage > s.storage)
                    {
                        s.battery = tp[i].battery;
                        s.camera = tp[i].camera;
                        s.price = tp[i].price;
                        s.priority = tp[i].priority;
                        s.ram = tp[i].ram;
                        s.storage = tp[i].storage;
                        for (j = 0; j < 20; j++)
                        {
                            s.company[j] = tp[i].company[j];
                        }
                        for (j = 0; j < 20; j++)
                        {
                            s.model[j] = tp[i].model[j];
                        }
                        for (j = 0; j < 20; j++)
                        {
                            s.color[j] = tp[i].color[j];
                        }
                    }
                }
                printf("\n%s %s", s.company, s.model);
                printf("\nIt's RAM is of %dGB.", s.ram);
                printf("\nIt's Battery is of %dMAh.", s.battery);
                printf("\nIt's Storage is of %dGB.", s.storage);
                printf("\nIt's Camera is of %dMP.", s.camera);
                printf("\nIt's price is Rs.%d.", s.price);
                printf("\nIt's color is %s.", s.color);

                printf("\n\nFor more suggestions click 1: ");
                scanf("%d", &x);
                if (x == 1)
                {
                    show(tp, a);
                }
            }

            break;

        case 4:
            createMobiles();
            a = 0;
            printf("\nEnter minimum Camera requirement between 16 MP and 64 MP: ");
            scanf("%d", &cam);
            if (cam < 16 || cam > 64)
            {
                printf("No phones available with given Camera Specification.");
            }
            else
            {
                int j;
                for (j = 0; j < 50; j++)
                {
                    if (m[j].camera >= cam)
                    {
                        m[j].priority++;
                    }
                }
                for (i = 0; i < 50; i++)
                {
                    if (m[i].priority > 0)
                    {
                        tp[a].battery = m[i].battery;
                        tp[a].camera = m[i].camera;
                        tp[a].price = m[i].price;
                        tp[a].priority = m[i].priority;
                        tp[a].ram = m[i].ram;
                        tp[a].storage = m[i].storage;
                        for (j = 0; j < 20; j++)
                        {
                            tp[a].company[j] = m[i].company[j];
                        }
                        for (j = 0; j < 20; j++)
                        {
                            tp[a].model[j] = m[i].model[j];
                        }
                        for (j = 0; j < 20; j++)
                        {
                            tp[a].color[j] = m[i].color[j];
                        }
                        a++;
                    }
                }

                Mergesort(tp, 0, a);
                printf("\nOur best suggestion is: ");
                Mobiles s;
                s.battery = 0;
                s.camera = 0;
                for (j = 0; j < 20; j++)
                {
                    s.company[j] = ' ';
                }
                for (j = 0; j < 20; j++)
                {
                    s.model[j] = ' ';
                }
                for (j = 0; j < 20; j++)
                {
                    s.color[j] = ' ';
                }
                s.price = 0;
                s.priority = 0;
                s.ram = 0;
                s.storage = 0;
                for (i = 1; i < a; i++)
                {
                    if (tp[i].camera > s.camera && tp[i].storage > s.storage)
                    {
                        s.battery = tp[i].battery;
                        s.camera = tp[i].camera;
                        s.price = tp[i].price;
                        s.priority = tp[i].priority;
                        s.ram = tp[i].ram;
                        s.storage = tp[i].storage;
                        for (j = 0; j < 20; j++)
                        {
                            s.company[j] = tp[i].company[j];
                        }
                        for (j = 0; j < 20; j++)
                        {
                            s.model[j] = tp[i].model[j];
                        }
                        for (j = 0; j < 20; j++)
                        {
                            s.color[j] = tp[i].color[j];
                        }
                    }
                }
                printf("\n%s %s", s.company, s.model);
                printf("\nIt's RAM is of %dGB.", s.ram);
                printf("\nIt's Battery is of %dMAh.", s.battery);
                printf("\nIt's Storage is of %dGB.", s.storage);
                printf("\nIt's Camera is of %dMP.", s.camera);
                printf("\nIt's price is Rs.%d.", s.price);
                printf("\nIt's color is %s.", s.color);

                printf("\n\nFor more suggestions click 1: ");
                scanf("%d", &x);
                if (x == 1)
                {
                    show(tp, a);
                }
            }

            break;

        case 5:
            createMobiles();
            a = 0;
            printf("\nEnter minimum price requirement: ");
            scanf("%d", &lprice);
            printf("\nEnter maximum price requirement: ");
            scanf("%d", &uprice);
            if (uprice < 8000 || uprice > 32000)
            {
                printf("No phones available with given price range.");
            }
            else
            {
                int j;
                for (j = 0; j < 50; j++)
                {
                    if (m[j].price >= lprice && m[j].price <= uprice)
                    {
                        m[j].priority++;
                    }
                }
                for (i = 0; i < 50; i++)
                {
                    if (m[i].priority > 0)
                    {
                        tp[a].battery = m[i].battery;
                        tp[a].camera = m[i].camera;
                        tp[a].price = m[i].price;
                        tp[a].priority = m[i].priority;
                        tp[a].ram = m[i].ram;
                        tp[a].storage = m[i].storage;
                        for (j = 0; j < 20; j++)
                        {
                            tp[a].company[j] = m[i].company[j];
                        }
                        for (j = 0; j < 20; j++)
                        {
                            tp[a].model[j] = m[i].model[j];
                        }
                        for (j = 0; j < 20; j++)
                        {
                            tp[a].color[j] = m[i].color[j];
                        }
                        a++;
                    }
                }
                if (tp[0].battery == 0)
                {
                    printf("\nNo phone available with given specs.");
                }
                else
                {
                    Mergesort(tp, 0, a);
                    printf("\nOur best suggestion is: ");
                    Mobiles s;
                    s.battery = 0;
                    s.camera = 0;
                    for (j = 0; j < 20; j++)
                    {
                        s.company[j] = ' ';
                    }
                    for (j = 0; j < 20; j++)
                    {
                        s.model[j] = ' ';
                    }
                    for (j = 0; j < 20; j++)
                    {
                        s.color[j] = ' ';
                    }
                    s.price = 0;
                    s.priority = 0;
                    s.ram = 0;
                    s.storage = 0;
                    for (i = 1; i < a; i++)
                    {
                        if (tp[i].ram > s.ram && tp[i].camera > s.camera && tp[i].price > s.price)
                        {
                            s.battery = tp[i].battery;
                            s.camera = tp[i].camera;
                            s.price = tp[i].price;
                            s.priority = tp[i].priority;
                            s.ram = tp[i].ram;
                            s.storage = tp[i].storage;
                            for (j = 0; j < 20; j++)
                            {
                                s.company[j] = tp[i].company[j];
                            }
                            for (j = 0; j < 20; j++)
                            {
                                s.model[j] = tp[i].model[j];
                            }
                            for (j = 0; j < 20; j++)
                            {
                                s.color[j] = tp[i].color[j];
                            }
                        }
                    }
                    printf("\n%s %s", s.company, s.model);
                    printf("\nIt's RAM is of %dGB.", s.ram);
                    printf("\nIt's Battery is of %dMAh.", s.battery);
                    printf("\nIt's Storage is of %dGB.", s.storage);
                    printf("\nIt's Camera is of %dMP.", s.camera);
                    printf("\nIt's price is Rs.%d.", s.price);
                    printf("\nIt's color is %s.", s.color);

                    printf("\n\nFor more suggestions click 1: ");
                    scanf("%d", &x);
                    if (x == 1)
                    {
                        show(tp, a);
                    }
                }
            }

            break;

        case 6:
            createMobiles();
            a = 0;
            printf("\nEnter minimum RAM requirement between 2GB and 12GB: ");
            scanf("%d", &ram);
            printf("\nEnter minimum price requirement: ");
            scanf("%d", &lprice);
            printf("\nEnter maximum price requirement: ");
            scanf("%d", &uprice);

            if (ram < 0 || ram > 12 || uprice < 8000 || uprice > 32000)
            {
                printf("\nNo phones available with given Specs.");
            }
            else
            {
                for (int j = 0; j < 50; j++)
                {
                    if (m[j].price >= lprice && m[j].price <= uprice)
                        m[j].priority++;
                    if (m[j].ram >= ram)
                        m[j].priority++;
                }

                for (i = 0; i < 50; i++)
                {
                    if (m[i].priority > 1)
                    {
                        tp[a].battery = m[i].battery;
                        tp[a].camera = m[i].camera;
                        tp[a].price = m[i].price;
                        tp[a].priority = m[i].priority;
                        tp[a].ram = m[i].ram;
                        tp[a].storage = m[i].storage;
                        int j;
                        for (j = 0; j < 20; j++)
                        {
                            tp[a].company[j] = m[i].company[j];
                        }
                        for (j = 0; j < 20; j++)
                        {
                            tp[a].model[j] = m[i].model[j];
                        }
                        for (j = 0; j < 20; j++)
                        {
                            tp[a].color[j] = m[i].color[j];
                        }
                        a++;
                    }
                }

                if (tp[0].ram == 0)
                {
                    printf("No phones available with given Specs.");
                }
                else
                {
                    Mergesort(tp, 0, a);
                    printf("\nOur best suggestion is: ");
                    Mobiles s;
                    s.battery = 0;
                    s.camera = 0;
                    int j;
                    for (j = 0; j < 20; j++)
                    {
                        s.company[j] = ' ';
                    }
                    for (j = 0; j < 20; j++)
                    {
                        s.model[j] = ' ';
                    }
                    for (j = 0; j < 20; j++)
                    {
                        s.color[j] = ' ';
                    }
                    s.price = 0;
                    s.priority = 0;
                    s.ram = 0;
                    s.storage = 0;
                    for (i = 1; i < a; i++)
                    {
                        if (tp[i].ram > s.ram && tp[i].storage > s.storage)
                        {
                            s.battery = tp[i].battery;
                            s.camera = tp[i].camera;
                            s.price = tp[i].price;
                            s.priority = tp[i].priority;
                            s.ram = tp[i].ram;
                            s.storage = tp[i].storage;
                            for (j = 0; j < 20; j++)
                            {
                                s.company[j] = tp[i].company[j];
                            }
                            for (j = 0; j < 20; j++)
                            {
                                s.model[j] = tp[i].model[j];
                            }
                            for (j = 0; j < 20; j++)
                            {
                                s.color[j] = tp[i].color[j];
                            }
                        }
                    }
                    printf("\n%s %s", s.company, s.model);
                    printf("\nIt's RAM is of %dGB.", s.ram);
                    printf("\nIt's Battery is of %dMAh.", s.battery);
                    printf("\nIt's Storage is of %dGB.", s.storage);
                    printf("\nIt's Camera is of %dMP.", s.camera);
                    printf("\nIt's price is Rs.%d.", s.price);
                    printf("\nIt's color is %s.", s.color);

                    printf("\n\nFor more suggestions click 1: ");
                    scanf("%d", &x);
                    if (x == 1)
                    {
                        show(tp, a);
                    }
                }
            }
            break;

        case 7:
            createMobiles();
            a = 0;
            printf("\nEnter minimum Battery requirement between 3000 MAh and 5000 MAh: ");
            scanf("%d", &batt);
            printf("\nEnter minimum price requirement: ");
            scanf("%d", &lprice);
            printf("\nEnter maximum price requirement: ");
            scanf("%d", &uprice);

            if (batt < 3000 || batt > 5000 || uprice < 8000 || uprice > 32000)
            {
                printf("\nNo phones available with given Specs.");
            }
            else
            {
                int j;
                for (j = 0; j < 50; j++)
                {
                    if (m[j].price >= lprice && m[j].price <= uprice)
                    {
                        m[j].priority++;
                    }
                    if (m[j].battery >= batt)
                    {
                        m[j].priority++;
                    }
                }

                for (i = 0; i < 50; i++)
                {
                    if (m[i].priority > 1)
                    {
                        tp[a].battery = m[i].battery;
                        tp[a].camera = m[i].camera;
                        tp[a].price = m[i].price;
                        tp[a].priority = m[i].priority;
                        tp[a].ram = m[i].ram;
                        tp[a].storage = m[i].storage;
                        for (j = 0; j < 20; j++)
                        {
                            tp[a].company[j] = m[i].company[j];
                        }
                        for (j = 0; j < 20; j++)
                        {
                            tp[a].model[j] = m[i].model[j];
                        }
                        for (j = 0; j < 20; j++)
                        {
                            tp[a].color[j] = m[i].color[j];
                        }
                        a++;
                    }
                }

                if (tp[0].ram == 0)
                {
                    printf("No phones available with given Specs.");
                }
                else
                {
                    Mergesort(tp, 0, a);
                    printf("\nOur best suggestion is: ");
                    Mobiles s;
                    s.battery = 0;
                    s.camera = 0;
                    for (j = 0; j < 20; j++)
                    {
                        s.company[j] = ' ';
                    }
                    for (j = 0; j < 20; j++)
                    {
                        s.model[j] = ' ';
                    }
                    for (j = 0; j < 20; j++)
                    {
                        s.color[j] = ' ';
                    }
                    s.price = 0;
                    s.priority = 0;
                    s.ram = 0;
                    s.storage = 0;
                    for (i = 1; i < a; i++)
                    {
                        if (tp[i].ram > s.ram && tp[i].storage > s.storage)
                        {
                            s.battery = tp[i].battery;
                            s.camera = tp[i].camera;
                            s.price = tp[i].price;
                            s.priority = tp[i].priority;
                            s.ram = tp[i].ram;
                            s.storage = tp[i].storage;
                            for (j = 0; j < 20; j++)
                            {
                                s.company[j] = tp[i].company[j];
                            }
                            for (j = 0; j < 20; j++)
                            {
                                s.model[j] = tp[i].model[j];
                            }
                            for (j = 0; j < 20; j++)
                            {
                                s.color[j] = tp[i].color[j];
                            }
                        }
                    }
                    printf("\n%s %s", s.company, s.model);
                    printf("\nIt's RAM is of %dGB.", s.ram);
                    printf("\nIt's Battery is of %dMAh.", s.battery);
                    printf("\nIt's Storage is of %dGB.", s.storage);
                    printf("\nIt's Camera is of %dMP.", s.camera);
                    printf("\nIt's price is Rs.%d.", s.price);
                    printf("\nIt's color is %s.", s.color);

                    printf("\n\nFor more suggestions click 1: ");
                    scanf("%d", &x);
                    if (x == 1)
                    {
                        show(tp, a);
                    }
                }
            }
            break;

        case 8:
            createMobiles();
            a = 0;
            printf("\nEnter minimum Camera requirement between 16 MP and 64 MP: ");
            scanf("%d", &cam);
            printf("\nEnter minimum price requirement: ");
            scanf("%d", &lprice);
            printf("\nEnter maximum price requirement: ");
            scanf("%d", &uprice);

            if (cam < 16 || cam > 64 || uprice < 8000 || uprice > 32000)
            {
                printf("\nNo phones available with given Specs.");
            }
            else
            {
                int j;
                for (j = 0; j < 50; j++)
                {
                    if (m[j].price >= lprice && m[j].price <= uprice)
                    {
                        m[j].priority++;
                    }
                    if (m[j].camera >= cam)
                    {
                        m[j].priority++;
                    }
                }

                for (i = 0; i < 50; i++)
                {
                    if (m[i].priority > 1)
                    {
                        tp[a].battery = m[i].battery;
                        tp[a].camera = m[i].camera;
                        tp[a].price = m[i].price;
                        tp[a].priority = m[i].priority;
                        tp[a].ram = m[i].ram;
                        tp[a].storage = m[i].storage;
                        for (j = 0; j < 20; j++)
                        {
                            tp[a].company[j] = m[i].company[j];
                        }
                        for (j = 0; j < 20; j++)
                        {
                            tp[a].model[j] = m[i].model[j];
                        }
                        for (j = 0; j < 20; j++)
                        {
                            tp[a].color[j] = m[i].color[j];
                        }
                        a++;
                    }
                }

                if (tp[0].ram == 0)
                {
                    printf("No phones available with given Specs.");
                }
                else
                {
                    Mergesort(tp, 0, a);
                    printf("\nOur best suggestion is: ");
                    Mobiles s;
                    s.battery = 0;
                    s.camera = 0;
                    for (j = 0; j < 20; j++)
                    {
                        s.company[j] = ' ';
                    }
                    for (j = 0; j < 20; j++)
                    {
                        s.model[j] = ' ';
                    }
                    for (j = 0; j < 20; j++)
                    {
                        s.color[j] = ' ';
                    }
                    s.price = 0;
                    s.priority = 0;
                    s.ram = 0;
                    s.storage = 0;
                    for (i = 1; i < a; i++)
                    {
                        if (tp[i].ram > s.ram && tp[i].storage > s.storage)
                        {
                            s.battery = tp[i].battery;
                            s.camera = tp[i].camera;
                            s.price = tp[i].price;
                            s.priority = tp[i].priority;
                            s.ram = tp[i].ram;
                            s.storage = tp[i].storage;
                            for (j = 0; j < 20; j++)
                            {
                                s.company[j] = tp[i].company[j];
                            }
                            for (j = 0; j < 20; j++)
                            {
                                s.model[j] = tp[i].model[j];
                            }
                            for (j = 0; j < 20; j++)
                            {
                                s.color[j] = tp[i].color[j];
                            }
                        }
                    }
                    printf("\n%s %s", s.company, s.model);
                    printf("\nIt's RAM is of %dGB.", s.ram);
                    printf("\nIt's Battery is of %dMAh.", s.battery);
                    printf("\nIt's Storage is of %dGB.", s.storage);
                    printf("\nIt's Camera is of %dMP.", s.camera);
                    printf("\nIt's price is Rs.%d.", s.price);
                    printf("\nIt's color is %s.", s.color);

                    printf("\n\nFor more suggestions click 1: ");
                    scanf("%d", &x);
                    if (x == 1)
                    {
                        show(tp, a);
                    }
                }
            }
            break;

        case 9:
            createMobiles();
            a = 0;
            printf("\nEnter minimum Storage requirement between 16GB and 256GB: ");
            scanf("%d", &st);
            printf("\nEnter minimum price requirement: ");
            scanf("%d", &lprice);
            printf("\nEnter maximum price requirement: ");
            scanf("%d", &uprice);

            if (st < 16 || st > 256 || uprice < 8000 || uprice > 32000)
            {
                printf("\nNo phones available with given Specs.");
            }
            else
            {
                int j;
                for (j = 0; j < 50; j++)
                {
                    if (m[j].price >= lprice && m[j].price <= uprice)
                    {
                        m[j].priority++;
                    }
                    if (m[j].storage >= st)
                    {
                        m[j].priority++;
                    }
                }

                for (i = 0; i < 50; i++)
                {
                    if (m[i].priority > 1)
                    {
                        tp[a].battery = m[i].battery;
                        tp[a].camera = m[i].camera;
                        tp[a].price = m[i].price;
                        tp[a].priority = m[i].priority;
                        tp[a].ram = m[i].ram;
                        tp[a].storage = m[i].storage;
                        for (j = 0; j < 20; j++)
                        {
                            tp[a].company[j] = m[i].company[j];
                        }
                        for (j = 0; j < 20; j++)
                        {
                            tp[a].model[j] = m[i].model[j];
                        }
                        for (j = 0; j < 20; j++)
                        {
                            tp[a].color[j] = m[i].color[j];
                        }
                        a++;
                    }
                }

                if (tp[0].ram == 0)
                {
                    printf("No phones available with given Specs.");
                }
                else
                {
                    Mergesort(tp, 0, a);
                    printf("\nOur best suggestion is: ");
                    Mobiles s;
                    s.battery = 0;
                    s.camera = 0;
                    for (j = 0; j < 20; j++)
                    {
                        s.company[j] = ' ';
                    }
                    for (j = 0; j < 20; j++)
                    {
                        s.model[j] = ' ';
                    }
                    for (j = 0; j < 20; j++)
                    {
                        s.color[j] = ' ';
                    }
                    s.price = 0;
                    s.priority = 0;
                    s.ram = 0;
                    s.storage = 0;
                    for (i = 1; i < a; i++)
                    {
                        if (tp[i].ram > s.ram && tp[i].storage > s.storage)
                        {
                            s.battery = tp[i].battery;
                            s.camera = tp[i].camera;
                            s.price = tp[i].price;
                            s.priority = tp[i].priority;
                            s.ram = tp[i].ram;
                            s.storage = tp[i].storage;
                            for (j = 0; j < 20; j++)
                            {
                                s.company[j] = tp[i].company[j];
                            }
                            for (j = 0; j < 20; j++)
                            {
                                s.model[j] = tp[i].model[j];
                            }
                            for (j = 0; j < 20; j++)
                            {
                                s.color[j] = tp[i].color[j];
                            }
                        }
                    }
                    printf("\n%s %s", s.company, s.model);
                    printf("\nIt's RAM is of %dGB.", s.ram);
                    printf("\nIt's Battery is of %dMAh.", s.battery);
                    printf("\nIt's Storage is of %dGB.", s.storage);
                    printf("\nIt's Camera is of %dMP.", s.camera);
                    printf("\nIt's price is Rs.%d.", s.price);
                    printf("\nIt's color is %s.", s.color);

                    printf("\n\nFor more suggestions click 1: ");
                    scanf("%d", &x);
                    if (x == 1)
                    {
                        show(tp, a);
                    }
                }
            }
            break;

        default:
            printf("\nEnter a valid option.");
            break;
        }
        printf("\nDo you want to continue? Press 1 to continue and 0 to exit.");
        scanf("%d", &ans);

        if (ans == 0)
        {
            break;
        }
        else
        {
            system("cls");
        }
    }

    printf("\n\nThank you for using Mobile Suggestor application!!");
}
