awk -F"|" 'NR == 2, NR == 5 { print NR, $1 $2 }' example.lst
