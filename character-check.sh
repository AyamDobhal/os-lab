echo "Ayam Dobhal | Section C | University Roll Number 2016685\n"
echo "Enter a character"
read c

case $c in
    [b-df-hj-np-tv-zB-DF-HJ-NP-TV-Z]) 
        echo "Consonant";;
    [aeiouAEIOU]) 
        echo "Vowel";;
    [0-9]) 
        echo "Number";;
    *) 
        echo "Special Character";;
esac
