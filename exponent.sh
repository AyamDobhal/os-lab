echo "Ayam Dobhal | Section C | University Roll Number 2016685\n"
echo "Enter a and b"
read a b
i=1
ans=$a
while [ $i -lt $b ]
do
    ans=`expr $ans \* $a`
    i=`expr $i + 1`
done
echo "$ans"
