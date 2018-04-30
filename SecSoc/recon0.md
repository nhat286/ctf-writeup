#### Requirement
```
ssh ctf@recon0.hashbangctf.com ... and start searching !
password: recon0
```
#### Solution

We used terminal to ssh to the server and then typed ```ls -lah``` to list all of files including the hidden ones. We saw one file called ".I_CANT_BELIEVE_ITS_NOT_THE_FLAG.txt", hence we used ```cat``` to read its content. But it turned out not a flag but some Japanese romanised words. So we needed to find the flag in other files. We were looking around for some times and then in the ".bashrc", we noticed some weird things. And it was a flag scrambled into different letters with index numbers. 
So we could gain the flag by assembling the letters with their numbers. 

The flag is <b>FLAG{JAVASKURIPTO}</b>
