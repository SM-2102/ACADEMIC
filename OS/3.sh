echo Enter the file name, starting line and number of lines to be displayed > echo $1 $2 $3
tail -n +$2 $1 | head -n $3
