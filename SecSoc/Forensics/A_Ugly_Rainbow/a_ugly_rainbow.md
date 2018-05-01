### Requirement
We were given a svg file which contains some different colours

### Solution
First, we opened the link which contains the image. We then try to read the page's source to inspect the page. We then get all the code of colours in hex (the rainbow.txt file).

We thought there was more info inside the image file, so we downloaded it and put it through r2, which was no luck :(

We then tried to extract the hex numbers of colours (using the C code in rainbow.c) and put them in ext_rainbow.txt . We converted them to ASCII text which was just a random jumble string of characters. We tried to find the flag inside that mess by finding FLAG, which was pointless. We just then tried to find the character F (since the FLAG starts with capital F). Looking through all the matches, we found a strange pattern, it was GALF. We thought maybe the flag was in reverse order so we tried to write it down. VOILA, the flag was there!

