 #include <stdio.h>
 #include <string.h>
// int main()
// {
//     char name1[10] = "monstre";
//     char name2[20] = "mini ";
//     int i = 5, j;

//     for (j = 0; j < strlen(name2); j++)
//     {
//         name2[i] = name1[j];
//         i++;
//     }
//     printf("%s\n", name2);
// }

int main() {
    char name[10] = "monstre";
    char name1[20] = "mini ";
    

   

    // Concatenate name1 to result
    strcat(name1, name);

    // Print the concatenated string
    printf(": %s\n", name1);
}
