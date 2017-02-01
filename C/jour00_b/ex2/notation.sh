#!/bin/bash

read -p "Entrez votre note : " note

if [[ $note =~ ^-?[0-9]+$ ]]
then
    if [ $note -ge 0 ] && [ $note -le 5 ]
    then
	echo "bouh ! c'est nul."
    elif [ $note -ge 6 ] && [ $note -le 9 ]
    then
	echo "c'est pas encore ça..."
    elif [ $note -eq 10 ]
    then
	echo "c'était juste !"
    elif [ $note -ge 11 ] && [ $note -le 15 ]
    then
	echo "bien joué."
    elif [ $note -ge 16 ] && [ $note -le 19 ]
    then
	echo "vous avez la maîtrise !"
    elif [ $note -eq 20 ]
    then
	echo "c'est un perfeeeect !!"
    fi
else
	echo "Va t'acheter des doigts !"
fi

