int finalValueAfterOperations(char ** operations, int operationsSize)
{
    int x = 0;
    for (auto i = 0; i < operationsSize; i++)
    {
        if (operations[i][1] == '+')
        {
            x = x + 1;
        }
        else
        {
            x = x - 1;
        }
    }
    return x;
}
