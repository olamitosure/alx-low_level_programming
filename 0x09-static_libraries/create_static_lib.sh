#!/bin/bash
gcc -c *.ci
ranlib liball.a
ar rc liball.a *.o
