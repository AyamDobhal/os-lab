echo "Ayam Dobhal | Section C | University Roll Number 2016685\n"

n=$1

i=`expr $n - 1`
ans=$n

while [ $i -gt 0 ]
do
    ans=`expr $ans \* $i`
    i=`expr $i - 1`
done
echo "$ans"
