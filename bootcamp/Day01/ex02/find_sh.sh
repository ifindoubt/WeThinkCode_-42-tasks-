#!bin/sh
find . -name "*.sh" | sed "s/\.[^.]*$//" | cut -c3-