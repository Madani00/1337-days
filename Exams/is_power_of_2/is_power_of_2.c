// #include <unistd.h>
// #include <stdio.h>
// int is_power_of_2(unsigned int n)
// {
//     if (n == 0)
//	  return 0;
//     unsigned int power_of_2 = 1;
    
//     while (power_of_2 < n)               // opt : && power_of_2 < 2147483648
//         power_of_2 *= 2;
//     return (n == power_of_2);
// }
// int main()
// {
// 	printf("%d\n", is_power_of_2(15));
// }

// this one passed the molinute
int is_power_of_2(unsigned int n)
{
    if (n == 0)
        return 0;
    return (n & (n - 1)) == 0;
}
