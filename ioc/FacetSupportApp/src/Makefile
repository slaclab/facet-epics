TOP=../..

include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS BELOW HERE

# xxxRecord.h will be created from xxxRecord.dbd
#DBDINC += xxxRecord

# Install xxxSupport.dbd into <top>/dbd
#DBD += xxxSupport.dbd

# Build an IOC support library
#LIBRARY_IOC += FacetSupportSupport

# Compile and add the code to the support library
#FacetSupportSupport_SRCS += xxxRecord.c
#FacetSupportSupport_SRCS += devXxxSoft.c

# Link locally-provided code into the support library,
# rather than directly into the IOC application.
# This is required for Windows DLL builds.
#FacetSupportSupport_SRCS += dbSubExample.c
#FacetSupportSupport_SRCS += FacetSupportHello.c
#FacetSupportSupport_SRCS += initTrace.c

#FacetSupportSupport_LIBS += $(EPICS_BASE_IOC_LIBS)


# Build the IOC application
PROD_IOC = FacetSupport

# FacetSupport.dbd will be created and installed
DBD += FacetSupport.dbd

# FacetSupport.dbd will include these files:
FacetSupport_DBD += base.dbd
FacetSupport_DBD += iocAdmin.dbd
#FacetSupport_DBD += xxxSupport.dbd
#FacetSupport_DBD += dbSubExample.dbd
#FacetSupport_DBD += FacetSupportHello.dbd
#FacetSupport_DBD += initTrace.dbd

# FacetSupport_registerRecordDeviceDriver.cpp derives from FacetSupport.dbd
FacetSupport_SRCS += FacetSupport_registerRecordDeviceDriver.cpp

# Build the main IOC entry point where needed
FacetSupport_SRCS_DEFAULT += FacetSupportMain.cpp
FacetSupport_SRCS_vxWorks += -nil-

# Link in the code from our support library
FacetSupport_LIBS += devIocStats

# Finally link IOC to the EPICS Base libraries
FacetSupport_LIBS += $(EPICS_BASE_IOC_LIBS)

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD EXTRA GNUMAKE RULES BELOW HERE

