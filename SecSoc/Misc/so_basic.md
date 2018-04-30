### Requirement

Talking in Englsih is soooo basicccc broooooo
lets use this secret language instead.

RkxBR3t3aDBfbjMzZHNfcGFkZDFuZ19hbnl3NHk/fQ

### Solution

This is a simple based64 message. In order to decode, we used a website founded from Google. Another way to do is using python
```
import 64
a = 'RkxBR3t3aDBfbjMzZHNfcGFkZDFuZ19hbnl3NHk/fQ'
base64.b64decode(a + "==")
#we need "==" otherwise it will yell: incorrect padding
```

The flag is <b>FLAG{wh0_n33ds_padd1ng_anyw4y?}</b>
