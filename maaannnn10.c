 
 #include<stdio.h>
 void main()
 {
 int a,b,c, result = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &a);

    b= a;

    while (b!= 0)
    {
        c = b%10;
        result += c*c*c;
        b /= 10;
    }

    if(result == a)
        printf("%d is an Armstrong number.",a);
    else
        printf("%d is not an Armstrong number.",a);

    return 0;
    }
