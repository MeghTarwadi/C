  // malloc
    printf( "\nUsing malloc" );
    ptr = malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }
    print(ptr, n);
    scan(ptr, n);
    print(ptr, n);
    free(ptr);
    print(ptr, n);