int numJewelsInStones(char * jewels, char * stones)
{
    int count = 0;
    int jewel_size = strlen(jewels);
    int stones_size = strlen(stones);
    for (auto i = 0; i < jewel_size; i++)
    {
        for (auto j = 0; j < stones_size; j++)
        {
            if (jewels[i] == stones[j])
            {
                count++;
            }
        }
    }
    return count;
}
