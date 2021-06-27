#include <stdio.h>
#include <stdlib.h>
void main(int argc, char* argv[]) {                       // gcc -o 0 0.c && ./0 0
    FILE *of, *tf;                                        // (o)rigin|(t)arget (f)ile
    int gc;                                               // (g)eneration (c)ounter
    char c, on[4], tn[4], cc[15], cr[6];                  // (o)rigin|(t)arget (n)ame, (c)ommand (c)ompile|(r)un
    gc = atoi(argv[1]);                                   // Get generation counter from arguments
    if (gc > 2) return;                                   // Check generation counter
    sprintf(on, "%d.c", gc);                              // Compose origin filename
    sprintf(tn, "%d.c", gc + 1);                          // Compose target filename
    of = fopen(on, "r");                                  // Open origin file
    tf = fopen(tn, "w");                                  // Open target file
    while ((c = fgetc(of)) != EOF) fprintf(tf, "%c", c);  // Copy contents over
    fclose(of);                                           // Close origin file
    fclose(tf);                                           // Close target file
    sprintf(cc, "gcc -o %d %s", gc + 1, tn);              // Compose compilation command
    sprintf(cr, "./%d %d", gc + 1, gc + 1);               // Compose run command
    system(cc);                                           // Compile the target file
    system(cr);                                           // Run the target file
}