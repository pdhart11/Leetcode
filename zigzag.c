char * convert(char * s, int numRows)
{
    int i = 0;
    int k = 0;
    int index = 0;
    int length = strlen(s);
    int my_array[length];
    char* final_list = malloc(sizeof(char)*length + 1);
    final_list[length] = '\0';
    if (numRows == 1){
        return s;
    }
    for (int element = 0; element < length; element++){
        if (i == (numRows-1)){
            my_array[element] = i;
            i--;
        }
        else if(i == 0){
            my_array[element] = i;
            i++;
        }
        else if(i <my_array[element-1]){
            my_array[element] = i;;
            i--;
        }
        else{
            my_array[element] = i;
            i++;
        }
    }
    int my_array_size = sizeof(my_array)/sizeof(my_array[0]);
    int n = 0;
    while (n < my_array_size) // 0 < 14 
    {
        if (index == length)
        {
            index = 0;
            k++;
        }
        else if (my_array[index] == k)
        {
            final_list[n] = s[index];
            index++;
            n++;
        }
        else
        {
            index++;
        }
    }
    return final_list;
}
