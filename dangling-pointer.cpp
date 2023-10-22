#include <iostream>
using namespace std;
int main()
{
    int *ptr = (int *)malloc(sizeof(int));
    free(ptr);
    ptr = NULL;
}