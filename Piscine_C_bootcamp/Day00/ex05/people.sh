#!bin/bash
ldapsearch -Q -LLL "(uid=k*)" cn | grep '^cn:' | cut -d ':' -f 2 | sort -r -f | cut -c2-