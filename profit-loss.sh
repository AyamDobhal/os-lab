echo "Ayam Dobhal | Section C | University Roll Number 2016685\n"
echo "Enter Cost Price and Selling Price"
read c s

r=`expr $s - $c`

if test $r -gt 0
then
    echo "Profit of $r"
elif test $r -lt 0
then
    echo "Loss of $r"
else
    echo "No profit/loss"
fi
