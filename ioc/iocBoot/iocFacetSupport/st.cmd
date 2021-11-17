#!../../bin/linux-x86_64/FacetSupport

## You may have to change FacetSupport to something else
## everywhere it appears in this file

< envPaths

cd "${TOP}"

## Register all support components
dbLoadDatabase "dbd/FacetSupport.dbd"
FacetSupport_registerRecordDeviceDriver pdbbase

## Load record instances
#dbLoadTemplate "db/user.substitutions"
#dbLoadRecords "db/dbSubExample.db", "user=glen"
dbLoadRecords "db/FacetSupport.db", "hightime=3"

## iocAdmin
epicsEnvSet("ENGINEER","Glen White")
epicsEnvSet("LOCATION","FACET-II")
dbLoadRecords("db/iocAdminSoft.db","IOC=FacetSupport")

## Set this to see messages from mySub
#var mySubDebug 1

## Run this to trace the stages of iocInit
#traceIocInit

cd "${TOP}/iocBoot/${IOC}"
iocInit

## Start any sequence programs
#seq sncExample, "user=glen"
