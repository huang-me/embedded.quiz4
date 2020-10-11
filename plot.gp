reset
set output "compare.png"
set term png enhanced font 'Verdana,10'

plot    [0:100][0:2.5e-5] "naive.txt" with points title "NAIVE" ,\
        "bitwise.txt" with points title "BITWISE"
