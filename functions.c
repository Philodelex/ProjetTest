void disp(long long int c)
{
        size_t size = sizeof(c) * 8;
        for(size_t i = size - 1; i < size; i--)
        {
                if((i + 1) % 8 == 0 && i != size - 1)
                        printf(" ");
                printf("%i", (c >> i) & 1);
        }
        printf("\n");
}
