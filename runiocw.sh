#!/bin/bash
if [ "`ssh facet-srv02 screen -list | grep -w iocCathodeSupport | wc -l`" != "0" ]
  then
    echo "CathodeSupport IOC already running, restarting..."
    `/usr/local/facet/tools/epics/killiocw.sh` 
fi
ssh facet-srv02 "cd /usr/local/facet/tools/epics/ioc/iocBoot/ioccathodeSupportSim; screen -L -dmS iocCathodeSupport ../../bin/linux-x86_64/cathodeSupportSim st.cmd"

