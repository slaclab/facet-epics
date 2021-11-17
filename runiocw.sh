#!/bin/bash
if [ "`ssh facet-srv02 screen -list | grep -w $1 | wc -l`" != "0" ]
  then
    echo "$1 IOC already running, restarting..."
    `/usr/local/facet/tools/epics/killiocw.sh $1` 
fi
ssh facet-srv02 "cd /usr/local/facet/tools/epics/ioc/iocBoot/ioc$1; screen -L -dmS $1 ../../bin/linux-x86_64/$1 st.cmd"

