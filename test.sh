#! /bin/bash

if [ $# -eq 0 ]; then echo "./test.sh (numéro de l'exercice) ;)"; exit; fi
if [ $1 == '1' ]; then
    gcc ex_01.c
    echo "Souhaite tu tester un chiffre en particulier[y/n]"
    read y_n
    clear
    if [ $y_n == 'y' ]; then
        echo "Quel chiffre souhaite tu tester ?:"
        echo
        read imput_01
        ./a.out $input_01;
        if [ $? == 0 ];
        then echo "Le programme renvoie $? (impair)"
        elif [ $? == 1 ];
        then echo "Le programme renvoie $? (pair)"
        else echo "tu a signaler $input_01 comme faux !"
        fi
    elif [ $y_n == 'n' ]; then
        echo "testing..."
        echo
        printf 'imput "154" : '
        ./a.out 84;
        sleep 1
        if [ $? == 1 ];
            then printf "\e[0;32m passed\e[0m\n"
            else printf "\e[0;31m failed\e[0m\n"
            echo "returned $?"
        fi
        echo
        printf 'imput "" : '
        ./a.out;
        sleep 1
        if [ $? == 84 ];
            then printf '\e[0;32m passed\e[0m\n'
            else printf '\e[0;31m failed\e[0m\n'
            echo "returned $?"
        fi
        echo
        printf 'imput "-68" : '
        ./a.out -84;
        sleep 1
        if [ $? == 1 ];
            then printf '\e[0;32m passed\e[0m\n'
            else printf '\e[0;31m failed\e[0m\n'
            echo "returned $?"
        fi
        echo
        printf 'imput "9" : '
        ./a.out 9;
        sleep 1
        if [ $? == 0 ];
            then printf "\e[0;32m passed\e[0m\n"
            else printf "\e[0;31m failed\e[0m\n"
            echo "returned $?"
        fi
        echo
        printf 'imput "Ines" : '
        ./a.out 9;
        sleep 1
        if [ $? == 84 ];
            then printf "\e[0;32m passed\e[0m\n"
            else printf "\e[0;31m failed\e[0m\n"
            echo "returned $?"
        fi
        echo "done !"
    else
        echo "faut rentrer 'y' ou 'n' puis appuyer sur 'entrer' si jamais"
    fi
    rm a.out
fi

if [ $1 == 2 ]; then
    gcc ex_02.c
    gcc -o check 02_check.c
    clear
    printf '\e[0;31m [0]\e[0m -> Tout est bon\n'
    printf '\e[0;31m [1]\e[0m -> Mauvais espacage\n'
    printf '\e[0;31m [2]\e[0m -> Pas de majuscules au debut des mots\n'
    printf '\e[0;31m [3]\e[0m -> Des majuscules a l''interieur des mots\n'
    printf '\e[0;31m [4]\e[0m -> Tu n''a rien print\n'
    echo
    echo "testing..."
    echo
    sleep 1
    printf 'input : "      le saignEur dEs    agnaux" : '
    ./a.out "      le saignEur dEs    agnaux" | ./check
    printf "\e[0;31m [$?]\e[0m\n"
    printf 'phrase sortit -> "\e[0;32m'
    ./a.out "      le saignEur dEs    agnaux"
    printf '\e[0m"'
    echo
    sleep 1
    echo
    printf 'input : "as-tu penser aux espaces a la fin :)     " : '
    ./a.out "as-tu penser aux espaces a la fin :)     " | ./check
    printf "\e[0;31m [$?]\e[0m\n"
    printf 'phrase sortit -> "\e[0;32m'
    ./a.out "as-tu penser aux espaces a la fin :)     "
    printf '\e[0m"'
    echo
    sleep 1
    echo
    printf 'input : "AZeRTyuIoP!" : '
    ./a.out "AZeRTyuIoP!" | ./check
    printf "\e[0;31m [$?]\e[0m\n"
    printf 'phrase sortit -> "\e[0;32m'
    ./a.out "AZeRTyuIoP!"
    printf '\e[0m"'
    echo
    sleep 1
    echo
    printf 'input : "trevoR ...funnY guY" : '
    ./a.out "trevoR ...funnY guY" | ./check
    printf "\e[0;31m [$?]\e[0m\n"
    printf 'phrase sortit -> "\e[0;32m'
    ./a.out "trevoR ...funnY guY"
    printf '\e[0m"'
    echo
    sleep 1
    echo
    printf 'input : "Je Suis Parfait" : '
    ./a.out "Je Suis Parfait" | ./check
    printf "\e[0;31m [$?]\e[0m\n"
    printf 'phrase sortit -> "\e[0;32m'
    ./a.out "Je Suis Parfait"
    printf '\e[0m"'
    echo
    rm a.out
    rm check
fi