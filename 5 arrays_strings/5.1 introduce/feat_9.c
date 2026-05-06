#define TOTAL 5

int main(void)
{
    int ar_1[TOTAL];
    int ar_2[TOTAL * 2];

    for (int i = 0; i < TOTAL; i++)
        scanf("%d", &ar_1[i]);

    for (int i = 0; i < TOTAL * 2; i++)
        ar_2[i] = (i < TOTAL) ? ar_1[i] : -1;

    __ASSERT_TESTS__
    return 0;
}