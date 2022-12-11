n=$1
rev=0
s=0
ori=n
while [ $n -gt 0 ]
do
    d=`expr $n % 10`
    temp=`expr $rev \* 10`
    rev=`expr $temp + $d`
    s=`expr $s + $d`
    n=`expr $n / 10`
done
echo $rev
echo $s
