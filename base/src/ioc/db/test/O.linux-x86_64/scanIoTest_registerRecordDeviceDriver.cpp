/* THIS IS A GENERATED FILE. DO NOT EDIT! */
/* Generated from ../O.Common/scanIoTest.dbd */

#include <string.h>

#include "compilerDependencies.h"
#include "epicsStdlib.h"
#include "iocsh.h"
#include "iocshRegisterCommon.h"
#include "registryCommon.h"

#define epicsExportSharedSymbols
#include "shareLib.h"

extern "C" {

epicsShareExtern rset *pvar_rset_yRSET;

typedef int (*rso_func)(dbRecordType *pdbRecordType);
epicsShareExtern rso_func pvar_func_yRecordSizeOffset;

static const char * const recordTypeNames[] = {
    "y"
};

static const recordTypeLocation rtl[] = {
    {pvar_rset_yRSET, pvar_func_yRecordSizeOffset}
};

epicsShareExtern dset *pvar_dset_devY;

static const char * const deviceSupportNames[] = {
    "devY"
};

static const dset * const devsl[] = {
    pvar_dset_devY
};

int scanIoTest_registerRecordDeviceDriver(DBBASE *pbase)
{
    static int executed = 0;
    const char *bldTop = "/home/fphysics/whitegr/facet-sw/epics/base";
    const char *envTop = getenv("TOP");

    if (envTop && strcmp(envTop, bldTop)) {
        printf("Warning: IOC is booting with TOP = \"%s\"\n"
               "          but was built with TOP = \"%s\"\n",
               envTop, bldTop);
    }

    if (!pbase) {
        printf("pdbbase is NULL; you must load a DBD file first.\n");
        return -1;
    }

    if (executed) {
        printf("Warning: Registration already done.\n");
    }
    executed = 1;

    registerRecordTypes(pbase, NELEMENTS(rtl), recordTypeNames, rtl);
    registerDevices(pbase, NELEMENTS(devsl), deviceSupportNames, devsl);
    return 0;
}

/* scanIoTest_registerRecordDeviceDriver */
static const iocshArg rrddArg0 = {"pdbbase", iocshArgPdbbase};
static const iocshArg *rrddArgs[] = {&rrddArg0};
static const iocshFuncDef rrddFuncDef =
    {"scanIoTest_registerRecordDeviceDriver", 1, rrddArgs};
static void rrddCallFunc(const iocshArgBuf *)
{
    scanIoTest_registerRecordDeviceDriver(*iocshPpdbbase);
}

} // extern "C"

/*
 * Register commands on application startup
 */
static int Registration() {
    iocshRegisterCommon();
    iocshRegister(&rrddFuncDef, rrddCallFunc);
    return 0;
}

static int done EPICS_UNUSED = Registration();
