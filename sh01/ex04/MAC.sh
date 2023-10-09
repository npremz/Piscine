#!/bin/bash
ifconfig | grep -w "ether" | sed "s/	ether //" | sed "s/ //"
