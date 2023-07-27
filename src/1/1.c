#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


int first_shortest_line(int* arr, size_t len);


int main(void)
{
    size_t n, m;
    scanf("%zd %zd", &n, &m);
    assert(n >= 1 && n <= 100 && "Invalid Input: n");
    assert(m >= 1 && m <= 100 && "Invalid Input: m");

    int *lines = malloc(sizeof(*lines) * n);
    assert(lines != NULL && "Could not allocate memory");

    for (size_t i = 0; i < n; i++)
    {
        int tmp = 0;
        scanf("%d", &tmp);
        assert(tmp >= 1 && tmp <= 100);
        lines[i] = tmp;
    }

    while (m > 0)
    {
        int shortest_line = first_shortest_line(lines, n);
        assert(shortest_line != -1 && "Empty list");
        printf("%d\n", lines[shortest_line]);
        lines[shortest_line] += 1;
        m--;
    }

    free(lines);

    return 0;
}


int first_shortest_line(int* arr, size_t len)
{
    if (len == 0)
        return -1;

    int shortest = arr[0];
    size_t line = 0;

    for (size_t i = 0; i < len; i++)
    {
        if (arr[i] < shortest)
        {
            shortest = arr[i];
            line = i;
        }
    }

    return line;
}
