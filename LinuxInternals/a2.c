#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <ctype.h>

extern int optind;

int line_count = 0;
int word_count = 0;
int char_count = 0;

int line_flag = 0;
int word_flag = 0;
int char_flag = 0;

int total_line_count = 0;
int total_word_count = 0;
int total_char_count = 0;

void count(int fd)
{
    char ch;
    line_count = 0;
    word_count = 0;
    char_count = 0;
    while (read(fd, &ch, 1) > 0)
    {
        char_count++;
        if (ch == '\n')
        {
            line_count++;
        }
        if (ch == ' ')
        {
            word_count++;
        }
    }
    total_char_count += char_count;
    total_line_count += line_count;
    total_word_count += word_count;
}
void print_result(char *filename)
{

    if (line_flag == 1)
    {
        printf("%d ", line_count);
    }

    if (word_flag == 1)
    {
        printf("%d ", word_count);
    }

    if (char_flag == 1)
    {
        printf("%d ", char_count);
    }

    printf("%s\n", filename);
}

int main(int argc, char *argv[])
{
    int option;

    while ((option = getopt(argc, argv, "lwc")) != -1)
    {
        switch (option)
        {
        case 'l':
            line_flag = 1;
            break;
        case 'w':
            word_flag = 1;
            break;
        case 'c':
            char_flag = 1;
            break;

        default:

            break;
        }
    }

    if (!line_flag && !word_flag && !char_flag)
    {
        // printf line word char
        line_flag = 1;
        word_flag = 1;
        char_flag = 1;
    }

    if (optind == argc)
    {
        // printf from cla
    }
    else
    {
        for (int i = optind; i < argc; i++)
        {
            int fd = open(argv[i], O_RDONLY);
            count(fd);
            print_result(argv[i]);
        }
        }
}
