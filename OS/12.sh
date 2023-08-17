echo "Enter the three numbers : "
read -a arr
for (( i=1 ; i<=3 ; i++ ))
do
	for (( j=1 ; j<=3 ; j++ ))
	do  
		for (( k=1 ; k<=3 ; k++))
		do
			if [ $i -ne $j ] && [ $j -ne $k ] && [ $i -ne $k ]  
			then
				echo "${arr[i]} ${arr[j]} ${arr[k]}"
			fi
		done
	done
done