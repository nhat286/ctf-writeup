### Requiremnet

Challenge has been updated with less breadcrumbs

I think some fictitious characters are worried for their lives and have tried to leave a message through a trail of [breadcrumbs](https://cgi.cse.unsw.edu.au/~evank/other/breadbits/start)?

### Solution
Instead of tracking the numbers with tedious copy-past the number to URL, we used ```curl``` to get all the information in the website with this command line:
```curl -0 https://cgi.cse.unsw.edu.au/~evank/other/breadbits/[001-999] -ls -lS```
Since the input number is 3 digit number, the number we need can be in range from 001 to 999. ```-ls -lS``` is listining out all of the content in the websites

The flag is in page of number 873 and the flag is <b>FLAG{h4n531_&_gr3t3l}</b>

