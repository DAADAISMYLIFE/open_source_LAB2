#!/bin/zsh
#fibo.sh

fibo(){
    i=$i
    if [ $1 -le 2 ]
    then
        return 1
    else
        fibo $i
    fi
    fibo
}

read n