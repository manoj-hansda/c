int add(int x, int y)
{
    int z = x+y;
    return z;
}

int sub(int x, int y)
{
    int z = x-y;
    return z;
}
int mul(int x, int y)
{
    int z = x*y;
    return z;
}
int div(int x, int y)
{
    int z = x/y;
    if(x%y)
    {
        printf("\nRemainder = %d, ", x%y);
        return z;
    }

    else
        return z;
}

