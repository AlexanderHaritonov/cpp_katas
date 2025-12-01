# A c++ code optimization exercise - an optional part of the Computer Vision Nanodegree

compile with:
g++ -std=c++11 main.cpp blur.cpp initialize_beliefs.cpp move.cpp normalize.cpp print.cpp sense.cpp zeros.cpp
level 3 optimization
g++ -std=c++11 -O3 main.cpp blur.cpp initialize_beliefs.cpp move.cpp normalize.cpp print.cpp sense.cpp zeros.cpp


## Runtimes before (code in the folder andy_histogram_filter):
number of iterations: 10000 
duration milliseconds initialize beliefs 34.452
duration milliseconds sense 44.52
duration milliseconds blur 90.451
duration milliseconds normalize 42.773
duration milliseconds move 36.895

## Runtimes after (code in the folder optimized_code):
number of iterations: 10000 
duration milliseconds initialize beliefs 9.836
duration milliseconds sense 1.054
duration milliseconds blur 53.889
duration milliseconds normalize 2.044
duration milliseconds move 10.14

## Runtimes after optimization, compiled with -O3:
number of iterations: 10000 
duration milliseconds initialize beliefs 1.821
duration milliseconds sense 0.314
duration milliseconds blur 6.3
duration milliseconds normalize 0.263
duration milliseconds move 1.497