Doug Doner
Elliott Maguire
Alan Moss

To run quine: `gcc -o q q.c && ./q`
To run quasi-worm: `gcc -o 0 0.c && ./0 0`

The quine has a set boundary for the length of the filename, which, if exceeded, would fault. The worm requires 0 as a command-line argument to serve as the generation counter. This input is not filtered, and if the initial input isn't a 0, there would be a fault either in generation tracking or in string formatting, since boundaries are static in initial declarations. But, at the same time, these boundaries function as parameters that allow for proper functioning.