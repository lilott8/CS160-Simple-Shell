#!/bin/bash
CLEAR="clear"
$CLEAR
RUN="make"
$RUN
if [ "$1" = 1 ]; then
RUN="./tsh"
$RUN
fi

if [ "$1" = 15 ]; then
RUN="./sdriver.pl -t trace15.txt -s ./tsh -a \"-p\""
$RUN
fi
