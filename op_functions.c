#include <stdio.h>
#include <stdlib.h>


int built_in_checker(char **input_arr, char* trimed_user_input)
{
    void (*build_fn)(char *str);
}

typedef struct built_in
{
	char *built_fn;
	void (*fn)(char *user_input);
} built_in_t;

//get the right function to use
void (*get_built_in_fn(char *str))(char *str)
{
    built_in_t built_ins[] = {
        {"exit", _exit},
        {"evn", _env},
        {NULL, NULL}
    };
	int i;

	i = 0;
	while (built_ins[i].built_fn != NULL)
	{
		if (strcmp(built_ins[i].built_fn, str) == 0)
		{
			return (built_ins[i].fn);
		}
		i = i + 1;
	}

    return (NULL);
}


//exits the shell
void _exit(char *user_input)
{
	free(user_input);
	exit(1);
}

//prints the current environment
void _env(char *user_input)
{
 todo
}