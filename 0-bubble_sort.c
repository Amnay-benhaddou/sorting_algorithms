#include "sort.h"
/**
 * bubble_sort - sort a elements from min to max value
 * @a: a
 * @size: a size
 */
void bubble_sort(int *a, size_t size)
{
size_t i, j, tmp = 0;
if (size < 2)
{
return;
}
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (a[j] > a[j + 1] && a[j + 1])
{
tmp = a[j];
a[j] = a[j + 1];
a[j + 1] = tmp;
print_array(a, size);
}
}
}
}
