bool wordPattern(char *pattern, char *str)
{
    char *bucket[26] = {0};
    int len[26] = {0};
    char c, *p, *s;
    char t, *pat;
    int l;

    pat = pattern;
    while (*str && *pattern)
    {
        s = str;
        l = 0;
        while (*str && *str != ' ')
        {
            str++;
        }
        l = str - s;
        if (*str == ' ')
        {
            *str = 0; // strcmp is much faster than strncmp, so cut the strings.
            str++;    // skip single space
        }

        c = *(pattern++) - 'a';
        p = bucket[c];
        if (p)
        {
            if (strcmp(p, s))
                return false;
        }
        else
        {
            bucket[c] = s;
            len[c] = l;
            // cannot be same with other pattern
            p = pat;
            while ((t = (*p++) - 'a') != c)
            {
                if (len[t] == len[c] &&
                    !strcmp(bucket[t], bucket[c]))
                    return false;
            }
        }
    }

    return (!*pattern && !*str) ? true : false;
}