# `collatz`

Simple command line tool for calculating collatz numbers.

Takes numbers from stdin and displays it collatz number to stdout.

### Example

#### Simple usage
```bash
> ./collatz
27
111
```

#### Pipe input
```bash
> echo 27 | ./collatz
111
```

#### File of numbers
```bash
> cat numbers.txt
1
2
3
27
871
> cat numbers.txt | ./collatz > results.txt
> cat results.txt
0
1
7
111
178
```

# Tests
```bash
> make test
g++ -o collatz_test test.cpp lib/collatz.cpp
./collatz_test
Tests passed
```