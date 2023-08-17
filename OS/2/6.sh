echo "Enter the numbers : "
read -a arr
n=${#arr[@]}
echo "The original array : ${arr[@]}"
maxi=${arr[1]}
mini=${arr[1]}
for (( i=1; i<n; i++ ))
do
	if [ $maxi -lt ${arr[$i]} ]
	then
		maxi=${arr[$i]}
	fi
	if [ $mini -gt ${arr[$i]} ]
	then
		mini=${arr[$i]}
	fi
done
echo "The maximum number : $maxi"
echo "The minimum number : $mini"