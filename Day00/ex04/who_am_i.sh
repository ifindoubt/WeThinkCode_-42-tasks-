#!/bin/bash
ldapsearch -LLLQ  uid="kmotlaf" | grep "dn" | cut -c5-