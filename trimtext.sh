#!/bin/bash

filename="lorem_ipsum.txt"


echo"sous quel nom voulez vous sauvergader? "

read new_filename

fold -w$1 $filename &> ~/Documents/$new_filename

