### Requirement

Pastebin Is Passé - Leave Passébin Behind And Use WasteTin In 2018!!1!

wastetin.hashbangctf.com

### Solution
The most noticeable thing is the file is maxium 42 characters which means we can write over the file extension and in this case is php file that we need

So we created a file with 39 of "A" and php file extension: AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.php and the content is ```<?php passthru("cat /flag");
then go to the file to get the flag

The flag is <b></b>

