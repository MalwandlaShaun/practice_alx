#!/bin/bash -x

while inotifywait -e close_write check_test.c; do
 gcc -Wall -pedantic -Werror -Wextra -std=gnu89  check_test.c -o executable
done

