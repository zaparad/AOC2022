
#include <stdio.h>

int max_calories[3] = {0};

void add_new_item_to_queue(int item)
{
    if(item > max_calories[0])
}

int main ()
{
    FILE* input_file = fopen("input.txt", "r");
    char line[256];

    
    int calorie_counter = 0;

    while(fgets(line, sizeof(line), input_file))
    {
        if(line[0] == '\n')    //This is a blank line
        {
            if(max_calories < calorie_counter) max_calories = calorie_counter;
            calorie_counter = 0;
        }
        else
        {
            unsigned int new_value = 0;
            sscanf(line, "%u",&new_value);
            calorie_counter += new_value;
        }
    }

    if(max_calories < calorie_counter) max_calories = calorie_counter;

    printf("%u\n", max_calories);

    fclose(input_file);


    return 0;
}
