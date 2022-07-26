char * defangIPaddr(char * address)
{
    const int length = strlen(address);
    const int len = length + 6; //Adding 6 for the 6 backets
    char* myString = malloc(len+1);
    int j = 0;
    if (myString == NULL)
    {
        return 1;
    }
  
    for (auto i = 0; i < length; i++)
    {
        if (address[i] == '.')
        {
            myString[j++] = '[';
            myString[j++] = '.';
            myString[j++] = ']';
        }
        else
        {
            myString[j++] = address[i];
        }
    }
    myString[len] = '\0';
    return myString;    
}
