# Unix Utilities and Low-Level C Tools

Small Unix-style utilities and string-library exercises written in C during Embedded Linux and Systems Programming training.

## Why it matters

- Exercises POSIX file and process-adjacent APIs directly rather than wrapping library calls behind a framework.
- Includes a team-built assembly string-library artifact, clearly separated from the individual C work.

## How it's built

- [`core-utils/`](core-utils/) - `cp`, `mv`, `pwd`, `echo`, `mycat`, and a word-count exercise using low-level file operations.
- [`string-lib-c/`](string-lib-c/) - C implementations and iterations of string operations such as length, concatenation, and bounded concatenation.
- [`string-lib-asm/`](string-lib-asm/) - **team project**: C header and sample program for a raw-assembly string library (`Strcat`, `Strncat`, `Strlength`).

## Key results

- Core utilities use primitives such as `open`, `read`, `write`, `close`, `getcwd`, and `unlink`.
- The assembly library is included as a team deliverable; it is not presented as sole-authored work.

## How to run

Compile an individual C utility on Linux, for example:

```sh
gcc -Wall -Wextra -o mycat core-utils/mycat.c
./mycat path/to/file
```
