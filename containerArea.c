int maxArea(int* height, int heightSize)
{
    int *h = height;
    int max, area = 0;
    for(int i = 0; i < heightSize; i++)
    {
        for (int j = 1; j < heightSize; j++)
        {
            if (h[j] >= h[i])
            {
                area = h[i] * (j - i);
            }
            else
            {
                area = h[j] * (j - i);
            }
            if (area > max)
            {
                max = area;
            }
        }
    }
    return max;
}
