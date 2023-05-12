# Shell Project

This project is a simple UNIX command-line interpreter, also known as a shell. It is capable of reading commands from standard input, parsing them, and executing them.



### Output

* Unless specified otherwise, your program must have the exact same output as sh (/bin/sh) as well as the exact same error output.

* The only difference is when you print an error, the name of the program must be equivalent to your argv[0] (See below)

### Example of error with sh:

```
$ echo "qwerty" | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo "qwerty" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found
$
```

Same error with your program hsh:
```
$ echo "qwerty" | ./hsh
./hsh: 1: qwerty: not found
$ echo "qwerty" | ./././hsh
./././hsh: 1: qwerty: not found
$
```

