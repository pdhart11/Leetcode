int romanToInt(char * s)
{
    int new_count = 0;
    int count = 0;
    int i = 0;
    int numeral = strlen(s);
    while (i < numeral)
    {
        if (s[i] == 'I')
        {
            if (s[i+1] == 'V')
            {
                new_count = 4;  
                i = i + 2;
            }
            else if (s[i+1] == 'X')
            {
                new_count = 9;
                i = i + 2;
            }
            else 
            {
                new_count = 1;
                i++;
            }
            
        }
        else if (s[i] == 'V')
        {
            new_count = 5;
            i++;
        }
        else if (s[i] == 'X')
        {
            if (s[i+1] == 'L')
            {
                new_count = 40;  
                i = i + 2;
            }
            else if (s[i+1] == 'C')
            {
                new_count = 90;
                i = i + 2;
            }
            else
            {
                new_count = 10;
                i++;
            }
        }
        else if (s[i] == 'L')
        {
            new_count = 50;
            i++;
        }
        else if (s[i] == 'C')
        {
            if (s[i+1] == 'D')
            {
                new_count = 400;  
                i = i + 2;
            }
            else if (s[i+1] == 'M')
            {
                new_count = 900;
                i = i + 2;
            }
            else
            {
                new_count = 100;
                i++;
            }
        }
        else if (s[i] == 'D')
        {
            new_count = 500;
            i++;
        }
        else
        {
            new_count = 1000;
            i++;
        }
        count = count + new_count;
    }
    printf("%i\n", count);
    return count;
}
