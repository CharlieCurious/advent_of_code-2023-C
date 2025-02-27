#pragma once
#include <stdio.h>

typedef struct {
    char **strings;
    unsigned int size;
} StringArray;

FILE *open_file_or_exit(const char *file_name);

// Given a file name, returns an array or strings
// where each element is a line from the file.
StringArray *read_lines(FILE *fp, int max_lines, int max_length);

void free_string_array(StringArray *array);