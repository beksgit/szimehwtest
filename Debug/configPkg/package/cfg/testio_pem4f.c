/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-y44
 */

#define __nested__
#define __config__

#include <xdc/std.h>

/*
 * ======== GENERATED SECTIONS ========
 *     
 *     MODULE INCLUDES
 *     
 *     <module-name> INTERNALS
 *     <module-name> INHERITS
 *     <module-name> VTABLE
 *     <module-name> PATCH TABLE
 *     <module-name> DECLARATIONS
 *     <module-name> OBJECT OFFSETS
 *     <module-name> TEMPLATES
 *     <module-name> INITIALIZERS
 *     <module-name> FUNCTION STUBS
 *     <module-name> PROXY BODY
 *     <module-name> OBJECT DESCRIPTOR
 *     <module-name> SYSTEM FUNCTIONS
 *     <module-name> PRAGMAS
 *     
 *     INITIALIZATION ENTRY POINT
 *     PROGRAM GLOBALS
 *     CLINK DIRECTIVES
 */


/*
 * ======== MODULE INCLUDES ========
 */

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/arm/lm3/Timer.h>
#include <ti/sysbios/family/arm/lm3/TimestampProvider.h>
#include <ti/sysbios/family/arm/m3/Hwi.h>
#include <ti/sysbios/family/arm/m3/IntrinsicsSupport.h>
#include <ti/sysbios/family/arm/m3/TaskSupport.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/gates/GateMutex.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/hal/Timer.h>
#include <ti/sysbios/heaps/HeapMem.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Event.h>
#include <ti/sysbios/knl/Idle.h>
#include <ti/sysbios/knl/Intrinsics.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/utils/Load.h>
#include <ti/uia/events/DvtTypes.h>
#include <ti/uia/events/UIABenchmark.h>
#include <ti/uia/events/UIAErr.h>
#include <ti/uia/events/UIAEvt.h>
#include <ti/uia/events/UIARoundtrip.h>
#include <ti/uia/events/UIAStatistic.h>
#include <ti/uia/events/UIASync.h>
#include <ti/uia/runtime/LogSync.h>
#include <ti/uia/runtime/LoggerStopMode.h>
#include <ti/uia/runtime/QueueDescriptor.h>
#include <ti/uia/runtime/UIAMetaData.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Core.h>
#include <xdc/runtime/Defaults.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/SysMin.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Timestamp.h>
#include <xdc/runtime/TimestampNull.h>
#include <xdc/runtime/Types.h>


/*
 * ======== ti.sysbios.BIOS INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_BIOS_RtsGateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_BIOS_RtsGateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_BIOS_RtsGateProxy_Module__ ti_sysbios_BIOS_RtsGateProxy_Module__root__V;

/* @@@ ti_sysbios_knl_Queue_Object__ */
typedef struct ti_sysbios_knl_Queue_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
} ti_sysbios_knl_Queue_Object__;

/* @@@ ti_sysbios_knl_Queue_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Queue_Object__ obj;
} ti_sysbios_knl_Queue_Object2__;

/* @@@ ti_sysbios_knl_Semaphore_Object__ */
typedef struct ti_sysbios_knl_Semaphore_Object__ {
    ti_sysbios_knl_Event_Handle event;
    xdc_UInt eventId;
    ti_sysbios_knl_Semaphore_Mode mode;
    volatile xdc_UInt16 count;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Semaphore_Object__;

/* @@@ ti_sysbios_knl_Semaphore_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Semaphore_Object__ obj;
} ti_sysbios_knl_Semaphore_Object2__;

/* Object__ */
typedef struct ti_sysbios_gates_GateMutex_Object__ {
    const ti_sysbios_gates_GateMutex_Fxns__* __fxns;
    ti_sysbios_knl_Task_Handle owner;
    ti_sysbios_knl_Semaphore_Object__ Object_field_sem;
} ti_sysbios_gates_GateMutex_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateMutex_Object__ obj;
} ti_sysbios_gates_GateMutex_Object2__;

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_BIOS_RtsGateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_BIOS_RtsGateProxy_Object__ obj;
} ti_sysbios_BIOS_RtsGateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_BIOS_RtsGateProxy___VERS
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.lm3.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_lm3_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_lm3_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_lm3_Timer_Module__ ti_sysbios_family_arm_lm3_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_lm3_Timer_Object__ {
    const ti_sysbios_family_arm_lm3_Timer_Fxns__* __fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    ti_sysbios_family_arm_lm3_Timer_RunMode runMode;
    ti_sysbios_family_arm_lm3_Timer_StartMode startMode;
    xdc_UInt period;
    ti_sysbios_family_arm_lm3_Timer_PeriodType periodType;
    xdc_UInt intNum;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz extFreq;
    ti_sysbios_family_arm_m3_Hwi_Handle hwi;
} ti_sysbios_family_arm_lm3_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_lm3_Timer_Object__ obj;
} ti_sysbios_family_arm_lm3_Timer_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_arm_lm3_Timer___VERS
    #define ti_sysbios_family_arm_lm3_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_arm_lm3_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.lm3.TimestampProvider INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_m3_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Object__ {
    const ti_sysbios_family_arm_m3_Hwi_Fxns__* __fxns;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr fxn;
    xdc_Int intNum;
    ti_sysbios_family_arm_m3_Hwi_Irp irp;
    __TA_ti_sysbios_family_arm_m3_Hwi_Instance_State__hookEnv hookEnv;
} ti_sysbios_family_arm_m3_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_m3_Hwi_Object__ obj;
} ti_sysbios_family_arm_m3_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_arm_m3_Hwi___VERS
    #define ti_sysbios_family_arm_m3_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_arm_m3_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateHwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateHwi_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_gates_GateHwi_Object__ {
    const ti_sysbios_gates_GateHwi_Fxns__* __fxns;
} ti_sysbios_gates_GateHwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateHwi_Object__ obj;
} ti_sysbios_gates_GateHwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateHwi___VERS
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.gates.GateMutex INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateMutex_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateMutex_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateMutex___VERS
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Hwi_Object__ {
    const ti_sysbios_hal_Hwi_Fxns__* __fxns;
    ti_sysbios_hal_Hwi_HwiProxy_Handle pi;
} ti_sysbios_hal_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_Object__ obj;
} ti_sysbios_hal_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi___VERS
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_HwiProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_HwiProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_HwiProxy_Module__ ti_sysbios_hal_Hwi_HwiProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_m3_Hwi_Object */

/* Object */
typedef ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_HwiProxy_Object__ obj;
} ti_sysbios_hal_Hwi_HwiProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi_HwiProxy___VERS
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Timer_Module__ ti_sysbios_hal_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Timer_Object__ {
    const ti_sysbios_hal_Timer_Fxns__* __fxns;
    ti_sysbios_hal_Timer_TimerProxy_Handle pi;
} ti_sysbios_hal_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Timer_Object__ obj;
} ti_sysbios_hal_Timer_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Timer___VERS
    #define ti_sysbios_hal_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Timer_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Timer_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Timer_TimerProxy_Module__ ti_sysbios_hal_Timer_TimerProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_lm3_Timer_Object */

/* Object */
typedef ti_sysbios_family_arm_lm3_Timer_Object__ ti_sysbios_hal_Timer_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Timer_TimerProxy_Object__ obj;
} ti_sysbios_hal_Timer_TimerProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Timer_TimerProxy___VERS
    #define ti_sysbios_hal_Timer_TimerProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Timer_TimerProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_heaps_HeapMem_Object__ {
    const ti_sysbios_heaps_HeapMem_Fxns__* __fxns;
    xdc_runtime_Memory_Size align;
    __TA_ti_sysbios_heaps_HeapMem_Instance_State__buf buf;
    ti_sysbios_heaps_HeapMem_Header head;
} ti_sysbios_heaps_HeapMem_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Object__ obj;
} ti_sysbios_heaps_HeapMem_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem___VERS
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__ obj;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy___VERS
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Clock INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Clock_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
    xdc_UInt32 timeout;
    xdc_UInt32 currTimeout;
    xdc_UInt32 period;
    volatile xdc_Bool active;
    ti_sysbios_knl_Clock_FuncPtr fxn;
    xdc_UArg arg;
} ti_sysbios_knl_Clock_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_Object__ obj;
} ti_sysbios_knl_Clock_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Clock___VERS
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Event INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Event_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} ti_sysbios_knl_Event_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Event_Object__ {
    volatile xdc_UInt postedEvents;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Event_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Event_Object__ obj;
} ti_sysbios_knl_Event_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Event___VERS
    #define ti_sysbios_knl_Event___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Event___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Idle INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Queue_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Queue_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Queue___VERS
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Semaphore INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Semaphore_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} ti_sysbios_knl_Semaphore_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V;

/* <-- ti_sysbios_knl_Semaphore_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Semaphore___VERS
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Swi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Swi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Swi_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_knl_Swi_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Swi_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt mask;
    xdc_Bool posted;
    xdc_UInt initTrigger;
    xdc_UInt trigger;
    ti_sysbios_knl_Queue_Handle readyQ;
    __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv hookEnv;
} ti_sysbios_knl_Swi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Swi_Object__ obj;
} ti_sysbios_knl_Swi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Swi___VERS
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Task_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} ti_sysbios_knl_Task_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Task_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    volatile xdc_Int priority;
    xdc_UInt mask;
    xdc_Ptr context;
    ti_sysbios_knl_Task_Mode mode;
    ti_sysbios_knl_Task_PendElem* pendElem;
    xdc_SizeT stackSize;
    __TA_ti_sysbios_knl_Task_Instance_State__stack stack;
    xdc_runtime_IHeap_Handle stackHeap;
    ti_sysbios_knl_Task_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_Ptr env;
    __TA_ti_sysbios_knl_Task_Instance_State__hookEnv hookEnv;
    xdc_Bool vitalTaskFlag;
    ti_sysbios_knl_Queue_Handle readyQ;
    xdc_runtime_Types_CordAddr __name;
} ti_sysbios_knl_Task_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Task_Object__ obj;
} ti_sysbios_knl_Task_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Task___VERS
    #define ti_sysbios_knl_Task___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Task___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.utils.Load INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_utils_Load_Module__ {
    xdc_runtime_Types_DiagsMask mask;
} ti_sysbios_utils_Load_Module__;

/* Module__root__V */
extern ti_sysbios_utils_Load_Module__ ti_sysbios_utils_Load_Module__root__V;


/*
 * ======== ti.uia.events.DvtTypes INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIABenchmark INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIAErr INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIAEvt INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIARoundtrip INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIAStatistic INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIASync INTERNALS ========
 */


/*
 * ======== ti.uia.runtime.LogSync INTERNALS ========
 */

/* Module__ */
typedef struct ti_uia_runtime_LogSync_Module__ {
    xdc_runtime_Types_Link link;
} ti_uia_runtime_LogSync_Module__;

/* Module__root__V */
extern ti_uia_runtime_LogSync_Module__ ti_uia_runtime_LogSync_Module__root__V;

/* Object__ */
typedef struct ti_uia_runtime_LogSync_Object__ {
    const ti_uia_runtime_LogSync_Fxns__* __fxns;
} ti_uia_runtime_LogSync_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_uia_runtime_LogSync_Object__ obj;
} ti_uia_runtime_LogSync_Object2__;

/* __ParamsPtr */
#ifdef ti_uia_runtime_LogSync___VERS
    #define ti_uia_runtime_LogSync___ParamsPtr xdc_UChar*
#else
    #define ti_uia_runtime_LogSync___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.uia.runtime.LogSync_CpuTimestampProxy INTERNALS ========
 */


/*
 * ======== ti.uia.runtime.LogSync_GlobalTimestampProxy INTERNALS ========
 */


/*
 * ======== ti.uia.runtime.LoggerStopMode INTERNALS ========
 */

/* Module__ */
typedef struct ti_uia_runtime_LoggerStopMode_Module__ {
    xdc_runtime_Types_Link link;
} ti_uia_runtime_LoggerStopMode_Module__;

/* Module__root__V */
extern ti_uia_runtime_LoggerStopMode_Module__ ti_uia_runtime_LoggerStopMode_Module__root__V;

/* Object__ */
typedef struct ti_uia_runtime_LoggerStopMode_Object__ {
    const ti_uia_runtime_LoggerStopMode_Fxns__* __fxns;
    ti_uia_runtime_QueueDescriptor_Header hdr;
    xdc_runtime_IHeap_Handle bufHeap;
    xdc_SizeT maxEventSizeInBits32;
    xdc_Bits16 serial;
    ti_uia_runtime_IUIATransfer_TransferType transferType;
    xdc_Bool enabled;
    xdc_Bool flush;
    xdc_Int droppedEvents;
    xdc_Ptr queueStartAdrs;
    xdc_SizeT queueSizeInMAUs;
    xdc_Ptr endOfBufferAdrsPlus1;
    __TA_ti_uia_runtime_LoggerStopMode_Instance_State__bufferArray bufferArray;
    xdc_Int numCores;
} ti_uia_runtime_LoggerStopMode_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_uia_runtime_LoggerStopMode_Object__ obj;
} ti_uia_runtime_LoggerStopMode_Object2__;

/* __ParamsPtr */
#ifdef ti_uia_runtime_LoggerStopMode___VERS
    #define ti_uia_runtime_LoggerStopMode___ParamsPtr xdc_UChar*
#else
    #define ti_uia_runtime_LoggerStopMode___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.uia.runtime.QueueDescriptor INTERNALS ========
 */


/*
 * ======== ti.uia.runtime.UIAMetaData INTERNALS ========
 */


/*
 * ======== xdc.runtime.Assert INTERNALS ========
 */


/*
 * ======== xdc.runtime.Core INTERNALS ========
 */


/*
 * ======== xdc.runtime.Defaults INTERNALS ========
 */


/*
 * ======== xdc.runtime.Diags INTERNALS ========
 */


/*
 * ======== xdc.runtime.Error INTERNALS ========
 */


/*
 * ======== xdc.runtime.Gate INTERNALS ========
 */


/*
 * ======== xdc.runtime.Log INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module__ {
    xdc_runtime_Types_DiagsMask mask;
} xdc_runtime_Main_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module__ xdc_runtime_Main_Module__root__V;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Main_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module_GateProxy_Module__ xdc_runtime_Main_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_Main_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Main_Module_GateProxy_Object__ obj;
} xdc_runtime_Main_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Main_Module_GateProxy___VERS
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Memory INTERNALS ========
 */


/*
 * ======== xdc.runtime.Memory_HeapProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Memory_HeapProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Memory_HeapProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Memory_HeapProxy_Module__ xdc_runtime_Memory_HeapProxy_Module__root__V;

/* <-- ti_sysbios_heaps_HeapMem_Object */

/* Object */
typedef ti_sysbios_heaps_HeapMem_Object__ xdc_runtime_Memory_HeapProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Memory_HeapProxy_Object__ obj;
} xdc_runtime_Memory_HeapProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Memory_HeapProxy___VERS
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Registry INTERNALS ========
 */


/*
 * ======== xdc.runtime.Startup INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysMin INTERNALS ========
 */


/*
 * ======== xdc.runtime.System INTERNALS ========
 */


/*
 * ======== xdc.runtime.System_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_System_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_System_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_System_Module_GateProxy_Module__ xdc_runtime_System_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_System_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_System_Module_GateProxy_Object__ obj;
} xdc_runtime_System_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_System_Module_GateProxy___VERS
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.System_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Text INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp INTERNALS ========
 */


/*
 * ======== xdc.runtime.TimestampNull INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Types INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C = {0};
__FAR__ const xdc_runtime_Types_Base ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.gates.GateHwi INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.gates.GateMutex INHERITS ========
 */



/*
 * ======== ti.sysbios.heaps.HeapMem INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.uia.events.UIABenchmark INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base ti_uia_events_IUIAEvent_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.uia.events.UIAErr INHERITS ========
 */



/*
 * ======== ti.uia.events.UIAEvt INHERITS ========
 */



/*
 * ======== ti.uia.events.UIARoundtrip INHERITS ========
 */



/*
 * ======== ti.uia.events.UIAStatistic INHERITS ========
 */



/*
 * ======== ti.uia.events.UIASync INHERITS ========
 */



/*
 * ======== ti.uia.runtime.LogSync INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base ti_uia_events_IUIAMetaProvider_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};
__FAR__ const xdc_runtime_Types_Base ti_uia_runtime_IUIATraceSyncClient_Interface__BASE__C = {(void*)&ti_uia_events_IUIAMetaProvider_Interface__BASE__C};


/*
 * ======== ti.uia.runtime.LoggerStopMode INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_ILogger_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IFilterLogger_Interface__BASE__C = {(void*)&xdc_runtime_ILogger_Interface__BASE__C};
__FAR__ const xdc_runtime_Types_Base ti_uia_runtime_IUIATransfer_Interface__BASE__C = {(void*)&xdc_runtime_IFilterLogger_Interface__BASE__C};
__FAR__ const xdc_runtime_Types_Base ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C = {(void*)&ti_uia_runtime_IUIATransfer_Interface__BASE__C};


/*
 * ======== xdc.runtime.SysMin INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== xdc.runtime.Timestamp INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_ITimestampClient_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== xdc.runtime.TimestampNull INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_ITimestampProvider_Interface__BASE__C = {(void*)&xdc_runtime_ITimestampClient_Interface__BASE__C};


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_family_arm_m3_IntrinsicsSupport_Fxns__ ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C = {
    (void*)&ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, /* base__ */
    &ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8025, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateHwi VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_gates_GateHwi_Fxns__ ti_sysbios_gates_GateHwi_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* base__ */
    &ti_sysbios_gates_GateHwi_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateHwi_query__E,
    ti_sysbios_gates_GateHwi_enter__E,
    ti_sysbios_gates_GateHwi_leave__E,
    {
        ti_sysbios_gates_GateHwi_Object__create__S,
        ti_sysbios_gates_GateHwi_Object__delete__S,
        ti_sysbios_gates_GateHwi_Handle__label__S,
        0x802d, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateMutex VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_gates_GateMutex_Fxns__ ti_sysbios_gates_GateMutex_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* base__ */
    &ti_sysbios_gates_GateMutex_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateMutex_query__E,
    ti_sysbios_gates_GateMutex_enter__E,
    ti_sysbios_gates_GateMutex_leave__E,
    {
        ti_sysbios_gates_GateMutex_Object__create__S,
        ti_sysbios_gates_GateMutex_Object__delete__S,
        ti_sysbios_gates_GateMutex_Handle__label__S,
        0x802e, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.heaps.HeapMem VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_heaps_HeapMem_Fxns__ ti_sysbios_heaps_HeapMem_Module__FXNS__C = {
    (void*)&xdc_runtime_IHeap_Interface__BASE__C, /* base__ */
    &ti_sysbios_heaps_HeapMem_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_heaps_HeapMem_alloc__E,
    ti_sysbios_heaps_HeapMem_free__E,
    ti_sysbios_heaps_HeapMem_isBlocking__E,
    ti_sysbios_heaps_HeapMem_getStats__E,
    {
        ti_sysbios_heaps_HeapMem_Object__create__S,
        ti_sysbios_heaps_HeapMem_Object__delete__S,
        ti_sysbios_heaps_HeapMem_Handle__label__S,
        0x802b, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIABenchmark VTABLE ========
 */

/* Module__FXNS__C */
const ti_uia_events_UIABenchmark_Fxns__ ti_uia_events_UIABenchmark_Module__FXNS__C = {
    (void*)&ti_uia_events_IUIAEvent_Interface__BASE__C, /* base__ */
    &ti_uia_events_UIABenchmark_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8034, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIAErr VTABLE ========
 */

/* Module__FXNS__C */
const ti_uia_events_UIAErr_Fxns__ ti_uia_events_UIAErr_Module__FXNS__C = {
    (void*)&ti_uia_events_IUIAEvent_Interface__BASE__C, /* base__ */
    &ti_uia_events_UIAErr_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8035, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIAEvt VTABLE ========
 */

/* Module__FXNS__C */
const ti_uia_events_UIAEvt_Fxns__ ti_uia_events_UIAEvt_Module__FXNS__C = {
    (void*)&ti_uia_events_IUIAEvent_Interface__BASE__C, /* base__ */
    &ti_uia_events_UIAEvt_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8036, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIARoundtrip VTABLE ========
 */

/* Module__FXNS__C */
const ti_uia_events_UIARoundtrip_Fxns__ ti_uia_events_UIARoundtrip_Module__FXNS__C = {
    (void*)&ti_uia_events_IUIAEvent_Interface__BASE__C, /* base__ */
    &ti_uia_events_UIARoundtrip_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8037, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIAStatistic VTABLE ========
 */

/* Module__FXNS__C */
const ti_uia_events_UIAStatistic_Fxns__ ti_uia_events_UIAStatistic_Module__FXNS__C = {
    (void*)&ti_uia_events_IUIAEvent_Interface__BASE__C, /* base__ */
    &ti_uia_events_UIAStatistic_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8038, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIASync VTABLE ========
 */

/* Module__FXNS__C */
const ti_uia_events_UIASync_Fxns__ ti_uia_events_UIASync_Module__FXNS__C = {
    (void*)&ti_uia_events_IUIAEvent_Interface__BASE__C, /* base__ */
    &ti_uia_events_UIASync_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8039, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.runtime.LogSync VTABLE ========
 */

/* Module__FXNS__C */
const ti_uia_runtime_LogSync_Fxns__ ti_uia_runtime_LogSync_Module__FXNS__C = {
    (void*)&ti_uia_runtime_IUIATraceSyncClient_Interface__BASE__C, /* base__ */
    &ti_uia_runtime_LogSync_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        ti_uia_runtime_LogSync_Object__delete__S,
        ti_uia_runtime_LogSync_Handle__label__S,
        0x803b, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.runtime.LoggerStopMode VTABLE ========
 */

/* Module__FXNS__C */
const ti_uia_runtime_LoggerStopMode_Fxns__ ti_uia_runtime_LoggerStopMode_Module__FXNS__C = {
    (void*)&ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C, /* base__ */
    &ti_uia_runtime_LoggerStopMode_Module__FXNS__C.__sfxns, /* __sysp */
    ti_uia_runtime_LoggerStopMode_enable__E,
    ti_uia_runtime_LoggerStopMode_disable__E,
    ti_uia_runtime_LoggerStopMode_write0__E,
    ti_uia_runtime_LoggerStopMode_write1__E,
    ti_uia_runtime_LoggerStopMode_write2__E,
    ti_uia_runtime_LoggerStopMode_write4__E,
    ti_uia_runtime_LoggerStopMode_write8__E,
    ti_uia_runtime_LoggerStopMode_setFilterLevel__E,
    ti_uia_runtime_LoggerStopMode_getFilterLevel__E,
    ti_uia_runtime_LoggerStopMode_getTransferType__E,
    ti_uia_runtime_LoggerStopMode_getContents__E,
    ti_uia_runtime_LoggerStopMode_isEmpty__E,
    ti_uia_runtime_LoggerStopMode_getMaxLength__E,
    ti_uia_runtime_LoggerStopMode_getInstanceId__E,
    ti_uia_runtime_LoggerStopMode_getPriority__E,
    ti_uia_runtime_LoggerStopMode_setPriority__E,
    ti_uia_runtime_LoggerStopMode_reset__E,
    ti_uia_runtime_LoggerStopMode_writeMemoryRange__E,
    {
        ti_uia_runtime_LoggerStopMode_Object__create__S,
        ti_uia_runtime_LoggerStopMode_Object__delete__S,
        ti_uia_runtime_LoggerStopMode_Handle__label__S,
        0x803c, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.SysMin VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_SysMin_Fxns__ xdc_runtime_SysMin_Module__FXNS__C = {
    (void*)&xdc_runtime_ISystemSupport_Interface__BASE__C, /* base__ */
    &xdc_runtime_SysMin_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysMin_abort__E,
    xdc_runtime_SysMin_exit__E,
    xdc_runtime_SysMin_flush__E,
    xdc_runtime_SysMin_putch__E,
    xdc_runtime_SysMin_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x800e, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.Timestamp VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_Timestamp_Fxns__ xdc_runtime_Timestamp_Module__FXNS__C = {
    (void*)&xdc_runtime_ITimestampClient_Interface__BASE__C, /* base__ */
    &xdc_runtime_Timestamp_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_Timestamp_get32__E,
    xdc_runtime_Timestamp_get64__E,
    xdc_runtime_Timestamp_getFreq__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8010, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.TimestampNull VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_TimestampNull_Fxns__ xdc_runtime_TimestampNull_Module__FXNS__C = {
    (void*)&xdc_runtime_ITimestampProvider_Interface__BASE__C, /* base__ */
    &xdc_runtime_TimestampNull_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_TimestampNull_get32__E,
    xdc_runtime_TimestampNull_get64__E,
    xdc_runtime_TimestampNull_getFreq__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8011, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.BIOS DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_BIOS_Module_State__ {
    xdc_runtime_Types_FreqHz cpuFreq;
    xdc_UInt rtsGateCount;
    xdc_IArg rtsGateKey;
    ti_sysbios_BIOS_RtsGateProxy_Handle rtsGate;
    ti_sysbios_BIOS_ThreadType threadType;
    ti_sysbios_BIOS_StartFuncPtr startFunc;
} ti_sysbios_BIOS_Module_State__;

/* --> ti_sysbios_BIOS_startFunc */
extern xdc_Void ti_sysbios_BIOS_startFunc(xdc_Void);

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V;


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.lm3.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_lm3_Timer_Object__ ti_sysbios_family_arm_lm3_Timer_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_lm3_Timer_Module_State__ {
    xdc_UInt availMask;
    __TA_ti_sysbios_family_arm_lm3_Timer_Module_State__device device;
    __TA_ti_sysbios_family_arm_lm3_Timer_Module_State__handles handles;
} ti_sysbios_family_arm_lm3_Timer_Module_State__;

/* --> ti_sysbios_family_arm_lm3_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_arm_lm3_Timer_Module_State__device ti_sysbios_family_arm_lm3_Timer_Module_State_0_device__A[4];

/* --> ti_sysbios_family_arm_lm3_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_arm_lm3_Timer_Module_State__handles ti_sysbios_family_arm_lm3_Timer_Module_State_0_handles__A[4];

/* Module__state__V */
ti_sysbios_family_arm_lm3_Timer_Module_State__ ti_sysbios_family_arm_lm3_Timer_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.lm3.TimestampProvider DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_lm3_TimestampProvider_Module_State__ {
    ti_sysbios_family_arm_lm3_Timer_Handle timer;
    volatile xdc_UInt32 hi;
} ti_sysbios_family_arm_lm3_TimestampProvider_Module_State__;

/* Module__state__V */
ti_sysbios_family_arm_lm3_TimestampProvider_Module_State__ ti_sysbios_family_arm_lm3_TimestampProvider_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.m3.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module_State__ {
    xdc_Bits16 enables;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__iser iser;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__priorities priorities;
    xdc_Char* taskSP;
    xdc_Bool excActive;
    ti_sysbios_family_arm_m3_Hwi_ExcContext* excContext;
    xdc_Ptr excStack;
    xdc_Ptr isrStack;
    xdc_Ptr isrStackBase;
    xdc_SizeT isrStackSize;
    xdc_Ptr vectorTableBase;
    xdc_UInt swiTaskKeys;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__dispatchTable dispatchTable;
} ti_sysbios_family_arm_m3_Hwi_Module_State__;

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_priorities__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__priorities ti_sysbios_family_arm_m3_Hwi_Module_State_0_priorities__A[213];

/* --> __TI_STACK_BASE */
extern void* __TI_STACK_BASE;

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_dispatchTable__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__dispatchTable ti_sysbios_family_arm_m3_Hwi_Module_State_0_dispatchTable__A[213];

/* Module__state__V */
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V;

/* --> ti_sysbios_knl_Swi_disable__E */
extern xdc_UInt ti_sysbios_knl_Swi_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Swi_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Swi_restoreHwi__E(xdc_UInt);

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Task_restoreHwi__E(xdc_UInt);


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1];


/*
 * ======== ti.sysbios.gates.GateMutex DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2];


/*
 * ======== ti.sysbios.hal.Hwi DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_hal_Timer_Object__ ti_sysbios_hal_Timer_Object__table__V[1];


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem DECLARATIONS ========
 */

#ifdef __ICC430__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A, 8);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1];


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Clock DECLARATIONS ========
 */

/* --> GPIOTicker */
extern xdc_Void GPIOTicker(xdc_UArg);

/* Object__table__V */
ti_sysbios_knl_Clock_Object__ ti_sysbios_knl_Clock_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Clock_Module_State__ {
    volatile xdc_UInt32 ticks;
    xdc_UInt swiCount;
    ti_sysbios_hal_Timer_Handle timer;
    xdc_Void (*doTickFunc)(xdc_UArg);
    ti_sysbios_knl_Swi_Handle swi;
    xdc_UInt32 periodCounts;
    volatile xdc_UInt numTickSkip;
    xdc_UInt skipsWorkFunc;
    xdc_Bool inWorkFunc;
    ti_sysbios_knl_Queue_Object__ Object_field_clockQ;
} ti_sysbios_knl_Clock_Module_State__;

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V;


/*
 * ======== ti.sysbios.knl.Event DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Idle DECLARATIONS ========
 */

/* --> ti_sysbios_hal_Hwi_checkStack */
extern xdc_Void ti_sysbios_hal_Hwi_checkStack(xdc_Void);

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[2];


/*
 * ======== ti.sysbios.knl.Intrinsics DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Queue DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Semaphore DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Swi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Swi_Module_State__ {
    xdc_Bool locked;
    xdc_UInt curSet;
    xdc_UInt curTrigger;
    ti_sysbios_knl_Swi_Handle curSwi;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Swi_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Swi_Module_State__constructedSwis constructedSwis;
} ti_sysbios_knl_Swi_Module_State__;

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16];

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V;

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restore__E */
extern xdc_Void ti_sysbios_knl_Task_restore__E(xdc_UInt);


/*
 * ======== ti.sysbios.knl.Task DECLARATIONS ========
 */

#ifdef __ICC430__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_0_stack__A, ".bss:taskStackSection");
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_0_stack__A, 8);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048] __attribute__ ((aligned(8)));
#endif
#endif

/* --> UartTask */
extern xdc_Void UartTask(xdc_UArg,xdc_UArg);

/* --> ti_sysbios_knl_Task_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_0_hookEnv__A[2];
#ifdef __ICC430__
    #pragma data_alignment=8
#endif

/* --> ti_sysbios_knl_Task_Instance_State_1_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_1_stack__A, ".bss:taskStackSection");
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_1_stack__A, 8);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048] __attribute__ ((aligned(8)));
#endif
#endif

/* --> ti_sysbios_knl_Task_Instance_State_1_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_1_hookEnv__A[2];

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_knl_Task_Module_State__ {
    xdc_Bool locked;
    volatile xdc_UInt curSet;
    xdc_Bool workFlag;
    xdc_UInt vitalTasks;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Task_Module_State__readyQ readyQ;
    ti_sysbios_knl_Task_Handle idleTask;
    __TA_ti_sysbios_knl_Task_Module_State__constructedTasks constructedTasks;
    ti_sysbios_knl_Queue_Object__ Object_field_inactiveQ;
    ti_sysbios_knl_Queue_Object__ Object_field_terminatedQ;
} ti_sysbios_knl_Task_Module_State__;

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16];

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V;

/* --> ti_sysbios_knl_Task_checkStacks */
extern xdc_Void ti_sysbios_knl_Task_checkStacks(ti_sysbios_knl_Task_Handle,ti_sysbios_knl_Task_Handle);

/* --> ti_sysbios_utils_Load_taskRegHook__E */
extern xdc_Void ti_sysbios_utils_Load_taskRegHook__E(xdc_Int);

/* --> ti_sysbios_knl_Task_hooks__A */
const __T1_ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__A[2];


/*
 * ======== ti.sysbios.knl.Task_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.utils.Load DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_utils_Load_Module_State__ {
    xdc_Int taskHId;
    xdc_UInt32 taskStartTime;
    xdc_UInt32 timeElapsed;
    ti_sysbios_knl_Task_Handle runningTask;
    xdc_Bool firstSwitchDone;
    xdc_UInt32 swiStartTime;
    ti_sysbios_utils_Load_HookContext swiEnv;
    xdc_UInt32 swiCnt;
    xdc_UInt32 hwiStartTime;
    ti_sysbios_utils_Load_HookContext hwiEnv;
    xdc_UInt32 hwiCnt;
    xdc_UInt32 timeSlotCnt;
    xdc_UInt32 minLoop;
    xdc_UInt32 minIdle;
    xdc_UInt32 t0;
    xdc_UInt32 idleCnt;
    xdc_UInt32 cpuLoad;
    ti_sysbios_knl_Queue_Object__ Object_field_taskList;
    ti_sysbios_gates_GateMutex_Object__ Object_field_gate;
} ti_sysbios_utils_Load_Module_State__;

/* Module__state__V */
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V;


/*
 * ======== ti.uia.events.DvtTypes DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIABenchmark DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIAErr DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIAEvt DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIARoundtrip DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIAStatistic DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIASync DECLARATIONS ========
 */


/*
 * ======== ti.uia.runtime.LogSync DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_uia_runtime_LogSync_Module_State__ {
    xdc_UInt32 numTimesHalted;
    xdc_UInt32 serialNumber;
    xdc_Bool isEnabled;
} ti_uia_runtime_LogSync_Module_State__;

/* Module__state__V */
ti_uia_runtime_LogSync_Module_State__ ti_uia_runtime_LogSync_Module__state__V;


/*
 * ======== ti.uia.runtime.LogSync_CpuTimestampProxy DECLARATIONS ========
 */


/*
 * ======== ti.uia.runtime.LogSync_GlobalTimestampProxy DECLARATIONS ========
 */


/*
 * ======== ti.uia.runtime.LoggerStopMode DECLARATIONS ========
 */

/* --> ti_uia_runtime_LoggerStopMode_Instance_State_0_bufferArray__A */
__T1_ti_uia_runtime_LoggerStopMode_Instance_State__bufferArray ti_uia_runtime_LoggerStopMode_Instance_State_0_bufferArray__A[640];

/* --> ti_uia_runtime_LoggerStopMode_Instance_State_1_bufferArray__A */
__T1_ti_uia_runtime_LoggerStopMode_Instance_State__bufferArray ti_uia_runtime_LoggerStopMode_Instance_State_1_bufferArray__A[1152];

/* --> ti_uia_runtime_LoggerStopMode_Instance_State_2_bufferArray__A */
__T1_ti_uia_runtime_LoggerStopMode_Instance_State__bufferArray ti_uia_runtime_LoggerStopMode_Instance_State_2_bufferArray__A[1152];

/* Object__table__V */
ti_uia_runtime_LoggerStopMode_Object__ ti_uia_runtime_LoggerStopMode_Object__table__V[3];

/* Module_State__ */
typedef struct ti_uia_runtime_LoggerStopMode_Module_State__ {
    xdc_runtime_Diags_Mask level1;
    xdc_runtime_Diags_Mask level2;
    xdc_runtime_Diags_Mask level3;
    xdc_runtime_Types_ModuleId moduleIdToRouteToStatusLogger;
} ti_uia_runtime_LoggerStopMode_Module_State__;

/* Module__state__V */
ti_uia_runtime_LoggerStopMode_Module_State__ ti_uia_runtime_LoggerStopMode_Module__state__V;


/*
 * ======== ti.uia.runtime.QueueDescriptor DECLARATIONS ========
 */


/*
 * ======== ti.uia.runtime.UIAMetaData DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Assert DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Core DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Defaults DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Diags DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Error DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Error_Module_State__ {
    xdc_UInt16 count;
} xdc_runtime_Error_Module_State__;

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V;


/*
 * ======== xdc.runtime.Gate DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Log DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Memory DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Memory_Module_State__ {
    xdc_SizeT maxDefaultTypeAlign;
} xdc_runtime_Memory_Module_State__;

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V;


/*
 * ======== xdc.runtime.Memory_HeapProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Registry DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Registry_Module_State__ {
    xdc_runtime_Registry_Desc* listHead;
    xdc_runtime_Types_ModuleId curId;
} xdc_runtime_Registry_Module_State__;

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V;


/*
 * ======== xdc.runtime.Startup DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Startup_Module_State__ {
    xdc_Int* stateTab;
    xdc_Bool execFlag;
    xdc_Bool rtsDoneFlag;
} xdc_runtime_Startup_Module_State__;

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V;

/* --> ti_sysbios_hal_Hwi_initStack */
extern xdc_Void ti_sysbios_hal_Hwi_initStack(xdc_Void);

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[4];

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[2];

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int);

/* --> xdc_runtime_SysMin_Module_startup__E */
extern xdc_Int xdc_runtime_SysMin_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Timer_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Clock_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Clock_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Swi_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Swi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Task_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Task_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_m3_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_m3_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_lm3_TimestampProvider_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_lm3_TimestampProvider_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_lm3_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_lm3_Timer_Module_startup__E(xdc_Int);

/* --> ti_uia_runtime_LogSync_Module_startup__E */
extern xdc_Int ti_uia_runtime_LogSync_Module_startup__E(xdc_Int);

/* --> ti_uia_runtime_LoggerStopMode_Module_startup__E */
extern xdc_Int ti_uia_runtime_LoggerStopMode_Module_startup__E(xdc_Int);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[12];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[12];


/*
 * ======== xdc.runtime.SysMin DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_SysMin_Module_State__ {
    __TA_xdc_runtime_SysMin_Module_State__outbuf outbuf;
    xdc_UInt outidx;
    xdc_Bool wrapped;
} xdc_runtime_SysMin_Module_State__;

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[1024];

/* Module__state__V */
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V;

/* --> xdc_runtime_SysMin_output__I */
extern xdc_Void xdc_runtime_SysMin_output__I(xdc_Char*,xdc_UInt);


/*
 * ======== xdc.runtime.System DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_System_Module_State__ {
    __TA_xdc_runtime_System_Module_State__atexitHandlers atexitHandlers;
    xdc_Int numAtexitHandlers;
    xdc_Int exitStatus;
} xdc_runtime_System_Module_State__;

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[8];

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V;

/* --> xdc_runtime_System_printfExtend__I */
extern xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char**,xdc_Char**,xdc_VaList*,xdc_runtime_System_ParseData*);


/*
 * ======== xdc.runtime.System_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Text DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Text_Module_State__ {
    xdc_Ptr charBase;
    xdc_Ptr nodeBase;
} xdc_runtime_Text_Module_State__;

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V;

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[7555];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[63];


/*
 * ======== xdc.runtime.Timestamp DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.TimestampNull DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Types DECLARATIONS ========
 */


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_gates_GateMutex_Instance_State_sem__O = offsetof(ti_sysbios_gates_GateMutex_Object__, Object_field_sem);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O = offsetof(ti_sysbios_knl_Clock_Module_State__, Object_field_clockQ);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Event_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Event_Object__, Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Semaphore_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Semaphore_Object__, Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_inactiveQ);
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_terminatedQ);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_utils_Load_Module_State_taskList__O = offsetof(ti_sysbios_utils_Load_Module_State__, Object_field_taskList);
__FAR__ const xdc_SizeT ti_sysbios_utils_Load_Module_State_gate__O = offsetof(ti_sysbios_utils_Load_Module_State__, Object_field_gate);


/*
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = C:/Users/endre/workspace_v5_3/szimetestio/Debug/configPkg/package/cfg/testio_pem4f");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = v7M4");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = ti.platforms.stellaris");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = ti.targets.arm.elf.M4F");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = ti.targets.omf.elf.Elf32");


/*
 * ======== xdc.runtime.Diags TEMPLATE ========
 */

xdc_runtime_Diags_DictElem xdc_runtime_Diags_dictElems[] = {
    {32777, &xdc_runtime_Main_Module__root__V.mask},
    {32796, &ti_sysbios_knl_Event_Module__root__V.mask},
    {32798, &ti_sysbios_knl_Semaphore_Module__root__V.mask},
    {32800, &ti_sysbios_knl_Task_Module__root__V.mask},
    {32816, &ti_sysbios_utils_Load_Module__root__V.mask},
    {0, 0}
};


/*
 * ======== xdc.runtime.Startup TEMPLATE ========
 */

/*
 *  ======== MODULE STARTUP DONE FUNCTIONS ========
 */
xdc_Bool xdc_runtime_System_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[0] < 0;
}
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[1] < 0;
}
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[2] < 0;
}
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[3] < 0;
}
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[4] < 0;
}
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[5] < 0;
}
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[6] < 0;
}
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[7] < 0;
}
xdc_Bool ti_sysbios_family_arm_lm3_TimestampProvider_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[8] < 0;
}
xdc_Bool ti_sysbios_family_arm_lm3_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[9] < 0;
}
xdc_Bool ti_uia_runtime_LogSync_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[10] < 0;
}
xdc_Bool ti_uia_runtime_LoggerStopMode_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[11] < 0;
}

/* 
 * Startup_exec__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_exec__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((externally_visible));
#endif
#endif

/*
 *  ======== xdc_runtime_Startup_exec__I ========
 *  Initialize all used modules that have startup functions
 */
xdc_Void xdc_runtime_Startup_exec__I(void)
{
    xdc_Int state[12];
    xdc_runtime_Startup_startModsFxn__C(state, 12);
}

/*
 * ======== xdc.runtime.Reset TEMPLATE ========
 */

/* 
 * Startup_reset__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_reset__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((externally_visible));
#endif
#endif

extern Void ti_catalog_arm_cortexm3_lm3init_Boot_init(void);  /* user defined reset function */

/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
    ti_catalog_arm_cortexm3_lm3init_Boot_init();
}

/*
 * ======== xdc.runtime.System TEMPLATE ========
 */


#include <xdc/std.h>
#include <limits.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Assert.h>

/*
 *  ======== System_printfExtend__I ========
 *  This function processes optional extended formats of printf.
 *  
 *  It returns the number of characters added to the result.
 *
 *  Precision (maximum string length) is not supported for %$S.
 *
 *  Right-justified (which is default) minimum width is not supported
 *  for %$L, %$S, or %$F.
 */
Int xdc_runtime_System_printfExtend__I(Char **pbuf, Char **pfmt, 
    VaList *pva, xdc_runtime_System_ParseData *parse)
{
    Char    *fmt = *pfmt;
    Int     res;
    Char    c;
    Bool    found = FALSE;
    
    /* 
     * Create a local variable 'va' to ensure that the dereference of
     * pva only occurs once.
     */
    va_list va = *pva;
    
    res = 0;

    c = *fmt++;
    *pfmt = *pfmt + 1;

    
    if (c == '$') {
        c = *fmt++;
        *pfmt = *pfmt + 1;
        
        if (c == 'L') {
            xdc_runtime_Types_Label *lab = parse->aFlag ? 
                (xdc_runtime_Types_Label *)iargToPtr(va_arg(va, IArg)) :
                (xdc_runtime_Types_Label *)va_arg(va, void *);
            
            /* 
             * Call Text_putLab to write out the label, taking the precision 
             * into account.
             */
            res = xdc_runtime_Text_putLab(lab, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
            
            /* Update the minimum width field. */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'F') {
            xdc_runtime_Types_Site site;
            
            /* Retrieve the file name string from the argument list */
            site.file = parse->aFlag ? (Char *) iargToPtr(va_arg(va, IArg)) :
                                       (Char *) va_arg(va, Char *);
            
            /* Retrieve the line number from the argument list. */
            site.line = parse->aFlag ? (Int) va_arg(va, IArg) : 
                                       (Int) va_arg(va, Int);
            
            /* 
             * Omit the 'mod' field, set it to 0.
             * '0' is a safe sentinel value - the IDs for named modules are 
             * 0x8000 and higher, and the IDs for unnamed modules go from 0x1
             * to 0x7fff.
             */
            site.mod = 0;
            
            /* 
             * Call putSite to format the file and line number.
             * If a precision was specified, it will be used as the maximum
             * string lengrth.
             */
            res = xdc_runtime_Text_putSite(&site, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
       
            /* Update the minimum width field */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'S') {
            /* Retrieve the format string from the argument list */
            parse->ptr = parse->aFlag ? 
                (Char *) iargToPtr(va_arg(va, IArg)) :
                (Char *) va_arg(va, Char *);
            
            /* Update pva before passing it to doPrint. */
            *pva = va;
            
            /* Perform the recursive format. System_doPrint does not advance
             * the buffer pointer, so it has to be done explicitly.
             */
            res = xdc_runtime_System_doPrint__I(*pbuf, parse->ptr, pva, parse->aFlag);
            if (*pbuf) {
                *pbuf += res;
            }
            
            /* Update the temporary variable with any changes to *pva */
            va = *pva;
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;
            
            /* Indicate that we were able to interpret the specifier */
            found = TRUE;
        }
        
    }

    if (c == 'f') {
        /* support arguments _after_ optional float support */
        if (parse->aFlag) {
            (void)va_arg(va, IArg);
        }
        else {
            (void)va_arg(va, double);
        }
    }    

    if (found == FALSE) {
        /* other character (like %) copy to output */
        *(parse->ptr) = c;
        parse->len = 1;
    }

    /*
     * Before returning, we must update the value of pva. We use a label here
     * so that all return points will go through this update.
     * The 'goto end' is here to ensure that there is always a reference to the
     * label (to avoid the compiler complaining). 
     */
    goto end; 
end:
    *pva = va;
    return (res);
}

/*
 * ======== xdc.runtime.SysMin TEMPLATE ========
 */


#if defined(__ti__) || (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined))
extern int HOSTwrite(int, const char *, unsigned);
#else
#include <stdio.h>
#endif

/*
 *  ======== SysMin_output__I ========
 *  HOSTWrite only writes a max of N chars at a time. The amount it writes
 *  is returned. This function loops until the entire buffer is written.
 *  Being a static function allows it to conditionally compile out.
 */
Void xdc_runtime_SysMin_output__I(Char *buf, UInt size)
{
#if defined(__ti__) || (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined))
    Int printCount;
    
    while (size != 0) {
        printCount = HOSTwrite(1, buf, size);
        if ((printCount <= 0) || (printCount > size)) {
            break;  /* ensure we never get stuck in an infinite loop */
        }
        size -= printCount;
        buf = buf + printCount;
    }    
#else
    fwrite(buf, 1, size, stdout);
#endif
}

/*
 * ======== xdc.runtime.Text TEMPLATE ========
 */


/*
 *  ======== xdc_runtime_Text_visitRope__I ========
 *  This function is indirectly called within Text.c through
 *  the visitRopeFxn configuration parameter of xdc.runtime.Text.
 */
Void xdc_runtime_Text_visitRope__I(xdc_runtime_Text_RopeId rope,
    xdc_Fxn visFxn, xdc_Ptr visState)
{
    xdc_String stack[6];
    xdc_runtime_Text_visitRope2__I(rope, visFxn, visState, stack);
}


/*
 * ======== ti.catalog.arm.cortexm3.lm3init.Boot TEMPLATE ========
 */

    extern ti_catalog_arm_cortexm3_lm3init_Boot_sysCtlClockSet(UInt ulConfig);
    extern ti_catalog_arm_cortexm3_lm3init_Boot_configureLdo(UInt ulVoltage);

#if defined(__ti__)
#pragma CODE_SECTION(ti_catalog_arm_cortexm3_lm3init_Boot_init, ".text:.bootCodeSection")
#endif

/*
 *  ======== ti_catalog_arm_cortexm3_lm3init_Boot_init ========
 */
Void ti_catalog_arm_cortexm3_lm3init_Boot_init()
{
    ti_catalog_arm_cortexm3_lm3init_Boot_sysCtlClockSet((UInt)
        (37750080));
}


/*
 * ======== ti.sysbios.BIOS TEMPLATE ========
 */

Void ti_sysbios_BIOS_exitFunc__I(Int);

extern Void ti_sysbios_BIOS_registerRTSLock();
extern Void ti_sysbios_fatfs_startup();

Void ti_sysbios_BIOS_startFunc__I()
{
    xdc_runtime_System_atexit(
	(xdc_runtime_System_AtexitHandler)ti_sysbios_BIOS_exitFunc__I);
    ti_sysbios_BIOS_registerRTSLock();
    ti_sysbios_fatfs_startup();
    ti_sysbios_hal_Hwi_startup();
    ti_sysbios_hal_Timer_startup();
    ti_sysbios_knl_Swi_startup();
    ti_sysbios_knl_Task_startup();
}

#if defined(__ti__)
#include <_lock.h>
#endif

Void ti_sysbios_BIOS_exitFunc__I(Int notused)
{
    ti_sysbios_knl_Swi_disable();
    ti_sysbios_knl_Task_disable();
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

#if defined(__ti__)
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
	_register_lock(_nop);
	_register_unlock(_nop);
    }
#endif
}




#if defined(__ti__)

#pragma FUNC_EXT_CALLED(malloc);
#pragma FUNC_EXT_CALLED(memalign);
#pragma FUNC_EXT_CALLED(free);
#pragma FUNC_EXT_CALLED(calloc);
#pragma FUNC_EXT_CALLED(realloc);

#define ATTRIBUTE

#else

#define ATTRIBUTE __attribute__ ((used))

#endif

#include <xdc/std.h>

#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>
#include <stdlib.h>
#include <string.h>

/* malloc header */
typedef struct Header {
    Ptr   actualBuf;
    UArg  size;
} Header;

/*
 *  ======== malloc ========
 */
Void ATTRIBUTE *malloc(SizeT size)
{
    Header *packet;
    xdc_runtime_Error_Block eb;

    xdc_runtime_Error_init(&eb);

    if (size == 0) {
	return (NULL);
    }

    packet = (Header *)xdc_runtime_Memory_alloc(NULL,
	(SizeT)(size + sizeof(Header)), 0, &eb);

    if (packet == NULL) {
	return (NULL);
    }

    packet->actualBuf = (Ptr)packet;
    packet->size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== memalign ========
 *  mirrors the memalign() function from the TI run-time library
 */
Void ATTRIBUTE *memalign(SizeT alignment, SizeT size)
{
    Header                      *packet;
    Void                        *tmp;
    xdc_runtime_Error_Block     eb;

    xdc_runtime_Error_init(&eb);

    if (size == 0) {
	return (NULL);
    }

    /*
     * If alignment is not a power of two or is less than the minimum
     * alignment of malloc(), then simply return what malloc() returns.
     * (same as behaviour as RTS library's memalign())
     * Note: HeapMem's header is the same as this header after it is raised
     * to a power of 2.
     */
    if (alignment <= sizeof(Header) || (alignment & (alignment-1))) {
	return malloc(size);
    }

    /*
     * Allocate 'align + size' so that we have room for the 'packet'
     * and can return an aligned buffer.
     */
    tmp = xdc_runtime_Memory_alloc(NULL, alignment + size,
	(SizeT)alignment, &eb);

    if (tmp == NULL) {
	return (NULL);
    }

    packet = (Header *)((char *)tmp + alignment - sizeof(Header));

    packet->actualBuf = tmp;
    packet->size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== calloc ========
 */
Void ATTRIBUTE *calloc(SizeT nmemb, SizeT size)
{
    SizeT       nbytes;
    Ptr         retval;

    nbytes = nmemb * size;

    retval = malloc(nbytes);
    if (retval != NULL) {
	(Void)memset(retval, (Int)'\0', nbytes);
    }

    return (retval);
}

/*
 *  ======== free ========
 */
Void ATTRIBUTE free(Void *ptr)
{
    Header      *packet;

    if (ptr != NULL) {
	packet = ((Header *)ptr) - 1;

	xdc_runtime_Memory_free(NULL, (Ptr)packet->actualBuf,
	    (packet->size + ((char*)packet - (char*)packet->actualBuf)));
    }
}

/*
 *  ======== realloc ========
 */
Void ATTRIBUTE *realloc(Void *ptr, SizeT size)
{
    Ptr         retval;
    Header      *packet;
    SizeT       oldSize;

    if (ptr == NULL) {
	retval = malloc(size);
    }
    else if (size == 0) {
	free(ptr);
	retval = NULL;
    }
    else {
	packet = (Header *)ptr - 1;
	retval = malloc(size);
	if (retval != NULL) {
	    oldSize = packet->size - sizeof(Header);
	    (Void)memcpy(retval, ptr, (size < oldSize) ? size : oldSize);
	    free(ptr);
	}
    }

    return (retval);
}


/*
 * ======== ti.sysbios.hal.Hwi TEMPLATE ========
 */

#ifdef __ti__
    #pragma FUNC_EXT_CALLED(ti_sysbios_hal_Hwi_HwiProxy_disable__E);
    #pragma FUNC_EXT_CALLED(ti_sysbios_hal_Hwi_HwiProxy_enable__E);
    #pragma FUNC_EXT_CALLED(ti_sysbios_hal_Hwi_HwiProxy_restore__E);
#endif

/*
 * ======== ti.sysbios.knl.Clock TEMPLATE ========
 */

Void ti_sysbios_knl_Clock_doTick__I(UArg arg) 
{
    /* update system time */
    (&ti_sysbios_knl_Clock_Module__state__V)->ticks++;

    (&ti_sysbios_knl_Clock_Module__state__V)->swiCount++;

    ti_sysbios_knl_Clock_logTick__E();

    if (!ti_sysbios_knl_Queue_empty(ti_sysbios_knl_Clock_Module_State_clockQ())) {

        ti_sysbios_knl_Swi_post((&ti_sysbios_knl_Clock_Module__state__V)->swi);

    }
}

/*
 * ======== ti.sysbios.family.arm.m3.Hwi TEMPLATE ========
 */

extern Void _c_int00();

#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_resetVectors, ".resetVecs");

/* const because it is meant to be placed in ROM */
const UInt32 ti_sysbios_family_arm_m3_Hwi_resetVectors[] = {
    (UInt32)(&__TI_STACK_BASE),
    (UInt32)(&_c_int00),
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),            /* NMI */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),      /* Hard Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Mem Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Bus Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),     /* Usage Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),         /* SVCall */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Debug Mon */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_pendSV__I),  /* pendSV */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 15 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 16 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 17 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 18 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 19 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 20 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 21 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 22 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 23 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 24 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 25 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 26 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 27 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 28 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 29 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 30 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 31 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 32 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 33 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 34 */
    (UInt32)(ti_sysbios_family_arm_m3_Hwi_dispatch__I),  /* intNum = 35 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 36 */
    (UInt32)(ti_sysbios_family_arm_m3_Hwi_dispatch__I),  /* intNum = 37 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 38 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 39 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 40 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 41 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 42 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 43 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 44 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 45 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 46 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 47 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 48 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 49 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 50 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 51 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 52 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 53 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 54 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 55 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 56 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 57 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 58 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 59 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 60 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 61 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 62 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 63 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 64 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 65 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 66 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 67 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 68 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 69 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 70 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 71 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 72 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 73 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 74 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 75 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 76 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 77 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 78 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 79 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 80 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 81 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 82 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 83 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 84 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 85 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 86 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 87 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 88 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 89 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 90 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 91 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 92 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 93 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 94 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 95 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 96 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 97 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 98 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 99 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 100 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 101 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 102 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 103 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 104 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 105 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 106 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 107 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 108 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 109 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 110 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 111 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 112 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 113 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 114 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 115 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 116 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 117 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 118 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 119 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 120 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 121 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 122 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 123 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 124 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 125 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 126 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 127 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 128 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 129 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 130 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 131 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 132 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 133 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 134 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 135 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 136 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 137 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 138 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 139 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 140 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 141 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 142 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 143 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 144 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 145 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 146 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 147 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 148 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 149 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 150 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 151 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 152 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 153 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 154 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 155 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 156 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 157 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 158 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 159 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 160 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 161 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 162 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 163 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 164 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 165 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 166 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 167 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 168 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 169 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 170 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 171 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 172 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 173 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 174 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 175 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 176 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 177 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 178 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 179 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 180 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 181 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 182 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 183 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 184 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 185 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 186 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 187 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 188 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 189 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 190 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 191 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 192 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 193 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 194 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 195 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 196 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 197 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 198 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 199 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 200 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 201 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 202 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 203 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 204 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 205 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 206 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 207 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 208 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 209 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 210 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 211 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 212 */
};

#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_ramVectors, ".vecs");

/* place holder for RAM vector table */
UInt32 ti_sysbios_family_arm_m3_Hwi_ramVectors[213];

#define Hwi_nvic ti_sysbios_family_arm_m3_Hwi_nvic

/*
 *  ======== Hwi_disableInterrupt ========
 */
UInt ti_sysbios_family_arm_m3_Hwi_disableInterrupt__E(UInt intNum)
{
    UInt oldEnableState, index, mask;

    if (intNum >= 16) {

	index = (intNum-16) >> 5;

	mask = 1 << ((intNum-16) & 0x1f);

	oldEnableState = Hwi_nvic.ISER[index] & mask;

	Hwi_nvic.ICER[index] = mask;
    }
    else if (intNum == 15) {
	oldEnableState = Hwi_nvic.STCSR & 0x00000002;
	Hwi_nvic.STCSR &= ~0x00000002;  /* disable SysTick Int */
    }

    return oldEnableState;
}

/*
 *  ======== Hwi_enableInterrupt ========
 */
UInt ti_sysbios_family_arm_m3_Hwi_enableInterrupt__E(UInt intNum)
{
    UInt oldEnableState, index, mask;

    if (intNum >= 16) {

	index = (intNum-16) >> 5;

	mask = 1 << ((intNum-16) & 0x1f);

	oldEnableState = Hwi_nvic.ISER[index] & mask;

	Hwi_nvic.ISER[index] = mask;
    }
    else if (intNum == 15) {
	oldEnableState = Hwi_nvic.STCSR & 0x00000002;
	Hwi_nvic.STCSR |= 0x00000002;   /* enable SysTick Int */
    }

    return oldEnableState;
}

/*
 *  ======== Hwi_restoreInterrupt ========
 */
Void ti_sysbios_family_arm_m3_Hwi_restoreInterrupt__E(UInt intNum, UInt key)
{
    UInt index, mask;

    if (intNum >= 16) {

	index = (intNum-16) >> 5;

	mask = 1 << ((intNum-16) & 0x1f);

	if (key) {
	    Hwi_nvic.ISER[index] = mask;
	}
	else {
	    Hwi_nvic.ICER[index] = mask;
	}
    }
    else if (intNum == 15) {
	if (key) {
	    Hwi_nvic.STCSR |= 0x00000002;       /* enable SysTick Int */
	}
	else {
	    Hwi_nvic.STCSR &= ~0x00000002;      /* disable SysTick Int */
	}
    }
}
#undef Hwi_nvic

/*
 * ======== ti.sysbios.fatfs.FatFS TEMPLATE ========
 */


#include <stdio.h>
#include <file.h>
#include <string.h>

#include <xdc/runtime/Error.h>

#include <ti/sysbios/fatfs/ff.h>
#include <ti/sysbios/fatfs/ffcio.h>
#include <ti/sysbios/fatfs/diskio.h>

extern DRESULT ramdisk_start(BYTE, unsigned char *, int, int);

Void ti_sysbios_fatfs_startup()
{
    add_device("fat", _MSA, ffcio_open, ffcio_close, ffcio_read,
        ffcio_write, ffcio_lseek, ffcio_unlink, ffcio_rename);
}

Int32 ti_sysbios_fatfs_getFatTime(Void)
{
    return (0x23556622);
}

/*
 * ======== ti.sysbios.BIOS INITIALIZERS ========
 */

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x2625a00,  /* lo */
    },  /* cpuFreq */
    (xdc_UInt)0x0,  /* rtsGateCount */
    ((xdc_IArg)(0x0)),  /* rtsGateKey */
    (ti_sysbios_BIOS_RtsGateProxy_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[1],  /* rtsGate */
    ti_sysbios_BIOS_ThreadType_Main,  /* threadType */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_BIOS_startFunc)),  /* startFunc */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C = ((CT__ti_sysbios_BIOS_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C = ((CT__ti_sysbios_BIOS_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C = ((CT__ti_sysbios_BIOS_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x8014;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C = ((CT__ti_sysbios_BIOS_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__startupDoneFxn ti_sysbios_BIOS_Module__startupDoneFxn__C = ((CT__ti_sysbios_BIOS_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C = 0;

/* smpEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C = 0;

/* cpuFreq__C */
__FAR__ const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C = {
    (xdc_Bits32)0x0,  /* hi */
    (xdc_Bits32)0x2625a00,  /* lo */
};

/* taskEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C = 1;

/* swiEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C = 1;

/* clockEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C = 1;

/* heapSize__C */
__FAR__ const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C = (xdc_SizeT)0x1000;

/* heapSection__C */
__FAR__ const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C = 0;

/* installedErrorHook__C */
__FAR__ const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C = ((CT__ti_sysbios_BIOS_installedErrorHook)((xdc_Fxn)xdc_runtime_Error_print__E));


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.arm.lm3.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_lm3_Timer_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_family_arm_lm3_Timer_Params ti_sysbios_family_arm_lm3_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_lm3_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_lm3_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    ((ti_sysbios_family_arm_m3_Hwi_Params*)0),  /* hwiParams */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_lm3_Timer_Module__ ti_sysbios_family_arm_lm3_Timer_Module__root__V = {
    {&ti_sysbios_family_arm_lm3_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_lm3_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_lm3_Timer_Object__ ti_sysbios_family_arm_lm3_Timer_Object__table__V[2] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x1,  /* id */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_USER,  /* startMode */
        (xdc_UInt)0xffffffff,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt)0x25,  /* intNum */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_lm3_TimestampProvider_rolloverFunc__E)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x0,  /* lo */
        },  /* extFreq */
        (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[1],  /* hwi */
    },
    {/* instance#1 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x0,  /* id */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt)0xfa0,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt)0x23,  /* intNum */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x0,  /* lo */
        },  /* extFreq */
        (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[0],  /* hwi */
    },
};

/* --> ti_sysbios_family_arm_lm3_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_arm_lm3_Timer_Module_State__device ti_sysbios_family_arm_lm3_Timer_Module_State_0_device__A[4] = {
    {
        (xdc_UInt)0x23,  /* intNum */
        ((xdc_Ptr)(0x40030000)),  /* baseAddr */
    },  /* [0] */
    {
        (xdc_UInt)0x25,  /* intNum */
        ((xdc_Ptr)(0x40031000)),  /* baseAddr */
    },  /* [1] */
    {
        (xdc_UInt)0x27,  /* intNum */
        ((xdc_Ptr)(0x40032000)),  /* baseAddr */
    },  /* [2] */
    {
        (xdc_UInt)0x33,  /* intNum */
        ((xdc_Ptr)(0x40033000)),  /* baseAddr */
    },  /* [3] */
};

/* --> ti_sysbios_family_arm_lm3_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_arm_lm3_Timer_Module_State__handles ti_sysbios_family_arm_lm3_Timer_Module_State_0_handles__A[4] = {
    (ti_sysbios_family_arm_lm3_Timer_Handle)&ti_sysbios_family_arm_lm3_Timer_Object__table__V[1],  /* [0] */
    (ti_sysbios_family_arm_lm3_Timer_Handle)&ti_sysbios_family_arm_lm3_Timer_Object__table__V[0],  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
};

/* Module__state__V */
ti_sysbios_family_arm_lm3_Timer_Module_State__ ti_sysbios_family_arm_lm3_Timer_Module__state__V = {
    (xdc_UInt)0xc,  /* availMask */
    ((void*)ti_sysbios_family_arm_lm3_Timer_Module_State_0_device__A),  /* device */
    ((void*)ti_sysbios_family_arm_lm3_Timer_Module_State_0_handles__A),  /* handles */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_Timer_Module__diagsEnabled ti_sysbios_family_arm_lm3_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_Timer_Module__diagsIncluded ti_sysbios_family_arm_lm3_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_Timer_Module__diagsMask ti_sysbios_family_arm_lm3_Timer_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_lm3_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_Timer_Module__gateObj ti_sysbios_family_arm_lm3_Timer_Module__gateObj__C = ((CT__ti_sysbios_family_arm_lm3_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_Timer_Module__gatePrms ti_sysbios_family_arm_lm3_Timer_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_lm3_Timer_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_Timer_Module__id ti_sysbios_family_arm_lm3_Timer_Module__id__C = (xdc_Bits16)0x8029;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_Timer_Module__loggerDefined ti_sysbios_family_arm_lm3_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_Timer_Module__loggerObj ti_sysbios_family_arm_lm3_Timer_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_lm3_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_Timer_Module__loggerFxn0 ti_sysbios_family_arm_lm3_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_lm3_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_Timer_Module__loggerFxn1 ti_sysbios_family_arm_lm3_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_lm3_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_Timer_Module__loggerFxn2 ti_sysbios_family_arm_lm3_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_lm3_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_Timer_Module__loggerFxn4 ti_sysbios_family_arm_lm3_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_lm3_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_Timer_Module__loggerFxn8 ti_sysbios_family_arm_lm3_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_lm3_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_Timer_Module__startupDoneFxn ti_sysbios_family_arm_lm3_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_lm3_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_Timer_Object__count ti_sysbios_family_arm_lm3_Timer_Object__count__C = 2;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_Timer_Object__heap ti_sysbios_family_arm_lm3_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_Timer_Object__sizeof ti_sysbios_family_arm_lm3_Timer_Object__sizeof__C = sizeof(ti_sysbios_family_arm_lm3_Timer_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_Timer_Object__table ti_sysbios_family_arm_lm3_Timer_Object__table__C = ti_sysbios_family_arm_lm3_Timer_Object__table__V;

/* E_invalidTimer__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_Timer_E_invalidTimer ti_sysbios_family_arm_lm3_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)3402) << 16 | 0);

/* E_notAvailable__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_Timer_E_notAvailable ti_sysbios_family_arm_lm3_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)3438) << 16 | 0);

/* E_cannotSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_Timer_E_cannotSupport ti_sysbios_family_arm_lm3_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)3477) << 16 | 0);

/* anyMask__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_Timer_anyMask ti_sysbios_family_arm_lm3_Timer_anyMask__C = (xdc_UInt)0xf;

/* startupNeeded__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_Timer_startupNeeded ti_sysbios_family_arm_lm3_Timer_startupNeeded__C = (xdc_UInt)0x1;

/* numTimerDevices__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_Timer_numTimerDevices ti_sysbios_family_arm_lm3_Timer_numTimerDevices__C = (xdc_Int)0x4;

/* WRALLOW__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_Timer_WRALLOW ti_sysbios_family_arm_lm3_Timer_WRALLOW__C = ((CT__ti_sysbios_family_arm_lm3_Timer_WRALLOW)0);


/*
 * ======== ti.sysbios.family.arm.lm3.TimestampProvider INITIALIZERS ========
 */

/* Module__state__V */
ti_sysbios_family_arm_lm3_TimestampProvider_Module_State__ ti_sysbios_family_arm_lm3_TimestampProvider_Module__state__V = {
    (ti_sysbios_family_arm_lm3_Timer_Handle)&ti_sysbios_family_arm_lm3_Timer_Object__table__V[0],  /* timer */
    (xdc_UInt32)0x0,  /* hi */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_TimestampProvider_Module__diagsEnabled ti_sysbios_family_arm_lm3_TimestampProvider_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_TimestampProvider_Module__diagsIncluded ti_sysbios_family_arm_lm3_TimestampProvider_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_TimestampProvider_Module__diagsMask ti_sysbios_family_arm_lm3_TimestampProvider_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_lm3_TimestampProvider_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_TimestampProvider_Module__gateObj ti_sysbios_family_arm_lm3_TimestampProvider_Module__gateObj__C = ((CT__ti_sysbios_family_arm_lm3_TimestampProvider_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_TimestampProvider_Module__gatePrms ti_sysbios_family_arm_lm3_TimestampProvider_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_lm3_TimestampProvider_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_TimestampProvider_Module__id ti_sysbios_family_arm_lm3_TimestampProvider_Module__id__C = (xdc_Bits16)0x8028;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_TimestampProvider_Module__loggerDefined ti_sysbios_family_arm_lm3_TimestampProvider_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_TimestampProvider_Module__loggerObj ti_sysbios_family_arm_lm3_TimestampProvider_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_lm3_TimestampProvider_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_TimestampProvider_Module__loggerFxn0 ti_sysbios_family_arm_lm3_TimestampProvider_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_lm3_TimestampProvider_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_TimestampProvider_Module__loggerFxn1 ti_sysbios_family_arm_lm3_TimestampProvider_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_lm3_TimestampProvider_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_TimestampProvider_Module__loggerFxn2 ti_sysbios_family_arm_lm3_TimestampProvider_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_lm3_TimestampProvider_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_TimestampProvider_Module__loggerFxn4 ti_sysbios_family_arm_lm3_TimestampProvider_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_lm3_TimestampProvider_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_TimestampProvider_Module__loggerFxn8 ti_sysbios_family_arm_lm3_TimestampProvider_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_lm3_TimestampProvider_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_TimestampProvider_Module__startupDoneFxn ti_sysbios_family_arm_lm3_TimestampProvider_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_lm3_TimestampProvider_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_TimestampProvider_Object__count ti_sysbios_family_arm_lm3_TimestampProvider_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_TimestampProvider_Object__heap ti_sysbios_family_arm_lm3_TimestampProvider_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_TimestampProvider_Object__sizeof ti_sysbios_family_arm_lm3_TimestampProvider_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_TimestampProvider_Object__table ti_sysbios_family_arm_lm3_TimestampProvider_Object__table__C = 0;

/* useClockTimer__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_TimestampProvider_useClockTimer ti_sysbios_family_arm_lm3_TimestampProvider_useClockTimer__C = 0;

/* timerId__C */
__FAR__ const CT__ti_sysbios_family_arm_lm3_TimestampProvider_timerId ti_sysbios_family_arm_lm3_TimestampProvider_timerId__C = (xdc_UInt)(-0x0 - 1);


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_family_arm_m3_Hwi_Params ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_m3_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)0xff,  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V = {
    {&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[2] = {
    {/* instance#0 */
        0,
        ((xdc_UArg)((void*)(ti_sysbios_family_arm_lm3_Timer_Handle)&ti_sysbios_family_arm_lm3_Timer_Object__table__V[1])),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_lm3_Timer_isrStub__E)),  /* fxn */
        (xdc_Int)0x23,  /* intNum */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#1 */
        0,
        ((xdc_UArg)((void*)(ti_sysbios_family_arm_lm3_Timer_Handle)&ti_sysbios_family_arm_lm3_Timer_Object__table__V[0])),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_lm3_Timer_isrStub__E)),  /* fxn */
        (xdc_Int)0x25,  /* intNum */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_priorities__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__priorities ti_sysbios_family_arm_m3_Hwi_Module_State_0_priorities__A[213] = {
    (xdc_UInt8)0x0,  /* [0] */
    (xdc_UInt8)0x0,  /* [1] */
    (xdc_UInt8)0x0,  /* [2] */
    (xdc_UInt8)0x0,  /* [3] */
    (xdc_UInt8)0x0,  /* [4] */
    (xdc_UInt8)0x0,  /* [5] */
    (xdc_UInt8)0x0,  /* [6] */
    (xdc_UInt8)0x0,  /* [7] */
    (xdc_UInt8)0x0,  /* [8] */
    (xdc_UInt8)0x0,  /* [9] */
    (xdc_UInt8)0x0,  /* [10] */
    (xdc_UInt8)0x0,  /* [11] */
    (xdc_UInt8)0x0,  /* [12] */
    (xdc_UInt8)0x0,  /* [13] */
    (xdc_UInt8)0x0,  /* [14] */
    (xdc_UInt8)0xff,  /* [15] */
    (xdc_UInt8)0xff,  /* [16] */
    (xdc_UInt8)0xff,  /* [17] */
    (xdc_UInt8)0xff,  /* [18] */
    (xdc_UInt8)0xff,  /* [19] */
    (xdc_UInt8)0xff,  /* [20] */
    (xdc_UInt8)0xff,  /* [21] */
    (xdc_UInt8)0xff,  /* [22] */
    (xdc_UInt8)0xff,  /* [23] */
    (xdc_UInt8)0xff,  /* [24] */
    (xdc_UInt8)0xff,  /* [25] */
    (xdc_UInt8)0xff,  /* [26] */
    (xdc_UInt8)0xff,  /* [27] */
    (xdc_UInt8)0xff,  /* [28] */
    (xdc_UInt8)0xff,  /* [29] */
    (xdc_UInt8)0xff,  /* [30] */
    (xdc_UInt8)0xff,  /* [31] */
    (xdc_UInt8)0xff,  /* [32] */
    (xdc_UInt8)0xff,  /* [33] */
    (xdc_UInt8)0xff,  /* [34] */
    (xdc_UInt8)0xff,  /* [35] */
    (xdc_UInt8)0xff,  /* [36] */
    (xdc_UInt8)0xff,  /* [37] */
    (xdc_UInt8)0xff,  /* [38] */
    (xdc_UInt8)0xff,  /* [39] */
    (xdc_UInt8)0xff,  /* [40] */
    (xdc_UInt8)0xff,  /* [41] */
    (xdc_UInt8)0xff,  /* [42] */
    (xdc_UInt8)0xff,  /* [43] */
    (xdc_UInt8)0xff,  /* [44] */
    (xdc_UInt8)0xff,  /* [45] */
    (xdc_UInt8)0xff,  /* [46] */
    (xdc_UInt8)0xff,  /* [47] */
    (xdc_UInt8)0xff,  /* [48] */
    (xdc_UInt8)0xff,  /* [49] */
    (xdc_UInt8)0xff,  /* [50] */
    (xdc_UInt8)0xff,  /* [51] */
    (xdc_UInt8)0xff,  /* [52] */
    (xdc_UInt8)0xff,  /* [53] */
    (xdc_UInt8)0xff,  /* [54] */
    (xdc_UInt8)0xff,  /* [55] */
    (xdc_UInt8)0xff,  /* [56] */
    (xdc_UInt8)0xff,  /* [57] */
    (xdc_UInt8)0xff,  /* [58] */
    (xdc_UInt8)0xff,  /* [59] */
    (xdc_UInt8)0xff,  /* [60] */
    (xdc_UInt8)0xff,  /* [61] */
    (xdc_UInt8)0xff,  /* [62] */
    (xdc_UInt8)0xff,  /* [63] */
    (xdc_UInt8)0xff,  /* [64] */
    (xdc_UInt8)0xff,  /* [65] */
    (xdc_UInt8)0xff,  /* [66] */
    (xdc_UInt8)0xff,  /* [67] */
    (xdc_UInt8)0xff,  /* [68] */
    (xdc_UInt8)0xff,  /* [69] */
    (xdc_UInt8)0xff,  /* [70] */
    (xdc_UInt8)0xff,  /* [71] */
    (xdc_UInt8)0xff,  /* [72] */
    (xdc_UInt8)0xff,  /* [73] */
    (xdc_UInt8)0xff,  /* [74] */
    (xdc_UInt8)0xff,  /* [75] */
    (xdc_UInt8)0xff,  /* [76] */
    (xdc_UInt8)0xff,  /* [77] */
    (xdc_UInt8)0xff,  /* [78] */
    (xdc_UInt8)0xff,  /* [79] */
    (xdc_UInt8)0xff,  /* [80] */
    (xdc_UInt8)0xff,  /* [81] */
    (xdc_UInt8)0xff,  /* [82] */
    (xdc_UInt8)0xff,  /* [83] */
    (xdc_UInt8)0xff,  /* [84] */
    (xdc_UInt8)0xff,  /* [85] */
    (xdc_UInt8)0xff,  /* [86] */
    (xdc_UInt8)0xff,  /* [87] */
    (xdc_UInt8)0xff,  /* [88] */
    (xdc_UInt8)0xff,  /* [89] */
    (xdc_UInt8)0xff,  /* [90] */
    (xdc_UInt8)0xff,  /* [91] */
    (xdc_UInt8)0xff,  /* [92] */
    (xdc_UInt8)0xff,  /* [93] */
    (xdc_UInt8)0xff,  /* [94] */
    (xdc_UInt8)0xff,  /* [95] */
    (xdc_UInt8)0xff,  /* [96] */
    (xdc_UInt8)0xff,  /* [97] */
    (xdc_UInt8)0xff,  /* [98] */
    (xdc_UInt8)0xff,  /* [99] */
    (xdc_UInt8)0xff,  /* [100] */
    (xdc_UInt8)0xff,  /* [101] */
    (xdc_UInt8)0xff,  /* [102] */
    (xdc_UInt8)0xff,  /* [103] */
    (xdc_UInt8)0xff,  /* [104] */
    (xdc_UInt8)0xff,  /* [105] */
    (xdc_UInt8)0xff,  /* [106] */
    (xdc_UInt8)0xff,  /* [107] */
    (xdc_UInt8)0xff,  /* [108] */
    (xdc_UInt8)0xff,  /* [109] */
    (xdc_UInt8)0xff,  /* [110] */
    (xdc_UInt8)0xff,  /* [111] */
    (xdc_UInt8)0xff,  /* [112] */
    (xdc_UInt8)0xff,  /* [113] */
    (xdc_UInt8)0xff,  /* [114] */
    (xdc_UInt8)0xff,  /* [115] */
    (xdc_UInt8)0xff,  /* [116] */
    (xdc_UInt8)0xff,  /* [117] */
    (xdc_UInt8)0xff,  /* [118] */
    (xdc_UInt8)0xff,  /* [119] */
    (xdc_UInt8)0xff,  /* [120] */
    (xdc_UInt8)0xff,  /* [121] */
    (xdc_UInt8)0xff,  /* [122] */
    (xdc_UInt8)0xff,  /* [123] */
    (xdc_UInt8)0xff,  /* [124] */
    (xdc_UInt8)0xff,  /* [125] */
    (xdc_UInt8)0xff,  /* [126] */
    (xdc_UInt8)0xff,  /* [127] */
    (xdc_UInt8)0xff,  /* [128] */
    (xdc_UInt8)0xff,  /* [129] */
    (xdc_UInt8)0xff,  /* [130] */
    (xdc_UInt8)0xff,  /* [131] */
    (xdc_UInt8)0xff,  /* [132] */
    (xdc_UInt8)0xff,  /* [133] */
    (xdc_UInt8)0xff,  /* [134] */
    (xdc_UInt8)0xff,  /* [135] */
    (xdc_UInt8)0xff,  /* [136] */
    (xdc_UInt8)0xff,  /* [137] */
    (xdc_UInt8)0xff,  /* [138] */
    (xdc_UInt8)0xff,  /* [139] */
    (xdc_UInt8)0xff,  /* [140] */
    (xdc_UInt8)0xff,  /* [141] */
    (xdc_UInt8)0xff,  /* [142] */
    (xdc_UInt8)0xff,  /* [143] */
    (xdc_UInt8)0xff,  /* [144] */
    (xdc_UInt8)0xff,  /* [145] */
    (xdc_UInt8)0xff,  /* [146] */
    (xdc_UInt8)0xff,  /* [147] */
    (xdc_UInt8)0xff,  /* [148] */
    (xdc_UInt8)0xff,  /* [149] */
    (xdc_UInt8)0xff,  /* [150] */
    (xdc_UInt8)0xff,  /* [151] */
    (xdc_UInt8)0xff,  /* [152] */
    (xdc_UInt8)0xff,  /* [153] */
    (xdc_UInt8)0xff,  /* [154] */
    (xdc_UInt8)0xff,  /* [155] */
    (xdc_UInt8)0xff,  /* [156] */
    (xdc_UInt8)0xff,  /* [157] */
    (xdc_UInt8)0xff,  /* [158] */
    (xdc_UInt8)0xff,  /* [159] */
    (xdc_UInt8)0xff,  /* [160] */
    (xdc_UInt8)0xff,  /* [161] */
    (xdc_UInt8)0xff,  /* [162] */
    (xdc_UInt8)0xff,  /* [163] */
    (xdc_UInt8)0xff,  /* [164] */
    (xdc_UInt8)0xff,  /* [165] */
    (xdc_UInt8)0xff,  /* [166] */
    (xdc_UInt8)0xff,  /* [167] */
    (xdc_UInt8)0xff,  /* [168] */
    (xdc_UInt8)0xff,  /* [169] */
    (xdc_UInt8)0xff,  /* [170] */
    (xdc_UInt8)0xff,  /* [171] */
    (xdc_UInt8)0xff,  /* [172] */
    (xdc_UInt8)0xff,  /* [173] */
    (xdc_UInt8)0xff,  /* [174] */
    (xdc_UInt8)0xff,  /* [175] */
    (xdc_UInt8)0xff,  /* [176] */
    (xdc_UInt8)0xff,  /* [177] */
    (xdc_UInt8)0xff,  /* [178] */
    (xdc_UInt8)0xff,  /* [179] */
    (xdc_UInt8)0xff,  /* [180] */
    (xdc_UInt8)0xff,  /* [181] */
    (xdc_UInt8)0xff,  /* [182] */
    (xdc_UInt8)0xff,  /* [183] */
    (xdc_UInt8)0xff,  /* [184] */
    (xdc_UInt8)0xff,  /* [185] */
    (xdc_UInt8)0xff,  /* [186] */
    (xdc_UInt8)0xff,  /* [187] */
    (xdc_UInt8)0xff,  /* [188] */
    (xdc_UInt8)0xff,  /* [189] */
    (xdc_UInt8)0xff,  /* [190] */
    (xdc_UInt8)0xff,  /* [191] */
    (xdc_UInt8)0xff,  /* [192] */
    (xdc_UInt8)0xff,  /* [193] */
    (xdc_UInt8)0xff,  /* [194] */
    (xdc_UInt8)0xff,  /* [195] */
    (xdc_UInt8)0xff,  /* [196] */
    (xdc_UInt8)0xff,  /* [197] */
    (xdc_UInt8)0xff,  /* [198] */
    (xdc_UInt8)0xff,  /* [199] */
    (xdc_UInt8)0xff,  /* [200] */
    (xdc_UInt8)0xff,  /* [201] */
    (xdc_UInt8)0xff,  /* [202] */
    (xdc_UInt8)0xff,  /* [203] */
    (xdc_UInt8)0xff,  /* [204] */
    (xdc_UInt8)0xff,  /* [205] */
    (xdc_UInt8)0xff,  /* [206] */
    (xdc_UInt8)0xff,  /* [207] */
    (xdc_UInt8)0xff,  /* [208] */
    (xdc_UInt8)0xff,  /* [209] */
    (xdc_UInt8)0xff,  /* [210] */
    (xdc_UInt8)0xff,  /* [211] */
    (xdc_UInt8)0xff,  /* [212] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_dispatchTable__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__dispatchTable ti_sysbios_family_arm_m3_Hwi_Module_State_0_dispatchTable__A[213] = {
    0,  /* [0] */
    0,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    0,  /* [8] */
    0,  /* [9] */
    0,  /* [10] */
    0,  /* [11] */
    0,  /* [12] */
    0,  /* [13] */
    0,  /* [14] */
    0,  /* [15] */
    0,  /* [16] */
    0,  /* [17] */
    0,  /* [18] */
    0,  /* [19] */
    0,  /* [20] */
    0,  /* [21] */
    0,  /* [22] */
    0,  /* [23] */
    0,  /* [24] */
    0,  /* [25] */
    0,  /* [26] */
    0,  /* [27] */
    0,  /* [28] */
    0,  /* [29] */
    0,  /* [30] */
    0,  /* [31] */
    0,  /* [32] */
    0,  /* [33] */
    0,  /* [34] */
    (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[0],  /* [35] */
    0,  /* [36] */
    (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[1],  /* [37] */
    0,  /* [38] */
    0,  /* [39] */
    0,  /* [40] */
    0,  /* [41] */
    0,  /* [42] */
    0,  /* [43] */
    0,  /* [44] */
    0,  /* [45] */
    0,  /* [46] */
    0,  /* [47] */
    0,  /* [48] */
    0,  /* [49] */
    0,  /* [50] */
    0,  /* [51] */
    0,  /* [52] */
    0,  /* [53] */
    0,  /* [54] */
    0,  /* [55] */
    0,  /* [56] */
    0,  /* [57] */
    0,  /* [58] */
    0,  /* [59] */
    0,  /* [60] */
    0,  /* [61] */
    0,  /* [62] */
    0,  /* [63] */
    0,  /* [64] */
    0,  /* [65] */
    0,  /* [66] */
    0,  /* [67] */
    0,  /* [68] */
    0,  /* [69] */
    0,  /* [70] */
    0,  /* [71] */
    0,  /* [72] */
    0,  /* [73] */
    0,  /* [74] */
    0,  /* [75] */
    0,  /* [76] */
    0,  /* [77] */
    0,  /* [78] */
    0,  /* [79] */
    0,  /* [80] */
    0,  /* [81] */
    0,  /* [82] */
    0,  /* [83] */
    0,  /* [84] */
    0,  /* [85] */
    0,  /* [86] */
    0,  /* [87] */
    0,  /* [88] */
    0,  /* [89] */
    0,  /* [90] */
    0,  /* [91] */
    0,  /* [92] */
    0,  /* [93] */
    0,  /* [94] */
    0,  /* [95] */
    0,  /* [96] */
    0,  /* [97] */
    0,  /* [98] */
    0,  /* [99] */
    0,  /* [100] */
    0,  /* [101] */
    0,  /* [102] */
    0,  /* [103] */
    0,  /* [104] */
    0,  /* [105] */
    0,  /* [106] */
    0,  /* [107] */
    0,  /* [108] */
    0,  /* [109] */
    0,  /* [110] */
    0,  /* [111] */
    0,  /* [112] */
    0,  /* [113] */
    0,  /* [114] */
    0,  /* [115] */
    0,  /* [116] */
    0,  /* [117] */
    0,  /* [118] */
    0,  /* [119] */
    0,  /* [120] */
    0,  /* [121] */
    0,  /* [122] */
    0,  /* [123] */
    0,  /* [124] */
    0,  /* [125] */
    0,  /* [126] */
    0,  /* [127] */
    0,  /* [128] */
    0,  /* [129] */
    0,  /* [130] */
    0,  /* [131] */
    0,  /* [132] */
    0,  /* [133] */
    0,  /* [134] */
    0,  /* [135] */
    0,  /* [136] */
    0,  /* [137] */
    0,  /* [138] */
    0,  /* [139] */
    0,  /* [140] */
    0,  /* [141] */
    0,  /* [142] */
    0,  /* [143] */
    0,  /* [144] */
    0,  /* [145] */
    0,  /* [146] */
    0,  /* [147] */
    0,  /* [148] */
    0,  /* [149] */
    0,  /* [150] */
    0,  /* [151] */
    0,  /* [152] */
    0,  /* [153] */
    0,  /* [154] */
    0,  /* [155] */
    0,  /* [156] */
    0,  /* [157] */
    0,  /* [158] */
    0,  /* [159] */
    0,  /* [160] */
    0,  /* [161] */
    0,  /* [162] */
    0,  /* [163] */
    0,  /* [164] */
    0,  /* [165] */
    0,  /* [166] */
    0,  /* [167] */
    0,  /* [168] */
    0,  /* [169] */
    0,  /* [170] */
    0,  /* [171] */
    0,  /* [172] */
    0,  /* [173] */
    0,  /* [174] */
    0,  /* [175] */
    0,  /* [176] */
    0,  /* [177] */
    0,  /* [178] */
    0,  /* [179] */
    0,  /* [180] */
    0,  /* [181] */
    0,  /* [182] */
    0,  /* [183] */
    0,  /* [184] */
    0,  /* [185] */
    0,  /* [186] */
    0,  /* [187] */
    0,  /* [188] */
    0,  /* [189] */
    0,  /* [190] */
    0,  /* [191] */
    0,  /* [192] */
    0,  /* [193] */
    0,  /* [194] */
    0,  /* [195] */
    0,  /* [196] */
    0,  /* [197] */
    0,  /* [198] */
    0,  /* [199] */
    0,  /* [200] */
    0,  /* [201] */
    0,  /* [202] */
    0,  /* [203] */
    0,  /* [204] */
    0,  /* [205] */
    0,  /* [206] */
    0,  /* [207] */
    0,  /* [208] */
    0,  /* [209] */
    0,  /* [210] */
    0,  /* [211] */
    0,  /* [212] */
};

/* Module__state__V */
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V = {
    (xdc_Bits16)0x0,  /* enables */
    {
        (xdc_Bits32)0x280000,  /* [0] */
        (xdc_Bits32)0x0,  /* [1] */
        (xdc_Bits32)0x0,  /* [2] */
        (xdc_Bits32)0x0,  /* [3] */
        (xdc_Bits32)0x0,  /* [4] */
        (xdc_Bits32)0x0,  /* [5] */
        (xdc_Bits32)0x0,  /* [6] */
        (xdc_Bits32)0x0,  /* [7] */
    },  /* iser */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_priorities__A),  /* priorities */
    ((xdc_Char*)0),  /* taskSP */
    0,  /* excActive */
    ((ti_sysbios_family_arm_m3_Hwi_ExcContext*)0),  /* excContext */
    ((xdc_Ptr)0),  /* excStack */
    ((xdc_Ptr)0),  /* isrStack */
    ((xdc_Ptr)((void*)&__TI_STACK_BASE)),  /* isrStackBase */
    (xdc_SizeT)0x1000,  /* isrStackSize */
    ((xdc_Ptr)(0x20000000)),  /* vectorTableBase */
    (xdc_UInt)0x101,  /* swiTaskKeys */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_dispatchTable__A),  /* dispatchTable */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__id ti_sysbios_family_arm_m3_Hwi_Module__id__C = (xdc_Bits16)0x8024;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__count ti_sysbios_family_arm_m3_Hwi_Object__count__C = 2;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__heap ti_sysbios_family_arm_m3_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__sizeof ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_arm_m3_Hwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__table ti_sysbios_family_arm_m3_Hwi_Object__table__C = ti_sysbios_family_arm_m3_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* NUM_INTERRUPTS__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C = (xdc_Int)0xd5;

/* NUM_PRIORITIES__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C = (xdc_Int)0x8;

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LM_begin ti_sysbios_family_arm_m3_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)4543) << 16 | 768);

/* LD_end__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LD_end ti_sysbios_family_arm_m3_Hwi_LD_end__C = (((xdc_runtime_Log_Event)4613) << 16 | 512);

/* A_unsupportedMaskingOption__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C = (((xdc_runtime_Assert_Id)1307) << 16 | 16);

/* E_alreadyDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C = (((xdc_runtime_Error_Id)2994) << 16 | 0);

/* E_exception__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_exception ti_sysbios_family_arm_m3_Hwi_E_exception__C = (((xdc_runtime_Error_Id)3042) << 16 | 0);

/* E_noIsr__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_noIsr ti_sysbios_family_arm_m3_Hwi_E_noIsr__C = (((xdc_runtime_Error_Id)3247) << 16 | 0);

/* E_NMI__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_NMI ti_sysbios_family_arm_m3_Hwi_E_NMI__C = (((xdc_runtime_Error_Id)3275) << 16 | 0);

/* E_hardFault__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_hardFault ti_sysbios_family_arm_m3_Hwi_E_hardFault__C = (((xdc_runtime_Error_Id)3285) << 16 | 0);

/* E_memFault__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_memFault ti_sysbios_family_arm_m3_Hwi_E_memFault__C = (((xdc_runtime_Error_Id)3301) << 16 | 0);

/* E_busFault__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_busFault ti_sysbios_family_arm_m3_Hwi_E_busFault__C = (((xdc_runtime_Error_Id)3316) << 16 | 0);

/* E_usageFault__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_usageFault ti_sysbios_family_arm_m3_Hwi_E_usageFault__C = (((xdc_runtime_Error_Id)3331) << 16 | 0);

/* E_svCall__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_svCall ti_sysbios_family_arm_m3_Hwi_E_svCall__C = (((xdc_runtime_Error_Id)3348) << 16 | 0);

/* E_debugMon__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_debugMon ti_sysbios_family_arm_m3_Hwi_E_debugMon__C = (((xdc_runtime_Error_Id)3369) << 16 | 0);

/* E_reserved__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_reserved ti_sysbios_family_arm_m3_Hwi_E_reserved__C = (((xdc_runtime_Error_Id)3384) << 16 | 0);

/* excHookFunc__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc ti_sysbios_family_arm_m3_Hwi_excHookFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc)0);

/* disablePriority__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_disablePriority ti_sysbios_family_arm_m3_Hwi_disablePriority__C = (xdc_UInt)0x20;

/* priGroup__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_priGroup ti_sysbios_family_arm_m3_Hwi_priGroup__C = (xdc_UInt)0x0;

/* swiDisable__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiDisable ti_sysbios_family_arm_m3_Hwi_swiDisable__C = ((CT__ti_sysbios_family_arm_m3_Hwi_swiDisable)((xdc_Fxn)ti_sysbios_knl_Swi_disable__E));

/* swiRestoreHwi__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C = ((CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Swi_restoreHwi__E));

/* taskDisable__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskDisable ti_sysbios_family_arm_m3_Hwi_taskDisable__C = ((CT__ti_sysbios_family_arm_m3_Hwi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestoreHwi__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C = ((CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Task_restoreHwi__E));

/* ccr__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_ccr ti_sysbios_family_arm_m3_Hwi_ccr__C = (xdc_UInt32)0x200;

/* hooks__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_hooks ti_sysbios_family_arm_m3_Hwi_hooks__C = {0, 0};

/* excHandlerFunc__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc)((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_excHandlerMax__I));


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C = (xdc_Bits16)0x8025;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__id ti_sysbios_family_arm_m3_TaskSupport_Module__id__C = (xdc_Bits16)0x8026;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__count ti_sysbios_family_arm_m3_TaskSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__heap ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__table ti_sysbios_family_arm_m3_TaskSupport_Object__table__C = 0;

/* defaultStackSize__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C = (xdc_SizeT)0x800;

/* stackAlignment__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_stackAlignment ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C = (xdc_UInt)0x8;


/*
 * ======== ti.sysbios.gates.GateHwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateHwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateHwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V = {
    {&ti_sysbios_gates_GateHwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateHwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateHwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateHwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateHwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C = (xdc_Bits16)0x802d;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateHwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C = ti_sysbios_gates_GateHwi_Object__table__V;


/*
 * ======== ti.sysbios.gates.GateMutex INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_gates_GateMutex_Params ti_sysbios_gates_GateMutex_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateMutex_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateMutex_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V = {
    {&ti_sysbios_gates_GateMutex_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateMutex_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
    {/* instance#1 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled ti_sysbios_gates_GateMutex_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded ti_sysbios_gates_GateMutex_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsMask ti_sysbios_gates_GateMutex_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateMutex_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gateObj ti_sysbios_gates_GateMutex_Module__gateObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gatePrms ti_sysbios_gates_GateMutex_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateMutex_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__C = (xdc_Bits16)0x802e;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerDefined ti_sysbios_gates_GateMutex_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerObj ti_sysbios_gates_GateMutex_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__count ti_sysbios_gates_GateMutex_Object__count__C = 2;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__heap ti_sysbios_gates_GateMutex_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__sizeof ti_sysbios_gates_GateMutex_Object__sizeof__C = sizeof(ti_sysbios_gates_GateMutex_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__table ti_sysbios_gates_GateMutex_Object__table__C = ti_sysbios_gates_GateMutex_Object__table__V;

/* A_badContext__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C = (((xdc_runtime_Assert_Id)2180) << 16 | 16);


/*
 * ======== ti.sysbios.hal.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V = {
    {&ti_sysbios_hal_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Hwi_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_hal_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C = ((CT__ti_sysbios_hal_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_hal_Hwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C = (xdc_Bits16)0x8016;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn ti_sysbios_hal_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C = sizeof(ti_sysbios_hal_Hwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C = 0;

/* dispatcherAutoNestingSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_stackOverflow__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)2863) << 16 | 0);


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.hal.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Timer_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_hal_Timer_Params ti_sysbios_hal_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Timer_Module__ ti_sysbios_hal_Timer_Module__root__V = {
    {&ti_sysbios_hal_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_hal_Timer_Object__ ti_sysbios_hal_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        (ti_sysbios_hal_Timer_TimerProxy_Handle)&ti_sysbios_family_arm_lm3_Timer_Object__table__V[1],  /* pi */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsEnabled ti_sysbios_hal_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsIncluded ti_sysbios_hal_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsMask ti_sysbios_hal_Timer_Module__diagsMask__C = ((CT__ti_sysbios_hal_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__gateObj ti_sysbios_hal_Timer_Module__gateObj__C = ((CT__ti_sysbios_hal_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__gatePrms ti_sysbios_hal_Timer_Module__gatePrms__C = ((CT__ti_sysbios_hal_Timer_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__id ti_sysbios_hal_Timer_Module__id__C = (xdc_Bits16)0x8017;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerDefined ti_sysbios_hal_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerObj ti_sysbios_hal_Timer_Module__loggerObj__C = ((CT__ti_sysbios_hal_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn0 ti_sysbios_hal_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn1 ti_sysbios_hal_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn2 ti_sysbios_hal_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn4 ti_sysbios_hal_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn8 ti_sysbios_hal_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__startupDoneFxn ti_sysbios_hal_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__count ti_sysbios_hal_Timer_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__heap ti_sysbios_hal_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__sizeof ti_sysbios_hal_Timer_Object__sizeof__C = sizeof(ti_sysbios_hal_Timer_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__table ti_sysbios_hal_Timer_Object__table__C = ti_sysbios_hal_Timer_Object__table__V;


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_heaps_HeapMem_Params ti_sysbios_heaps_HeapMem_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapMem_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_Ptr)(0x0)),  /* buf */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096];

/* Module__root__V */
ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V = {
    {&ti_sysbios_heaps_HeapMem_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_heaps_HeapMem_Module__FXNS__C,
        ((xdc_UArg)(0x8)),  /* align */
        ((void*)ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A),  /* buf */
        {
            ((ti_sysbios_heaps_HeapMem_Header*)0),  /* next */
            ((xdc_UArg)(0x1000)),  /* size */
        },  /* head */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask ti_sysbios_heaps_HeapMem_Module__diagsMask__C = ((CT__ti_sysbios_heaps_HeapMem_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gateObj ti_sysbios_heaps_HeapMem_Module__gateObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms ti_sysbios_heaps_HeapMem_Module__gatePrms__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__id ti_sysbios_heaps_HeapMem_Module__id__C = (xdc_Bits16)0x802b;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined ti_sysbios_heaps_HeapMem_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj ti_sysbios_heaps_HeapMem_Module__loggerObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C = ((CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__count ti_sysbios_heaps_HeapMem_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__heap ti_sysbios_heaps_HeapMem_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__sizeof ti_sysbios_heaps_HeapMem_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapMem_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__table ti_sysbios_heaps_HeapMem_Object__table__C = ti_sysbios_heaps_HeapMem_Object__table__V;

/* A_zeroBlock__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C = (((xdc_runtime_Assert_Id)1723) << 16 | 16);

/* A_heapSize__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C = (((xdc_runtime_Assert_Id)1759) << 16 | 16);

/* A_align__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C = (((xdc_runtime_Assert_Id)1804) << 16 | 16);

/* E_memory__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_E_memory ti_sysbios_heaps_HeapMem_E_memory__C = (((xdc_runtime_Error_Id)3583) << 16 | 0);

/* A_invalidFree__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C = (((xdc_runtime_Assert_Id)1695) << 16 | 16);

/* reqAlign__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlign ti_sysbios_heaps_HeapMem_reqAlign__C = (xdc_Int)0x8;

/* reqAlignMask__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlignMask ti_sysbios_heaps_HeapMem_reqAlignMask__C = (xdc_Int)0x7;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Clock INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Clock_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Clock_Object__PARAMS__C.__iprms, /* instance */
    0,  /* startFlag */
    (xdc_UInt)0x0,  /* period */
    ((xdc_UArg)0),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V = {
    {&ti_sysbios_knl_Clock_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Clock_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Clock_Object__ ti_sysbios_knl_Clock_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* prev */
        },  /* elem */
        (xdc_UInt32)0x1,  /* timeout */
        (xdc_UInt32)0x1,  /* currTimeout */
        (xdc_UInt32)0x1,  /* period */
        1,  /* active */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)GPIOTicker)),  /* fxn */
        ((xdc_UArg)0),  /* arg */
    },
};

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V = {
    (xdc_UInt32)0x0,  /* ticks */
    (xdc_UInt)0x0,  /* swiCount */
    (ti_sysbios_hal_Timer_Handle)&ti_sysbios_hal_Timer_Object__table__V[0],  /* timer */
    ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* doTickFunc */
    (ti_sysbios_knl_Swi_Handle)&ti_sysbios_knl_Swi_Object__table__V[0],  /* swi */
    (xdc_UInt32)0x0,  /* periodCounts */
    (xdc_UInt)0x0,  /* numTickSkip */
    (xdc_UInt)0x0,  /* skipsWorkFunc */
    0,  /* inWorkFunc */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Object__table__V[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Object__table__V[0].elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_clockQ */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C = ((CT__ti_sysbios_knl_Clock_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C = ((CT__ti_sysbios_knl_Clock_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C = ((CT__ti_sysbios_knl_Clock_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C = (xdc_Bits16)0x8019;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C = ((CT__ti_sysbios_knl_Clock_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__startupDoneFxn ti_sysbios_knl_Clock_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Clock_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C = sizeof(ti_sysbios_knl_Clock_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C = ti_sysbios_knl_Clock_Object__table__V;

/* LW_delayed__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)3837) << 16 | 1024);

/* LM_tick__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)3859) << 16 | 768);

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)3877) << 16 | 768);

/* A_clockDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C = (((xdc_runtime_Assert_Id)355) << 16 | 16);

/* A_badThreadType__C */
__FAR__ const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C = (((xdc_runtime_Assert_Id)436) << 16 | 16);

/* tickSource__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C = ti_sysbios_knl_Clock_TickSource_TIMER;

/* tickMode__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C = ti_sysbios_knl_Clock_TickMode_PERIODIC;

/* timerId__C */
__FAR__ const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C = (xdc_UInt)(-0x0 - 1);

/* tickPeriod__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C = (xdc_UInt32)0x64;


/*
 * ======== ti.sysbios.knl.Event INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Event_Params ti_sysbios_knl_Event_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Event_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Event_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V = {
    {&ti_sysbios_knl_Event_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Event_Module__root__V.link},  /* link.prev */
    768,  /* mask */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsEnabled ti_sysbios_knl_Event_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsIncluded ti_sysbios_knl_Event_Module__diagsIncluded__C = (xdc_Bits32)0x390;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsMask ti_sysbios_knl_Event_Module__diagsMask__C = ((CT__ti_sysbios_knl_Event_Module__diagsMask)((void*)&ti_sysbios_knl_Event_Module__root__V.mask));

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__gateObj ti_sysbios_knl_Event_Module__gateObj__C = ((CT__ti_sysbios_knl_Event_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__gatePrms ti_sysbios_knl_Event_Module__gatePrms__C = ((CT__ti_sysbios_knl_Event_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__id ti_sysbios_knl_Event_Module__id__C = (xdc_Bits16)0x801c;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerDefined ti_sysbios_knl_Event_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerObj ti_sysbios_knl_Event_Module__loggerObj__C = ((CT__ti_sysbios_knl_Event_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_runtime_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn0 ti_sysbios_knl_Event_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn0)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn1 ti_sysbios_knl_Event_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn1)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn2 ti_sysbios_knl_Event_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn2)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn4 ti_sysbios_knl_Event_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn4)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn8 ti_sysbios_knl_Event_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn8)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__startupDoneFxn ti_sysbios_knl_Event_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Event_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Event_Object__count ti_sysbios_knl_Event_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Event_Object__heap ti_sysbios_knl_Event_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Event_Object__sizeof ti_sysbios_knl_Event_Object__sizeof__C = sizeof(ti_sysbios_knl_Event_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Event_Object__table ti_sysbios_knl_Event_Object__table__C = 0;

/* LM_post__C */
__FAR__ const CT__ti_sysbios_knl_Event_LM_post ti_sysbios_knl_Event_LM_post__C = (((xdc_runtime_Log_Event)3909) << 16 | 768);

/* LM_pend__C */
__FAR__ const CT__ti_sysbios_knl_Event_LM_pend ti_sysbios_knl_Event_LM_pend__C = (((xdc_runtime_Log_Event)3963) << 16 | 768);

/* A_nullEventMasks__C */
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventMasks ti_sysbios_knl_Event_A_nullEventMasks__C = (((xdc_runtime_Assert_Id)506) << 16 | 16);

/* A_nullEventId__C */
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventId ti_sysbios_knl_Event_A_nullEventId__C = (((xdc_runtime_Assert_Id)553) << 16 | 16);

/* A_eventInUse__C */
__FAR__ const CT__ti_sysbios_knl_Event_A_eventInUse ti_sysbios_knl_Event_A_eventInUse__C = (((xdc_runtime_Assert_Id)592) << 16 | 16);

/* A_badContext__C */
__FAR__ const CT__ti_sysbios_knl_Event_A_badContext ti_sysbios_knl_Event_A_badContext__C = (((xdc_runtime_Assert_Id)635) << 16 | 16);


/*
 * ======== ti.sysbios.knl.Idle INITIALIZERS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[2] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_checkStack)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_utils_Load_idleFxn__E)),  /* [1] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C = ((CT__ti_sysbios_knl_Idle_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C = ((CT__ti_sysbios_knl_Idle_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C = ((CT__ti_sysbios_knl_Idle_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C = (xdc_Bits16)0x801a;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C = ((CT__ti_sysbios_knl_Idle_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__startupDoneFxn ti_sysbios_knl_Idle_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Idle_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C = 0;

/* funcList__C */
__FAR__ const CT__ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__C = {2, ((__T1_ti_sysbios_knl_Idle_funcList*)ti_sysbios_knl_Idle_funcList__A)};


/*
 * ======== ti.sysbios.knl.Intrinsics INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C = ((CT__ti_sysbios_knl_Intrinsics_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C = (xdc_Bits16)0x801b;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Queue_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Queue_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V = {
    {&ti_sysbios_knl_Queue_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Queue_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C = ((CT__ti_sysbios_knl_Queue_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C = ((CT__ti_sysbios_knl_Queue_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C = ((CT__ti_sysbios_knl_Queue_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C = (xdc_Bits16)0x801d;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C = ((CT__ti_sysbios_knl_Queue_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__startupDoneFxn ti_sysbios_knl_Queue_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Queue_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__count ti_sysbios_knl_Queue_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C = sizeof(ti_sysbios_knl_Queue_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__table ti_sysbios_knl_Queue_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Semaphore INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Semaphore_Params ti_sysbios_knl_Semaphore_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Semaphore_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Semaphore_Object__PARAMS__C.__iprms, /* instance */
    0,  /* event */
    (xdc_UInt)0x1,  /* eventId */
    ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V = {
    {&ti_sysbios_knl_Semaphore_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Semaphore_Module__root__V.link},  /* link.prev */
    768,  /* mask */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C = (xdc_Bits32)0x390;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C = ((CT__ti_sysbios_knl_Semaphore_Module__diagsMask)((void*)&ti_sysbios_knl_Semaphore_Module__root__V.mask));

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C = ((CT__ti_sysbios_knl_Semaphore_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C = (xdc_Bits16)0x801e;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_runtime_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C = sizeof(ti_sysbios_knl_Semaphore_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C = 0;

/* LM_post__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C = (((xdc_runtime_Log_Event)4044) << 16 | 768);

/* LM_pend__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C = (((xdc_runtime_Log_Event)4074) << 16 | 768);

/* A_noEvents__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C = (((xdc_runtime_Assert_Id)756) << 16 | 16);

/* A_invTimeout__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C = (((xdc_runtime_Assert_Id)811) << 16 | 16);

/* A_badContext__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C = (((xdc_runtime_Assert_Id)635) << 16 | 16);

/* supportsEvents__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C = 0;

/* eventPost__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__C = ((CT__ti_sysbios_knl_Semaphore_eventPost)0);

/* eventSync__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__C = ((CT__ti_sysbios_knl_Semaphore_eventSync)0);


/*
 * ======== ti.sysbios.knl.Swi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Swi_Params ti_sysbios_knl_Swi_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Swi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Swi_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_UInt)(-0x0 - 1),  /* priority */
    (xdc_UInt)0x0,  /* trigger */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V = {
    {&ti_sysbios_knl_Swi_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Swi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_workFunc__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        (xdc_UInt)0xf,  /* priority */
        (xdc_UInt)0x8000,  /* mask */
        0,  /* posted */
        (xdc_UInt)0x0,  /* initTrigger */
        (xdc_UInt)0x0,  /* trigger */
        (ti_sysbios_knl_Queue_Handle)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15],  /* readyQ */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    (xdc_UInt)0x0,  /* curTrigger */
    0,  /* curSwi */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Swi_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* constructedSwis */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C = ((CT__ti_sysbios_knl_Swi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C = ((CT__ti_sysbios_knl_Swi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C = ((CT__ti_sysbios_knl_Swi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C = (xdc_Bits16)0x801f;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C = ((CT__ti_sysbios_knl_Swi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__startupDoneFxn ti_sysbios_knl_Swi_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Swi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C = sizeof(ti_sysbios_knl_Swi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C = ti_sysbios_knl_Swi_Object__table__V;

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C = (((xdc_runtime_Log_Event)4117) << 16 | 768);

/* LD_end__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C = (((xdc_runtime_Log_Event)4164) << 16 | 512);

/* LM_post__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C = (((xdc_runtime_Log_Event)4182) << 16 | 768);

/* A_swiDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C = (((xdc_runtime_Assert_Id)876) << 16 | 16);

/* A_badPriority__C */
__FAR__ const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C = (((xdc_runtime_Assert_Id)933) << 16 | 16);

/* numPriorities__C */
__FAR__ const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C = (xdc_UInt)0x10;

/* hooks__C */
__FAR__ const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C = {0, 0};

/* taskDisable__C */
__FAR__ const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C = ((CT__ti_sysbios_knl_Swi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestore__C */
__FAR__ const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C = ((CT__ti_sysbios_knl_Swi_taskRestore)((xdc_Fxn)ti_sysbios_knl_Task_restore__E));

/* numConstructedSwis__C */
__FAR__ const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.knl.Task INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Task_Params ti_sysbios_knl_Task_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Task_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Task_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_Int)0x1,  /* priority */
    ((xdc_Ptr)0),  /* stack */
    (xdc_SizeT)0x0,  /* stackSize */
    0,  /* stackHeap */
    ((xdc_Ptr)0),  /* env */
    1,  /* vitalTaskFlag */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048];

/* --> ti_sysbios_knl_Task_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_0_hookEnv__A[2];

/* --> ti_sysbios_knl_Task_Instance_State_1_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048];

/* --> ti_sysbios_knl_Task_Instance_State_1_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_1_hookEnv__A[2];

/* Module__root__V */
ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V = {
    {&ti_sysbios_knl_Task_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Task_Module__root__V.link},  /* link.prev */
    768,  /* mask */
};

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[2] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x1,  /* priority */
        (xdc_UInt)0x2,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_READY,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x800,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)UartTask)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_hookEnv__A),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_runtime_Text_CordAddr)(xdc_runtime_Text_charTab__A+7474) /* __name */
    },
    {/* instance#1 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[1].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[1].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x0,  /* priority */
        (xdc_UInt)0x1,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_READY,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x800,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_1_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Idle_loop__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)ti_sysbios_knl_Task_Instance_State_1_hookEnv__A),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_runtime_Text_CordAddr)(xdc_runtime_Text_charTab__A+7480) /* __name */
    },
};

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    0,  /* workFlag */
    (xdc_UInt)0x2,  /* vitalTasks */
    0,  /* curTask */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_readyQ__A),  /* readyQ */
    (ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[1],  /* idleTask */
    ((void*)0),  /* constructedTasks */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_inactiveQ */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_terminatedQ */
};

/* --> ti_sysbios_knl_Task_hooks__A */
const __T1_ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__A[2] = {
    {
        ((xdc_Void(*)(xdc_Int))0),  /* registerFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle,xdc_runtime_Error_Block*))0),  /* createFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* readyFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle,ti_sysbios_knl_Task_Handle))((xdc_Fxn)ti_sysbios_knl_Task_checkStacks)),  /* switchFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* exitFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* deleteFxn */
    },  /* [0] */
    {
        ((xdc_Void(*)(xdc_Int))((xdc_Fxn)ti_sysbios_utils_Load_taskRegHook__E)),  /* registerFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle,xdc_runtime_Error_Block*))((xdc_Fxn)ti_sysbios_utils_Load_taskCreateHook__E)),  /* createFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* readyFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle,ti_sysbios_knl_Task_Handle))((xdc_Fxn)ti_sysbios_utils_Load_taskSwitchHook__E)),  /* switchFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* exitFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))((xdc_Fxn)ti_sysbios_utils_Load_taskDeleteHook__E)),  /* deleteFxn */
    },  /* [1] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C = (xdc_Bits32)0x390;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C = ((CT__ti_sysbios_knl_Task_Module__diagsMask)((void*)&ti_sysbios_knl_Task_Module__root__V.mask));

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C = ((CT__ti_sysbios_knl_Task_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C = ((CT__ti_sysbios_knl_Task_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C = (xdc_Bits16)0x8020;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C = ((CT__ti_sysbios_knl_Task_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_runtime_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn0)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn1)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn2)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn4)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn8)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__startupDoneFxn ti_sysbios_knl_Task_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Task_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C = 2;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C = sizeof(ti_sysbios_knl_Task_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C = ti_sysbios_knl_Task_Object__table__V;

/* LM_switch__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C = (((xdc_runtime_Log_Event)4222) << 16 | 768);

/* LM_sleep__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C = (((xdc_runtime_Log_Event)4290) << 16 | 768);

/* LD_ready__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C = (((xdc_runtime_Log_Event)4335) << 16 | 512);

/* LD_block__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C = (((xdc_runtime_Log_Event)4376) << 16 | 512);

/* LM_yield__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C = (((xdc_runtime_Log_Event)4408) << 16 | 768);

/* LM_setPri__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C = (((xdc_runtime_Log_Event)4456) << 16 | 768);

/* LD_exit__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C = (((xdc_runtime_Log_Event)4512) << 16 | 512);

/* E_stackOverflow__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C = (((xdc_runtime_Error_Id)2900) << 16 | 0);

/* E_spOutOfBounds__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C = (((xdc_runtime_Error_Id)2943) << 16 | 0);

/* A_badThreadType__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C = (((xdc_runtime_Assert_Id)982) << 16 | 16);

/* A_badTaskState__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C = (((xdc_runtime_Assert_Id)1051) << 16 | 16);

/* A_noPendElem__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C = (((xdc_runtime_Assert_Id)1105) << 16 | 16);

/* A_taskDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C = (((xdc_runtime_Assert_Id)1159) << 16 | 16);

/* A_badPriority__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C = (((xdc_runtime_Assert_Id)1222) << 16 | 16);

/* A_badTimeout__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C = (((xdc_runtime_Assert_Id)1272) << 16 | 16);

/* numPriorities__C */
__FAR__ const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C = (xdc_UInt)0x10;

/* defaultStackSize__C */
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C = (xdc_SizeT)0x800;

/* defaultStackHeap__C */
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C = 0;

/* allBlockedFunc__C */
__FAR__ const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C = ((CT__ti_sysbios_knl_Task_allBlockedFunc)((xdc_Fxn)ti_sysbios_knl_Task_allBlockedFunction__I));

/* initStackFlag__C */
__FAR__ const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C = 1;

/* deleteTerminatedTasks__C */
__FAR__ const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C = 0;

/* hooks__C */
__FAR__ const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C = {2, ((__T1_ti_sysbios_knl_Task_hooks*)ti_sysbios_knl_Task_hooks__A)};

/* numConstructedTasks__C */
__FAR__ const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.utils.Load INITIALIZERS ========
 */

/* Module__root__V */
ti_sysbios_utils_Load_Module__ ti_sysbios_utils_Load_Module__root__V = {
    2048,  /* mask */
};

/* Module__state__V */
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V = {
    (xdc_Int)0x0,  /* taskHId */
    (xdc_UInt32)0x0,  /* taskStartTime */
    (xdc_UInt32)0x0,  /* timeElapsed */
    0,  /* runningTask */
    0,  /* firstSwitchDone */
    (xdc_UInt32)0x0,  /* swiStartTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.swiEnv.qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.swiEnv.qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0,  /* totalTimeElapsed */
        (xdc_UInt32)0x0,  /* totalTime */
        (xdc_UInt32)0x0,  /* nextTotalTime */
        (xdc_UInt32)0x0,  /* timeOfLastUpdate */
        ((xdc_Ptr)0),  /* threadHandle */
    },  /* swiEnv */
    (xdc_UInt32)0x0,  /* swiCnt */
    (xdc_UInt32)0x0,  /* hwiStartTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.hwiEnv.qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.hwiEnv.qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0,  /* totalTimeElapsed */
        (xdc_UInt32)0x0,  /* totalTime */
        (xdc_UInt32)0x0,  /* nextTotalTime */
        (xdc_UInt32)0x0,  /* timeOfLastUpdate */
        ((xdc_Ptr)0),  /* threadHandle */
    },  /* hwiEnv */
    (xdc_UInt32)0x0,  /* hwiCnt */
    (xdc_UInt32)0x0,  /* timeSlotCnt */
    (xdc_UInt32)0xffffffff,  /* minLoop */
    (xdc_UInt32)0x0,  /* minIdle */
    (xdc_UInt32)0x0,  /* t0 */
    (xdc_UInt32)0x0,  /* idleCnt */
    (xdc_UInt32)0x0,  /* cpuLoad */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.Object_field_taskList.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.Object_field_taskList.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_taskList */
    {
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.Object_field_gate.Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.Object_field_gate.Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },  /* Object_field_gate */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsEnabled ti_sysbios_utils_Load_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsIncluded ti_sysbios_utils_Load_Module__diagsIncluded__C = (xdc_Bits32)0x890;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsMask ti_sysbios_utils_Load_Module__diagsMask__C = ((CT__ti_sysbios_utils_Load_Module__diagsMask)((void*)&ti_sysbios_utils_Load_Module__root__V.mask));

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__gateObj ti_sysbios_utils_Load_Module__gateObj__C = ((CT__ti_sysbios_utils_Load_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__gatePrms ti_sysbios_utils_Load_Module__gatePrms__C = ((CT__ti_sysbios_utils_Load_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__id ti_sysbios_utils_Load_Module__id__C = (xdc_Bits16)0x8030;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerDefined ti_sysbios_utils_Load_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerObj ti_sysbios_utils_Load_Module__loggerObj__C = ((CT__ti_sysbios_utils_Load_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_runtime_LoggerStopMode_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn0 ti_sysbios_utils_Load_Module__loggerFxn0__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn0)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn1 ti_sysbios_utils_Load_Module__loggerFxn1__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn1)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn2 ti_sysbios_utils_Load_Module__loggerFxn2__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn2)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn4 ti_sysbios_utils_Load_Module__loggerFxn4__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn4)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn8 ti_sysbios_utils_Load_Module__loggerFxn8__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn8)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__startupDoneFxn ti_sysbios_utils_Load_Module__startupDoneFxn__C = ((CT__ti_sysbios_utils_Load_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_utils_Load_Object__count ti_sysbios_utils_Load_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_utils_Load_Object__heap ti_sysbios_utils_Load_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_utils_Load_Object__sizeof ti_sysbios_utils_Load_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_utils_Load_Object__table ti_sysbios_utils_Load_Object__table__C = 0;

/* LS_cpuLoad__C */
__FAR__ const CT__ti_sysbios_utils_Load_LS_cpuLoad ti_sysbios_utils_Load_LS_cpuLoad__C = (((xdc_runtime_Log_Event)4631) << 16 | 2048);

/* LS_hwiLoad__C */
__FAR__ const CT__ti_sysbios_utils_Load_LS_hwiLoad ti_sysbios_utils_Load_LS_hwiLoad__C = (((xdc_runtime_Log_Event)4648) << 16 | 2048);

/* LS_swiLoad__C */
__FAR__ const CT__ti_sysbios_utils_Load_LS_swiLoad ti_sysbios_utils_Load_LS_swiLoad__C = (((xdc_runtime_Log_Event)4666) << 16 | 2048);

/* LS_taskLoad__C */
__FAR__ const CT__ti_sysbios_utils_Load_LS_taskLoad ti_sysbios_utils_Load_LS_taskLoad__C = (((xdc_runtime_Log_Event)4684) << 16 | 2048);

/* postUpdate__C */
__FAR__ const CT__ti_sysbios_utils_Load_postUpdate ti_sysbios_utils_Load_postUpdate__C = ((CT__ti_sysbios_utils_Load_postUpdate)0);

/* updateInIdle__C */
__FAR__ const CT__ti_sysbios_utils_Load_updateInIdle ti_sysbios_utils_Load_updateInIdle__C = 1;

/* windowInMs__C */
__FAR__ const CT__ti_sysbios_utils_Load_windowInMs ti_sysbios_utils_Load_windowInMs__C = (xdc_UInt)0x1f4;

/* hwiEnabled__C */
__FAR__ const CT__ti_sysbios_utils_Load_hwiEnabled ti_sysbios_utils_Load_hwiEnabled__C = 0;

/* swiEnabled__C */
__FAR__ const CT__ti_sysbios_utils_Load_swiEnabled ti_sysbios_utils_Load_swiEnabled__C = 0;

/* taskEnabled__C */
__FAR__ const CT__ti_sysbios_utils_Load_taskEnabled ti_sysbios_utils_Load_taskEnabled__C = 1;

/* autoAddTasks__C */
__FAR__ const CT__ti_sysbios_utils_Load_autoAddTasks ti_sysbios_utils_Load_autoAddTasks__C = 1;


/*
 * ======== ti.uia.events.DvtTypes INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsEnabled ti_uia_events_DvtTypes_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsIncluded ti_uia_events_DvtTypes_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsMask ti_uia_events_DvtTypes_Module__diagsMask__C = ((CT__ti_uia_events_DvtTypes_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__gateObj ti_uia_events_DvtTypes_Module__gateObj__C = ((CT__ti_uia_events_DvtTypes_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__gatePrms ti_uia_events_DvtTypes_Module__gatePrms__C = ((CT__ti_uia_events_DvtTypes_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__id ti_uia_events_DvtTypes_Module__id__C = (xdc_Bits16)0x8033;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerDefined ti_uia_events_DvtTypes_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerObj ti_uia_events_DvtTypes_Module__loggerObj__C = ((CT__ti_uia_events_DvtTypes_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn0 ti_uia_events_DvtTypes_Module__loggerFxn0__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn1 ti_uia_events_DvtTypes_Module__loggerFxn1__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn2 ti_uia_events_DvtTypes_Module__loggerFxn2__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn4 ti_uia_events_DvtTypes_Module__loggerFxn4__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn8 ti_uia_events_DvtTypes_Module__loggerFxn8__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__startupDoneFxn ti_uia_events_DvtTypes_Module__startupDoneFxn__C = ((CT__ti_uia_events_DvtTypes_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Object__count ti_uia_events_DvtTypes_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Object__heap ti_uia_events_DvtTypes_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Object__sizeof ti_uia_events_DvtTypes_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Object__table ti_uia_events_DvtTypes_Object__table__C = 0;


/*
 * ======== ti.uia.events.UIABenchmark INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__diagsEnabled ti_uia_events_UIABenchmark_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__diagsIncluded ti_uia_events_UIABenchmark_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__diagsMask ti_uia_events_UIABenchmark_Module__diagsMask__C = ((CT__ti_uia_events_UIABenchmark_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__gateObj ti_uia_events_UIABenchmark_Module__gateObj__C = ((CT__ti_uia_events_UIABenchmark_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__gatePrms ti_uia_events_UIABenchmark_Module__gatePrms__C = ((CT__ti_uia_events_UIABenchmark_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__id ti_uia_events_UIABenchmark_Module__id__C = (xdc_Bits16)0x8034;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__loggerDefined ti_uia_events_UIABenchmark_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__loggerObj ti_uia_events_UIABenchmark_Module__loggerObj__C = ((CT__ti_uia_events_UIABenchmark_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__loggerFxn0 ti_uia_events_UIABenchmark_Module__loggerFxn0__C = ((CT__ti_uia_events_UIABenchmark_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__loggerFxn1 ti_uia_events_UIABenchmark_Module__loggerFxn1__C = ((CT__ti_uia_events_UIABenchmark_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__loggerFxn2 ti_uia_events_UIABenchmark_Module__loggerFxn2__C = ((CT__ti_uia_events_UIABenchmark_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__loggerFxn4 ti_uia_events_UIABenchmark_Module__loggerFxn4__C = ((CT__ti_uia_events_UIABenchmark_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__loggerFxn8 ti_uia_events_UIABenchmark_Module__loggerFxn8__C = ((CT__ti_uia_events_UIABenchmark_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__startupDoneFxn ti_uia_events_UIABenchmark_Module__startupDoneFxn__C = ((CT__ti_uia_events_UIABenchmark_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Object__count ti_uia_events_UIABenchmark_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Object__heap ti_uia_events_UIABenchmark_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Object__sizeof ti_uia_events_UIABenchmark_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Object__table ti_uia_events_UIABenchmark_Object__table__C = 0;

/* start__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_start ti_uia_events_UIABenchmark_start__C = (((xdc_runtime_Log_Event)4713) << 16 | 32768);

/* stop__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_stop ti_uia_events_UIABenchmark_stop__C = (((xdc_runtime_Log_Event)4725) << 16 | 32768);

/* startInstance__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_startInstance ti_uia_events_UIABenchmark_startInstance__C = (((xdc_runtime_Log_Event)4736) << 16 | 32768);

/* stopInstance__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_stopInstance ti_uia_events_UIABenchmark_stopInstance__C = (((xdc_runtime_Log_Event)4756) << 16 | 32768);

/* startInstanceWithAdrs__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_startInstanceWithAdrs ti_uia_events_UIABenchmark_startInstanceWithAdrs__C = (((xdc_runtime_Log_Event)4775) << 16 | 32768);

/* stopInstanceWithAdrs__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_stopInstanceWithAdrs ti_uia_events_UIABenchmark_stopInstanceWithAdrs__C = (((xdc_runtime_Log_Event)4802) << 16 | 32768);

/* startInstanceWithStr__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_startInstanceWithStr ti_uia_events_UIABenchmark_startInstanceWithStr__C = (((xdc_runtime_Log_Event)4828) << 16 | 32768);

/* stopInstanceWithStr__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_stopInstanceWithStr ti_uia_events_UIABenchmark_stopInstanceWithStr__C = (((xdc_runtime_Log_Event)4854) << 16 | 32768);


/*
 * ======== ti.uia.events.UIAErr INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsEnabled ti_uia_events_UIAErr_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsIncluded ti_uia_events_UIAErr_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsMask ti_uia_events_UIAErr_Module__diagsMask__C = ((CT__ti_uia_events_UIAErr_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__gateObj ti_uia_events_UIAErr_Module__gateObj__C = ((CT__ti_uia_events_UIAErr_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__gatePrms ti_uia_events_UIAErr_Module__gatePrms__C = ((CT__ti_uia_events_UIAErr_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__id ti_uia_events_UIAErr_Module__id__C = (xdc_Bits16)0x8035;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerDefined ti_uia_events_UIAErr_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerObj ti_uia_events_UIAErr_Module__loggerObj__C = ((CT__ti_uia_events_UIAErr_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn0 ti_uia_events_UIAErr_Module__loggerFxn0__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn1 ti_uia_events_UIAErr_Module__loggerFxn1__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn2 ti_uia_events_UIAErr_Module__loggerFxn2__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn4 ti_uia_events_UIAErr_Module__loggerFxn4__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn8 ti_uia_events_UIAErr_Module__loggerFxn8__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__startupDoneFxn ti_uia_events_UIAErr_Module__startupDoneFxn__C = ((CT__ti_uia_events_UIAErr_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_events_UIAErr_Object__count ti_uia_events_UIAErr_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_uia_events_UIAErr_Object__heap ti_uia_events_UIAErr_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_events_UIAErr_Object__sizeof ti_uia_events_UIAErr_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_uia_events_UIAErr_Object__table ti_uia_events_UIAErr_Object__table__C = 0;

/* error__C */
__FAR__ const CT__ti_uia_events_UIAErr_error ti_uia_events_UIAErr_error__C = (((xdc_runtime_Log_Event)4879) << 16 | 192);

/* errorWithStr__C */
__FAR__ const CT__ti_uia_events_UIAErr_errorWithStr ti_uia_events_UIAErr_errorWithStr__C = (((xdc_runtime_Log_Event)4901) << 16 | 192);

/* hwError__C */
__FAR__ const CT__ti_uia_events_UIAErr_hwError ti_uia_events_UIAErr_hwError__C = (((xdc_runtime_Log_Event)4928) << 16 | 192);

/* hwErrorWithStr__C */
__FAR__ const CT__ti_uia_events_UIAErr_hwErrorWithStr ti_uia_events_UIAErr_hwErrorWithStr__C = (((xdc_runtime_Log_Event)4953) << 16 | 192);

/* fatal__C */
__FAR__ const CT__ti_uia_events_UIAErr_fatal ti_uia_events_UIAErr_fatal__C = (((xdc_runtime_Log_Event)4983) << 16 | 128);

/* fatalWithStr__C */
__FAR__ const CT__ti_uia_events_UIAErr_fatalWithStr ti_uia_events_UIAErr_fatalWithStr__C = (((xdc_runtime_Log_Event)5011) << 16 | 128);

/* critical__C */
__FAR__ const CT__ti_uia_events_UIAErr_critical ti_uia_events_UIAErr_critical__C = (((xdc_runtime_Log_Event)5044) << 16 | 160);

/* criticalWithStr__C */
__FAR__ const CT__ti_uia_events_UIAErr_criticalWithStr ti_uia_events_UIAErr_criticalWithStr__C = (((xdc_runtime_Log_Event)5075) << 16 | 160);

/* exception__C */
__FAR__ const CT__ti_uia_events_UIAErr_exception ti_uia_events_UIAErr_exception__C = (((xdc_runtime_Log_Event)5111) << 16 | 192);

/* uncaughtException__C */
__FAR__ const CT__ti_uia_events_UIAErr_uncaughtException ti_uia_events_UIAErr_uncaughtException__C = (((xdc_runtime_Log_Event)5136) << 16 | 192);

/* nullPointerException__C */
__FAR__ const CT__ti_uia_events_UIAErr_nullPointerException ti_uia_events_UIAErr_nullPointerException__C = (((xdc_runtime_Log_Event)5170) << 16 | 192);

/* unexpectedInterrupt__C */
__FAR__ const CT__ti_uia_events_UIAErr_unexpectedInterrupt ti_uia_events_UIAErr_unexpectedInterrupt__C = (((xdc_runtime_Log_Event)5208) << 16 | 192);

/* memoryAccessFault__C */
__FAR__ const CT__ti_uia_events_UIAErr_memoryAccessFault ti_uia_events_UIAErr_memoryAccessFault__C = (((xdc_runtime_Log_Event)5244) << 16 | 192);

/* securityException__C */
__FAR__ const CT__ti_uia_events_UIAErr_securityException ti_uia_events_UIAErr_securityException__C = (((xdc_runtime_Log_Event)5290) << 16 | 192);

/* divisionByZero__C */
__FAR__ const CT__ti_uia_events_UIAErr_divisionByZero ti_uia_events_UIAErr_divisionByZero__C = (((xdc_runtime_Log_Event)5324) << 16 | 192);

/* overflowException__C */
__FAR__ const CT__ti_uia_events_UIAErr_overflowException ti_uia_events_UIAErr_overflowException__C = (((xdc_runtime_Log_Event)5356) << 16 | 192);

/* indexOutOfRange__C */
__FAR__ const CT__ti_uia_events_UIAErr_indexOutOfRange ti_uia_events_UIAErr_indexOutOfRange__C = (((xdc_runtime_Log_Event)5390) << 16 | 192);

/* notImplemented__C */
__FAR__ const CT__ti_uia_events_UIAErr_notImplemented ti_uia_events_UIAErr_notImplemented__C = (((xdc_runtime_Log_Event)5436) << 16 | 192);

/* stackOverflow__C */
__FAR__ const CT__ti_uia_events_UIAErr_stackOverflow ti_uia_events_UIAErr_stackOverflow__C = (((xdc_runtime_Log_Event)5501) << 16 | 160);

/* illegalInstruction__C */
__FAR__ const CT__ti_uia_events_UIAErr_illegalInstruction ti_uia_events_UIAErr_illegalInstruction__C = (((xdc_runtime_Log_Event)5540) << 16 | 192);

/* entryPointNotFound__C */
__FAR__ const CT__ti_uia_events_UIAErr_entryPointNotFound ti_uia_events_UIAErr_entryPointNotFound__C = (((xdc_runtime_Log_Event)5584) << 16 | 192);

/* moduleNotFound__C */
__FAR__ const CT__ti_uia_events_UIAErr_moduleNotFound ti_uia_events_UIAErr_moduleNotFound__C = (((xdc_runtime_Log_Event)5621) << 16 | 192);

/* floatingPointError__C */
__FAR__ const CT__ti_uia_events_UIAErr_floatingPointError ti_uia_events_UIAErr_floatingPointError__C = (((xdc_runtime_Log_Event)5670) << 16 | 192);

/* invalidParameter__C */
__FAR__ const CT__ti_uia_events_UIAErr_invalidParameter ti_uia_events_UIAErr_invalidParameter__C = (((xdc_runtime_Log_Event)5706) << 16 | 192);


/*
 * ======== ti.uia.events.UIAEvt INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsEnabled ti_uia_events_UIAEvt_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsIncluded ti_uia_events_UIAEvt_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsMask ti_uia_events_UIAEvt_Module__diagsMask__C = ((CT__ti_uia_events_UIAEvt_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__gateObj ti_uia_events_UIAEvt_Module__gateObj__C = ((CT__ti_uia_events_UIAEvt_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__gatePrms ti_uia_events_UIAEvt_Module__gatePrms__C = ((CT__ti_uia_events_UIAEvt_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__id ti_uia_events_UIAEvt_Module__id__C = (xdc_Bits16)0x8036;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerDefined ti_uia_events_UIAEvt_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerObj ti_uia_events_UIAEvt_Module__loggerObj__C = ((CT__ti_uia_events_UIAEvt_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn0 ti_uia_events_UIAEvt_Module__loggerFxn0__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn1 ti_uia_events_UIAEvt_Module__loggerFxn1__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn2 ti_uia_events_UIAEvt_Module__loggerFxn2__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn4 ti_uia_events_UIAEvt_Module__loggerFxn4__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn8 ti_uia_events_UIAEvt_Module__loggerFxn8__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__startupDoneFxn ti_uia_events_UIAEvt_Module__startupDoneFxn__C = ((CT__ti_uia_events_UIAEvt_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Object__count ti_uia_events_UIAEvt_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Object__heap ti_uia_events_UIAEvt_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Object__sizeof ti_uia_events_UIAEvt_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Object__table ti_uia_events_UIAEvt_Object__table__C = 0;

/* warning__C */
__FAR__ const CT__ti_uia_events_UIAEvt_warning ti_uia_events_UIAEvt_warning__C = (((xdc_runtime_Log_Event)5769) << 16 | 224);

/* warningWithStr__C */
__FAR__ const CT__ti_uia_events_UIAEvt_warningWithStr ti_uia_events_UIAEvt_warningWithStr__C = (((xdc_runtime_Log_Event)5793) << 16 | 224);

/* info__C */
__FAR__ const CT__ti_uia_events_UIAEvt_info ti_uia_events_UIAEvt_info__C = (((xdc_runtime_Log_Event)5822) << 16 | 16384);

/* infoWithStr__C */
__FAR__ const CT__ti_uia_events_UIAEvt_infoWithStr ti_uia_events_UIAEvt_infoWithStr__C = (((xdc_runtime_Log_Event)5844) << 16 | 16384);

/* detail__C */
__FAR__ const CT__ti_uia_events_UIAEvt_detail ti_uia_events_UIAEvt_detail__C = (((xdc_runtime_Log_Event)5871) << 16 | 16480);

/* detailWithStr__C */
__FAR__ const CT__ti_uia_events_UIAEvt_detailWithStr ti_uia_events_UIAEvt_detailWithStr__C = (((xdc_runtime_Log_Event)5894) << 16 | 16480);

/* intWithKey__C */
__FAR__ const CT__ti_uia_events_UIAEvt_intWithKey ti_uia_events_UIAEvt_intWithKey__C = (((xdc_runtime_Log_Event)5923) << 16 | 32768);


/*
 * ======== ti.uia.events.UIARoundtrip INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__diagsEnabled ti_uia_events_UIARoundtrip_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__diagsIncluded ti_uia_events_UIARoundtrip_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__diagsMask ti_uia_events_UIARoundtrip_Module__diagsMask__C = ((CT__ti_uia_events_UIARoundtrip_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__gateObj ti_uia_events_UIARoundtrip_Module__gateObj__C = ((CT__ti_uia_events_UIARoundtrip_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__gatePrms ti_uia_events_UIARoundtrip_Module__gatePrms__C = ((CT__ti_uia_events_UIARoundtrip_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__id ti_uia_events_UIARoundtrip_Module__id__C = (xdc_Bits16)0x8037;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__loggerDefined ti_uia_events_UIARoundtrip_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__loggerObj ti_uia_events_UIARoundtrip_Module__loggerObj__C = ((CT__ti_uia_events_UIARoundtrip_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__loggerFxn0 ti_uia_events_UIARoundtrip_Module__loggerFxn0__C = ((CT__ti_uia_events_UIARoundtrip_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__loggerFxn1 ti_uia_events_UIARoundtrip_Module__loggerFxn1__C = ((CT__ti_uia_events_UIARoundtrip_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__loggerFxn2 ti_uia_events_UIARoundtrip_Module__loggerFxn2__C = ((CT__ti_uia_events_UIARoundtrip_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__loggerFxn4 ti_uia_events_UIARoundtrip_Module__loggerFxn4__C = ((CT__ti_uia_events_UIARoundtrip_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__loggerFxn8 ti_uia_events_UIARoundtrip_Module__loggerFxn8__C = ((CT__ti_uia_events_UIARoundtrip_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__startupDoneFxn ti_uia_events_UIARoundtrip_Module__startupDoneFxn__C = ((CT__ti_uia_events_UIARoundtrip_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Object__count ti_uia_events_UIARoundtrip_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Object__heap ti_uia_events_UIARoundtrip_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Object__sizeof ti_uia_events_UIARoundtrip_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Object__table ti_uia_events_UIARoundtrip_Object__table__C = 0;

/* start__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_start ti_uia_events_UIARoundtrip_start__C = (((xdc_runtime_Log_Event)5957) << 16 | 32768);

/* stop__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_stop ti_uia_events_UIARoundtrip_stop__C = (((xdc_runtime_Log_Event)5978) << 16 | 32768);

/* startInstance__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_startInstance ti_uia_events_UIARoundtrip_startInstance__C = (((xdc_runtime_Log_Event)5998) << 16 | 32768);

/* stopInstance__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_stopInstance ti_uia_events_UIARoundtrip_stopInstance__C = (((xdc_runtime_Log_Event)6027) << 16 | 32768);

/* startInstanceWithAdrs__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_startInstanceWithAdrs ti_uia_events_UIARoundtrip_startInstanceWithAdrs__C = (((xdc_runtime_Log_Event)6055) << 16 | 32768);

/* stopInstanceWithAdrs__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_stopInstanceWithAdrs ti_uia_events_UIARoundtrip_stopInstanceWithAdrs__C = (((xdc_runtime_Log_Event)6092) << 16 | 32768);

/* startInstanceWithStr__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_startInstanceWithStr ti_uia_events_UIARoundtrip_startInstanceWithStr__C = (((xdc_runtime_Log_Event)6128) << 16 | 32768);

/* stopInstanceWithStr__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_stopInstanceWithStr ti_uia_events_UIARoundtrip_stopInstanceWithStr__C = (((xdc_runtime_Log_Event)6164) << 16 | 32768);


/*
 * ======== ti.uia.events.UIAStatistic INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__diagsEnabled ti_uia_events_UIAStatistic_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__diagsIncluded ti_uia_events_UIAStatistic_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__diagsMask ti_uia_events_UIAStatistic_Module__diagsMask__C = ((CT__ti_uia_events_UIAStatistic_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__gateObj ti_uia_events_UIAStatistic_Module__gateObj__C = ((CT__ti_uia_events_UIAStatistic_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__gatePrms ti_uia_events_UIAStatistic_Module__gatePrms__C = ((CT__ti_uia_events_UIAStatistic_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__id ti_uia_events_UIAStatistic_Module__id__C = (xdc_Bits16)0x8038;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__loggerDefined ti_uia_events_UIAStatistic_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__loggerObj ti_uia_events_UIAStatistic_Module__loggerObj__C = ((CT__ti_uia_events_UIAStatistic_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__loggerFxn0 ti_uia_events_UIAStatistic_Module__loggerFxn0__C = ((CT__ti_uia_events_UIAStatistic_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__loggerFxn1 ti_uia_events_UIAStatistic_Module__loggerFxn1__C = ((CT__ti_uia_events_UIAStatistic_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__loggerFxn2 ti_uia_events_UIAStatistic_Module__loggerFxn2__C = ((CT__ti_uia_events_UIAStatistic_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__loggerFxn4 ti_uia_events_UIAStatistic_Module__loggerFxn4__C = ((CT__ti_uia_events_UIAStatistic_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__loggerFxn8 ti_uia_events_UIAStatistic_Module__loggerFxn8__C = ((CT__ti_uia_events_UIAStatistic_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__startupDoneFxn ti_uia_events_UIAStatistic_Module__startupDoneFxn__C = ((CT__ti_uia_events_UIAStatistic_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Object__count ti_uia_events_UIAStatistic_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Object__heap ti_uia_events_UIAStatistic_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Object__sizeof ti_uia_events_UIAStatistic_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Object__table ti_uia_events_UIAStatistic_Object__table__C = 0;

/* cpuLoad__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_cpuLoad ti_uia_events_UIAStatistic_cpuLoad__C = (((xdc_runtime_Log_Event)6199) << 16 | 32768);

/* cpuLoadByInstance__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_cpuLoadByInstance ti_uia_events_UIAStatistic_cpuLoadByInstance__C = (((xdc_runtime_Log_Event)6222) << 16 | 32768);

/* bytesProcessed__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_bytesProcessed ti_uia_events_UIAStatistic_bytesProcessed__C = (((xdc_runtime_Log_Event)6272) << 16 | 32768);

/* bytesProcessedByInstance__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_bytesProcessedByInstance ti_uia_events_UIAStatistic_bytesProcessedByInstance__C = (((xdc_runtime_Log_Event)6309) << 16 | 32768);

/* wordsProcessed__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_wordsProcessed ti_uia_events_UIAStatistic_wordsProcessed__C = (((xdc_runtime_Log_Event)6364) << 16 | 32768);

/* wordsProcessedByInstance__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_wordsProcessedByInstance ti_uia_events_UIAStatistic_wordsProcessedByInstance__C = (((xdc_runtime_Log_Event)6401) << 16 | 32768);

/* freeBytes__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_freeBytes ti_uia_events_UIAStatistic_freeBytes__C = (((xdc_runtime_Log_Event)6456) << 16 | 32768);


/*
 * ======== ti.uia.events.UIASync INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__diagsEnabled ti_uia_events_UIASync_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__diagsIncluded ti_uia_events_UIASync_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__diagsMask ti_uia_events_UIASync_Module__diagsMask__C = ((CT__ti_uia_events_UIASync_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__gateObj ti_uia_events_UIASync_Module__gateObj__C = ((CT__ti_uia_events_UIASync_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__gatePrms ti_uia_events_UIASync_Module__gatePrms__C = ((CT__ti_uia_events_UIASync_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__id ti_uia_events_UIASync_Module__id__C = (xdc_Bits16)0x8039;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__loggerDefined ti_uia_events_UIASync_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__loggerObj ti_uia_events_UIASync_Module__loggerObj__C = ((CT__ti_uia_events_UIASync_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__loggerFxn0 ti_uia_events_UIASync_Module__loggerFxn0__C = ((CT__ti_uia_events_UIASync_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__loggerFxn1 ti_uia_events_UIASync_Module__loggerFxn1__C = ((CT__ti_uia_events_UIASync_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__loggerFxn2 ti_uia_events_UIASync_Module__loggerFxn2__C = ((CT__ti_uia_events_UIASync_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__loggerFxn4 ti_uia_events_UIASync_Module__loggerFxn4__C = ((CT__ti_uia_events_UIASync_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__loggerFxn8 ti_uia_events_UIASync_Module__loggerFxn8__C = ((CT__ti_uia_events_UIASync_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__startupDoneFxn ti_uia_events_UIASync_Module__startupDoneFxn__C = ((CT__ti_uia_events_UIASync_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_events_UIASync_Object__count ti_uia_events_UIASync_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_uia_events_UIASync_Object__heap ti_uia_events_UIASync_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_events_UIASync_Object__sizeof ti_uia_events_UIASync_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_uia_events_UIASync_Object__table ti_uia_events_UIASync_Object__table__C = 0;

/* syncPoint__C */
__FAR__ const CT__ti_uia_events_UIASync_syncPoint ti_uia_events_UIASync_syncPoint__C = (((xdc_runtime_Log_Event)6497) << 16 | 32768);

/* syncPointAfterHalt__C */
__FAR__ const CT__ti_uia_events_UIASync_syncPointAfterHalt ti_uia_events_UIASync_syncPointAfterHalt__C = (((xdc_runtime_Log_Event)6654) << 16 | 32768);

/* globalTimerFreq__C */
__FAR__ const CT__ti_uia_events_UIASync_globalTimerFreq ti_uia_events_UIASync_globalTimerFreq__C = (((xdc_runtime_Log_Event)6822) << 16 | 32768);

/* syncPointUserProvidedData__C */
__FAR__ const CT__ti_uia_events_UIASync_syncPointUserProvidedData ti_uia_events_UIASync_syncPointUserProvidedData__C = (((xdc_runtime_Log_Event)6941) << 16 | 32768);


/*
 * ======== ti.uia.runtime.LogSync INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_uia_runtime_LogSync_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_uia_runtime_LogSync_Params ti_uia_runtime_LogSync_Object__PARAMS__C = {
    sizeof (ti_uia_runtime_LogSync_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_uia_runtime_LogSync_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_uia_runtime_LogSync_Module__ ti_uia_runtime_LogSync_Module__root__V = {
    {&ti_uia_runtime_LogSync_Module__root__V.link,  /* link.next */
    &ti_uia_runtime_LogSync_Module__root__V.link},  /* link.prev */
};

/* Module__state__V */
ti_uia_runtime_LogSync_Module_State__ ti_uia_runtime_LogSync_Module__state__V = {
    (xdc_UInt32)0x0,  /* numTimesHalted */
    (xdc_UInt32)0x1,  /* serialNumber */
    1,  /* isEnabled */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__diagsEnabled ti_uia_runtime_LogSync_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__diagsIncluded ti_uia_runtime_LogSync_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__diagsMask ti_uia_runtime_LogSync_Module__diagsMask__C = ((CT__ti_uia_runtime_LogSync_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__gateObj ti_uia_runtime_LogSync_Module__gateObj__C = ((CT__ti_uia_runtime_LogSync_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__gatePrms ti_uia_runtime_LogSync_Module__gatePrms__C = ((CT__ti_uia_runtime_LogSync_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__id ti_uia_runtime_LogSync_Module__id__C = (xdc_Bits16)0x803b;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__loggerDefined ti_uia_runtime_LogSync_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__loggerObj ti_uia_runtime_LogSync_Module__loggerObj__C = ((CT__ti_uia_runtime_LogSync_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__loggerFxn0 ti_uia_runtime_LogSync_Module__loggerFxn0__C = ((CT__ti_uia_runtime_LogSync_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__loggerFxn1 ti_uia_runtime_LogSync_Module__loggerFxn1__C = ((CT__ti_uia_runtime_LogSync_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__loggerFxn2 ti_uia_runtime_LogSync_Module__loggerFxn2__C = ((CT__ti_uia_runtime_LogSync_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__loggerFxn4 ti_uia_runtime_LogSync_Module__loggerFxn4__C = ((CT__ti_uia_runtime_LogSync_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__loggerFxn8 ti_uia_runtime_LogSync_Module__loggerFxn8__C = ((CT__ti_uia_runtime_LogSync_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__startupDoneFxn ti_uia_runtime_LogSync_Module__startupDoneFxn__C = ((CT__ti_uia_runtime_LogSync_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Object__count ti_uia_runtime_LogSync_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Object__heap ti_uia_runtime_LogSync_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Object__sizeof ti_uia_runtime_LogSync_Object__sizeof__C = sizeof(ti_uia_runtime_LogSync_Object__);

/* Object__table__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Object__table ti_uia_runtime_LogSync_Object__table__C = 0;

/* injectIntoTraceFxn__C */
__FAR__ const CT__ti_uia_runtime_LogSync_injectIntoTraceFxn ti_uia_runtime_LogSync_injectIntoTraceFxn__C = ((CT__ti_uia_runtime_LogSync_injectIntoTraceFxn)0);

/* cpuTimestampCyclesPerTick__C */
__FAR__ const CT__ti_uia_runtime_LogSync_cpuTimestampCyclesPerTick ti_uia_runtime_LogSync_cpuTimestampCyclesPerTick__C = (xdc_UInt32)0x1;

/* globalTimestampCpuCyclesPerTick__C */
__FAR__ const CT__ti_uia_runtime_LogSync_globalTimestampCpuCyclesPerTick ti_uia_runtime_LogSync_globalTimestampCpuCyclesPerTick__C = (xdc_UInt32)0x0;

/* maxGlobalClockFreq__C */
__FAR__ const CT__ti_uia_runtime_LogSync_maxGlobalClockFreq ti_uia_runtime_LogSync_maxGlobalClockFreq__C = {
    (xdc_Bits32)0x0,  /* hi */
    (xdc_Bits32)0x0,  /* lo */
};


/*
 * ======== ti.uia.runtime.LogSync_CpuTimestampProxy INITIALIZERS ========
 */


/*
 * ======== ti.uia.runtime.LogSync_GlobalTimestampProxy INITIALIZERS ========
 */


/*
 * ======== ti.uia.runtime.LoggerStopMode INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_uia_runtime_LoggerStopMode_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_uia_runtime_LoggerStopMode_Params ti_uia_runtime_LoggerStopMode_Object__PARAMS__C = {
    sizeof (ti_uia_runtime_LoggerStopMode_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_uia_runtime_LoggerStopMode_Object__PARAMS__C.__iprms, /* instance */
    ti_uia_runtime_IUIATransfer_TransferType_LOSSY,  /* transferType */
    ti_uia_runtime_IUIATransfer_Priority_STANDARD,  /* priority */
    (xdc_SizeT)0x200,  /* transferBufSize */
    (xdc_SizeT)0x80,  /* maxEventSize */
    1,  /* exitFlush */
    0,  /* bufHeap */
    (xdc_Int)0x1,  /* numCores */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_uia_runtime_LoggerStopMode_Instance_State_0_bufferArray__A */
__T1_ti_uia_runtime_LoggerStopMode_Instance_State__bufferArray ti_uia_runtime_LoggerStopMode_Instance_State_0_bufferArray__A[640];

/* --> ti_uia_runtime_LoggerStopMode_Instance_State_1_bufferArray__A */
__T1_ti_uia_runtime_LoggerStopMode_Instance_State__bufferArray ti_uia_runtime_LoggerStopMode_Instance_State_1_bufferArray__A[1152];

/* --> ti_uia_runtime_LoggerStopMode_Instance_State_2_bufferArray__A */
__T1_ti_uia_runtime_LoggerStopMode_Instance_State__bufferArray ti_uia_runtime_LoggerStopMode_Instance_State_2_bufferArray__A[1152];

/* Module__root__V */
ti_uia_runtime_LoggerStopMode_Module__ ti_uia_runtime_LoggerStopMode_Module__root__V = {
    {&ti_uia_runtime_LoggerStopMode_Module__root__V.link,  /* link.next */
    &ti_uia_runtime_LoggerStopMode_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_uia_runtime_LoggerStopMode_Object__ ti_uia_runtime_LoggerStopMode_Object__table__V[3] = {
    {/* instance#0 */
        &ti_uia_runtime_LoggerStopMode_Module__FXNS__C,
        {
            (xdc_Int)0x2c,  /* structSize */
            ((ti_uia_runtime_QueueDescriptor_Header*)0),  /* next */
            ti_uia_runtime_QueueDescriptor_QueueType_TOHOST_EVENT_OVERFLOW_BUFFER,  /* queueType */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_0_bufferArray__A[0])),  /* readPtr */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_0_bufferArray__A[0])),  /* writePtr */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_0_bufferArray__A[0])),  /* queueStartAdrs */
            (xdc_SizeT)0x200,  /* queueSizeInMAUs */
            (xdc_UInt)0x1,  /* instanceId */
            (xdc_UInt)0x803c,  /* ownerModuleId */
            (xdc_UInt)0x1,  /* priority */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Object__table__V[0].droppedEvents)),  /* numDroppedCtrAdrs */
        },  /* hdr */
        0,  /* bufHeap */
        (xdc_SizeT)0x20,  /* maxEventSizeInBits32 */
        (xdc_Bits16)0x1,  /* serial */
        ti_uia_runtime_IUIATransfer_TransferType_LOSSY,  /* transferType */
        1,  /* enabled */
        1,  /* flush */
        (xdc_Int)0x0,  /* droppedEvents */
        ((xdc_Ptr)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_0_bufferArray__A[0])),  /* queueStartAdrs */
        (xdc_SizeT)0x200,  /* queueSizeInMAUs */
        ((xdc_Ptr)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_0_bufferArray__A[512])),  /* endOfBufferAdrsPlus1 */
        ((void*)ti_uia_runtime_LoggerStopMode_Instance_State_0_bufferArray__A),  /* bufferArray */
        (xdc_Int)0x1,  /* numCores */
    },
    {/* instance#1 */
        &ti_uia_runtime_LoggerStopMode_Module__FXNS__C,
        {
            (xdc_Int)0x2c,  /* structSize */
            ((ti_uia_runtime_QueueDescriptor_Header*)0),  /* next */
            ti_uia_runtime_QueueDescriptor_QueueType_TOHOST_EVENT_OVERFLOW_BUFFER,  /* queueType */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_1_bufferArray__A[0])),  /* readPtr */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_1_bufferArray__A[0])),  /* writePtr */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_1_bufferArray__A[0])),  /* queueStartAdrs */
            (xdc_SizeT)0x400,  /* queueSizeInMAUs */
            (xdc_UInt)0x2,  /* instanceId */
            (xdc_UInt)0x803c,  /* ownerModuleId */
            (xdc_UInt)0x1,  /* priority */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Object__table__V[1].droppedEvents)),  /* numDroppedCtrAdrs */
        },  /* hdr */
        0,  /* bufHeap */
        (xdc_SizeT)0x20,  /* maxEventSizeInBits32 */
        (xdc_Bits16)0x1,  /* serial */
        ti_uia_runtime_IUIATransfer_TransferType_LOSSY,  /* transferType */
        1,  /* enabled */
        1,  /* flush */
        (xdc_Int)0x0,  /* droppedEvents */
        ((xdc_Ptr)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_1_bufferArray__A[0])),  /* queueStartAdrs */
        (xdc_SizeT)0x400,  /* queueSizeInMAUs */
        ((xdc_Ptr)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_1_bufferArray__A[1024])),  /* endOfBufferAdrsPlus1 */
        ((void*)ti_uia_runtime_LoggerStopMode_Instance_State_1_bufferArray__A),  /* bufferArray */
        (xdc_Int)0x1,  /* numCores */
    },
    {/* instance#2 */
        &ti_uia_runtime_LoggerStopMode_Module__FXNS__C,
        {
            (xdc_Int)0x2c,  /* structSize */
            ((ti_uia_runtime_QueueDescriptor_Header*)0),  /* next */
            ti_uia_runtime_QueueDescriptor_QueueType_TOHOST_EVENT_OVERFLOW_BUFFER,  /* queueType */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_2_bufferArray__A[0])),  /* readPtr */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_2_bufferArray__A[0])),  /* writePtr */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_2_bufferArray__A[0])),  /* queueStartAdrs */
            (xdc_SizeT)0x400,  /* queueSizeInMAUs */
            (xdc_UInt)0x3,  /* instanceId */
            (xdc_UInt)0x803c,  /* ownerModuleId */
            (xdc_UInt)0x1,  /* priority */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Object__table__V[2].droppedEvents)),  /* numDroppedCtrAdrs */
        },  /* hdr */
        0,  /* bufHeap */
        (xdc_SizeT)0x20,  /* maxEventSizeInBits32 */
        (xdc_Bits16)0x1,  /* serial */
        ti_uia_runtime_IUIATransfer_TransferType_LOSSY,  /* transferType */
        1,  /* enabled */
        1,  /* flush */
        (xdc_Int)0x0,  /* droppedEvents */
        ((xdc_Ptr)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_2_bufferArray__A[0])),  /* queueStartAdrs */
        (xdc_SizeT)0x400,  /* queueSizeInMAUs */
        ((xdc_Ptr)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_2_bufferArray__A[1024])),  /* endOfBufferAdrsPlus1 */
        ((void*)ti_uia_runtime_LoggerStopMode_Instance_State_2_bufferArray__A),  /* bufferArray */
        (xdc_Int)0x1,  /* numCores */
    },
};

/* Module__state__V */
ti_uia_runtime_LoggerStopMode_Module_State__ ti_uia_runtime_LoggerStopMode_Module__state__V = {
    (xdc_Bits16)0x0,  /* level1 */
    (xdc_Bits16)0x0,  /* level2 */
    (xdc_Bits16)0x0,  /* level3 */
    (xdc_Bits16)0xffff,  /* moduleIdToRouteToStatusLogger */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__diagsEnabled ti_uia_runtime_LoggerStopMode_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__diagsIncluded ti_uia_runtime_LoggerStopMode_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__diagsMask ti_uia_runtime_LoggerStopMode_Module__diagsMask__C = ((CT__ti_uia_runtime_LoggerStopMode_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__gateObj ti_uia_runtime_LoggerStopMode_Module__gateObj__C = ((CT__ti_uia_runtime_LoggerStopMode_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__gatePrms ti_uia_runtime_LoggerStopMode_Module__gatePrms__C = ((CT__ti_uia_runtime_LoggerStopMode_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__id ti_uia_runtime_LoggerStopMode_Module__id__C = (xdc_Bits16)0x803c;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__loggerDefined ti_uia_runtime_LoggerStopMode_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__loggerObj ti_uia_runtime_LoggerStopMode_Module__loggerObj__C = ((CT__ti_uia_runtime_LoggerStopMode_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__loggerFxn0 ti_uia_runtime_LoggerStopMode_Module__loggerFxn0__C = ((CT__ti_uia_runtime_LoggerStopMode_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__loggerFxn1 ti_uia_runtime_LoggerStopMode_Module__loggerFxn1__C = ((CT__ti_uia_runtime_LoggerStopMode_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__loggerFxn2 ti_uia_runtime_LoggerStopMode_Module__loggerFxn2__C = ((CT__ti_uia_runtime_LoggerStopMode_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__loggerFxn4 ti_uia_runtime_LoggerStopMode_Module__loggerFxn4__C = ((CT__ti_uia_runtime_LoggerStopMode_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__loggerFxn8 ti_uia_runtime_LoggerStopMode_Module__loggerFxn8__C = ((CT__ti_uia_runtime_LoggerStopMode_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__startupDoneFxn ti_uia_runtime_LoggerStopMode_Module__startupDoneFxn__C = ((CT__ti_uia_runtime_LoggerStopMode_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Object__count ti_uia_runtime_LoggerStopMode_Object__count__C = 3;

/* Object__heap__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Object__heap ti_uia_runtime_LoggerStopMode_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Object__sizeof ti_uia_runtime_LoggerStopMode_Object__sizeof__C = sizeof(ti_uia_runtime_LoggerStopMode_Object__);

/* Object__table__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Object__table ti_uia_runtime_LoggerStopMode_Object__table__C = ti_uia_runtime_LoggerStopMode_Object__table__V;

/* filterByLevel__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_filterByLevel ti_uia_runtime_LoggerStopMode_filterByLevel__C = 0;

/* E_badLevel__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_E_badLevel ti_uia_runtime_LoggerStopMode_E_badLevel__C = (((xdc_runtime_Error_Id)2691) << 16 | 0);

/* isTimestampEnabled__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_isTimestampEnabled ti_uia_runtime_LoggerStopMode_isTimestampEnabled__C = 1;

/* enableFlush__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_enableFlush ti_uia_runtime_LoggerStopMode_enableFlush__C = 0;

/* statusLogger__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_statusLogger ti_uia_runtime_LoggerStopMode_statusLogger__C = 0;

/* overflowLogger__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_overflowLogger ti_uia_runtime_LoggerStopMode_overflowLogger__C = 0;

/* level1Mask__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_level1Mask ti_uia_runtime_LoggerStopMode_level1Mask__C = (xdc_Bits16)0x0;

/* level2Mask__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_level2Mask ti_uia_runtime_LoggerStopMode_level2Mask__C = (xdc_Bits16)0x0;

/* level3Mask__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_level3Mask ti_uia_runtime_LoggerStopMode_level3Mask__C = (xdc_Bits16)0x0;

/* level4Mask__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_level4Mask ti_uia_runtime_LoggerStopMode_level4Mask__C = (xdc_Bits16)0xff87;


/*
 * ======== ti.uia.runtime.QueueDescriptor INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__diagsEnabled ti_uia_runtime_QueueDescriptor_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__diagsIncluded ti_uia_runtime_QueueDescriptor_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__diagsMask ti_uia_runtime_QueueDescriptor_Module__diagsMask__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__gateObj ti_uia_runtime_QueueDescriptor_Module__gateObj__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__gatePrms ti_uia_runtime_QueueDescriptor_Module__gatePrms__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__id ti_uia_runtime_QueueDescriptor_Module__id__C = (xdc_Bits16)0x803d;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerDefined ti_uia_runtime_QueueDescriptor_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerObj ti_uia_runtime_QueueDescriptor_Module__loggerObj__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn0 ti_uia_runtime_QueueDescriptor_Module__loggerFxn0__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn1 ti_uia_runtime_QueueDescriptor_Module__loggerFxn1__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn2 ti_uia_runtime_QueueDescriptor_Module__loggerFxn2__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn4 ti_uia_runtime_QueueDescriptor_Module__loggerFxn4__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn8 ti_uia_runtime_QueueDescriptor_Module__loggerFxn8__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__count ti_uia_runtime_QueueDescriptor_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__heap ti_uia_runtime_QueueDescriptor_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__sizeof ti_uia_runtime_QueueDescriptor_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__table ti_uia_runtime_QueueDescriptor_Object__table__C = 0;


/*
 * ======== ti.uia.runtime.UIAMetaData INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsEnabled ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsIncluded ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsMask ti_uia_runtime_UIAMetaData_Module__diagsMask__C = ((CT__ti_uia_runtime_UIAMetaData_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__gateObj ti_uia_runtime_UIAMetaData_Module__gateObj__C = ((CT__ti_uia_runtime_UIAMetaData_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__gatePrms ti_uia_runtime_UIAMetaData_Module__gatePrms__C = ((CT__ti_uia_runtime_UIAMetaData_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__id ti_uia_runtime_UIAMetaData_Module__id__C = (xdc_Bits16)0x803e;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerDefined ti_uia_runtime_UIAMetaData_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerObj ti_uia_runtime_UIAMetaData_Module__loggerObj__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn0 ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn1 ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn2 ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn4 ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn8 ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__startupDoneFxn ti_uia_runtime_UIAMetaData_Module__startupDoneFxn__C = ((CT__ti_uia_runtime_UIAMetaData_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__count ti_uia_runtime_UIAMetaData_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__heap ti_uia_runtime_UIAMetaData_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__sizeof ti_uia_runtime_UIAMetaData_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__table ti_uia_runtime_UIAMetaData_Object__table__C = 0;


/*
 * ======== xdc.runtime.Assert INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C = ((CT__xdc_runtime_Assert_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C = ((CT__xdc_runtime_Assert_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C = ((CT__xdc_runtime_Assert_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C = (xdc_Bits16)0x8002;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C = ((CT__xdc_runtime_Assert_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C = ((CT__xdc_runtime_Assert_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C = ((CT__xdc_runtime_Assert_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C = ((CT__xdc_runtime_Assert_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C = ((CT__xdc_runtime_Assert_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C = ((CT__xdc_runtime_Assert_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Assert_Module__startupDoneFxn xdc_runtime_Assert_Module__startupDoneFxn__C = ((CT__xdc_runtime_Assert_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C = 0;

/* E_assertFailed__C */
__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)2623) << 16 | 0);


/*
 * ======== xdc.runtime.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C = ((CT__xdc_runtime_Core_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C = ((CT__xdc_runtime_Core_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C = ((CT__xdc_runtime_Core_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C = (xdc_Bits16)0x8003;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C = ((CT__xdc_runtime_Core_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C = ((CT__xdc_runtime_Core_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C = ((CT__xdc_runtime_Core_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C = ((CT__xdc_runtime_Core_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C = ((CT__xdc_runtime_Core_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C = ((CT__xdc_runtime_Core_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Core_Module__startupDoneFxn xdc_runtime_Core_Module__startupDoneFxn__C = ((CT__xdc_runtime_Core_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C = 0;

/* A_initializedParams__C */
__FAR__ const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C = (((xdc_runtime_Assert_Id)1) << 16 | 16);


/*
 * ======== xdc.runtime.Defaults INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C = ((CT__xdc_runtime_Defaults_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C = ((CT__xdc_runtime_Defaults_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C = ((CT__xdc_runtime_Defaults_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C = (xdc_Bits16)0x8004;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C = ((CT__xdc_runtime_Defaults_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__startupDoneFxn xdc_runtime_Defaults_Module__startupDoneFxn__C = ((CT__xdc_runtime_Defaults_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C = 0;


/*
 * ======== xdc.runtime.Diags INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C = ((CT__xdc_runtime_Diags_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C = ((CT__xdc_runtime_Diags_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C = ((CT__xdc_runtime_Diags_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C = (xdc_Bits16)0x8005;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C = ((CT__xdc_runtime_Diags_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C = ((CT__xdc_runtime_Diags_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C = ((CT__xdc_runtime_Diags_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C = ((CT__xdc_runtime_Diags_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C = ((CT__xdc_runtime_Diags_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C = ((CT__xdc_runtime_Diags_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Diags_Module__startupDoneFxn xdc_runtime_Diags_Module__startupDoneFxn__C = ((CT__xdc_runtime_Diags_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C = 0;

/* setMaskEnabled__C */
__FAR__ const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C = 1;

/* dictBase__C */
__FAR__ const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C = ((CT__xdc_runtime_Diags_dictBase)((void*)&xdc_runtime_Diags_dictElems[0]));


/*
 * ======== xdc.runtime.Error INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V = {
    (xdc_UInt16)0x0,  /* count */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C = ((CT__xdc_runtime_Error_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C = ((CT__xdc_runtime_Error_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C = ((CT__xdc_runtime_Error_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C = (xdc_Bits16)0x8006;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C = ((CT__xdc_runtime_Error_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C = ((CT__xdc_runtime_Error_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C = ((CT__xdc_runtime_Error_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C = ((CT__xdc_runtime_Error_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C = ((CT__xdc_runtime_Error_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C = ((CT__xdc_runtime_Error_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Error_Module__startupDoneFxn xdc_runtime_Error_Module__startupDoneFxn__C = ((CT__xdc_runtime_Error_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C = 0;

/* E_generic__C */
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)2645) << 16 | 0);

/* E_memory__C */
__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)2649) << 16 | 0);

/* E_msgCode__C */
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)2683) << 16 | 0);

/* policy__C */
__FAR__ const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C = xdc_runtime_Error_UNWIND;

/* raiseHook__C */
__FAR__ const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C = ((CT__xdc_runtime_Error_raiseHook)((xdc_Fxn)ti_sysbios_BIOS_errorRaiseHook__I));

/* maxDepth__C */
__FAR__ const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C = (xdc_UInt16)0x10;


/*
 * ======== xdc.runtime.Gate INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C = ((CT__xdc_runtime_Gate_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C = ((CT__xdc_runtime_Gate_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C = ((CT__xdc_runtime_Gate_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C = (xdc_Bits16)0x8007;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C = ((CT__xdc_runtime_Gate_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C = ((CT__xdc_runtime_Gate_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C = ((CT__xdc_runtime_Gate_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C = ((CT__xdc_runtime_Gate_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C = ((CT__xdc_runtime_Gate_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C = ((CT__xdc_runtime_Gate_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Gate_Module__startupDoneFxn xdc_runtime_Gate_Module__startupDoneFxn__C = ((CT__xdc_runtime_Gate_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C = 0;


/*
 * ======== xdc.runtime.Log INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C = ((CT__xdc_runtime_Log_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C = ((CT__xdc_runtime_Log_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C = ((CT__xdc_runtime_Log_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C = (xdc_Bits16)0x8008;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C = ((CT__xdc_runtime_Log_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C = ((CT__xdc_runtime_Log_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C = ((CT__xdc_runtime_Log_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C = ((CT__xdc_runtime_Log_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C = ((CT__xdc_runtime_Log_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C = ((CT__xdc_runtime_Log_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Log_Module__startupDoneFxn xdc_runtime_Log_Module__startupDoneFxn__C = ((CT__xdc_runtime_Log_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C = 0;

/* L_construct__C */
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)3661) << 16 | 4);

/* L_create__C */
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)3685) << 16 | 4);

/* L_destruct__C */
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)3706) << 16 | 4);

/* L_delete__C */
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)3725) << 16 | 4);

/* L_error__C */
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)3742) << 16 | 192);

/* L_warning__C */
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)3756) << 16 | 224);

/* L_info__C */
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)3772) << 16 | 16384);

/* L_start__C */
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)3779) << 16 | 32768);

/* L_stop__C */
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)3790) << 16 | 32768);

/* L_startInstance__C */
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)3800) << 16 | 32768);

/* L_stopInstance__C */
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)3819) << 16 | 32768);


/*
 * ======== xdc.runtime.Main INITIALIZERS ========
 */

/* Module__root__V */
xdc_runtime_Main_Module__ xdc_runtime_Main_Module__root__V = {
    65408,  /* mask */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C = (xdc_Bits32)0xff90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C = ((CT__xdc_runtime_Main_Module__diagsMask)((void*)&xdc_runtime_Main_Module__root__V.mask));

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C = ((CT__xdc_runtime_Main_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C = ((CT__xdc_runtime_Main_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C = (xdc_Bits16)0x8009;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C = ((CT__xdc_runtime_Main_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_runtime_LoggerStopMode_Object__table__V[1]));

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C = ((CT__xdc_runtime_Main_Module__loggerFxn0)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C = ((CT__xdc_runtime_Main_Module__loggerFxn1)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C = ((CT__xdc_runtime_Main_Module__loggerFxn2)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C = ((CT__xdc_runtime_Main_Module__loggerFxn4)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C = ((CT__xdc_runtime_Main_Module__loggerFxn8)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Main_Module__startupDoneFxn xdc_runtime_Main_Module__startupDoneFxn__C = ((CT__xdc_runtime_Main_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C = 0;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Memory INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V = {
    (xdc_SizeT)0x8,  /* maxDefaultTypeAlign */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C = ((CT__xdc_runtime_Memory_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C = ((CT__xdc_runtime_Memory_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C = ((CT__xdc_runtime_Memory_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C = (xdc_Bits16)0x800a;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C = ((CT__xdc_runtime_Memory_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C = ((CT__xdc_runtime_Memory_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C = ((CT__xdc_runtime_Memory_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C = ((CT__xdc_runtime_Memory_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C = ((CT__xdc_runtime_Memory_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C = ((CT__xdc_runtime_Memory_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Memory_Module__startupDoneFxn xdc_runtime_Memory_Module__startupDoneFxn__C = ((CT__xdc_runtime_Memory_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C = 0;

/* defaultHeapInstance__C */
__FAR__ const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C = (xdc_runtime_IHeap_Handle)&ti_sysbios_heaps_HeapMem_Object__table__V[0];


/*
 * ======== xdc.runtime.Memory_HeapProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Registry INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V = {
    ((xdc_runtime_Types_RegDesc*)0),  /* listHead */
    (xdc_Bits16)0x7fff,  /* curId */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C = ((CT__xdc_runtime_Registry_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C = ((CT__xdc_runtime_Registry_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C = ((CT__xdc_runtime_Registry_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C = (xdc_Bits16)0x800b;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C = ((CT__xdc_runtime_Registry_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_runtime_LoggerStopMode_Object__table__V[1]));

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C = ((CT__xdc_runtime_Registry_Module__loggerFxn0)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C = ((CT__xdc_runtime_Registry_Module__loggerFxn1)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C = ((CT__xdc_runtime_Registry_Module__loggerFxn2)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C = ((CT__xdc_runtime_Registry_Module__loggerFxn4)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C = ((CT__xdc_runtime_Registry_Module__loggerFxn8)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Registry_Module__startupDoneFxn xdc_runtime_Registry_Module__startupDoneFxn__C = ((CT__xdc_runtime_Registry_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C = 0;


/*
 * ======== xdc.runtime.Startup INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V = {
    ((xdc_Int*)0),  /* stateTab */
    0,  /* execFlag */
    0,  /* rtsDoneFlag */
};

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[4] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_heaps_HeapMem_init__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_initStack)),  /* [1] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_initVTOR__I)),  /* [2] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_lm3_Timer_enableTimers__I)),  /* [3] */
};

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[2] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)xdc_runtime_System_lastFxn__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_lm3_TimestampProvider_startTimer__E)),  /* [1] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[12] = {
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_System_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_SysMin_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Hwi_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Timer_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Clock_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Swi_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Task_Module_startup__E)),  /* [6] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Module_startup__E)),  /* [7] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_lm3_TimestampProvider_Module_startup__E)),  /* [8] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_lm3_Timer_Module_startup__E)),  /* [9] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_uia_runtime_LogSync_Module_startup__E)),  /* [10] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_uia_runtime_LoggerStopMode_Module_startup__E)),  /* [11] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[12] = {
    1,  /* [0] */
    1,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    1,  /* [8] */
    0,  /* [9] */
    0,  /* [10] */
    1,  /* [11] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C = ((CT__xdc_runtime_Startup_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C = ((CT__xdc_runtime_Startup_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C = ((CT__xdc_runtime_Startup_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C = (xdc_Bits16)0x800c;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C = ((CT__xdc_runtime_Startup_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C = ((CT__xdc_runtime_Startup_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C = ((CT__xdc_runtime_Startup_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C = ((CT__xdc_runtime_Startup_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C = ((CT__xdc_runtime_Startup_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C = ((CT__xdc_runtime_Startup_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Startup_Module__startupDoneFxn xdc_runtime_Startup_Module__startupDoneFxn__C = ((CT__xdc_runtime_Startup_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C = 0;

/* maxPasses__C */
__FAR__ const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C = (xdc_Int)0x20;

/* firstFxns__C */
__FAR__ const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C = {4, ((__T1_xdc_runtime_Startup_firstFxns*)xdc_runtime_Startup_firstFxns__A)};

/* lastFxns__C */
__FAR__ const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C = {2, ((__T1_xdc_runtime_Startup_lastFxns*)xdc_runtime_Startup_lastFxns__A)};

/* startModsFxn__C */
__FAR__ const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C = ((CT__xdc_runtime_Startup_startModsFxn)((xdc_Fxn)xdc_runtime_Startup_startMods__I));

/* execImpl__C */
__FAR__ const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C = ((CT__xdc_runtime_Startup_execImpl)((xdc_Fxn)xdc_runtime_Startup_exec__I));

/* sfxnTab__C */
__FAR__ const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C = ((CT__xdc_runtime_Startup_sfxnTab)xdc_runtime_Startup_sfxnTab__A);

/* sfxnRts__C */
__FAR__ const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C = ((CT__xdc_runtime_Startup_sfxnRts)xdc_runtime_Startup_sfxnRts__A);


/*
 * ======== xdc.runtime.SysMin INITIALIZERS ========
 */

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[1024];

/* Module__state__V */
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V = {
    ((void*)xdc_runtime_SysMin_Module_State_0_outbuf__A),  /* outbuf */
    (xdc_UInt)0x0,  /* outidx */
    0,  /* wrapped */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsEnabled xdc_runtime_SysMin_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsIncluded xdc_runtime_SysMin_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsMask xdc_runtime_SysMin_Module__diagsMask__C = ((CT__xdc_runtime_SysMin_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__gateObj xdc_runtime_SysMin_Module__gateObj__C = ((CT__xdc_runtime_SysMin_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__gatePrms xdc_runtime_SysMin_Module__gatePrms__C = ((CT__xdc_runtime_SysMin_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__id xdc_runtime_SysMin_Module__id__C = (xdc_Bits16)0x800e;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerDefined xdc_runtime_SysMin_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerObj xdc_runtime_SysMin_Module__loggerObj__C = ((CT__xdc_runtime_SysMin_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn0 xdc_runtime_SysMin_Module__loggerFxn0__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn1 xdc_runtime_SysMin_Module__loggerFxn1__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn2 xdc_runtime_SysMin_Module__loggerFxn2__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn4 xdc_runtime_SysMin_Module__loggerFxn4__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn8 xdc_runtime_SysMin_Module__loggerFxn8__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__startupDoneFxn xdc_runtime_SysMin_Module__startupDoneFxn__C = ((CT__xdc_runtime_SysMin_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__count xdc_runtime_SysMin_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__heap xdc_runtime_SysMin_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__sizeof xdc_runtime_SysMin_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__table xdc_runtime_SysMin_Object__table__C = 0;

/* bufSize__C */
__FAR__ const CT__xdc_runtime_SysMin_bufSize xdc_runtime_SysMin_bufSize__C = (xdc_SizeT)0x400;

/* flushAtExit__C */
__FAR__ const CT__xdc_runtime_SysMin_flushAtExit xdc_runtime_SysMin_flushAtExit__C = 1;

/* outputFxn__C */
__FAR__ const CT__xdc_runtime_SysMin_outputFxn xdc_runtime_SysMin_outputFxn__C = ((CT__xdc_runtime_SysMin_outputFxn)0);

/* outputFunc__C */
__FAR__ const CT__xdc_runtime_SysMin_outputFunc xdc_runtime_SysMin_outputFunc__C = ((CT__xdc_runtime_SysMin_outputFunc)((xdc_Fxn)xdc_runtime_SysMin_output__I));


/*
 * ======== xdc.runtime.System INITIALIZERS ========
 */

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[8] = {
    ((xdc_Void(*)(xdc_Int))0),  /* [0] */
    ((xdc_Void(*)(xdc_Int))0),  /* [1] */
    ((xdc_Void(*)(xdc_Int))0),  /* [2] */
    ((xdc_Void(*)(xdc_Int))0),  /* [3] */
    ((xdc_Void(*)(xdc_Int))0),  /* [4] */
    ((xdc_Void(*)(xdc_Int))0),  /* [5] */
    ((xdc_Void(*)(xdc_Int))0),  /* [6] */
    ((xdc_Void(*)(xdc_Int))0),  /* [7] */
};

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V = {
    ((void*)xdc_runtime_System_Module_State_0_atexitHandlers__A),  /* atexitHandlers */
    (xdc_Int)0x0,  /* numAtexitHandlers */
    (xdc_Int)0xcafe,  /* exitStatus */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C = ((CT__xdc_runtime_System_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C = ((CT__xdc_runtime_System_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C = ((CT__xdc_runtime_System_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C = (xdc_Bits16)0x800d;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C = ((CT__xdc_runtime_System_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C = ((CT__xdc_runtime_System_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C = ((CT__xdc_runtime_System_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C = ((CT__xdc_runtime_System_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C = ((CT__xdc_runtime_System_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C = ((CT__xdc_runtime_System_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_System_Module__startupDoneFxn xdc_runtime_System_Module__startupDoneFxn__C = ((CT__xdc_runtime_System_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C = 0;

/* A_cannotFitIntoArg__C */
__FAR__ const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C = (((xdc_runtime_Assert_Id)307) << 16 | 16);

/* maxAtexitHandlers__C */
__FAR__ const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C = (xdc_Int)0x8;

/* extendFxn__C */
__FAR__ const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C = ((CT__xdc_runtime_System_extendFxn)((xdc_Fxn)xdc_runtime_System_printfExtend__I));


/*
 * ======== xdc.runtime.System_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Text INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V = {
    ((xdc_Ptr)((void*)&xdc_runtime_Text_charTab__A[0])),  /* charBase */
    ((xdc_Ptr)((void*)&xdc_runtime_Text_nodeTab__A[0])),  /* nodeBase */
};

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[7555] = {
    (xdc_Char)0x0,  /* [0] */
    (xdc_Char)0x41,  /* [1] */
    (xdc_Char)0x5f,  /* [2] */
    (xdc_Char)0x69,  /* [3] */
    (xdc_Char)0x6e,  /* [4] */
    (xdc_Char)0x69,  /* [5] */
    (xdc_Char)0x74,  /* [6] */
    (xdc_Char)0x69,  /* [7] */
    (xdc_Char)0x61,  /* [8] */
    (xdc_Char)0x6c,  /* [9] */
    (xdc_Char)0x69,  /* [10] */
    (xdc_Char)0x7a,  /* [11] */
    (xdc_Char)0x65,  /* [12] */
    (xdc_Char)0x64,  /* [13] */
    (xdc_Char)0x50,  /* [14] */
    (xdc_Char)0x61,  /* [15] */
    (xdc_Char)0x72,  /* [16] */
    (xdc_Char)0x61,  /* [17] */
    (xdc_Char)0x6d,  /* [18] */
    (xdc_Char)0x73,  /* [19] */
    (xdc_Char)0x3a,  /* [20] */
    (xdc_Char)0x20,  /* [21] */
    (xdc_Char)0x75,  /* [22] */
    (xdc_Char)0x6e,  /* [23] */
    (xdc_Char)0x69,  /* [24] */
    (xdc_Char)0x6e,  /* [25] */
    (xdc_Char)0x69,  /* [26] */
    (xdc_Char)0x74,  /* [27] */
    (xdc_Char)0x69,  /* [28] */
    (xdc_Char)0x61,  /* [29] */
    (xdc_Char)0x6c,  /* [30] */
    (xdc_Char)0x69,  /* [31] */
    (xdc_Char)0x7a,  /* [32] */
    (xdc_Char)0x65,  /* [33] */
    (xdc_Char)0x64,  /* [34] */
    (xdc_Char)0x20,  /* [35] */
    (xdc_Char)0x50,  /* [36] */
    (xdc_Char)0x61,  /* [37] */
    (xdc_Char)0x72,  /* [38] */
    (xdc_Char)0x61,  /* [39] */
    (xdc_Char)0x6d,  /* [40] */
    (xdc_Char)0x73,  /* [41] */
    (xdc_Char)0x20,  /* [42] */
    (xdc_Char)0x73,  /* [43] */
    (xdc_Char)0x74,  /* [44] */
    (xdc_Char)0x72,  /* [45] */
    (xdc_Char)0x75,  /* [46] */
    (xdc_Char)0x63,  /* [47] */
    (xdc_Char)0x74,  /* [48] */
    (xdc_Char)0x0,  /* [49] */
    (xdc_Char)0x48,  /* [50] */
    (xdc_Char)0x65,  /* [51] */
    (xdc_Char)0x61,  /* [52] */
    (xdc_Char)0x70,  /* [53] */
    (xdc_Char)0x4d,  /* [54] */
    (xdc_Char)0x69,  /* [55] */
    (xdc_Char)0x6e,  /* [56] */
    (xdc_Char)0x5f,  /* [57] */
    (xdc_Char)0x63,  /* [58] */
    (xdc_Char)0x72,  /* [59] */
    (xdc_Char)0x65,  /* [60] */
    (xdc_Char)0x61,  /* [61] */
    (xdc_Char)0x74,  /* [62] */
    (xdc_Char)0x65,  /* [63] */
    (xdc_Char)0x20,  /* [64] */
    (xdc_Char)0x63,  /* [65] */
    (xdc_Char)0x61,  /* [66] */
    (xdc_Char)0x6e,  /* [67] */
    (xdc_Char)0x6e,  /* [68] */
    (xdc_Char)0x6f,  /* [69] */
    (xdc_Char)0x74,  /* [70] */
    (xdc_Char)0x20,  /* [71] */
    (xdc_Char)0x68,  /* [72] */
    (xdc_Char)0x61,  /* [73] */
    (xdc_Char)0x76,  /* [74] */
    (xdc_Char)0x65,  /* [75] */
    (xdc_Char)0x20,  /* [76] */
    (xdc_Char)0x61,  /* [77] */
    (xdc_Char)0x20,  /* [78] */
    (xdc_Char)0x7a,  /* [79] */
    (xdc_Char)0x65,  /* [80] */
    (xdc_Char)0x72,  /* [81] */
    (xdc_Char)0x6f,  /* [82] */
    (xdc_Char)0x20,  /* [83] */
    (xdc_Char)0x73,  /* [84] */
    (xdc_Char)0x69,  /* [85] */
    (xdc_Char)0x7a,  /* [86] */
    (xdc_Char)0x65,  /* [87] */
    (xdc_Char)0x20,  /* [88] */
    (xdc_Char)0x76,  /* [89] */
    (xdc_Char)0x61,  /* [90] */
    (xdc_Char)0x6c,  /* [91] */
    (xdc_Char)0x75,  /* [92] */
    (xdc_Char)0x65,  /* [93] */
    (xdc_Char)0x0,  /* [94] */
    (xdc_Char)0x48,  /* [95] */
    (xdc_Char)0x65,  /* [96] */
    (xdc_Char)0x61,  /* [97] */
    (xdc_Char)0x70,  /* [98] */
    (xdc_Char)0x53,  /* [99] */
    (xdc_Char)0x74,  /* [100] */
    (xdc_Char)0x64,  /* [101] */
    (xdc_Char)0x5f,  /* [102] */
    (xdc_Char)0x63,  /* [103] */
    (xdc_Char)0x72,  /* [104] */
    (xdc_Char)0x65,  /* [105] */
    (xdc_Char)0x61,  /* [106] */
    (xdc_Char)0x74,  /* [107] */
    (xdc_Char)0x65,  /* [108] */
    (xdc_Char)0x20,  /* [109] */
    (xdc_Char)0x63,  /* [110] */
    (xdc_Char)0x61,  /* [111] */
    (xdc_Char)0x6e,  /* [112] */
    (xdc_Char)0x6e,  /* [113] */
    (xdc_Char)0x6f,  /* [114] */
    (xdc_Char)0x74,  /* [115] */
    (xdc_Char)0x20,  /* [116] */
    (xdc_Char)0x68,  /* [117] */
    (xdc_Char)0x61,  /* [118] */
    (xdc_Char)0x76,  /* [119] */
    (xdc_Char)0x65,  /* [120] */
    (xdc_Char)0x20,  /* [121] */
    (xdc_Char)0x61,  /* [122] */
    (xdc_Char)0x20,  /* [123] */
    (xdc_Char)0x7a,  /* [124] */
    (xdc_Char)0x65,  /* [125] */
    (xdc_Char)0x72,  /* [126] */
    (xdc_Char)0x6f,  /* [127] */
    (xdc_Char)0x20,  /* [128] */
    (xdc_Char)0x73,  /* [129] */
    (xdc_Char)0x69,  /* [130] */
    (xdc_Char)0x7a,  /* [131] */
    (xdc_Char)0x65,  /* [132] */
    (xdc_Char)0x20,  /* [133] */
    (xdc_Char)0x76,  /* [134] */
    (xdc_Char)0x61,  /* [135] */
    (xdc_Char)0x6c,  /* [136] */
    (xdc_Char)0x75,  /* [137] */
    (xdc_Char)0x65,  /* [138] */
    (xdc_Char)0x0,  /* [139] */
    (xdc_Char)0x48,  /* [140] */
    (xdc_Char)0x65,  /* [141] */
    (xdc_Char)0x61,  /* [142] */
    (xdc_Char)0x70,  /* [143] */
    (xdc_Char)0x53,  /* [144] */
    (xdc_Char)0x74,  /* [145] */
    (xdc_Char)0x64,  /* [146] */
    (xdc_Char)0x20,  /* [147] */
    (xdc_Char)0x69,  /* [148] */
    (xdc_Char)0x6e,  /* [149] */
    (xdc_Char)0x73,  /* [150] */
    (xdc_Char)0x74,  /* [151] */
    (xdc_Char)0x61,  /* [152] */
    (xdc_Char)0x6e,  /* [153] */
    (xdc_Char)0x63,  /* [154] */
    (xdc_Char)0x65,  /* [155] */
    (xdc_Char)0x20,  /* [156] */
    (xdc_Char)0x74,  /* [157] */
    (xdc_Char)0x6f,  /* [158] */
    (xdc_Char)0x74,  /* [159] */
    (xdc_Char)0x61,  /* [160] */
    (xdc_Char)0x6c,  /* [161] */
    (xdc_Char)0x46,  /* [162] */
    (xdc_Char)0x72,  /* [163] */
    (xdc_Char)0x65,  /* [164] */
    (xdc_Char)0x65,  /* [165] */
    (xdc_Char)0x53,  /* [166] */
    (xdc_Char)0x69,  /* [167] */
    (xdc_Char)0x7a,  /* [168] */
    (xdc_Char)0x65,  /* [169] */
    (xdc_Char)0x20,  /* [170] */
    (xdc_Char)0x69,  /* [171] */
    (xdc_Char)0x73,  /* [172] */
    (xdc_Char)0x20,  /* [173] */
    (xdc_Char)0x67,  /* [174] */
    (xdc_Char)0x72,  /* [175] */
    (xdc_Char)0x65,  /* [176] */
    (xdc_Char)0x61,  /* [177] */
    (xdc_Char)0x74,  /* [178] */
    (xdc_Char)0x65,  /* [179] */
    (xdc_Char)0x72,  /* [180] */
    (xdc_Char)0x20,  /* [181] */
    (xdc_Char)0x74,  /* [182] */
    (xdc_Char)0x68,  /* [183] */
    (xdc_Char)0x61,  /* [184] */
    (xdc_Char)0x6e,  /* [185] */
    (xdc_Char)0x20,  /* [186] */
    (xdc_Char)0x73,  /* [187] */
    (xdc_Char)0x74,  /* [188] */
    (xdc_Char)0x61,  /* [189] */
    (xdc_Char)0x72,  /* [190] */
    (xdc_Char)0x74,  /* [191] */
    (xdc_Char)0x69,  /* [192] */
    (xdc_Char)0x6e,  /* [193] */
    (xdc_Char)0x67,  /* [194] */
    (xdc_Char)0x20,  /* [195] */
    (xdc_Char)0x73,  /* [196] */
    (xdc_Char)0x69,  /* [197] */
    (xdc_Char)0x7a,  /* [198] */
    (xdc_Char)0x65,  /* [199] */
    (xdc_Char)0x0,  /* [200] */
    (xdc_Char)0x48,  /* [201] */
    (xdc_Char)0x65,  /* [202] */
    (xdc_Char)0x61,  /* [203] */
    (xdc_Char)0x70,  /* [204] */
    (xdc_Char)0x53,  /* [205] */
    (xdc_Char)0x74,  /* [206] */
    (xdc_Char)0x64,  /* [207] */
    (xdc_Char)0x5f,  /* [208] */
    (xdc_Char)0x61,  /* [209] */
    (xdc_Char)0x6c,  /* [210] */
    (xdc_Char)0x6c,  /* [211] */
    (xdc_Char)0x6f,  /* [212] */
    (xdc_Char)0x63,  /* [213] */
    (xdc_Char)0x20,  /* [214] */
    (xdc_Char)0x2d,  /* [215] */
    (xdc_Char)0x20,  /* [216] */
    (xdc_Char)0x72,  /* [217] */
    (xdc_Char)0x65,  /* [218] */
    (xdc_Char)0x71,  /* [219] */
    (xdc_Char)0x75,  /* [220] */
    (xdc_Char)0x65,  /* [221] */
    (xdc_Char)0x73,  /* [222] */
    (xdc_Char)0x74,  /* [223] */
    (xdc_Char)0x65,  /* [224] */
    (xdc_Char)0x64,  /* [225] */
    (xdc_Char)0x20,  /* [226] */
    (xdc_Char)0x61,  /* [227] */
    (xdc_Char)0x6c,  /* [228] */
    (xdc_Char)0x69,  /* [229] */
    (xdc_Char)0x67,  /* [230] */
    (xdc_Char)0x6e,  /* [231] */
    (xdc_Char)0x6d,  /* [232] */
    (xdc_Char)0x65,  /* [233] */
    (xdc_Char)0x6e,  /* [234] */
    (xdc_Char)0x74,  /* [235] */
    (xdc_Char)0x20,  /* [236] */
    (xdc_Char)0x69,  /* [237] */
    (xdc_Char)0x73,  /* [238] */
    (xdc_Char)0x20,  /* [239] */
    (xdc_Char)0x67,  /* [240] */
    (xdc_Char)0x72,  /* [241] */
    (xdc_Char)0x65,  /* [242] */
    (xdc_Char)0x61,  /* [243] */
    (xdc_Char)0x74,  /* [244] */
    (xdc_Char)0x65,  /* [245] */
    (xdc_Char)0x72,  /* [246] */
    (xdc_Char)0x20,  /* [247] */
    (xdc_Char)0x74,  /* [248] */
    (xdc_Char)0x68,  /* [249] */
    (xdc_Char)0x61,  /* [250] */
    (xdc_Char)0x6e,  /* [251] */
    (xdc_Char)0x20,  /* [252] */
    (xdc_Char)0x61,  /* [253] */
    (xdc_Char)0x6c,  /* [254] */
    (xdc_Char)0x6c,  /* [255] */
    (xdc_Char)0x6f,  /* [256] */
    (xdc_Char)0x77,  /* [257] */
    (xdc_Char)0x65,  /* [258] */
    (xdc_Char)0x64,  /* [259] */
    (xdc_Char)0x0,  /* [260] */
    (xdc_Char)0x41,  /* [261] */
    (xdc_Char)0x5f,  /* [262] */
    (xdc_Char)0x69,  /* [263] */
    (xdc_Char)0x6e,  /* [264] */
    (xdc_Char)0x76,  /* [265] */
    (xdc_Char)0x61,  /* [266] */
    (xdc_Char)0x6c,  /* [267] */
    (xdc_Char)0x69,  /* [268] */
    (xdc_Char)0x64,  /* [269] */
    (xdc_Char)0x4c,  /* [270] */
    (xdc_Char)0x6f,  /* [271] */
    (xdc_Char)0x67,  /* [272] */
    (xdc_Char)0x67,  /* [273] */
    (xdc_Char)0x65,  /* [274] */
    (xdc_Char)0x72,  /* [275] */
    (xdc_Char)0x3a,  /* [276] */
    (xdc_Char)0x20,  /* [277] */
    (xdc_Char)0x54,  /* [278] */
    (xdc_Char)0x68,  /* [279] */
    (xdc_Char)0x65,  /* [280] */
    (xdc_Char)0x20,  /* [281] */
    (xdc_Char)0x6c,  /* [282] */
    (xdc_Char)0x6f,  /* [283] */
    (xdc_Char)0x67,  /* [284] */
    (xdc_Char)0x67,  /* [285] */
    (xdc_Char)0x65,  /* [286] */
    (xdc_Char)0x72,  /* [287] */
    (xdc_Char)0x20,  /* [288] */
    (xdc_Char)0x69,  /* [289] */
    (xdc_Char)0x64,  /* [290] */
    (xdc_Char)0x20,  /* [291] */
    (xdc_Char)0x25,  /* [292] */
    (xdc_Char)0x64,  /* [293] */
    (xdc_Char)0x20,  /* [294] */
    (xdc_Char)0x69,  /* [295] */
    (xdc_Char)0x73,  /* [296] */
    (xdc_Char)0x20,  /* [297] */
    (xdc_Char)0x69,  /* [298] */
    (xdc_Char)0x6e,  /* [299] */
    (xdc_Char)0x76,  /* [300] */
    (xdc_Char)0x61,  /* [301] */
    (xdc_Char)0x6c,  /* [302] */
    (xdc_Char)0x69,  /* [303] */
    (xdc_Char)0x64,  /* [304] */
    (xdc_Char)0x2e,  /* [305] */
    (xdc_Char)0x0,  /* [306] */
    (xdc_Char)0x41,  /* [307] */
    (xdc_Char)0x5f,  /* [308] */
    (xdc_Char)0x63,  /* [309] */
    (xdc_Char)0x61,  /* [310] */
    (xdc_Char)0x6e,  /* [311] */
    (xdc_Char)0x6e,  /* [312] */
    (xdc_Char)0x6f,  /* [313] */
    (xdc_Char)0x74,  /* [314] */
    (xdc_Char)0x46,  /* [315] */
    (xdc_Char)0x69,  /* [316] */
    (xdc_Char)0x74,  /* [317] */
    (xdc_Char)0x49,  /* [318] */
    (xdc_Char)0x6e,  /* [319] */
    (xdc_Char)0x74,  /* [320] */
    (xdc_Char)0x6f,  /* [321] */
    (xdc_Char)0x41,  /* [322] */
    (xdc_Char)0x72,  /* [323] */
    (xdc_Char)0x67,  /* [324] */
    (xdc_Char)0x3a,  /* [325] */
    (xdc_Char)0x20,  /* [326] */
    (xdc_Char)0x73,  /* [327] */
    (xdc_Char)0x69,  /* [328] */
    (xdc_Char)0x7a,  /* [329] */
    (xdc_Char)0x65,  /* [330] */
    (xdc_Char)0x6f,  /* [331] */
    (xdc_Char)0x66,  /* [332] */
    (xdc_Char)0x28,  /* [333] */
    (xdc_Char)0x46,  /* [334] */
    (xdc_Char)0x6c,  /* [335] */
    (xdc_Char)0x6f,  /* [336] */
    (xdc_Char)0x61,  /* [337] */
    (xdc_Char)0x74,  /* [338] */
    (xdc_Char)0x29,  /* [339] */
    (xdc_Char)0x20,  /* [340] */
    (xdc_Char)0x3e,  /* [341] */
    (xdc_Char)0x20,  /* [342] */
    (xdc_Char)0x73,  /* [343] */
    (xdc_Char)0x69,  /* [344] */
    (xdc_Char)0x7a,  /* [345] */
    (xdc_Char)0x65,  /* [346] */
    (xdc_Char)0x6f,  /* [347] */
    (xdc_Char)0x66,  /* [348] */
    (xdc_Char)0x28,  /* [349] */
    (xdc_Char)0x41,  /* [350] */
    (xdc_Char)0x72,  /* [351] */
    (xdc_Char)0x67,  /* [352] */
    (xdc_Char)0x29,  /* [353] */
    (xdc_Char)0x0,  /* [354] */
    (xdc_Char)0x41,  /* [355] */
    (xdc_Char)0x5f,  /* [356] */
    (xdc_Char)0x63,  /* [357] */
    (xdc_Char)0x6c,  /* [358] */
    (xdc_Char)0x6f,  /* [359] */
    (xdc_Char)0x63,  /* [360] */
    (xdc_Char)0x6b,  /* [361] */
    (xdc_Char)0x44,  /* [362] */
    (xdc_Char)0x69,  /* [363] */
    (xdc_Char)0x73,  /* [364] */
    (xdc_Char)0x61,  /* [365] */
    (xdc_Char)0x62,  /* [366] */
    (xdc_Char)0x6c,  /* [367] */
    (xdc_Char)0x65,  /* [368] */
    (xdc_Char)0x64,  /* [369] */
    (xdc_Char)0x3a,  /* [370] */
    (xdc_Char)0x20,  /* [371] */
    (xdc_Char)0x43,  /* [372] */
    (xdc_Char)0x61,  /* [373] */
    (xdc_Char)0x6e,  /* [374] */
    (xdc_Char)0x6e,  /* [375] */
    (xdc_Char)0x6f,  /* [376] */
    (xdc_Char)0x74,  /* [377] */
    (xdc_Char)0x20,  /* [378] */
    (xdc_Char)0x63,  /* [379] */
    (xdc_Char)0x72,  /* [380] */
    (xdc_Char)0x65,  /* [381] */
    (xdc_Char)0x61,  /* [382] */
    (xdc_Char)0x74,  /* [383] */
    (xdc_Char)0x65,  /* [384] */
    (xdc_Char)0x20,  /* [385] */
    (xdc_Char)0x61,  /* [386] */
    (xdc_Char)0x20,  /* [387] */
    (xdc_Char)0x63,  /* [388] */
    (xdc_Char)0x6c,  /* [389] */
    (xdc_Char)0x6f,  /* [390] */
    (xdc_Char)0x63,  /* [391] */
    (xdc_Char)0x6b,  /* [392] */
    (xdc_Char)0x20,  /* [393] */
    (xdc_Char)0x69,  /* [394] */
    (xdc_Char)0x6e,  /* [395] */
    (xdc_Char)0x73,  /* [396] */
    (xdc_Char)0x74,  /* [397] */
    (xdc_Char)0x61,  /* [398] */
    (xdc_Char)0x6e,  /* [399] */
    (xdc_Char)0x63,  /* [400] */
    (xdc_Char)0x65,  /* [401] */
    (xdc_Char)0x20,  /* [402] */
    (xdc_Char)0x77,  /* [403] */
    (xdc_Char)0x68,  /* [404] */
    (xdc_Char)0x65,  /* [405] */
    (xdc_Char)0x6e,  /* [406] */
    (xdc_Char)0x20,  /* [407] */
    (xdc_Char)0x42,  /* [408] */
    (xdc_Char)0x49,  /* [409] */
    (xdc_Char)0x4f,  /* [410] */
    (xdc_Char)0x53,  /* [411] */
    (xdc_Char)0x2e,  /* [412] */
    (xdc_Char)0x63,  /* [413] */
    (xdc_Char)0x6c,  /* [414] */
    (xdc_Char)0x6f,  /* [415] */
    (xdc_Char)0x63,  /* [416] */
    (xdc_Char)0x6b,  /* [417] */
    (xdc_Char)0x45,  /* [418] */
    (xdc_Char)0x6e,  /* [419] */
    (xdc_Char)0x61,  /* [420] */
    (xdc_Char)0x62,  /* [421] */
    (xdc_Char)0x6c,  /* [422] */
    (xdc_Char)0x65,  /* [423] */
    (xdc_Char)0x64,  /* [424] */
    (xdc_Char)0x20,  /* [425] */
    (xdc_Char)0x69,  /* [426] */
    (xdc_Char)0x73,  /* [427] */
    (xdc_Char)0x20,  /* [428] */
    (xdc_Char)0x66,  /* [429] */
    (xdc_Char)0x61,  /* [430] */
    (xdc_Char)0x6c,  /* [431] */
    (xdc_Char)0x73,  /* [432] */
    (xdc_Char)0x65,  /* [433] */
    (xdc_Char)0x2e,  /* [434] */
    (xdc_Char)0x0,  /* [435] */
    (xdc_Char)0x41,  /* [436] */
    (xdc_Char)0x5f,  /* [437] */
    (xdc_Char)0x62,  /* [438] */
    (xdc_Char)0x61,  /* [439] */
    (xdc_Char)0x64,  /* [440] */
    (xdc_Char)0x54,  /* [441] */
    (xdc_Char)0x68,  /* [442] */
    (xdc_Char)0x72,  /* [443] */
    (xdc_Char)0x65,  /* [444] */
    (xdc_Char)0x61,  /* [445] */
    (xdc_Char)0x64,  /* [446] */
    (xdc_Char)0x54,  /* [447] */
    (xdc_Char)0x79,  /* [448] */
    (xdc_Char)0x70,  /* [449] */
    (xdc_Char)0x65,  /* [450] */
    (xdc_Char)0x3a,  /* [451] */
    (xdc_Char)0x20,  /* [452] */
    (xdc_Char)0x43,  /* [453] */
    (xdc_Char)0x61,  /* [454] */
    (xdc_Char)0x6e,  /* [455] */
    (xdc_Char)0x6e,  /* [456] */
    (xdc_Char)0x6f,  /* [457] */
    (xdc_Char)0x74,  /* [458] */
    (xdc_Char)0x20,  /* [459] */
    (xdc_Char)0x63,  /* [460] */
    (xdc_Char)0x72,  /* [461] */
    (xdc_Char)0x65,  /* [462] */
    (xdc_Char)0x61,  /* [463] */
    (xdc_Char)0x74,  /* [464] */
    (xdc_Char)0x65,  /* [465] */
    (xdc_Char)0x2f,  /* [466] */
    (xdc_Char)0x64,  /* [467] */
    (xdc_Char)0x65,  /* [468] */
    (xdc_Char)0x6c,  /* [469] */
    (xdc_Char)0x65,  /* [470] */
    (xdc_Char)0x74,  /* [471] */
    (xdc_Char)0x65,  /* [472] */
    (xdc_Char)0x20,  /* [473] */
    (xdc_Char)0x61,  /* [474] */
    (xdc_Char)0x20,  /* [475] */
    (xdc_Char)0x43,  /* [476] */
    (xdc_Char)0x6c,  /* [477] */
    (xdc_Char)0x6f,  /* [478] */
    (xdc_Char)0x63,  /* [479] */
    (xdc_Char)0x6b,  /* [480] */
    (xdc_Char)0x20,  /* [481] */
    (xdc_Char)0x66,  /* [482] */
    (xdc_Char)0x72,  /* [483] */
    (xdc_Char)0x6f,  /* [484] */
    (xdc_Char)0x6d,  /* [485] */
    (xdc_Char)0x20,  /* [486] */
    (xdc_Char)0x48,  /* [487] */
    (xdc_Char)0x77,  /* [488] */
    (xdc_Char)0x69,  /* [489] */
    (xdc_Char)0x20,  /* [490] */
    (xdc_Char)0x6f,  /* [491] */
    (xdc_Char)0x72,  /* [492] */
    (xdc_Char)0x20,  /* [493] */
    (xdc_Char)0x53,  /* [494] */
    (xdc_Char)0x77,  /* [495] */
    (xdc_Char)0x69,  /* [496] */
    (xdc_Char)0x20,  /* [497] */
    (xdc_Char)0x74,  /* [498] */
    (xdc_Char)0x68,  /* [499] */
    (xdc_Char)0x72,  /* [500] */
    (xdc_Char)0x65,  /* [501] */
    (xdc_Char)0x61,  /* [502] */
    (xdc_Char)0x64,  /* [503] */
    (xdc_Char)0x2e,  /* [504] */
    (xdc_Char)0x0,  /* [505] */
    (xdc_Char)0x41,  /* [506] */
    (xdc_Char)0x5f,  /* [507] */
    (xdc_Char)0x6e,  /* [508] */
    (xdc_Char)0x75,  /* [509] */
    (xdc_Char)0x6c,  /* [510] */
    (xdc_Char)0x6c,  /* [511] */
    (xdc_Char)0x45,  /* [512] */
    (xdc_Char)0x76,  /* [513] */
    (xdc_Char)0x65,  /* [514] */
    (xdc_Char)0x6e,  /* [515] */
    (xdc_Char)0x74,  /* [516] */
    (xdc_Char)0x4d,  /* [517] */
    (xdc_Char)0x61,  /* [518] */
    (xdc_Char)0x73,  /* [519] */
    (xdc_Char)0x6b,  /* [520] */
    (xdc_Char)0x73,  /* [521] */
    (xdc_Char)0x3a,  /* [522] */
    (xdc_Char)0x20,  /* [523] */
    (xdc_Char)0x6f,  /* [524] */
    (xdc_Char)0x72,  /* [525] */
    (xdc_Char)0x4d,  /* [526] */
    (xdc_Char)0x61,  /* [527] */
    (xdc_Char)0x73,  /* [528] */
    (xdc_Char)0x6b,  /* [529] */
    (xdc_Char)0x20,  /* [530] */
    (xdc_Char)0x61,  /* [531] */
    (xdc_Char)0x6e,  /* [532] */
    (xdc_Char)0x64,  /* [533] */
    (xdc_Char)0x20,  /* [534] */
    (xdc_Char)0x61,  /* [535] */
    (xdc_Char)0x6e,  /* [536] */
    (xdc_Char)0x64,  /* [537] */
    (xdc_Char)0x4d,  /* [538] */
    (xdc_Char)0x61,  /* [539] */
    (xdc_Char)0x73,  /* [540] */
    (xdc_Char)0x6b,  /* [541] */
    (xdc_Char)0x20,  /* [542] */
    (xdc_Char)0x61,  /* [543] */
    (xdc_Char)0x72,  /* [544] */
    (xdc_Char)0x65,  /* [545] */
    (xdc_Char)0x20,  /* [546] */
    (xdc_Char)0x6e,  /* [547] */
    (xdc_Char)0x75,  /* [548] */
    (xdc_Char)0x6c,  /* [549] */
    (xdc_Char)0x6c,  /* [550] */
    (xdc_Char)0x2e,  /* [551] */
    (xdc_Char)0x0,  /* [552] */
    (xdc_Char)0x41,  /* [553] */
    (xdc_Char)0x5f,  /* [554] */
    (xdc_Char)0x6e,  /* [555] */
    (xdc_Char)0x75,  /* [556] */
    (xdc_Char)0x6c,  /* [557] */
    (xdc_Char)0x6c,  /* [558] */
    (xdc_Char)0x45,  /* [559] */
    (xdc_Char)0x76,  /* [560] */
    (xdc_Char)0x65,  /* [561] */
    (xdc_Char)0x6e,  /* [562] */
    (xdc_Char)0x74,  /* [563] */
    (xdc_Char)0x49,  /* [564] */
    (xdc_Char)0x64,  /* [565] */
    (xdc_Char)0x3a,  /* [566] */
    (xdc_Char)0x20,  /* [567] */
    (xdc_Char)0x70,  /* [568] */
    (xdc_Char)0x6f,  /* [569] */
    (xdc_Char)0x73,  /* [570] */
    (xdc_Char)0x74,  /* [571] */
    (xdc_Char)0x65,  /* [572] */
    (xdc_Char)0x64,  /* [573] */
    (xdc_Char)0x20,  /* [574] */
    (xdc_Char)0x65,  /* [575] */
    (xdc_Char)0x76,  /* [576] */
    (xdc_Char)0x65,  /* [577] */
    (xdc_Char)0x6e,  /* [578] */
    (xdc_Char)0x74,  /* [579] */
    (xdc_Char)0x49,  /* [580] */
    (xdc_Char)0x64,  /* [581] */
    (xdc_Char)0x20,  /* [582] */
    (xdc_Char)0x69,  /* [583] */
    (xdc_Char)0x73,  /* [584] */
    (xdc_Char)0x20,  /* [585] */
    (xdc_Char)0x6e,  /* [586] */
    (xdc_Char)0x75,  /* [587] */
    (xdc_Char)0x6c,  /* [588] */
    (xdc_Char)0x6c,  /* [589] */
    (xdc_Char)0x2e,  /* [590] */
    (xdc_Char)0x0,  /* [591] */
    (xdc_Char)0x41,  /* [592] */
    (xdc_Char)0x5f,  /* [593] */
    (xdc_Char)0x65,  /* [594] */
    (xdc_Char)0x76,  /* [595] */
    (xdc_Char)0x65,  /* [596] */
    (xdc_Char)0x6e,  /* [597] */
    (xdc_Char)0x74,  /* [598] */
    (xdc_Char)0x49,  /* [599] */
    (xdc_Char)0x6e,  /* [600] */
    (xdc_Char)0x55,  /* [601] */
    (xdc_Char)0x73,  /* [602] */
    (xdc_Char)0x65,  /* [603] */
    (xdc_Char)0x3a,  /* [604] */
    (xdc_Char)0x20,  /* [605] */
    (xdc_Char)0x45,  /* [606] */
    (xdc_Char)0x76,  /* [607] */
    (xdc_Char)0x65,  /* [608] */
    (xdc_Char)0x6e,  /* [609] */
    (xdc_Char)0x74,  /* [610] */
    (xdc_Char)0x20,  /* [611] */
    (xdc_Char)0x6f,  /* [612] */
    (xdc_Char)0x62,  /* [613] */
    (xdc_Char)0x6a,  /* [614] */
    (xdc_Char)0x65,  /* [615] */
    (xdc_Char)0x63,  /* [616] */
    (xdc_Char)0x74,  /* [617] */
    (xdc_Char)0x20,  /* [618] */
    (xdc_Char)0x61,  /* [619] */
    (xdc_Char)0x6c,  /* [620] */
    (xdc_Char)0x72,  /* [621] */
    (xdc_Char)0x65,  /* [622] */
    (xdc_Char)0x61,  /* [623] */
    (xdc_Char)0x64,  /* [624] */
    (xdc_Char)0x79,  /* [625] */
    (xdc_Char)0x20,  /* [626] */
    (xdc_Char)0x69,  /* [627] */
    (xdc_Char)0x6e,  /* [628] */
    (xdc_Char)0x20,  /* [629] */
    (xdc_Char)0x75,  /* [630] */
    (xdc_Char)0x73,  /* [631] */
    (xdc_Char)0x65,  /* [632] */
    (xdc_Char)0x2e,  /* [633] */
    (xdc_Char)0x0,  /* [634] */
    (xdc_Char)0x41,  /* [635] */
    (xdc_Char)0x5f,  /* [636] */
    (xdc_Char)0x62,  /* [637] */
    (xdc_Char)0x61,  /* [638] */
    (xdc_Char)0x64,  /* [639] */
    (xdc_Char)0x43,  /* [640] */
    (xdc_Char)0x6f,  /* [641] */
    (xdc_Char)0x6e,  /* [642] */
    (xdc_Char)0x74,  /* [643] */
    (xdc_Char)0x65,  /* [644] */
    (xdc_Char)0x78,  /* [645] */
    (xdc_Char)0x74,  /* [646] */
    (xdc_Char)0x3a,  /* [647] */
    (xdc_Char)0x20,  /* [648] */
    (xdc_Char)0x62,  /* [649] */
    (xdc_Char)0x61,  /* [650] */
    (xdc_Char)0x64,  /* [651] */
    (xdc_Char)0x20,  /* [652] */
    (xdc_Char)0x63,  /* [653] */
    (xdc_Char)0x61,  /* [654] */
    (xdc_Char)0x6c,  /* [655] */
    (xdc_Char)0x6c,  /* [656] */
    (xdc_Char)0x69,  /* [657] */
    (xdc_Char)0x6e,  /* [658] */
    (xdc_Char)0x67,  /* [659] */
    (xdc_Char)0x20,  /* [660] */
    (xdc_Char)0x63,  /* [661] */
    (xdc_Char)0x6f,  /* [662] */
    (xdc_Char)0x6e,  /* [663] */
    (xdc_Char)0x74,  /* [664] */
    (xdc_Char)0x65,  /* [665] */
    (xdc_Char)0x78,  /* [666] */
    (xdc_Char)0x74,  /* [667] */
    (xdc_Char)0x2e,  /* [668] */
    (xdc_Char)0x20,  /* [669] */
    (xdc_Char)0x4d,  /* [670] */
    (xdc_Char)0x75,  /* [671] */
    (xdc_Char)0x73,  /* [672] */
    (xdc_Char)0x74,  /* [673] */
    (xdc_Char)0x20,  /* [674] */
    (xdc_Char)0x62,  /* [675] */
    (xdc_Char)0x65,  /* [676] */
    (xdc_Char)0x20,  /* [677] */
    (xdc_Char)0x63,  /* [678] */
    (xdc_Char)0x61,  /* [679] */
    (xdc_Char)0x6c,  /* [680] */
    (xdc_Char)0x6c,  /* [681] */
    (xdc_Char)0x65,  /* [682] */
    (xdc_Char)0x64,  /* [683] */
    (xdc_Char)0x20,  /* [684] */
    (xdc_Char)0x66,  /* [685] */
    (xdc_Char)0x72,  /* [686] */
    (xdc_Char)0x6f,  /* [687] */
    (xdc_Char)0x6d,  /* [688] */
    (xdc_Char)0x20,  /* [689] */
    (xdc_Char)0x61,  /* [690] */
    (xdc_Char)0x20,  /* [691] */
    (xdc_Char)0x54,  /* [692] */
    (xdc_Char)0x61,  /* [693] */
    (xdc_Char)0x73,  /* [694] */
    (xdc_Char)0x6b,  /* [695] */
    (xdc_Char)0x2e,  /* [696] */
    (xdc_Char)0x0,  /* [697] */
    (xdc_Char)0x4d,  /* [698] */
    (xdc_Char)0x61,  /* [699] */
    (xdc_Char)0x69,  /* [700] */
    (xdc_Char)0x6c,  /* [701] */
    (xdc_Char)0x62,  /* [702] */
    (xdc_Char)0x6f,  /* [703] */
    (xdc_Char)0x78,  /* [704] */
    (xdc_Char)0x5f,  /* [705] */
    (xdc_Char)0x63,  /* [706] */
    (xdc_Char)0x72,  /* [707] */
    (xdc_Char)0x65,  /* [708] */
    (xdc_Char)0x61,  /* [709] */
    (xdc_Char)0x74,  /* [710] */
    (xdc_Char)0x65,  /* [711] */
    (xdc_Char)0x27,  /* [712] */
    (xdc_Char)0x73,  /* [713] */
    (xdc_Char)0x20,  /* [714] */
    (xdc_Char)0x62,  /* [715] */
    (xdc_Char)0x75,  /* [716] */
    (xdc_Char)0x66,  /* [717] */
    (xdc_Char)0x53,  /* [718] */
    (xdc_Char)0x69,  /* [719] */
    (xdc_Char)0x7a,  /* [720] */
    (xdc_Char)0x65,  /* [721] */
    (xdc_Char)0x20,  /* [722] */
    (xdc_Char)0x70,  /* [723] */
    (xdc_Char)0x61,  /* [724] */
    (xdc_Char)0x72,  /* [725] */
    (xdc_Char)0x61,  /* [726] */
    (xdc_Char)0x6d,  /* [727] */
    (xdc_Char)0x65,  /* [728] */
    (xdc_Char)0x74,  /* [729] */
    (xdc_Char)0x65,  /* [730] */
    (xdc_Char)0x72,  /* [731] */
    (xdc_Char)0x20,  /* [732] */
    (xdc_Char)0x69,  /* [733] */
    (xdc_Char)0x73,  /* [734] */
    (xdc_Char)0x20,  /* [735] */
    (xdc_Char)0x69,  /* [736] */
    (xdc_Char)0x6e,  /* [737] */
    (xdc_Char)0x76,  /* [738] */
    (xdc_Char)0x61,  /* [739] */
    (xdc_Char)0x6c,  /* [740] */
    (xdc_Char)0x69,  /* [741] */
    (xdc_Char)0x64,  /* [742] */
    (xdc_Char)0x20,  /* [743] */
    (xdc_Char)0x28,  /* [744] */
    (xdc_Char)0x74,  /* [745] */
    (xdc_Char)0x6f,  /* [746] */
    (xdc_Char)0x6f,  /* [747] */
    (xdc_Char)0x20,  /* [748] */
    (xdc_Char)0x73,  /* [749] */
    (xdc_Char)0x6d,  /* [750] */
    (xdc_Char)0x61,  /* [751] */
    (xdc_Char)0x6c,  /* [752] */
    (xdc_Char)0x6c,  /* [753] */
    (xdc_Char)0x29,  /* [754] */
    (xdc_Char)0x0,  /* [755] */
    (xdc_Char)0x41,  /* [756] */
    (xdc_Char)0x5f,  /* [757] */
    (xdc_Char)0x6e,  /* [758] */
    (xdc_Char)0x6f,  /* [759] */
    (xdc_Char)0x45,  /* [760] */
    (xdc_Char)0x76,  /* [761] */
    (xdc_Char)0x65,  /* [762] */
    (xdc_Char)0x6e,  /* [763] */
    (xdc_Char)0x74,  /* [764] */
    (xdc_Char)0x73,  /* [765] */
    (xdc_Char)0x3a,  /* [766] */
    (xdc_Char)0x20,  /* [767] */
    (xdc_Char)0x54,  /* [768] */
    (xdc_Char)0x68,  /* [769] */
    (xdc_Char)0x65,  /* [770] */
    (xdc_Char)0x20,  /* [771] */
    (xdc_Char)0x45,  /* [772] */
    (xdc_Char)0x76,  /* [773] */
    (xdc_Char)0x65,  /* [774] */
    (xdc_Char)0x6e,  /* [775] */
    (xdc_Char)0x74,  /* [776] */
    (xdc_Char)0x2e,  /* [777] */
    (xdc_Char)0x73,  /* [778] */
    (xdc_Char)0x75,  /* [779] */
    (xdc_Char)0x70,  /* [780] */
    (xdc_Char)0x70,  /* [781] */
    (xdc_Char)0x6f,  /* [782] */
    (xdc_Char)0x72,  /* [783] */
    (xdc_Char)0x74,  /* [784] */
    (xdc_Char)0x73,  /* [785] */
    (xdc_Char)0x45,  /* [786] */
    (xdc_Char)0x76,  /* [787] */
    (xdc_Char)0x65,  /* [788] */
    (xdc_Char)0x6e,  /* [789] */
    (xdc_Char)0x74,  /* [790] */
    (xdc_Char)0x73,  /* [791] */
    (xdc_Char)0x20,  /* [792] */
    (xdc_Char)0x66,  /* [793] */
    (xdc_Char)0x6c,  /* [794] */
    (xdc_Char)0x61,  /* [795] */
    (xdc_Char)0x67,  /* [796] */
    (xdc_Char)0x20,  /* [797] */
    (xdc_Char)0x69,  /* [798] */
    (xdc_Char)0x73,  /* [799] */
    (xdc_Char)0x20,  /* [800] */
    (xdc_Char)0x64,  /* [801] */
    (xdc_Char)0x69,  /* [802] */
    (xdc_Char)0x73,  /* [803] */
    (xdc_Char)0x61,  /* [804] */
    (xdc_Char)0x62,  /* [805] */
    (xdc_Char)0x6c,  /* [806] */
    (xdc_Char)0x65,  /* [807] */
    (xdc_Char)0x64,  /* [808] */
    (xdc_Char)0x2e,  /* [809] */
    (xdc_Char)0x0,  /* [810] */
    (xdc_Char)0x41,  /* [811] */
    (xdc_Char)0x5f,  /* [812] */
    (xdc_Char)0x69,  /* [813] */
    (xdc_Char)0x6e,  /* [814] */
    (xdc_Char)0x76,  /* [815] */
    (xdc_Char)0x54,  /* [816] */
    (xdc_Char)0x69,  /* [817] */
    (xdc_Char)0x6d,  /* [818] */
    (xdc_Char)0x65,  /* [819] */
    (xdc_Char)0x6f,  /* [820] */
    (xdc_Char)0x75,  /* [821] */
    (xdc_Char)0x74,  /* [822] */
    (xdc_Char)0x3a,  /* [823] */
    (xdc_Char)0x20,  /* [824] */
    (xdc_Char)0x43,  /* [825] */
    (xdc_Char)0x61,  /* [826] */
    (xdc_Char)0x6e,  /* [827] */
    (xdc_Char)0x27,  /* [828] */
    (xdc_Char)0x74,  /* [829] */
    (xdc_Char)0x20,  /* [830] */
    (xdc_Char)0x75,  /* [831] */
    (xdc_Char)0x73,  /* [832] */
    (xdc_Char)0x65,  /* [833] */
    (xdc_Char)0x20,  /* [834] */
    (xdc_Char)0x42,  /* [835] */
    (xdc_Char)0x49,  /* [836] */
    (xdc_Char)0x4f,  /* [837] */
    (xdc_Char)0x53,  /* [838] */
    (xdc_Char)0x5f,  /* [839] */
    (xdc_Char)0x45,  /* [840] */
    (xdc_Char)0x56,  /* [841] */
    (xdc_Char)0x45,  /* [842] */
    (xdc_Char)0x4e,  /* [843] */
    (xdc_Char)0x54,  /* [844] */
    (xdc_Char)0x5f,  /* [845] */
    (xdc_Char)0x41,  /* [846] */
    (xdc_Char)0x43,  /* [847] */
    (xdc_Char)0x51,  /* [848] */
    (xdc_Char)0x55,  /* [849] */
    (xdc_Char)0x49,  /* [850] */
    (xdc_Char)0x52,  /* [851] */
    (xdc_Char)0x45,  /* [852] */
    (xdc_Char)0x44,  /* [853] */
    (xdc_Char)0x20,  /* [854] */
    (xdc_Char)0x77,  /* [855] */
    (xdc_Char)0x69,  /* [856] */
    (xdc_Char)0x74,  /* [857] */
    (xdc_Char)0x68,  /* [858] */
    (xdc_Char)0x20,  /* [859] */
    (xdc_Char)0x74,  /* [860] */
    (xdc_Char)0x68,  /* [861] */
    (xdc_Char)0x69,  /* [862] */
    (xdc_Char)0x73,  /* [863] */
    (xdc_Char)0x20,  /* [864] */
    (xdc_Char)0x53,  /* [865] */
    (xdc_Char)0x65,  /* [866] */
    (xdc_Char)0x6d,  /* [867] */
    (xdc_Char)0x61,  /* [868] */
    (xdc_Char)0x70,  /* [869] */
    (xdc_Char)0x68,  /* [870] */
    (xdc_Char)0x6f,  /* [871] */
    (xdc_Char)0x72,  /* [872] */
    (xdc_Char)0x65,  /* [873] */
    (xdc_Char)0x2e,  /* [874] */
    (xdc_Char)0x0,  /* [875] */
    (xdc_Char)0x41,  /* [876] */
    (xdc_Char)0x5f,  /* [877] */
    (xdc_Char)0x73,  /* [878] */
    (xdc_Char)0x77,  /* [879] */
    (xdc_Char)0x69,  /* [880] */
    (xdc_Char)0x44,  /* [881] */
    (xdc_Char)0x69,  /* [882] */
    (xdc_Char)0x73,  /* [883] */
    (xdc_Char)0x61,  /* [884] */
    (xdc_Char)0x62,  /* [885] */
    (xdc_Char)0x6c,  /* [886] */
    (xdc_Char)0x65,  /* [887] */
    (xdc_Char)0x64,  /* [888] */
    (xdc_Char)0x3a,  /* [889] */
    (xdc_Char)0x20,  /* [890] */
    (xdc_Char)0x43,  /* [891] */
    (xdc_Char)0x61,  /* [892] */
    (xdc_Char)0x6e,  /* [893] */
    (xdc_Char)0x6e,  /* [894] */
    (xdc_Char)0x6f,  /* [895] */
    (xdc_Char)0x74,  /* [896] */
    (xdc_Char)0x20,  /* [897] */
    (xdc_Char)0x63,  /* [898] */
    (xdc_Char)0x72,  /* [899] */
    (xdc_Char)0x65,  /* [900] */
    (xdc_Char)0x61,  /* [901] */
    (xdc_Char)0x74,  /* [902] */
    (xdc_Char)0x65,  /* [903] */
    (xdc_Char)0x20,  /* [904] */
    (xdc_Char)0x61,  /* [905] */
    (xdc_Char)0x20,  /* [906] */
    (xdc_Char)0x53,  /* [907] */
    (xdc_Char)0x77,  /* [908] */
    (xdc_Char)0x69,  /* [909] */
    (xdc_Char)0x20,  /* [910] */
    (xdc_Char)0x77,  /* [911] */
    (xdc_Char)0x68,  /* [912] */
    (xdc_Char)0x65,  /* [913] */
    (xdc_Char)0x6e,  /* [914] */
    (xdc_Char)0x20,  /* [915] */
    (xdc_Char)0x53,  /* [916] */
    (xdc_Char)0x77,  /* [917] */
    (xdc_Char)0x69,  /* [918] */
    (xdc_Char)0x20,  /* [919] */
    (xdc_Char)0x69,  /* [920] */
    (xdc_Char)0x73,  /* [921] */
    (xdc_Char)0x20,  /* [922] */
    (xdc_Char)0x64,  /* [923] */
    (xdc_Char)0x69,  /* [924] */
    (xdc_Char)0x73,  /* [925] */
    (xdc_Char)0x61,  /* [926] */
    (xdc_Char)0x62,  /* [927] */
    (xdc_Char)0x6c,  /* [928] */
    (xdc_Char)0x65,  /* [929] */
    (xdc_Char)0x64,  /* [930] */
    (xdc_Char)0x2e,  /* [931] */
    (xdc_Char)0x0,  /* [932] */
    (xdc_Char)0x41,  /* [933] */
    (xdc_Char)0x5f,  /* [934] */
    (xdc_Char)0x62,  /* [935] */
    (xdc_Char)0x61,  /* [936] */
    (xdc_Char)0x64,  /* [937] */
    (xdc_Char)0x50,  /* [938] */
    (xdc_Char)0x72,  /* [939] */
    (xdc_Char)0x69,  /* [940] */
    (xdc_Char)0x6f,  /* [941] */
    (xdc_Char)0x72,  /* [942] */
    (xdc_Char)0x69,  /* [943] */
    (xdc_Char)0x74,  /* [944] */
    (xdc_Char)0x79,  /* [945] */
    (xdc_Char)0x3a,  /* [946] */
    (xdc_Char)0x20,  /* [947] */
    (xdc_Char)0x41,  /* [948] */
    (xdc_Char)0x6e,  /* [949] */
    (xdc_Char)0x20,  /* [950] */
    (xdc_Char)0x69,  /* [951] */
    (xdc_Char)0x6e,  /* [952] */
    (xdc_Char)0x76,  /* [953] */
    (xdc_Char)0x61,  /* [954] */
    (xdc_Char)0x6c,  /* [955] */
    (xdc_Char)0x69,  /* [956] */
    (xdc_Char)0x64,  /* [957] */
    (xdc_Char)0x20,  /* [958] */
    (xdc_Char)0x53,  /* [959] */
    (xdc_Char)0x77,  /* [960] */
    (xdc_Char)0x69,  /* [961] */
    (xdc_Char)0x20,  /* [962] */
    (xdc_Char)0x70,  /* [963] */
    (xdc_Char)0x72,  /* [964] */
    (xdc_Char)0x69,  /* [965] */
    (xdc_Char)0x6f,  /* [966] */
    (xdc_Char)0x72,  /* [967] */
    (xdc_Char)0x69,  /* [968] */
    (xdc_Char)0x74,  /* [969] */
    (xdc_Char)0x79,  /* [970] */
    (xdc_Char)0x20,  /* [971] */
    (xdc_Char)0x77,  /* [972] */
    (xdc_Char)0x61,  /* [973] */
    (xdc_Char)0x73,  /* [974] */
    (xdc_Char)0x20,  /* [975] */
    (xdc_Char)0x75,  /* [976] */
    (xdc_Char)0x73,  /* [977] */
    (xdc_Char)0x65,  /* [978] */
    (xdc_Char)0x64,  /* [979] */
    (xdc_Char)0x2e,  /* [980] */
    (xdc_Char)0x0,  /* [981] */
    (xdc_Char)0x41,  /* [982] */
    (xdc_Char)0x5f,  /* [983] */
    (xdc_Char)0x62,  /* [984] */
    (xdc_Char)0x61,  /* [985] */
    (xdc_Char)0x64,  /* [986] */
    (xdc_Char)0x54,  /* [987] */
    (xdc_Char)0x68,  /* [988] */
    (xdc_Char)0x72,  /* [989] */
    (xdc_Char)0x65,  /* [990] */
    (xdc_Char)0x61,  /* [991] */
    (xdc_Char)0x64,  /* [992] */
    (xdc_Char)0x54,  /* [993] */
    (xdc_Char)0x79,  /* [994] */
    (xdc_Char)0x70,  /* [995] */
    (xdc_Char)0x65,  /* [996] */
    (xdc_Char)0x3a,  /* [997] */
    (xdc_Char)0x20,  /* [998] */
    (xdc_Char)0x43,  /* [999] */
    (xdc_Char)0x61,  /* [1000] */
    (xdc_Char)0x6e,  /* [1001] */
    (xdc_Char)0x6e,  /* [1002] */
    (xdc_Char)0x6f,  /* [1003] */
    (xdc_Char)0x74,  /* [1004] */
    (xdc_Char)0x20,  /* [1005] */
    (xdc_Char)0x63,  /* [1006] */
    (xdc_Char)0x72,  /* [1007] */
    (xdc_Char)0x65,  /* [1008] */
    (xdc_Char)0x61,  /* [1009] */
    (xdc_Char)0x74,  /* [1010] */
    (xdc_Char)0x65,  /* [1011] */
    (xdc_Char)0x2f,  /* [1012] */
    (xdc_Char)0x64,  /* [1013] */
    (xdc_Char)0x65,  /* [1014] */
    (xdc_Char)0x6c,  /* [1015] */
    (xdc_Char)0x65,  /* [1016] */
    (xdc_Char)0x74,  /* [1017] */
    (xdc_Char)0x65,  /* [1018] */
    (xdc_Char)0x20,  /* [1019] */
    (xdc_Char)0x61,  /* [1020] */
    (xdc_Char)0x20,  /* [1021] */
    (xdc_Char)0x74,  /* [1022] */
    (xdc_Char)0x61,  /* [1023] */
    (xdc_Char)0x73,  /* [1024] */
    (xdc_Char)0x6b,  /* [1025] */
    (xdc_Char)0x20,  /* [1026] */
    (xdc_Char)0x66,  /* [1027] */
    (xdc_Char)0x72,  /* [1028] */
    (xdc_Char)0x6f,  /* [1029] */
    (xdc_Char)0x6d,  /* [1030] */
    (xdc_Char)0x20,  /* [1031] */
    (xdc_Char)0x48,  /* [1032] */
    (xdc_Char)0x77,  /* [1033] */
    (xdc_Char)0x69,  /* [1034] */
    (xdc_Char)0x20,  /* [1035] */
    (xdc_Char)0x6f,  /* [1036] */
    (xdc_Char)0x72,  /* [1037] */
    (xdc_Char)0x20,  /* [1038] */
    (xdc_Char)0x53,  /* [1039] */
    (xdc_Char)0x77,  /* [1040] */
    (xdc_Char)0x69,  /* [1041] */
    (xdc_Char)0x20,  /* [1042] */
    (xdc_Char)0x74,  /* [1043] */
    (xdc_Char)0x68,  /* [1044] */
    (xdc_Char)0x72,  /* [1045] */
    (xdc_Char)0x65,  /* [1046] */
    (xdc_Char)0x61,  /* [1047] */
    (xdc_Char)0x64,  /* [1048] */
    (xdc_Char)0x2e,  /* [1049] */
    (xdc_Char)0x0,  /* [1050] */
    (xdc_Char)0x41,  /* [1051] */
    (xdc_Char)0x5f,  /* [1052] */
    (xdc_Char)0x62,  /* [1053] */
    (xdc_Char)0x61,  /* [1054] */
    (xdc_Char)0x64,  /* [1055] */
    (xdc_Char)0x54,  /* [1056] */
    (xdc_Char)0x61,  /* [1057] */
    (xdc_Char)0x73,  /* [1058] */
    (xdc_Char)0x6b,  /* [1059] */
    (xdc_Char)0x53,  /* [1060] */
    (xdc_Char)0x74,  /* [1061] */
    (xdc_Char)0x61,  /* [1062] */
    (xdc_Char)0x74,  /* [1063] */
    (xdc_Char)0x65,  /* [1064] */
    (xdc_Char)0x3a,  /* [1065] */
    (xdc_Char)0x20,  /* [1066] */
    (xdc_Char)0x43,  /* [1067] */
    (xdc_Char)0x61,  /* [1068] */
    (xdc_Char)0x6e,  /* [1069] */
    (xdc_Char)0x27,  /* [1070] */
    (xdc_Char)0x74,  /* [1071] */
    (xdc_Char)0x20,  /* [1072] */
    (xdc_Char)0x64,  /* [1073] */
    (xdc_Char)0x65,  /* [1074] */
    (xdc_Char)0x6c,  /* [1075] */
    (xdc_Char)0x65,  /* [1076] */
    (xdc_Char)0x74,  /* [1077] */
    (xdc_Char)0x65,  /* [1078] */
    (xdc_Char)0x20,  /* [1079] */
    (xdc_Char)0x61,  /* [1080] */
    (xdc_Char)0x20,  /* [1081] */
    (xdc_Char)0x74,  /* [1082] */
    (xdc_Char)0x61,  /* [1083] */
    (xdc_Char)0x73,  /* [1084] */
    (xdc_Char)0x6b,  /* [1085] */
    (xdc_Char)0x20,  /* [1086] */
    (xdc_Char)0x69,  /* [1087] */
    (xdc_Char)0x6e,  /* [1088] */
    (xdc_Char)0x20,  /* [1089] */
    (xdc_Char)0x52,  /* [1090] */
    (xdc_Char)0x55,  /* [1091] */
    (xdc_Char)0x4e,  /* [1092] */
    (xdc_Char)0x4e,  /* [1093] */
    (xdc_Char)0x49,  /* [1094] */
    (xdc_Char)0x4e,  /* [1095] */
    (xdc_Char)0x47,  /* [1096] */
    (xdc_Char)0x20,  /* [1097] */
    (xdc_Char)0x73,  /* [1098] */
    (xdc_Char)0x74,  /* [1099] */
    (xdc_Char)0x61,  /* [1100] */
    (xdc_Char)0x74,  /* [1101] */
    (xdc_Char)0x65,  /* [1102] */
    (xdc_Char)0x2e,  /* [1103] */
    (xdc_Char)0x0,  /* [1104] */
    (xdc_Char)0x41,  /* [1105] */
    (xdc_Char)0x5f,  /* [1106] */
    (xdc_Char)0x6e,  /* [1107] */
    (xdc_Char)0x6f,  /* [1108] */
    (xdc_Char)0x50,  /* [1109] */
    (xdc_Char)0x65,  /* [1110] */
    (xdc_Char)0x6e,  /* [1111] */
    (xdc_Char)0x64,  /* [1112] */
    (xdc_Char)0x45,  /* [1113] */
    (xdc_Char)0x6c,  /* [1114] */
    (xdc_Char)0x65,  /* [1115] */
    (xdc_Char)0x6d,  /* [1116] */
    (xdc_Char)0x3a,  /* [1117] */
    (xdc_Char)0x20,  /* [1118] */
    (xdc_Char)0x4e,  /* [1119] */
    (xdc_Char)0x6f,  /* [1120] */
    (xdc_Char)0x74,  /* [1121] */
    (xdc_Char)0x20,  /* [1122] */
    (xdc_Char)0x65,  /* [1123] */
    (xdc_Char)0x6e,  /* [1124] */
    (xdc_Char)0x6f,  /* [1125] */
    (xdc_Char)0x75,  /* [1126] */
    (xdc_Char)0x67,  /* [1127] */
    (xdc_Char)0x68,  /* [1128] */
    (xdc_Char)0x20,  /* [1129] */
    (xdc_Char)0x69,  /* [1130] */
    (xdc_Char)0x6e,  /* [1131] */
    (xdc_Char)0x66,  /* [1132] */
    (xdc_Char)0x6f,  /* [1133] */
    (xdc_Char)0x20,  /* [1134] */
    (xdc_Char)0x74,  /* [1135] */
    (xdc_Char)0x6f,  /* [1136] */
    (xdc_Char)0x20,  /* [1137] */
    (xdc_Char)0x64,  /* [1138] */
    (xdc_Char)0x65,  /* [1139] */
    (xdc_Char)0x6c,  /* [1140] */
    (xdc_Char)0x65,  /* [1141] */
    (xdc_Char)0x74,  /* [1142] */
    (xdc_Char)0x65,  /* [1143] */
    (xdc_Char)0x20,  /* [1144] */
    (xdc_Char)0x42,  /* [1145] */
    (xdc_Char)0x4c,  /* [1146] */
    (xdc_Char)0x4f,  /* [1147] */
    (xdc_Char)0x43,  /* [1148] */
    (xdc_Char)0x4b,  /* [1149] */
    (xdc_Char)0x45,  /* [1150] */
    (xdc_Char)0x44,  /* [1151] */
    (xdc_Char)0x20,  /* [1152] */
    (xdc_Char)0x74,  /* [1153] */
    (xdc_Char)0x61,  /* [1154] */
    (xdc_Char)0x73,  /* [1155] */
    (xdc_Char)0x6b,  /* [1156] */
    (xdc_Char)0x2e,  /* [1157] */
    (xdc_Char)0x0,  /* [1158] */
    (xdc_Char)0x41,  /* [1159] */
    (xdc_Char)0x5f,  /* [1160] */
    (xdc_Char)0x74,  /* [1161] */
    (xdc_Char)0x61,  /* [1162] */
    (xdc_Char)0x73,  /* [1163] */
    (xdc_Char)0x6b,  /* [1164] */
    (xdc_Char)0x44,  /* [1165] */
    (xdc_Char)0x69,  /* [1166] */
    (xdc_Char)0x73,  /* [1167] */
    (xdc_Char)0x61,  /* [1168] */
    (xdc_Char)0x62,  /* [1169] */
    (xdc_Char)0x6c,  /* [1170] */
    (xdc_Char)0x65,  /* [1171] */
    (xdc_Char)0x64,  /* [1172] */
    (xdc_Char)0x3a,  /* [1173] */
    (xdc_Char)0x20,  /* [1174] */
    (xdc_Char)0x43,  /* [1175] */
    (xdc_Char)0x61,  /* [1176] */
    (xdc_Char)0x6e,  /* [1177] */
    (xdc_Char)0x6e,  /* [1178] */
    (xdc_Char)0x6f,  /* [1179] */
    (xdc_Char)0x74,  /* [1180] */
    (xdc_Char)0x20,  /* [1181] */
    (xdc_Char)0x63,  /* [1182] */
    (xdc_Char)0x72,  /* [1183] */
    (xdc_Char)0x65,  /* [1184] */
    (xdc_Char)0x61,  /* [1185] */
    (xdc_Char)0x74,  /* [1186] */
    (xdc_Char)0x65,  /* [1187] */
    (xdc_Char)0x20,  /* [1188] */
    (xdc_Char)0x61,  /* [1189] */
    (xdc_Char)0x20,  /* [1190] */
    (xdc_Char)0x74,  /* [1191] */
    (xdc_Char)0x61,  /* [1192] */
    (xdc_Char)0x73,  /* [1193] */
    (xdc_Char)0x6b,  /* [1194] */
    (xdc_Char)0x20,  /* [1195] */
    (xdc_Char)0x77,  /* [1196] */
    (xdc_Char)0x68,  /* [1197] */
    (xdc_Char)0x65,  /* [1198] */
    (xdc_Char)0x6e,  /* [1199] */
    (xdc_Char)0x20,  /* [1200] */
    (xdc_Char)0x74,  /* [1201] */
    (xdc_Char)0x61,  /* [1202] */
    (xdc_Char)0x73,  /* [1203] */
    (xdc_Char)0x6b,  /* [1204] */
    (xdc_Char)0x69,  /* [1205] */
    (xdc_Char)0x6e,  /* [1206] */
    (xdc_Char)0x67,  /* [1207] */
    (xdc_Char)0x20,  /* [1208] */
    (xdc_Char)0x69,  /* [1209] */
    (xdc_Char)0x73,  /* [1210] */
    (xdc_Char)0x20,  /* [1211] */
    (xdc_Char)0x64,  /* [1212] */
    (xdc_Char)0x69,  /* [1213] */
    (xdc_Char)0x73,  /* [1214] */
    (xdc_Char)0x61,  /* [1215] */
    (xdc_Char)0x62,  /* [1216] */
    (xdc_Char)0x6c,  /* [1217] */
    (xdc_Char)0x65,  /* [1218] */
    (xdc_Char)0x64,  /* [1219] */
    (xdc_Char)0x2e,  /* [1220] */
    (xdc_Char)0x0,  /* [1221] */
    (xdc_Char)0x41,  /* [1222] */
    (xdc_Char)0x5f,  /* [1223] */
    (xdc_Char)0x62,  /* [1224] */
    (xdc_Char)0x61,  /* [1225] */
    (xdc_Char)0x64,  /* [1226] */
    (xdc_Char)0x50,  /* [1227] */
    (xdc_Char)0x72,  /* [1228] */
    (xdc_Char)0x69,  /* [1229] */
    (xdc_Char)0x6f,  /* [1230] */
    (xdc_Char)0x72,  /* [1231] */
    (xdc_Char)0x69,  /* [1232] */
    (xdc_Char)0x74,  /* [1233] */
    (xdc_Char)0x79,  /* [1234] */
    (xdc_Char)0x3a,  /* [1235] */
    (xdc_Char)0x20,  /* [1236] */
    (xdc_Char)0x41,  /* [1237] */
    (xdc_Char)0x6e,  /* [1238] */
    (xdc_Char)0x20,  /* [1239] */
    (xdc_Char)0x69,  /* [1240] */
    (xdc_Char)0x6e,  /* [1241] */
    (xdc_Char)0x76,  /* [1242] */
    (xdc_Char)0x61,  /* [1243] */
    (xdc_Char)0x6c,  /* [1244] */
    (xdc_Char)0x69,  /* [1245] */
    (xdc_Char)0x64,  /* [1246] */
    (xdc_Char)0x20,  /* [1247] */
    (xdc_Char)0x74,  /* [1248] */
    (xdc_Char)0x61,  /* [1249] */
    (xdc_Char)0x73,  /* [1250] */
    (xdc_Char)0x6b,  /* [1251] */
    (xdc_Char)0x20,  /* [1252] */
    (xdc_Char)0x70,  /* [1253] */
    (xdc_Char)0x72,  /* [1254] */
    (xdc_Char)0x69,  /* [1255] */
    (xdc_Char)0x6f,  /* [1256] */
    (xdc_Char)0x72,  /* [1257] */
    (xdc_Char)0x69,  /* [1258] */
    (xdc_Char)0x74,  /* [1259] */
    (xdc_Char)0x79,  /* [1260] */
    (xdc_Char)0x20,  /* [1261] */
    (xdc_Char)0x77,  /* [1262] */
    (xdc_Char)0x61,  /* [1263] */
    (xdc_Char)0x73,  /* [1264] */
    (xdc_Char)0x20,  /* [1265] */
    (xdc_Char)0x75,  /* [1266] */
    (xdc_Char)0x73,  /* [1267] */
    (xdc_Char)0x65,  /* [1268] */
    (xdc_Char)0x64,  /* [1269] */
    (xdc_Char)0x2e,  /* [1270] */
    (xdc_Char)0x0,  /* [1271] */
    (xdc_Char)0x41,  /* [1272] */
    (xdc_Char)0x5f,  /* [1273] */
    (xdc_Char)0x62,  /* [1274] */
    (xdc_Char)0x61,  /* [1275] */
    (xdc_Char)0x64,  /* [1276] */
    (xdc_Char)0x54,  /* [1277] */
    (xdc_Char)0x69,  /* [1278] */
    (xdc_Char)0x6d,  /* [1279] */
    (xdc_Char)0x65,  /* [1280] */
    (xdc_Char)0x6f,  /* [1281] */
    (xdc_Char)0x75,  /* [1282] */
    (xdc_Char)0x74,  /* [1283] */
    (xdc_Char)0x3a,  /* [1284] */
    (xdc_Char)0x20,  /* [1285] */
    (xdc_Char)0x43,  /* [1286] */
    (xdc_Char)0x61,  /* [1287] */
    (xdc_Char)0x6e,  /* [1288] */
    (xdc_Char)0x27,  /* [1289] */
    (xdc_Char)0x74,  /* [1290] */
    (xdc_Char)0x20,  /* [1291] */
    (xdc_Char)0x73,  /* [1292] */
    (xdc_Char)0x6c,  /* [1293] */
    (xdc_Char)0x65,  /* [1294] */
    (xdc_Char)0x65,  /* [1295] */
    (xdc_Char)0x70,  /* [1296] */
    (xdc_Char)0x20,  /* [1297] */
    (xdc_Char)0x46,  /* [1298] */
    (xdc_Char)0x4f,  /* [1299] */
    (xdc_Char)0x52,  /* [1300] */
    (xdc_Char)0x45,  /* [1301] */
    (xdc_Char)0x56,  /* [1302] */
    (xdc_Char)0x45,  /* [1303] */
    (xdc_Char)0x52,  /* [1304] */
    (xdc_Char)0x2e,  /* [1305] */
    (xdc_Char)0x0,  /* [1306] */
    (xdc_Char)0x41,  /* [1307] */
    (xdc_Char)0x5f,  /* [1308] */
    (xdc_Char)0x75,  /* [1309] */
    (xdc_Char)0x6e,  /* [1310] */
    (xdc_Char)0x73,  /* [1311] */
    (xdc_Char)0x75,  /* [1312] */
    (xdc_Char)0x70,  /* [1313] */
    (xdc_Char)0x70,  /* [1314] */
    (xdc_Char)0x6f,  /* [1315] */
    (xdc_Char)0x72,  /* [1316] */
    (xdc_Char)0x74,  /* [1317] */
    (xdc_Char)0x65,  /* [1318] */
    (xdc_Char)0x64,  /* [1319] */
    (xdc_Char)0x4d,  /* [1320] */
    (xdc_Char)0x61,  /* [1321] */
    (xdc_Char)0x73,  /* [1322] */
    (xdc_Char)0x6b,  /* [1323] */
    (xdc_Char)0x69,  /* [1324] */
    (xdc_Char)0x6e,  /* [1325] */
    (xdc_Char)0x67,  /* [1326] */
    (xdc_Char)0x4f,  /* [1327] */
    (xdc_Char)0x70,  /* [1328] */
    (xdc_Char)0x74,  /* [1329] */
    (xdc_Char)0x69,  /* [1330] */
    (xdc_Char)0x6f,  /* [1331] */
    (xdc_Char)0x6e,  /* [1332] */
    (xdc_Char)0x3a,  /* [1333] */
    (xdc_Char)0x20,  /* [1334] */
    (xdc_Char)0x75,  /* [1335] */
    (xdc_Char)0x6e,  /* [1336] */
    (xdc_Char)0x73,  /* [1337] */
    (xdc_Char)0x75,  /* [1338] */
    (xdc_Char)0x70,  /* [1339] */
    (xdc_Char)0x70,  /* [1340] */
    (xdc_Char)0x6f,  /* [1341] */
    (xdc_Char)0x72,  /* [1342] */
    (xdc_Char)0x74,  /* [1343] */
    (xdc_Char)0x65,  /* [1344] */
    (xdc_Char)0x64,  /* [1345] */
    (xdc_Char)0x20,  /* [1346] */
    (xdc_Char)0x6d,  /* [1347] */
    (xdc_Char)0x61,  /* [1348] */
    (xdc_Char)0x73,  /* [1349] */
    (xdc_Char)0x6b,  /* [1350] */
    (xdc_Char)0x53,  /* [1351] */
    (xdc_Char)0x65,  /* [1352] */
    (xdc_Char)0x74,  /* [1353] */
    (xdc_Char)0x74,  /* [1354] */
    (xdc_Char)0x69,  /* [1355] */
    (xdc_Char)0x6e,  /* [1356] */
    (xdc_Char)0x67,  /* [1357] */
    (xdc_Char)0x2e,  /* [1358] */
    (xdc_Char)0x0,  /* [1359] */
    (xdc_Char)0x62,  /* [1360] */
    (xdc_Char)0x75,  /* [1361] */
    (xdc_Char)0x66,  /* [1362] */
    (xdc_Char)0x20,  /* [1363] */
    (xdc_Char)0x70,  /* [1364] */
    (xdc_Char)0x61,  /* [1365] */
    (xdc_Char)0x72,  /* [1366] */
    (xdc_Char)0x61,  /* [1367] */
    (xdc_Char)0x6d,  /* [1368] */
    (xdc_Char)0x65,  /* [1369] */
    (xdc_Char)0x74,  /* [1370] */
    (xdc_Char)0x65,  /* [1371] */
    (xdc_Char)0x72,  /* [1372] */
    (xdc_Char)0x20,  /* [1373] */
    (xdc_Char)0x63,  /* [1374] */
    (xdc_Char)0x61,  /* [1375] */
    (xdc_Char)0x6e,  /* [1376] */
    (xdc_Char)0x6e,  /* [1377] */
    (xdc_Char)0x6f,  /* [1378] */
    (xdc_Char)0x74,  /* [1379] */
    (xdc_Char)0x20,  /* [1380] */
    (xdc_Char)0x62,  /* [1381] */
    (xdc_Char)0x65,  /* [1382] */
    (xdc_Char)0x20,  /* [1383] */
    (xdc_Char)0x6e,  /* [1384] */
    (xdc_Char)0x75,  /* [1385] */
    (xdc_Char)0x6c,  /* [1386] */
    (xdc_Char)0x6c,  /* [1387] */
    (xdc_Char)0x0,  /* [1388] */
    (xdc_Char)0x62,  /* [1389] */
    (xdc_Char)0x75,  /* [1390] */
    (xdc_Char)0x66,  /* [1391] */
    (xdc_Char)0x20,  /* [1392] */
    (xdc_Char)0x6e,  /* [1393] */
    (xdc_Char)0x6f,  /* [1394] */
    (xdc_Char)0x74,  /* [1395] */
    (xdc_Char)0x20,  /* [1396] */
    (xdc_Char)0x70,  /* [1397] */
    (xdc_Char)0x72,  /* [1398] */
    (xdc_Char)0x6f,  /* [1399] */
    (xdc_Char)0x70,  /* [1400] */
    (xdc_Char)0x65,  /* [1401] */
    (xdc_Char)0x72,  /* [1402] */
    (xdc_Char)0x6c,  /* [1403] */
    (xdc_Char)0x79,  /* [1404] */
    (xdc_Char)0x20,  /* [1405] */
    (xdc_Char)0x61,  /* [1406] */
    (xdc_Char)0x6c,  /* [1407] */
    (xdc_Char)0x69,  /* [1408] */
    (xdc_Char)0x67,  /* [1409] */
    (xdc_Char)0x6e,  /* [1410] */
    (xdc_Char)0x65,  /* [1411] */
    (xdc_Char)0x64,  /* [1412] */
    (xdc_Char)0x0,  /* [1413] */
    (xdc_Char)0x61,  /* [1414] */
    (xdc_Char)0x6c,  /* [1415] */
    (xdc_Char)0x69,  /* [1416] */
    (xdc_Char)0x67,  /* [1417] */
    (xdc_Char)0x6e,  /* [1418] */
    (xdc_Char)0x20,  /* [1419] */
    (xdc_Char)0x70,  /* [1420] */
    (xdc_Char)0x61,  /* [1421] */
    (xdc_Char)0x72,  /* [1422] */
    (xdc_Char)0x61,  /* [1423] */
    (xdc_Char)0x6d,  /* [1424] */
    (xdc_Char)0x65,  /* [1425] */
    (xdc_Char)0x74,  /* [1426] */
    (xdc_Char)0x65,  /* [1427] */
    (xdc_Char)0x72,  /* [1428] */
    (xdc_Char)0x20,  /* [1429] */
    (xdc_Char)0x6d,  /* [1430] */
    (xdc_Char)0x75,  /* [1431] */
    (xdc_Char)0x73,  /* [1432] */
    (xdc_Char)0x74,  /* [1433] */
    (xdc_Char)0x20,  /* [1434] */
    (xdc_Char)0x62,  /* [1435] */
    (xdc_Char)0x65,  /* [1436] */
    (xdc_Char)0x20,  /* [1437] */
    (xdc_Char)0x30,  /* [1438] */
    (xdc_Char)0x20,  /* [1439] */
    (xdc_Char)0x6f,  /* [1440] */
    (xdc_Char)0x72,  /* [1441] */
    (xdc_Char)0x20,  /* [1442] */
    (xdc_Char)0x61,  /* [1443] */
    (xdc_Char)0x20,  /* [1444] */
    (xdc_Char)0x70,  /* [1445] */
    (xdc_Char)0x6f,  /* [1446] */
    (xdc_Char)0x77,  /* [1447] */
    (xdc_Char)0x65,  /* [1448] */
    (xdc_Char)0x72,  /* [1449] */
    (xdc_Char)0x20,  /* [1450] */
    (xdc_Char)0x6f,  /* [1451] */
    (xdc_Char)0x66,  /* [1452] */
    (xdc_Char)0x20,  /* [1453] */
    (xdc_Char)0x32,  /* [1454] */
    (xdc_Char)0x20,  /* [1455] */
    (xdc_Char)0x3e,  /* [1456] */
    (xdc_Char)0x3d,  /* [1457] */
    (xdc_Char)0x20,  /* [1458] */
    (xdc_Char)0x74,  /* [1459] */
    (xdc_Char)0x68,  /* [1460] */
    (xdc_Char)0x65,  /* [1461] */
    (xdc_Char)0x20,  /* [1462] */
    (xdc_Char)0x76,  /* [1463] */
    (xdc_Char)0x61,  /* [1464] */
    (xdc_Char)0x6c,  /* [1465] */
    (xdc_Char)0x75,  /* [1466] */
    (xdc_Char)0x65,  /* [1467] */
    (xdc_Char)0x20,  /* [1468] */
    (xdc_Char)0x6f,  /* [1469] */
    (xdc_Char)0x66,  /* [1470] */
    (xdc_Char)0x20,  /* [1471] */
    (xdc_Char)0x4d,  /* [1472] */
    (xdc_Char)0x65,  /* [1473] */
    (xdc_Char)0x6d,  /* [1474] */
    (xdc_Char)0x6f,  /* [1475] */
    (xdc_Char)0x72,  /* [1476] */
    (xdc_Char)0x79,  /* [1477] */
    (xdc_Char)0x5f,  /* [1478] */
    (xdc_Char)0x67,  /* [1479] */
    (xdc_Char)0x65,  /* [1480] */
    (xdc_Char)0x74,  /* [1481] */
    (xdc_Char)0x4d,  /* [1482] */
    (xdc_Char)0x61,  /* [1483] */
    (xdc_Char)0x78,  /* [1484] */
    (xdc_Char)0x44,  /* [1485] */
    (xdc_Char)0x65,  /* [1486] */
    (xdc_Char)0x66,  /* [1487] */
    (xdc_Char)0x61,  /* [1488] */
    (xdc_Char)0x75,  /* [1489] */
    (xdc_Char)0x6c,  /* [1490] */
    (xdc_Char)0x74,  /* [1491] */
    (xdc_Char)0x54,  /* [1492] */
    (xdc_Char)0x79,  /* [1493] */
    (xdc_Char)0x70,  /* [1494] */
    (xdc_Char)0x65,  /* [1495] */
    (xdc_Char)0x41,  /* [1496] */
    (xdc_Char)0x6c,  /* [1497] */
    (xdc_Char)0x69,  /* [1498] */
    (xdc_Char)0x67,  /* [1499] */
    (xdc_Char)0x6e,  /* [1500] */
    (xdc_Char)0x28,  /* [1501] */
    (xdc_Char)0x29,  /* [1502] */
    (xdc_Char)0x0,  /* [1503] */
    (xdc_Char)0x62,  /* [1504] */
    (xdc_Char)0x6c,  /* [1505] */
    (xdc_Char)0x6f,  /* [1506] */
    (xdc_Char)0x63,  /* [1507] */
    (xdc_Char)0x6b,  /* [1508] */
    (xdc_Char)0x53,  /* [1509] */
    (xdc_Char)0x69,  /* [1510] */
    (xdc_Char)0x7a,  /* [1511] */
    (xdc_Char)0x65,  /* [1512] */
    (xdc_Char)0x20,  /* [1513] */
    (xdc_Char)0x63,  /* [1514] */
    (xdc_Char)0x61,  /* [1515] */
    (xdc_Char)0x6e,  /* [1516] */
    (xdc_Char)0x6e,  /* [1517] */
    (xdc_Char)0x6f,  /* [1518] */
    (xdc_Char)0x74,  /* [1519] */
    (xdc_Char)0x20,  /* [1520] */
    (xdc_Char)0x62,  /* [1521] */
    (xdc_Char)0x65,  /* [1522] */
    (xdc_Char)0x20,  /* [1523] */
    (xdc_Char)0x7a,  /* [1524] */
    (xdc_Char)0x65,  /* [1525] */
    (xdc_Char)0x72,  /* [1526] */
    (xdc_Char)0x6f,  /* [1527] */
    (xdc_Char)0x0,  /* [1528] */
    (xdc_Char)0x6e,  /* [1529] */
    (xdc_Char)0x75,  /* [1530] */
    (xdc_Char)0x6d,  /* [1531] */
    (xdc_Char)0x42,  /* [1532] */
    (xdc_Char)0x6c,  /* [1533] */
    (xdc_Char)0x6f,  /* [1534] */
    (xdc_Char)0x63,  /* [1535] */
    (xdc_Char)0x6b,  /* [1536] */
    (xdc_Char)0x73,  /* [1537] */
    (xdc_Char)0x20,  /* [1538] */
    (xdc_Char)0x63,  /* [1539] */
    (xdc_Char)0x61,  /* [1540] */
    (xdc_Char)0x6e,  /* [1541] */
    (xdc_Char)0x6e,  /* [1542] */
    (xdc_Char)0x6f,  /* [1543] */
    (xdc_Char)0x74,  /* [1544] */
    (xdc_Char)0x20,  /* [1545] */
    (xdc_Char)0x62,  /* [1546] */
    (xdc_Char)0x65,  /* [1547] */
    (xdc_Char)0x20,  /* [1548] */
    (xdc_Char)0x7a,  /* [1549] */
    (xdc_Char)0x65,  /* [1550] */
    (xdc_Char)0x72,  /* [1551] */
    (xdc_Char)0x6f,  /* [1552] */
    (xdc_Char)0x0,  /* [1553] */
    (xdc_Char)0x62,  /* [1554] */
    (xdc_Char)0x75,  /* [1555] */
    (xdc_Char)0x66,  /* [1556] */
    (xdc_Char)0x53,  /* [1557] */
    (xdc_Char)0x69,  /* [1558] */
    (xdc_Char)0x7a,  /* [1559] */
    (xdc_Char)0x65,  /* [1560] */
    (xdc_Char)0x20,  /* [1561] */
    (xdc_Char)0x63,  /* [1562] */
    (xdc_Char)0x61,  /* [1563] */
    (xdc_Char)0x6e,  /* [1564] */
    (xdc_Char)0x6e,  /* [1565] */
    (xdc_Char)0x6f,  /* [1566] */
    (xdc_Char)0x74,  /* [1567] */
    (xdc_Char)0x20,  /* [1568] */
    (xdc_Char)0x62,  /* [1569] */
    (xdc_Char)0x65,  /* [1570] */
    (xdc_Char)0x20,  /* [1571] */
    (xdc_Char)0x7a,  /* [1572] */
    (xdc_Char)0x65,  /* [1573] */
    (xdc_Char)0x72,  /* [1574] */
    (xdc_Char)0x6f,  /* [1575] */
    (xdc_Char)0x0,  /* [1576] */
    (xdc_Char)0x48,  /* [1577] */
    (xdc_Char)0x65,  /* [1578] */
    (xdc_Char)0x61,  /* [1579] */
    (xdc_Char)0x70,  /* [1580] */
    (xdc_Char)0x42,  /* [1581] */
    (xdc_Char)0x75,  /* [1582] */
    (xdc_Char)0x66,  /* [1583] */
    (xdc_Char)0x5f,  /* [1584] */
    (xdc_Char)0x63,  /* [1585] */
    (xdc_Char)0x72,  /* [1586] */
    (xdc_Char)0x65,  /* [1587] */
    (xdc_Char)0x61,  /* [1588] */
    (xdc_Char)0x74,  /* [1589] */
    (xdc_Char)0x65,  /* [1590] */
    (xdc_Char)0x27,  /* [1591] */
    (xdc_Char)0x73,  /* [1592] */
    (xdc_Char)0x20,  /* [1593] */
    (xdc_Char)0x62,  /* [1594] */
    (xdc_Char)0x75,  /* [1595] */
    (xdc_Char)0x66,  /* [1596] */
    (xdc_Char)0x53,  /* [1597] */
    (xdc_Char)0x69,  /* [1598] */
    (xdc_Char)0x7a,  /* [1599] */
    (xdc_Char)0x65,  /* [1600] */
    (xdc_Char)0x20,  /* [1601] */
    (xdc_Char)0x70,  /* [1602] */
    (xdc_Char)0x61,  /* [1603] */
    (xdc_Char)0x72,  /* [1604] */
    (xdc_Char)0x61,  /* [1605] */
    (xdc_Char)0x6d,  /* [1606] */
    (xdc_Char)0x65,  /* [1607] */
    (xdc_Char)0x74,  /* [1608] */
    (xdc_Char)0x65,  /* [1609] */
    (xdc_Char)0x72,  /* [1610] */
    (xdc_Char)0x20,  /* [1611] */
    (xdc_Char)0x69,  /* [1612] */
    (xdc_Char)0x73,  /* [1613] */
    (xdc_Char)0x20,  /* [1614] */
    (xdc_Char)0x69,  /* [1615] */
    (xdc_Char)0x6e,  /* [1616] */
    (xdc_Char)0x76,  /* [1617] */
    (xdc_Char)0x61,  /* [1618] */
    (xdc_Char)0x6c,  /* [1619] */
    (xdc_Char)0x69,  /* [1620] */
    (xdc_Char)0x64,  /* [1621] */
    (xdc_Char)0x20,  /* [1622] */
    (xdc_Char)0x28,  /* [1623] */
    (xdc_Char)0x74,  /* [1624] */
    (xdc_Char)0x6f,  /* [1625] */
    (xdc_Char)0x6f,  /* [1626] */
    (xdc_Char)0x20,  /* [1627] */
    (xdc_Char)0x73,  /* [1628] */
    (xdc_Char)0x6d,  /* [1629] */
    (xdc_Char)0x61,  /* [1630] */
    (xdc_Char)0x6c,  /* [1631] */
    (xdc_Char)0x6c,  /* [1632] */
    (xdc_Char)0x29,  /* [1633] */
    (xdc_Char)0x0,  /* [1634] */
    (xdc_Char)0x43,  /* [1635] */
    (xdc_Char)0x61,  /* [1636] */
    (xdc_Char)0x6e,  /* [1637] */
    (xdc_Char)0x6e,  /* [1638] */
    (xdc_Char)0x6f,  /* [1639] */
    (xdc_Char)0x74,  /* [1640] */
    (xdc_Char)0x20,  /* [1641] */
    (xdc_Char)0x63,  /* [1642] */
    (xdc_Char)0x61,  /* [1643] */
    (xdc_Char)0x6c,  /* [1644] */
    (xdc_Char)0x6c,  /* [1645] */
    (xdc_Char)0x20,  /* [1646] */
    (xdc_Char)0x48,  /* [1647] */
    (xdc_Char)0x65,  /* [1648] */
    (xdc_Char)0x61,  /* [1649] */
    (xdc_Char)0x70,  /* [1650] */
    (xdc_Char)0x42,  /* [1651] */
    (xdc_Char)0x75,  /* [1652] */
    (xdc_Char)0x66,  /* [1653] */
    (xdc_Char)0x5f,  /* [1654] */
    (xdc_Char)0x66,  /* [1655] */
    (xdc_Char)0x72,  /* [1656] */
    (xdc_Char)0x65,  /* [1657] */
    (xdc_Char)0x65,  /* [1658] */
    (xdc_Char)0x20,  /* [1659] */
    (xdc_Char)0x77,  /* [1660] */
    (xdc_Char)0x68,  /* [1661] */
    (xdc_Char)0x65,  /* [1662] */
    (xdc_Char)0x6e,  /* [1663] */
    (xdc_Char)0x20,  /* [1664] */
    (xdc_Char)0x6e,  /* [1665] */
    (xdc_Char)0x6f,  /* [1666] */
    (xdc_Char)0x20,  /* [1667] */
    (xdc_Char)0x62,  /* [1668] */
    (xdc_Char)0x6c,  /* [1669] */
    (xdc_Char)0x6f,  /* [1670] */
    (xdc_Char)0x63,  /* [1671] */
    (xdc_Char)0x6b,  /* [1672] */
    (xdc_Char)0x73,  /* [1673] */
    (xdc_Char)0x20,  /* [1674] */
    (xdc_Char)0x68,  /* [1675] */
    (xdc_Char)0x61,  /* [1676] */
    (xdc_Char)0x76,  /* [1677] */
    (xdc_Char)0x65,  /* [1678] */
    (xdc_Char)0x20,  /* [1679] */
    (xdc_Char)0x62,  /* [1680] */
    (xdc_Char)0x65,  /* [1681] */
    (xdc_Char)0x65,  /* [1682] */
    (xdc_Char)0x6e,  /* [1683] */
    (xdc_Char)0x20,  /* [1684] */
    (xdc_Char)0x61,  /* [1685] */
    (xdc_Char)0x6c,  /* [1686] */
    (xdc_Char)0x6c,  /* [1687] */
    (xdc_Char)0x6f,  /* [1688] */
    (xdc_Char)0x63,  /* [1689] */
    (xdc_Char)0x61,  /* [1690] */
    (xdc_Char)0x74,  /* [1691] */
    (xdc_Char)0x65,  /* [1692] */
    (xdc_Char)0x64,  /* [1693] */
    (xdc_Char)0x0,  /* [1694] */
    (xdc_Char)0x41,  /* [1695] */
    (xdc_Char)0x5f,  /* [1696] */
    (xdc_Char)0x69,  /* [1697] */
    (xdc_Char)0x6e,  /* [1698] */
    (xdc_Char)0x76,  /* [1699] */
    (xdc_Char)0x61,  /* [1700] */
    (xdc_Char)0x6c,  /* [1701] */
    (xdc_Char)0x69,  /* [1702] */
    (xdc_Char)0x64,  /* [1703] */
    (xdc_Char)0x46,  /* [1704] */
    (xdc_Char)0x72,  /* [1705] */
    (xdc_Char)0x65,  /* [1706] */
    (xdc_Char)0x65,  /* [1707] */
    (xdc_Char)0x3a,  /* [1708] */
    (xdc_Char)0x20,  /* [1709] */
    (xdc_Char)0x49,  /* [1710] */
    (xdc_Char)0x6e,  /* [1711] */
    (xdc_Char)0x76,  /* [1712] */
    (xdc_Char)0x61,  /* [1713] */
    (xdc_Char)0x6c,  /* [1714] */
    (xdc_Char)0x69,  /* [1715] */
    (xdc_Char)0x64,  /* [1716] */
    (xdc_Char)0x20,  /* [1717] */
    (xdc_Char)0x66,  /* [1718] */
    (xdc_Char)0x72,  /* [1719] */
    (xdc_Char)0x65,  /* [1720] */
    (xdc_Char)0x65,  /* [1721] */
    (xdc_Char)0x0,  /* [1722] */
    (xdc_Char)0x41,  /* [1723] */
    (xdc_Char)0x5f,  /* [1724] */
    (xdc_Char)0x7a,  /* [1725] */
    (xdc_Char)0x65,  /* [1726] */
    (xdc_Char)0x72,  /* [1727] */
    (xdc_Char)0x6f,  /* [1728] */
    (xdc_Char)0x42,  /* [1729] */
    (xdc_Char)0x6c,  /* [1730] */
    (xdc_Char)0x6f,  /* [1731] */
    (xdc_Char)0x63,  /* [1732] */
    (xdc_Char)0x6b,  /* [1733] */
    (xdc_Char)0x3a,  /* [1734] */
    (xdc_Char)0x20,  /* [1735] */
    (xdc_Char)0x43,  /* [1736] */
    (xdc_Char)0x61,  /* [1737] */
    (xdc_Char)0x6e,  /* [1738] */
    (xdc_Char)0x6e,  /* [1739] */
    (xdc_Char)0x6f,  /* [1740] */
    (xdc_Char)0x74,  /* [1741] */
    (xdc_Char)0x20,  /* [1742] */
    (xdc_Char)0x61,  /* [1743] */
    (xdc_Char)0x6c,  /* [1744] */
    (xdc_Char)0x6c,  /* [1745] */
    (xdc_Char)0x6f,  /* [1746] */
    (xdc_Char)0x63,  /* [1747] */
    (xdc_Char)0x61,  /* [1748] */
    (xdc_Char)0x74,  /* [1749] */
    (xdc_Char)0x65,  /* [1750] */
    (xdc_Char)0x20,  /* [1751] */
    (xdc_Char)0x73,  /* [1752] */
    (xdc_Char)0x69,  /* [1753] */
    (xdc_Char)0x7a,  /* [1754] */
    (xdc_Char)0x65,  /* [1755] */
    (xdc_Char)0x20,  /* [1756] */
    (xdc_Char)0x30,  /* [1757] */
    (xdc_Char)0x0,  /* [1758] */
    (xdc_Char)0x41,  /* [1759] */
    (xdc_Char)0x5f,  /* [1760] */
    (xdc_Char)0x68,  /* [1761] */
    (xdc_Char)0x65,  /* [1762] */
    (xdc_Char)0x61,  /* [1763] */
    (xdc_Char)0x70,  /* [1764] */
    (xdc_Char)0x53,  /* [1765] */
    (xdc_Char)0x69,  /* [1766] */
    (xdc_Char)0x7a,  /* [1767] */
    (xdc_Char)0x65,  /* [1768] */
    (xdc_Char)0x3a,  /* [1769] */
    (xdc_Char)0x20,  /* [1770] */
    (xdc_Char)0x52,  /* [1771] */
    (xdc_Char)0x65,  /* [1772] */
    (xdc_Char)0x71,  /* [1773] */
    (xdc_Char)0x75,  /* [1774] */
    (xdc_Char)0x65,  /* [1775] */
    (xdc_Char)0x73,  /* [1776] */
    (xdc_Char)0x74,  /* [1777] */
    (xdc_Char)0x65,  /* [1778] */
    (xdc_Char)0x64,  /* [1779] */
    (xdc_Char)0x20,  /* [1780] */
    (xdc_Char)0x68,  /* [1781] */
    (xdc_Char)0x65,  /* [1782] */
    (xdc_Char)0x61,  /* [1783] */
    (xdc_Char)0x70,  /* [1784] */
    (xdc_Char)0x20,  /* [1785] */
    (xdc_Char)0x73,  /* [1786] */
    (xdc_Char)0x69,  /* [1787] */
    (xdc_Char)0x7a,  /* [1788] */
    (xdc_Char)0x65,  /* [1789] */
    (xdc_Char)0x20,  /* [1790] */
    (xdc_Char)0x69,  /* [1791] */
    (xdc_Char)0x73,  /* [1792] */
    (xdc_Char)0x20,  /* [1793] */
    (xdc_Char)0x74,  /* [1794] */
    (xdc_Char)0x6f,  /* [1795] */
    (xdc_Char)0x6f,  /* [1796] */
    (xdc_Char)0x20,  /* [1797] */
    (xdc_Char)0x73,  /* [1798] */
    (xdc_Char)0x6d,  /* [1799] */
    (xdc_Char)0x61,  /* [1800] */
    (xdc_Char)0x6c,  /* [1801] */
    (xdc_Char)0x6c,  /* [1802] */
    (xdc_Char)0x0,  /* [1803] */
    (xdc_Char)0x41,  /* [1804] */
    (xdc_Char)0x5f,  /* [1805] */
    (xdc_Char)0x61,  /* [1806] */
    (xdc_Char)0x6c,  /* [1807] */
    (xdc_Char)0x69,  /* [1808] */
    (xdc_Char)0x67,  /* [1809] */
    (xdc_Char)0x6e,  /* [1810] */
    (xdc_Char)0x3a,  /* [1811] */
    (xdc_Char)0x20,  /* [1812] */
    (xdc_Char)0x52,  /* [1813] */
    (xdc_Char)0x65,  /* [1814] */
    (xdc_Char)0x71,  /* [1815] */
    (xdc_Char)0x75,  /* [1816] */
    (xdc_Char)0x65,  /* [1817] */
    (xdc_Char)0x73,  /* [1818] */
    (xdc_Char)0x74,  /* [1819] */
    (xdc_Char)0x65,  /* [1820] */
    (xdc_Char)0x64,  /* [1821] */
    (xdc_Char)0x20,  /* [1822] */
    (xdc_Char)0x61,  /* [1823] */
    (xdc_Char)0x6c,  /* [1824] */
    (xdc_Char)0x69,  /* [1825] */
    (xdc_Char)0x67,  /* [1826] */
    (xdc_Char)0x6e,  /* [1827] */
    (xdc_Char)0x20,  /* [1828] */
    (xdc_Char)0x69,  /* [1829] */
    (xdc_Char)0x73,  /* [1830] */
    (xdc_Char)0x20,  /* [1831] */
    (xdc_Char)0x6e,  /* [1832] */
    (xdc_Char)0x6f,  /* [1833] */
    (xdc_Char)0x74,  /* [1834] */
    (xdc_Char)0x20,  /* [1835] */
    (xdc_Char)0x61,  /* [1836] */
    (xdc_Char)0x20,  /* [1837] */
    (xdc_Char)0x70,  /* [1838] */
    (xdc_Char)0x6f,  /* [1839] */
    (xdc_Char)0x77,  /* [1840] */
    (xdc_Char)0x65,  /* [1841] */
    (xdc_Char)0x72,  /* [1842] */
    (xdc_Char)0x20,  /* [1843] */
    (xdc_Char)0x6f,  /* [1844] */
    (xdc_Char)0x66,  /* [1845] */
    (xdc_Char)0x20,  /* [1846] */
    (xdc_Char)0x32,  /* [1847] */
    (xdc_Char)0x0,  /* [1848] */
    (xdc_Char)0x49,  /* [1849] */
    (xdc_Char)0x6e,  /* [1850] */
    (xdc_Char)0x76,  /* [1851] */
    (xdc_Char)0x61,  /* [1852] */
    (xdc_Char)0x6c,  /* [1853] */
    (xdc_Char)0x69,  /* [1854] */
    (xdc_Char)0x64,  /* [1855] */
    (xdc_Char)0x20,  /* [1856] */
    (xdc_Char)0x62,  /* [1857] */
    (xdc_Char)0x6c,  /* [1858] */
    (xdc_Char)0x6f,  /* [1859] */
    (xdc_Char)0x63,  /* [1860] */
    (xdc_Char)0x6b,  /* [1861] */
    (xdc_Char)0x20,  /* [1862] */
    (xdc_Char)0x61,  /* [1863] */
    (xdc_Char)0x64,  /* [1864] */
    (xdc_Char)0x64,  /* [1865] */
    (xdc_Char)0x72,  /* [1866] */
    (xdc_Char)0x65,  /* [1867] */
    (xdc_Char)0x73,  /* [1868] */
    (xdc_Char)0x73,  /* [1869] */
    (xdc_Char)0x20,  /* [1870] */
    (xdc_Char)0x6f,  /* [1871] */
    (xdc_Char)0x6e,  /* [1872] */
    (xdc_Char)0x20,  /* [1873] */
    (xdc_Char)0x74,  /* [1874] */
    (xdc_Char)0x68,  /* [1875] */
    (xdc_Char)0x65,  /* [1876] */
    (xdc_Char)0x20,  /* [1877] */
    (xdc_Char)0x66,  /* [1878] */
    (xdc_Char)0x72,  /* [1879] */
    (xdc_Char)0x65,  /* [1880] */
    (xdc_Char)0x65,  /* [1881] */
    (xdc_Char)0x2e,  /* [1882] */
    (xdc_Char)0x20,  /* [1883] */
    (xdc_Char)0x46,  /* [1884] */
    (xdc_Char)0x61,  /* [1885] */
    (xdc_Char)0x69,  /* [1886] */
    (xdc_Char)0x6c,  /* [1887] */
    (xdc_Char)0x65,  /* [1888] */
    (xdc_Char)0x64,  /* [1889] */
    (xdc_Char)0x20,  /* [1890] */
    (xdc_Char)0x74,  /* [1891] */
    (xdc_Char)0x6f,  /* [1892] */
    (xdc_Char)0x20,  /* [1893] */
    (xdc_Char)0x66,  /* [1894] */
    (xdc_Char)0x72,  /* [1895] */
    (xdc_Char)0x65,  /* [1896] */
    (xdc_Char)0x65,  /* [1897] */
    (xdc_Char)0x20,  /* [1898] */
    (xdc_Char)0x62,  /* [1899] */
    (xdc_Char)0x6c,  /* [1900] */
    (xdc_Char)0x6f,  /* [1901] */
    (xdc_Char)0x63,  /* [1902] */
    (xdc_Char)0x6b,  /* [1903] */
    (xdc_Char)0x20,  /* [1904] */
    (xdc_Char)0x62,  /* [1905] */
    (xdc_Char)0x61,  /* [1906] */
    (xdc_Char)0x63,  /* [1907] */
    (xdc_Char)0x6b,  /* [1908] */
    (xdc_Char)0x20,  /* [1909] */
    (xdc_Char)0x74,  /* [1910] */
    (xdc_Char)0x6f,  /* [1911] */
    (xdc_Char)0x20,  /* [1912] */
    (xdc_Char)0x68,  /* [1913] */
    (xdc_Char)0x65,  /* [1914] */
    (xdc_Char)0x61,  /* [1915] */
    (xdc_Char)0x70,  /* [1916] */
    (xdc_Char)0x2e,  /* [1917] */
    (xdc_Char)0x0,  /* [1918] */
    (xdc_Char)0x41,  /* [1919] */
    (xdc_Char)0x5f,  /* [1920] */
    (xdc_Char)0x62,  /* [1921] */
    (xdc_Char)0x61,  /* [1922] */
    (xdc_Char)0x64,  /* [1923] */
    (xdc_Char)0x43,  /* [1924] */
    (xdc_Char)0x6f,  /* [1925] */
    (xdc_Char)0x6e,  /* [1926] */
    (xdc_Char)0x74,  /* [1927] */
    (xdc_Char)0x65,  /* [1928] */
    (xdc_Char)0x78,  /* [1929] */
    (xdc_Char)0x74,  /* [1930] */
    (xdc_Char)0x3a,  /* [1931] */
    (xdc_Char)0x20,  /* [1932] */
    (xdc_Char)0x62,  /* [1933] */
    (xdc_Char)0x61,  /* [1934] */
    (xdc_Char)0x64,  /* [1935] */
    (xdc_Char)0x20,  /* [1936] */
    (xdc_Char)0x63,  /* [1937] */
    (xdc_Char)0x61,  /* [1938] */
    (xdc_Char)0x6c,  /* [1939] */
    (xdc_Char)0x6c,  /* [1940] */
    (xdc_Char)0x69,  /* [1941] */
    (xdc_Char)0x6e,  /* [1942] */
    (xdc_Char)0x67,  /* [1943] */
    (xdc_Char)0x20,  /* [1944] */
    (xdc_Char)0x63,  /* [1945] */
    (xdc_Char)0x6f,  /* [1946] */
    (xdc_Char)0x6e,  /* [1947] */
    (xdc_Char)0x74,  /* [1948] */
    (xdc_Char)0x65,  /* [1949] */
    (xdc_Char)0x78,  /* [1950] */
    (xdc_Char)0x74,  /* [1951] */
    (xdc_Char)0x2e,  /* [1952] */
    (xdc_Char)0x20,  /* [1953] */
    (xdc_Char)0x4d,  /* [1954] */
    (xdc_Char)0x61,  /* [1955] */
    (xdc_Char)0x79,  /* [1956] */
    (xdc_Char)0x20,  /* [1957] */
    (xdc_Char)0x6e,  /* [1958] */
    (xdc_Char)0x6f,  /* [1959] */
    (xdc_Char)0x74,  /* [1960] */
    (xdc_Char)0x20,  /* [1961] */
    (xdc_Char)0x62,  /* [1962] */
    (xdc_Char)0x65,  /* [1963] */
    (xdc_Char)0x20,  /* [1964] */
    (xdc_Char)0x65,  /* [1965] */
    (xdc_Char)0x6e,  /* [1966] */
    (xdc_Char)0x74,  /* [1967] */
    (xdc_Char)0x65,  /* [1968] */
    (xdc_Char)0x72,  /* [1969] */
    (xdc_Char)0x65,  /* [1970] */
    (xdc_Char)0x64,  /* [1971] */
    (xdc_Char)0x20,  /* [1972] */
    (xdc_Char)0x66,  /* [1973] */
    (xdc_Char)0x72,  /* [1974] */
    (xdc_Char)0x6f,  /* [1975] */
    (xdc_Char)0x6d,  /* [1976] */
    (xdc_Char)0x20,  /* [1977] */
    (xdc_Char)0x61,  /* [1978] */
    (xdc_Char)0x20,  /* [1979] */
    (xdc_Char)0x68,  /* [1980] */
    (xdc_Char)0x61,  /* [1981] */
    (xdc_Char)0x72,  /* [1982] */
    (xdc_Char)0x64,  /* [1983] */
    (xdc_Char)0x77,  /* [1984] */
    (xdc_Char)0x61,  /* [1985] */
    (xdc_Char)0x72,  /* [1986] */
    (xdc_Char)0x65,  /* [1987] */
    (xdc_Char)0x20,  /* [1988] */
    (xdc_Char)0x69,  /* [1989] */
    (xdc_Char)0x6e,  /* [1990] */
    (xdc_Char)0x74,  /* [1991] */
    (xdc_Char)0x65,  /* [1992] */
    (xdc_Char)0x72,  /* [1993] */
    (xdc_Char)0x72,  /* [1994] */
    (xdc_Char)0x75,  /* [1995] */
    (xdc_Char)0x70,  /* [1996] */
    (xdc_Char)0x74,  /* [1997] */
    (xdc_Char)0x20,  /* [1998] */
    (xdc_Char)0x74,  /* [1999] */
    (xdc_Char)0x68,  /* [2000] */
    (xdc_Char)0x72,  /* [2001] */
    (xdc_Char)0x65,  /* [2002] */
    (xdc_Char)0x61,  /* [2003] */
    (xdc_Char)0x64,  /* [2004] */
    (xdc_Char)0x2e,  /* [2005] */
    (xdc_Char)0x0,  /* [2006] */
    (xdc_Char)0x41,  /* [2007] */
    (xdc_Char)0x5f,  /* [2008] */
    (xdc_Char)0x62,  /* [2009] */
    (xdc_Char)0x61,  /* [2010] */
    (xdc_Char)0x64,  /* [2011] */
    (xdc_Char)0x43,  /* [2012] */
    (xdc_Char)0x6f,  /* [2013] */
    (xdc_Char)0x6e,  /* [2014] */
    (xdc_Char)0x74,  /* [2015] */
    (xdc_Char)0x65,  /* [2016] */
    (xdc_Char)0x78,  /* [2017] */
    (xdc_Char)0x74,  /* [2018] */
    (xdc_Char)0x3a,  /* [2019] */
    (xdc_Char)0x20,  /* [2020] */
    (xdc_Char)0x62,  /* [2021] */
    (xdc_Char)0x61,  /* [2022] */
    (xdc_Char)0x64,  /* [2023] */
    (xdc_Char)0x20,  /* [2024] */
    (xdc_Char)0x63,  /* [2025] */
    (xdc_Char)0x61,  /* [2026] */
    (xdc_Char)0x6c,  /* [2027] */
    (xdc_Char)0x6c,  /* [2028] */
    (xdc_Char)0x69,  /* [2029] */
    (xdc_Char)0x6e,  /* [2030] */
    (xdc_Char)0x67,  /* [2031] */
    (xdc_Char)0x20,  /* [2032] */
    (xdc_Char)0x63,  /* [2033] */
    (xdc_Char)0x6f,  /* [2034] */
    (xdc_Char)0x6e,  /* [2035] */
    (xdc_Char)0x74,  /* [2036] */
    (xdc_Char)0x65,  /* [2037] */
    (xdc_Char)0x78,  /* [2038] */
    (xdc_Char)0x74,  /* [2039] */
    (xdc_Char)0x2e,  /* [2040] */
    (xdc_Char)0x20,  /* [2041] */
    (xdc_Char)0x4d,  /* [2042] */
    (xdc_Char)0x61,  /* [2043] */
    (xdc_Char)0x79,  /* [2044] */
    (xdc_Char)0x20,  /* [2045] */
    (xdc_Char)0x6e,  /* [2046] */
    (xdc_Char)0x6f,  /* [2047] */
    (xdc_Char)0x74,  /* [2048] */
    (xdc_Char)0x20,  /* [2049] */
    (xdc_Char)0x62,  /* [2050] */
    (xdc_Char)0x65,  /* [2051] */
    (xdc_Char)0x20,  /* [2052] */
    (xdc_Char)0x65,  /* [2053] */
    (xdc_Char)0x6e,  /* [2054] */
    (xdc_Char)0x74,  /* [2055] */
    (xdc_Char)0x65,  /* [2056] */
    (xdc_Char)0x72,  /* [2057] */
    (xdc_Char)0x65,  /* [2058] */
    (xdc_Char)0x64,  /* [2059] */
    (xdc_Char)0x20,  /* [2060] */
    (xdc_Char)0x66,  /* [2061] */
    (xdc_Char)0x72,  /* [2062] */
    (xdc_Char)0x6f,  /* [2063] */
    (xdc_Char)0x6d,  /* [2064] */
    (xdc_Char)0x20,  /* [2065] */
    (xdc_Char)0x61,  /* [2066] */
    (xdc_Char)0x20,  /* [2067] */
    (xdc_Char)0x73,  /* [2068] */
    (xdc_Char)0x6f,  /* [2069] */
    (xdc_Char)0x66,  /* [2070] */
    (xdc_Char)0x74,  /* [2071] */
    (xdc_Char)0x77,  /* [2072] */
    (xdc_Char)0x61,  /* [2073] */
    (xdc_Char)0x72,  /* [2074] */
    (xdc_Char)0x65,  /* [2075] */
    (xdc_Char)0x20,  /* [2076] */
    (xdc_Char)0x6f,  /* [2077] */
    (xdc_Char)0x72,  /* [2078] */
    (xdc_Char)0x20,  /* [2079] */
    (xdc_Char)0x68,  /* [2080] */
    (xdc_Char)0x61,  /* [2081] */
    (xdc_Char)0x72,  /* [2082] */
    (xdc_Char)0x64,  /* [2083] */
    (xdc_Char)0x77,  /* [2084] */
    (xdc_Char)0x61,  /* [2085] */
    (xdc_Char)0x72,  /* [2086] */
    (xdc_Char)0x65,  /* [2087] */
    (xdc_Char)0x20,  /* [2088] */
    (xdc_Char)0x69,  /* [2089] */
    (xdc_Char)0x6e,  /* [2090] */
    (xdc_Char)0x74,  /* [2091] */
    (xdc_Char)0x65,  /* [2092] */
    (xdc_Char)0x72,  /* [2093] */
    (xdc_Char)0x72,  /* [2094] */
    (xdc_Char)0x75,  /* [2095] */
    (xdc_Char)0x70,  /* [2096] */
    (xdc_Char)0x74,  /* [2097] */
    (xdc_Char)0x20,  /* [2098] */
    (xdc_Char)0x74,  /* [2099] */
    (xdc_Char)0x68,  /* [2100] */
    (xdc_Char)0x72,  /* [2101] */
    (xdc_Char)0x65,  /* [2102] */
    (xdc_Char)0x61,  /* [2103] */
    (xdc_Char)0x64,  /* [2104] */
    (xdc_Char)0x2e,  /* [2105] */
    (xdc_Char)0x0,  /* [2106] */
    (xdc_Char)0x41,  /* [2107] */
    (xdc_Char)0x5f,  /* [2108] */
    (xdc_Char)0x62,  /* [2109] */
    (xdc_Char)0x61,  /* [2110] */
    (xdc_Char)0x64,  /* [2111] */
    (xdc_Char)0x43,  /* [2112] */
    (xdc_Char)0x6f,  /* [2113] */
    (xdc_Char)0x6e,  /* [2114] */
    (xdc_Char)0x74,  /* [2115] */
    (xdc_Char)0x65,  /* [2116] */
    (xdc_Char)0x78,  /* [2117] */
    (xdc_Char)0x74,  /* [2118] */
    (xdc_Char)0x3a,  /* [2119] */
    (xdc_Char)0x20,  /* [2120] */
    (xdc_Char)0x62,  /* [2121] */
    (xdc_Char)0x61,  /* [2122] */
    (xdc_Char)0x64,  /* [2123] */
    (xdc_Char)0x20,  /* [2124] */
    (xdc_Char)0x63,  /* [2125] */
    (xdc_Char)0x61,  /* [2126] */
    (xdc_Char)0x6c,  /* [2127] */
    (xdc_Char)0x6c,  /* [2128] */
    (xdc_Char)0x69,  /* [2129] */
    (xdc_Char)0x6e,  /* [2130] */
    (xdc_Char)0x67,  /* [2131] */
    (xdc_Char)0x20,  /* [2132] */
    (xdc_Char)0x63,  /* [2133] */
    (xdc_Char)0x6f,  /* [2134] */
    (xdc_Char)0x6e,  /* [2135] */
    (xdc_Char)0x74,  /* [2136] */
    (xdc_Char)0x65,  /* [2137] */
    (xdc_Char)0x78,  /* [2138] */
    (xdc_Char)0x74,  /* [2139] */
    (xdc_Char)0x2e,  /* [2140] */
    (xdc_Char)0x20,  /* [2141] */
    (xdc_Char)0x53,  /* [2142] */
    (xdc_Char)0x65,  /* [2143] */
    (xdc_Char)0x65,  /* [2144] */
    (xdc_Char)0x20,  /* [2145] */
    (xdc_Char)0x47,  /* [2146] */
    (xdc_Char)0x61,  /* [2147] */
    (xdc_Char)0x74,  /* [2148] */
    (xdc_Char)0x65,  /* [2149] */
    (xdc_Char)0x4d,  /* [2150] */
    (xdc_Char)0x75,  /* [2151] */
    (xdc_Char)0x74,  /* [2152] */
    (xdc_Char)0x65,  /* [2153] */
    (xdc_Char)0x78,  /* [2154] */
    (xdc_Char)0x50,  /* [2155] */
    (xdc_Char)0x72,  /* [2156] */
    (xdc_Char)0x69,  /* [2157] */
    (xdc_Char)0x20,  /* [2158] */
    (xdc_Char)0x41,  /* [2159] */
    (xdc_Char)0x50,  /* [2160] */
    (xdc_Char)0x49,  /* [2161] */
    (xdc_Char)0x20,  /* [2162] */
    (xdc_Char)0x64,  /* [2163] */
    (xdc_Char)0x6f,  /* [2164] */
    (xdc_Char)0x63,  /* [2165] */
    (xdc_Char)0x20,  /* [2166] */
    (xdc_Char)0x66,  /* [2167] */
    (xdc_Char)0x6f,  /* [2168] */
    (xdc_Char)0x72,  /* [2169] */
    (xdc_Char)0x20,  /* [2170] */
    (xdc_Char)0x64,  /* [2171] */
    (xdc_Char)0x65,  /* [2172] */
    (xdc_Char)0x74,  /* [2173] */
    (xdc_Char)0x61,  /* [2174] */
    (xdc_Char)0x69,  /* [2175] */
    (xdc_Char)0x6c,  /* [2176] */
    (xdc_Char)0x73,  /* [2177] */
    (xdc_Char)0x2e,  /* [2178] */
    (xdc_Char)0x0,  /* [2179] */
    (xdc_Char)0x41,  /* [2180] */
    (xdc_Char)0x5f,  /* [2181] */
    (xdc_Char)0x62,  /* [2182] */
    (xdc_Char)0x61,  /* [2183] */
    (xdc_Char)0x64,  /* [2184] */
    (xdc_Char)0x43,  /* [2185] */
    (xdc_Char)0x6f,  /* [2186] */
    (xdc_Char)0x6e,  /* [2187] */
    (xdc_Char)0x74,  /* [2188] */
    (xdc_Char)0x65,  /* [2189] */
    (xdc_Char)0x78,  /* [2190] */
    (xdc_Char)0x74,  /* [2191] */
    (xdc_Char)0x3a,  /* [2192] */
    (xdc_Char)0x20,  /* [2193] */
    (xdc_Char)0x62,  /* [2194] */
    (xdc_Char)0x61,  /* [2195] */
    (xdc_Char)0x64,  /* [2196] */
    (xdc_Char)0x20,  /* [2197] */
    (xdc_Char)0x63,  /* [2198] */
    (xdc_Char)0x61,  /* [2199] */
    (xdc_Char)0x6c,  /* [2200] */
    (xdc_Char)0x6c,  /* [2201] */
    (xdc_Char)0x69,  /* [2202] */
    (xdc_Char)0x6e,  /* [2203] */
    (xdc_Char)0x67,  /* [2204] */
    (xdc_Char)0x20,  /* [2205] */
    (xdc_Char)0x63,  /* [2206] */
    (xdc_Char)0x6f,  /* [2207] */
    (xdc_Char)0x6e,  /* [2208] */
    (xdc_Char)0x74,  /* [2209] */
    (xdc_Char)0x65,  /* [2210] */
    (xdc_Char)0x78,  /* [2211] */
    (xdc_Char)0x74,  /* [2212] */
    (xdc_Char)0x2e,  /* [2213] */
    (xdc_Char)0x20,  /* [2214] */
    (xdc_Char)0x53,  /* [2215] */
    (xdc_Char)0x65,  /* [2216] */
    (xdc_Char)0x65,  /* [2217] */
    (xdc_Char)0x20,  /* [2218] */
    (xdc_Char)0x47,  /* [2219] */
    (xdc_Char)0x61,  /* [2220] */
    (xdc_Char)0x74,  /* [2221] */
    (xdc_Char)0x65,  /* [2222] */
    (xdc_Char)0x4d,  /* [2223] */
    (xdc_Char)0x75,  /* [2224] */
    (xdc_Char)0x74,  /* [2225] */
    (xdc_Char)0x65,  /* [2226] */
    (xdc_Char)0x78,  /* [2227] */
    (xdc_Char)0x20,  /* [2228] */
    (xdc_Char)0x41,  /* [2229] */
    (xdc_Char)0x50,  /* [2230] */
    (xdc_Char)0x49,  /* [2231] */
    (xdc_Char)0x20,  /* [2232] */
    (xdc_Char)0x64,  /* [2233] */
    (xdc_Char)0x6f,  /* [2234] */
    (xdc_Char)0x63,  /* [2235] */
    (xdc_Char)0x20,  /* [2236] */
    (xdc_Char)0x66,  /* [2237] */
    (xdc_Char)0x6f,  /* [2238] */
    (xdc_Char)0x72,  /* [2239] */
    (xdc_Char)0x20,  /* [2240] */
    (xdc_Char)0x64,  /* [2241] */
    (xdc_Char)0x65,  /* [2242] */
    (xdc_Char)0x74,  /* [2243] */
    (xdc_Char)0x61,  /* [2244] */
    (xdc_Char)0x69,  /* [2245] */
    (xdc_Char)0x6c,  /* [2246] */
    (xdc_Char)0x73,  /* [2247] */
    (xdc_Char)0x2e,  /* [2248] */
    (xdc_Char)0x0,  /* [2249] */
    (xdc_Char)0x41,  /* [2250] */
    (xdc_Char)0x5f,  /* [2251] */
    (xdc_Char)0x69,  /* [2252] */
    (xdc_Char)0x70,  /* [2253] */
    (xdc_Char)0x63,  /* [2254] */
    (xdc_Char)0x46,  /* [2255] */
    (xdc_Char)0x61,  /* [2256] */
    (xdc_Char)0x69,  /* [2257] */
    (xdc_Char)0x6c,  /* [2258] */
    (xdc_Char)0x65,  /* [2259] */
    (xdc_Char)0x64,  /* [2260] */
    (xdc_Char)0x3a,  /* [2261] */
    (xdc_Char)0x20,  /* [2262] */
    (xdc_Char)0x55,  /* [2263] */
    (xdc_Char)0x6e,  /* [2264] */
    (xdc_Char)0x65,  /* [2265] */
    (xdc_Char)0x78,  /* [2266] */
    (xdc_Char)0x70,  /* [2267] */
    (xdc_Char)0x65,  /* [2268] */
    (xdc_Char)0x63,  /* [2269] */
    (xdc_Char)0x74,  /* [2270] */
    (xdc_Char)0x65,  /* [2271] */
    (xdc_Char)0x64,  /* [2272] */
    (xdc_Char)0x20,  /* [2273] */
    (xdc_Char)0x4d,  /* [2274] */
    (xdc_Char)0x65,  /* [2275] */
    (xdc_Char)0x73,  /* [2276] */
    (xdc_Char)0x73,  /* [2277] */
    (xdc_Char)0x61,  /* [2278] */
    (xdc_Char)0x67,  /* [2279] */
    (xdc_Char)0x65,  /* [2280] */
    (xdc_Char)0x51,  /* [2281] */
    (xdc_Char)0x20,  /* [2282] */
    (xdc_Char)0x66,  /* [2283] */
    (xdc_Char)0x61,  /* [2284] */
    (xdc_Char)0x69,  /* [2285] */
    (xdc_Char)0x6c,  /* [2286] */
    (xdc_Char)0x65,  /* [2287] */
    (xdc_Char)0x64,  /* [2288] */
    (xdc_Char)0x0,  /* [2289] */
    (xdc_Char)0x41,  /* [2290] */
    (xdc_Char)0x5f,  /* [2291] */
    (xdc_Char)0x69,  /* [2292] */
    (xdc_Char)0x6e,  /* [2293] */
    (xdc_Char)0x76,  /* [2294] */
    (xdc_Char)0x61,  /* [2295] */
    (xdc_Char)0x6c,  /* [2296] */
    (xdc_Char)0x69,  /* [2297] */
    (xdc_Char)0x64,  /* [2298] */
    (xdc_Char)0x48,  /* [2299] */
    (xdc_Char)0x64,  /* [2300] */
    (xdc_Char)0x72,  /* [2301] */
    (xdc_Char)0x54,  /* [2302] */
    (xdc_Char)0x79,  /* [2303] */
    (xdc_Char)0x70,  /* [2304] */
    (xdc_Char)0x65,  /* [2305] */
    (xdc_Char)0x3a,  /* [2306] */
    (xdc_Char)0x20,  /* [2307] */
    (xdc_Char)0x49,  /* [2308] */
    (xdc_Char)0x6e,  /* [2309] */
    (xdc_Char)0x76,  /* [2310] */
    (xdc_Char)0x61,  /* [2311] */
    (xdc_Char)0x6c,  /* [2312] */
    (xdc_Char)0x69,  /* [2313] */
    (xdc_Char)0x64,  /* [2314] */
    (xdc_Char)0x20,  /* [2315] */
    (xdc_Char)0x48,  /* [2316] */
    (xdc_Char)0x64,  /* [2317] */
    (xdc_Char)0x72,  /* [2318] */
    (xdc_Char)0x54,  /* [2319] */
    (xdc_Char)0x79,  /* [2320] */
    (xdc_Char)0x70,  /* [2321] */
    (xdc_Char)0x65,  /* [2322] */
    (xdc_Char)0x20,  /* [2323] */
    (xdc_Char)0x73,  /* [2324] */
    (xdc_Char)0x70,  /* [2325] */
    (xdc_Char)0x65,  /* [2326] */
    (xdc_Char)0x63,  /* [2327] */
    (xdc_Char)0x69,  /* [2328] */
    (xdc_Char)0x66,  /* [2329] */
    (xdc_Char)0x69,  /* [2330] */
    (xdc_Char)0x65,  /* [2331] */
    (xdc_Char)0x64,  /* [2332] */
    (xdc_Char)0x0,  /* [2333] */
    (xdc_Char)0x41,  /* [2334] */
    (xdc_Char)0x5f,  /* [2335] */
    (xdc_Char)0x69,  /* [2336] */
    (xdc_Char)0x6e,  /* [2337] */
    (xdc_Char)0x76,  /* [2338] */
    (xdc_Char)0x61,  /* [2339] */
    (xdc_Char)0x6c,  /* [2340] */
    (xdc_Char)0x69,  /* [2341] */
    (xdc_Char)0x64,  /* [2342] */
    (xdc_Char)0x53,  /* [2343] */
    (xdc_Char)0x65,  /* [2344] */
    (xdc_Char)0x72,  /* [2345] */
    (xdc_Char)0x76,  /* [2346] */
    (xdc_Char)0x69,  /* [2347] */
    (xdc_Char)0x63,  /* [2348] */
    (xdc_Char)0x65,  /* [2349] */
    (xdc_Char)0x49,  /* [2350] */
    (xdc_Char)0x64,  /* [2351] */
    (xdc_Char)0x3a,  /* [2352] */
    (xdc_Char)0x20,  /* [2353] */
    (xdc_Char)0x53,  /* [2354] */
    (xdc_Char)0x65,  /* [2355] */
    (xdc_Char)0x72,  /* [2356] */
    (xdc_Char)0x76,  /* [2357] */
    (xdc_Char)0x69,  /* [2358] */
    (xdc_Char)0x63,  /* [2359] */
    (xdc_Char)0x65,  /* [2360] */
    (xdc_Char)0x49,  /* [2361] */
    (xdc_Char)0x64,  /* [2362] */
    (xdc_Char)0x20,  /* [2363] */
    (xdc_Char)0x6f,  /* [2364] */
    (xdc_Char)0x75,  /* [2365] */
    (xdc_Char)0x74,  /* [2366] */
    (xdc_Char)0x20,  /* [2367] */
    (xdc_Char)0x6f,  /* [2368] */
    (xdc_Char)0x66,  /* [2369] */
    (xdc_Char)0x20,  /* [2370] */
    (xdc_Char)0x72,  /* [2371] */
    (xdc_Char)0x61,  /* [2372] */
    (xdc_Char)0x6e,  /* [2373] */
    (xdc_Char)0x67,  /* [2374] */
    (xdc_Char)0x65,  /* [2375] */
    (xdc_Char)0x0,  /* [2376] */
    (xdc_Char)0x41,  /* [2377] */
    (xdc_Char)0x5f,  /* [2378] */
    (xdc_Char)0x69,  /* [2379] */
    (xdc_Char)0x6e,  /* [2380] */
    (xdc_Char)0x76,  /* [2381] */
    (xdc_Char)0x61,  /* [2382] */
    (xdc_Char)0x6c,  /* [2383] */
    (xdc_Char)0x69,  /* [2384] */
    (xdc_Char)0x64,  /* [2385] */
    (xdc_Char)0x50,  /* [2386] */
    (xdc_Char)0x72,  /* [2387] */
    (xdc_Char)0x6f,  /* [2388] */
    (xdc_Char)0x63,  /* [2389] */
    (xdc_Char)0x65,  /* [2390] */
    (xdc_Char)0x73,  /* [2391] */
    (xdc_Char)0x73,  /* [2392] */
    (xdc_Char)0x43,  /* [2393] */
    (xdc_Char)0x61,  /* [2394] */
    (xdc_Char)0x6c,  /* [2395] */
    (xdc_Char)0x6c,  /* [2396] */
    (xdc_Char)0x62,  /* [2397] */
    (xdc_Char)0x61,  /* [2398] */
    (xdc_Char)0x63,  /* [2399] */
    (xdc_Char)0x6b,  /* [2400] */
    (xdc_Char)0x46,  /* [2401] */
    (xdc_Char)0x78,  /* [2402] */
    (xdc_Char)0x6e,  /* [2403] */
    (xdc_Char)0x3a,  /* [2404] */
    (xdc_Char)0x20,  /* [2405] */
    (xdc_Char)0x43,  /* [2406] */
    (xdc_Char)0x61,  /* [2407] */
    (xdc_Char)0x6c,  /* [2408] */
    (xdc_Char)0x6c,  /* [2409] */
    (xdc_Char)0x62,  /* [2410] */
    (xdc_Char)0x61,  /* [2411] */
    (xdc_Char)0x63,  /* [2412] */
    (xdc_Char)0x6b,  /* [2413] */
    (xdc_Char)0x20,  /* [2414] */
    (xdc_Char)0x63,  /* [2415] */
    (xdc_Char)0x61,  /* [2416] */
    (xdc_Char)0x6e,  /* [2417] */
    (xdc_Char)0x6e,  /* [2418] */
    (xdc_Char)0x6f,  /* [2419] */
    (xdc_Char)0x74,  /* [2420] */
    (xdc_Char)0x20,  /* [2421] */
    (xdc_Char)0x62,  /* [2422] */
    (xdc_Char)0x65,  /* [2423] */
    (xdc_Char)0x20,  /* [2424] */
    (xdc_Char)0x4e,  /* [2425] */
    (xdc_Char)0x55,  /* [2426] */
    (xdc_Char)0x4c,  /* [2427] */
    (xdc_Char)0x4c,  /* [2428] */
    (xdc_Char)0x0,  /* [2429] */
    (xdc_Char)0x41,  /* [2430] */
    (xdc_Char)0x5f,  /* [2431] */
    (xdc_Char)0x7a,  /* [2432] */
    (xdc_Char)0x65,  /* [2433] */
    (xdc_Char)0x72,  /* [2434] */
    (xdc_Char)0x6f,  /* [2435] */
    (xdc_Char)0x54,  /* [2436] */
    (xdc_Char)0x69,  /* [2437] */
    (xdc_Char)0x6d,  /* [2438] */
    (xdc_Char)0x65,  /* [2439] */
    (xdc_Char)0x6f,  /* [2440] */
    (xdc_Char)0x75,  /* [2441] */
    (xdc_Char)0x74,  /* [2442] */
    (xdc_Char)0x3a,  /* [2443] */
    (xdc_Char)0x20,  /* [2444] */
    (xdc_Char)0x54,  /* [2445] */
    (xdc_Char)0x69,  /* [2446] */
    (xdc_Char)0x6d,  /* [2447] */
    (xdc_Char)0x65,  /* [2448] */
    (xdc_Char)0x6f,  /* [2449] */
    (xdc_Char)0x75,  /* [2450] */
    (xdc_Char)0x74,  /* [2451] */
    (xdc_Char)0x20,  /* [2452] */
    (xdc_Char)0x76,  /* [2453] */
    (xdc_Char)0x61,  /* [2454] */
    (xdc_Char)0x6c,  /* [2455] */
    (xdc_Char)0x75,  /* [2456] */
    (xdc_Char)0x65,  /* [2457] */
    (xdc_Char)0x20,  /* [2458] */
    (xdc_Char)0x61,  /* [2459] */
    (xdc_Char)0x6e,  /* [2460] */
    (xdc_Char)0x6e,  /* [2461] */
    (xdc_Char)0x6f,  /* [2462] */
    (xdc_Char)0x74,  /* [2463] */
    (xdc_Char)0x20,  /* [2464] */
    (xdc_Char)0x62,  /* [2465] */
    (xdc_Char)0x65,  /* [2466] */
    (xdc_Char)0x20,  /* [2467] */
    (xdc_Char)0x7a,  /* [2468] */
    (xdc_Char)0x65,  /* [2469] */
    (xdc_Char)0x72,  /* [2470] */
    (xdc_Char)0x6f,  /* [2471] */
    (xdc_Char)0x0,  /* [2472] */
    (xdc_Char)0x41,  /* [2473] */
    (xdc_Char)0x5f,  /* [2474] */
    (xdc_Char)0x69,  /* [2475] */
    (xdc_Char)0x6e,  /* [2476] */
    (xdc_Char)0x76,  /* [2477] */
    (xdc_Char)0x61,  /* [2478] */
    (xdc_Char)0x6c,  /* [2479] */
    (xdc_Char)0x69,  /* [2480] */
    (xdc_Char)0x64,  /* [2481] */
    (xdc_Char)0x4b,  /* [2482] */
    (xdc_Char)0x65,  /* [2483] */
    (xdc_Char)0x79,  /* [2484] */
    (xdc_Char)0x3a,  /* [2485] */
    (xdc_Char)0x20,  /* [2486] */
    (xdc_Char)0x74,  /* [2487] */
    (xdc_Char)0x68,  /* [2488] */
    (xdc_Char)0x65,  /* [2489] */
    (xdc_Char)0x20,  /* [2490] */
    (xdc_Char)0x6b,  /* [2491] */
    (xdc_Char)0x65,  /* [2492] */
    (xdc_Char)0x79,  /* [2493] */
    (xdc_Char)0x20,  /* [2494] */
    (xdc_Char)0x6d,  /* [2495] */
    (xdc_Char)0x75,  /* [2496] */
    (xdc_Char)0x73,  /* [2497] */
    (xdc_Char)0x74,  /* [2498] */
    (xdc_Char)0x20,  /* [2499] */
    (xdc_Char)0x62,  /* [2500] */
    (xdc_Char)0x65,  /* [2501] */
    (xdc_Char)0x20,  /* [2502] */
    (xdc_Char)0x73,  /* [2503] */
    (xdc_Char)0x65,  /* [2504] */
    (xdc_Char)0x74,  /* [2505] */
    (xdc_Char)0x20,  /* [2506] */
    (xdc_Char)0x74,  /* [2507] */
    (xdc_Char)0x6f,  /* [2508] */
    (xdc_Char)0x20,  /* [2509] */
    (xdc_Char)0x61,  /* [2510] */
    (xdc_Char)0x20,  /* [2511] */
    (xdc_Char)0x6e,  /* [2512] */
    (xdc_Char)0x6f,  /* [2513] */
    (xdc_Char)0x6e,  /* [2514] */
    (xdc_Char)0x2d,  /* [2515] */
    (xdc_Char)0x64,  /* [2516] */
    (xdc_Char)0x65,  /* [2517] */
    (xdc_Char)0x66,  /* [2518] */
    (xdc_Char)0x61,  /* [2519] */
    (xdc_Char)0x75,  /* [2520] */
    (xdc_Char)0x6c,  /* [2521] */
    (xdc_Char)0x74,  /* [2522] */
    (xdc_Char)0x20,  /* [2523] */
    (xdc_Char)0x76,  /* [2524] */
    (xdc_Char)0x61,  /* [2525] */
    (xdc_Char)0x6c,  /* [2526] */
    (xdc_Char)0x75,  /* [2527] */
    (xdc_Char)0x65,  /* [2528] */
    (xdc_Char)0x0,  /* [2529] */
    (xdc_Char)0x41,  /* [2530] */
    (xdc_Char)0x5f,  /* [2531] */
    (xdc_Char)0x6e,  /* [2532] */
    (xdc_Char)0x75,  /* [2533] */
    (xdc_Char)0x6c,  /* [2534] */
    (xdc_Char)0x6c,  /* [2535] */
    (xdc_Char)0x48,  /* [2536] */
    (xdc_Char)0x61,  /* [2537] */
    (xdc_Char)0x6e,  /* [2538] */
    (xdc_Char)0x64,  /* [2539] */
    (xdc_Char)0x6c,  /* [2540] */
    (xdc_Char)0x65,  /* [2541] */
    (xdc_Char)0x3a,  /* [2542] */
    (xdc_Char)0x20,  /* [2543] */
    (xdc_Char)0x4e,  /* [2544] */
    (xdc_Char)0x75,  /* [2545] */
    (xdc_Char)0x6c,  /* [2546] */
    (xdc_Char)0x6c,  /* [2547] */
    (xdc_Char)0x20,  /* [2548] */
    (xdc_Char)0x68,  /* [2549] */
    (xdc_Char)0x61,  /* [2550] */
    (xdc_Char)0x6e,  /* [2551] */
    (xdc_Char)0x64,  /* [2552] */
    (xdc_Char)0x6c,  /* [2553] */
    (xdc_Char)0x65,  /* [2554] */
    (xdc_Char)0x20,  /* [2555] */
    (xdc_Char)0x70,  /* [2556] */
    (xdc_Char)0x61,  /* [2557] */
    (xdc_Char)0x73,  /* [2558] */
    (xdc_Char)0x73,  /* [2559] */
    (xdc_Char)0x65,  /* [2560] */
    (xdc_Char)0x64,  /* [2561] */
    (xdc_Char)0x20,  /* [2562] */
    (xdc_Char)0x74,  /* [2563] */
    (xdc_Char)0x6f,  /* [2564] */
    (xdc_Char)0x20,  /* [2565] */
    (xdc_Char)0x63,  /* [2566] */
    (xdc_Char)0x72,  /* [2567] */
    (xdc_Char)0x65,  /* [2568] */
    (xdc_Char)0x61,  /* [2569] */
    (xdc_Char)0x74,  /* [2570] */
    (xdc_Char)0x65,  /* [2571] */
    (xdc_Char)0x0,  /* [2572] */
    (xdc_Char)0x41,  /* [2573] */
    (xdc_Char)0x5f,  /* [2574] */
    (xdc_Char)0x49,  /* [2575] */
    (xdc_Char)0x70,  /* [2576] */
    (xdc_Char)0x63,  /* [2577] */
    (xdc_Char)0x4d,  /* [2578] */
    (xdc_Char)0x50,  /* [2579] */
    (xdc_Char)0x46,  /* [2580] */
    (xdc_Char)0x61,  /* [2581] */
    (xdc_Char)0x69,  /* [2582] */
    (xdc_Char)0x6c,  /* [2583] */
    (xdc_Char)0x75,  /* [2584] */
    (xdc_Char)0x72,  /* [2585] */
    (xdc_Char)0x65,  /* [2586] */
    (xdc_Char)0x3a,  /* [2587] */
    (xdc_Char)0x20,  /* [2588] */
    (xdc_Char)0x55,  /* [2589] */
    (xdc_Char)0x6e,  /* [2590] */
    (xdc_Char)0x65,  /* [2591] */
    (xdc_Char)0x78,  /* [2592] */
    (xdc_Char)0x70,  /* [2593] */
    (xdc_Char)0x65,  /* [2594] */
    (xdc_Char)0x63,  /* [2595] */
    (xdc_Char)0x74,  /* [2596] */
    (xdc_Char)0x65,  /* [2597] */
    (xdc_Char)0x64,  /* [2598] */
    (xdc_Char)0x20,  /* [2599] */
    (xdc_Char)0x66,  /* [2600] */
    (xdc_Char)0x61,  /* [2601] */
    (xdc_Char)0x69,  /* [2602] */
    (xdc_Char)0x6c,  /* [2603] */
    (xdc_Char)0x75,  /* [2604] */
    (xdc_Char)0x72,  /* [2605] */
    (xdc_Char)0x65,  /* [2606] */
    (xdc_Char)0x20,  /* [2607] */
    (xdc_Char)0x77,  /* [2608] */
    (xdc_Char)0x69,  /* [2609] */
    (xdc_Char)0x74,  /* [2610] */
    (xdc_Char)0x68,  /* [2611] */
    (xdc_Char)0x20,  /* [2612] */
    (xdc_Char)0x74,  /* [2613] */
    (xdc_Char)0x68,  /* [2614] */
    (xdc_Char)0x65,  /* [2615] */
    (xdc_Char)0x20,  /* [2616] */
    (xdc_Char)0x49,  /* [2617] */
    (xdc_Char)0x70,  /* [2618] */
    (xdc_Char)0x63,  /* [2619] */
    (xdc_Char)0x4d,  /* [2620] */
    (xdc_Char)0x50,  /* [2621] */
    (xdc_Char)0x0,  /* [2622] */
    (xdc_Char)0x61,  /* [2623] */
    (xdc_Char)0x73,  /* [2624] */
    (xdc_Char)0x73,  /* [2625] */
    (xdc_Char)0x65,  /* [2626] */
    (xdc_Char)0x72,  /* [2627] */
    (xdc_Char)0x74,  /* [2628] */
    (xdc_Char)0x69,  /* [2629] */
    (xdc_Char)0x6f,  /* [2630] */
    (xdc_Char)0x6e,  /* [2631] */
    (xdc_Char)0x20,  /* [2632] */
    (xdc_Char)0x66,  /* [2633] */
    (xdc_Char)0x61,  /* [2634] */
    (xdc_Char)0x69,  /* [2635] */
    (xdc_Char)0x6c,  /* [2636] */
    (xdc_Char)0x75,  /* [2637] */
    (xdc_Char)0x72,  /* [2638] */
    (xdc_Char)0x65,  /* [2639] */
    (xdc_Char)0x25,  /* [2640] */
    (xdc_Char)0x73,  /* [2641] */
    (xdc_Char)0x25,  /* [2642] */
    (xdc_Char)0x73,  /* [2643] */
    (xdc_Char)0x0,  /* [2644] */
    (xdc_Char)0x25,  /* [2645] */
    (xdc_Char)0x24,  /* [2646] */
    (xdc_Char)0x53,  /* [2647] */
    (xdc_Char)0x0,  /* [2648] */
    (xdc_Char)0x6f,  /* [2649] */
    (xdc_Char)0x75,  /* [2650] */
    (xdc_Char)0x74,  /* [2651] */
    (xdc_Char)0x20,  /* [2652] */
    (xdc_Char)0x6f,  /* [2653] */
    (xdc_Char)0x66,  /* [2654] */
    (xdc_Char)0x20,  /* [2655] */
    (xdc_Char)0x6d,  /* [2656] */
    (xdc_Char)0x65,  /* [2657] */
    (xdc_Char)0x6d,  /* [2658] */
    (xdc_Char)0x6f,  /* [2659] */
    (xdc_Char)0x72,  /* [2660] */
    (xdc_Char)0x79,  /* [2661] */
    (xdc_Char)0x3a,  /* [2662] */
    (xdc_Char)0x20,  /* [2663] */
    (xdc_Char)0x68,  /* [2664] */
    (xdc_Char)0x65,  /* [2665] */
    (xdc_Char)0x61,  /* [2666] */
    (xdc_Char)0x70,  /* [2667] */
    (xdc_Char)0x3d,  /* [2668] */
    (xdc_Char)0x30,  /* [2669] */
    (xdc_Char)0x78,  /* [2670] */
    (xdc_Char)0x25,  /* [2671] */
    (xdc_Char)0x78,  /* [2672] */
    (xdc_Char)0x2c,  /* [2673] */
    (xdc_Char)0x20,  /* [2674] */
    (xdc_Char)0x73,  /* [2675] */
    (xdc_Char)0x69,  /* [2676] */
    (xdc_Char)0x7a,  /* [2677] */
    (xdc_Char)0x65,  /* [2678] */
    (xdc_Char)0x3d,  /* [2679] */
    (xdc_Char)0x25,  /* [2680] */
    (xdc_Char)0x75,  /* [2681] */
    (xdc_Char)0x0,  /* [2682] */
    (xdc_Char)0x25,  /* [2683] */
    (xdc_Char)0x73,  /* [2684] */
    (xdc_Char)0x20,  /* [2685] */
    (xdc_Char)0x30,  /* [2686] */
    (xdc_Char)0x78,  /* [2687] */
    (xdc_Char)0x25,  /* [2688] */
    (xdc_Char)0x78,  /* [2689] */
    (xdc_Char)0x0,  /* [2690] */
    (xdc_Char)0x45,  /* [2691] */
    (xdc_Char)0x5f,  /* [2692] */
    (xdc_Char)0x62,  /* [2693] */
    (xdc_Char)0x61,  /* [2694] */
    (xdc_Char)0x64,  /* [2695] */
    (xdc_Char)0x4c,  /* [2696] */
    (xdc_Char)0x65,  /* [2697] */
    (xdc_Char)0x76,  /* [2698] */
    (xdc_Char)0x65,  /* [2699] */
    (xdc_Char)0x6c,  /* [2700] */
    (xdc_Char)0x3a,  /* [2701] */
    (xdc_Char)0x20,  /* [2702] */
    (xdc_Char)0x42,  /* [2703] */
    (xdc_Char)0x61,  /* [2704] */
    (xdc_Char)0x64,  /* [2705] */
    (xdc_Char)0x20,  /* [2706] */
    (xdc_Char)0x66,  /* [2707] */
    (xdc_Char)0x69,  /* [2708] */
    (xdc_Char)0x6c,  /* [2709] */
    (xdc_Char)0x74,  /* [2710] */
    (xdc_Char)0x65,  /* [2711] */
    (xdc_Char)0x72,  /* [2712] */
    (xdc_Char)0x20,  /* [2713] */
    (xdc_Char)0x6c,  /* [2714] */
    (xdc_Char)0x65,  /* [2715] */
    (xdc_Char)0x76,  /* [2716] */
    (xdc_Char)0x65,  /* [2717] */
    (xdc_Char)0x6c,  /* [2718] */
    (xdc_Char)0x20,  /* [2719] */
    (xdc_Char)0x76,  /* [2720] */
    (xdc_Char)0x61,  /* [2721] */
    (xdc_Char)0x6c,  /* [2722] */
    (xdc_Char)0x75,  /* [2723] */
    (xdc_Char)0x65,  /* [2724] */
    (xdc_Char)0x3a,  /* [2725] */
    (xdc_Char)0x20,  /* [2726] */
    (xdc_Char)0x25,  /* [2727] */
    (xdc_Char)0x64,  /* [2728] */
    (xdc_Char)0x0,  /* [2729] */
    (xdc_Char)0x66,  /* [2730] */
    (xdc_Char)0x72,  /* [2731] */
    (xdc_Char)0x65,  /* [2732] */
    (xdc_Char)0x65,  /* [2733] */
    (xdc_Char)0x28,  /* [2734] */
    (xdc_Char)0x29,  /* [2735] */
    (xdc_Char)0x20,  /* [2736] */
    (xdc_Char)0x69,  /* [2737] */
    (xdc_Char)0x6e,  /* [2738] */
    (xdc_Char)0x76,  /* [2739] */
    (xdc_Char)0x61,  /* [2740] */
    (xdc_Char)0x6c,  /* [2741] */
    (xdc_Char)0x69,  /* [2742] */
    (xdc_Char)0x64,  /* [2743] */
    (xdc_Char)0x20,  /* [2744] */
    (xdc_Char)0x69,  /* [2745] */
    (xdc_Char)0x6e,  /* [2746] */
    (xdc_Char)0x20,  /* [2747] */
    (xdc_Char)0x67,  /* [2748] */
    (xdc_Char)0x72,  /* [2749] */
    (xdc_Char)0x6f,  /* [2750] */
    (xdc_Char)0x77,  /* [2751] */
    (xdc_Char)0x74,  /* [2752] */
    (xdc_Char)0x68,  /* [2753] */
    (xdc_Char)0x2d,  /* [2754] */
    (xdc_Char)0x6f,  /* [2755] */
    (xdc_Char)0x6e,  /* [2756] */
    (xdc_Char)0x6c,  /* [2757] */
    (xdc_Char)0x79,  /* [2758] */
    (xdc_Char)0x20,  /* [2759] */
    (xdc_Char)0x48,  /* [2760] */
    (xdc_Char)0x65,  /* [2761] */
    (xdc_Char)0x61,  /* [2762] */
    (xdc_Char)0x70,  /* [2763] */
    (xdc_Char)0x4d,  /* [2764] */
    (xdc_Char)0x69,  /* [2765] */
    (xdc_Char)0x6e,  /* [2766] */
    (xdc_Char)0x0,  /* [2767] */
    (xdc_Char)0x54,  /* [2768] */
    (xdc_Char)0x68,  /* [2769] */
    (xdc_Char)0x65,  /* [2770] */
    (xdc_Char)0x20,  /* [2771] */
    (xdc_Char)0x52,  /* [2772] */
    (xdc_Char)0x54,  /* [2773] */
    (xdc_Char)0x53,  /* [2774] */
    (xdc_Char)0x20,  /* [2775] */
    (xdc_Char)0x68,  /* [2776] */
    (xdc_Char)0x65,  /* [2777] */
    (xdc_Char)0x61,  /* [2778] */
    (xdc_Char)0x70,  /* [2779] */
    (xdc_Char)0x20,  /* [2780] */
    (xdc_Char)0x69,  /* [2781] */
    (xdc_Char)0x73,  /* [2782] */
    (xdc_Char)0x20,  /* [2783] */
    (xdc_Char)0x75,  /* [2784] */
    (xdc_Char)0x73,  /* [2785] */
    (xdc_Char)0x65,  /* [2786] */
    (xdc_Char)0x64,  /* [2787] */
    (xdc_Char)0x20,  /* [2788] */
    (xdc_Char)0x75,  /* [2789] */
    (xdc_Char)0x70,  /* [2790] */
    (xdc_Char)0x2e,  /* [2791] */
    (xdc_Char)0x20,  /* [2792] */
    (xdc_Char)0x45,  /* [2793] */
    (xdc_Char)0x78,  /* [2794] */
    (xdc_Char)0x61,  /* [2795] */
    (xdc_Char)0x6d,  /* [2796] */
    (xdc_Char)0x69,  /* [2797] */
    (xdc_Char)0x6e,  /* [2798] */
    (xdc_Char)0x65,  /* [2799] */
    (xdc_Char)0x20,  /* [2800] */
    (xdc_Char)0x50,  /* [2801] */
    (xdc_Char)0x72,  /* [2802] */
    (xdc_Char)0x6f,  /* [2803] */
    (xdc_Char)0x67,  /* [2804] */
    (xdc_Char)0x72,  /* [2805] */
    (xdc_Char)0x61,  /* [2806] */
    (xdc_Char)0x6d,  /* [2807] */
    (xdc_Char)0x2e,  /* [2808] */
    (xdc_Char)0x68,  /* [2809] */
    (xdc_Char)0x65,  /* [2810] */
    (xdc_Char)0x61,  /* [2811] */
    (xdc_Char)0x70,  /* [2812] */
    (xdc_Char)0x2e,  /* [2813] */
    (xdc_Char)0x0,  /* [2814] */
    (xdc_Char)0x45,  /* [2815] */
    (xdc_Char)0x5f,  /* [2816] */
    (xdc_Char)0x62,  /* [2817] */
    (xdc_Char)0x61,  /* [2818] */
    (xdc_Char)0x64,  /* [2819] */
    (xdc_Char)0x43,  /* [2820] */
    (xdc_Char)0x6f,  /* [2821] */
    (xdc_Char)0x6d,  /* [2822] */
    (xdc_Char)0x6d,  /* [2823] */
    (xdc_Char)0x61,  /* [2824] */
    (xdc_Char)0x6e,  /* [2825] */
    (xdc_Char)0x64,  /* [2826] */
    (xdc_Char)0x3a,  /* [2827] */
    (xdc_Char)0x20,  /* [2828] */
    (xdc_Char)0x52,  /* [2829] */
    (xdc_Char)0x65,  /* [2830] */
    (xdc_Char)0x63,  /* [2831] */
    (xdc_Char)0x65,  /* [2832] */
    (xdc_Char)0x69,  /* [2833] */
    (xdc_Char)0x76,  /* [2834] */
    (xdc_Char)0x65,  /* [2835] */
    (xdc_Char)0x64,  /* [2836] */
    (xdc_Char)0x20,  /* [2837] */
    (xdc_Char)0x69,  /* [2838] */
    (xdc_Char)0x6e,  /* [2839] */
    (xdc_Char)0x76,  /* [2840] */
    (xdc_Char)0x61,  /* [2841] */
    (xdc_Char)0x6c,  /* [2842] */
    (xdc_Char)0x69,  /* [2843] */
    (xdc_Char)0x64,  /* [2844] */
    (xdc_Char)0x20,  /* [2845] */
    (xdc_Char)0x63,  /* [2846] */
    (xdc_Char)0x6f,  /* [2847] */
    (xdc_Char)0x6d,  /* [2848] */
    (xdc_Char)0x6d,  /* [2849] */
    (xdc_Char)0x61,  /* [2850] */
    (xdc_Char)0x6e,  /* [2851] */
    (xdc_Char)0x64,  /* [2852] */
    (xdc_Char)0x2c,  /* [2853] */
    (xdc_Char)0x20,  /* [2854] */
    (xdc_Char)0x69,  /* [2855] */
    (xdc_Char)0x64,  /* [2856] */
    (xdc_Char)0x3a,  /* [2857] */
    (xdc_Char)0x20,  /* [2858] */
    (xdc_Char)0x25,  /* [2859] */
    (xdc_Char)0x64,  /* [2860] */
    (xdc_Char)0x2e,  /* [2861] */
    (xdc_Char)0x0,  /* [2862] */
    (xdc_Char)0x45,  /* [2863] */
    (xdc_Char)0x5f,  /* [2864] */
    (xdc_Char)0x73,  /* [2865] */
    (xdc_Char)0x74,  /* [2866] */
    (xdc_Char)0x61,  /* [2867] */
    (xdc_Char)0x63,  /* [2868] */
    (xdc_Char)0x6b,  /* [2869] */
    (xdc_Char)0x4f,  /* [2870] */
    (xdc_Char)0x76,  /* [2871] */
    (xdc_Char)0x65,  /* [2872] */
    (xdc_Char)0x72,  /* [2873] */
    (xdc_Char)0x66,  /* [2874] */
    (xdc_Char)0x6c,  /* [2875] */
    (xdc_Char)0x6f,  /* [2876] */
    (xdc_Char)0x77,  /* [2877] */
    (xdc_Char)0x3a,  /* [2878] */
    (xdc_Char)0x20,  /* [2879] */
    (xdc_Char)0x49,  /* [2880] */
    (xdc_Char)0x53,  /* [2881] */
    (xdc_Char)0x52,  /* [2882] */
    (xdc_Char)0x20,  /* [2883] */
    (xdc_Char)0x73,  /* [2884] */
    (xdc_Char)0x74,  /* [2885] */
    (xdc_Char)0x61,  /* [2886] */
    (xdc_Char)0x63,  /* [2887] */
    (xdc_Char)0x6b,  /* [2888] */
    (xdc_Char)0x20,  /* [2889] */
    (xdc_Char)0x6f,  /* [2890] */
    (xdc_Char)0x76,  /* [2891] */
    (xdc_Char)0x65,  /* [2892] */
    (xdc_Char)0x72,  /* [2893] */
    (xdc_Char)0x66,  /* [2894] */
    (xdc_Char)0x6c,  /* [2895] */
    (xdc_Char)0x6f,  /* [2896] */
    (xdc_Char)0x77,  /* [2897] */
    (xdc_Char)0x2e,  /* [2898] */
    (xdc_Char)0x0,  /* [2899] */
    (xdc_Char)0x45,  /* [2900] */
    (xdc_Char)0x5f,  /* [2901] */
    (xdc_Char)0x73,  /* [2902] */
    (xdc_Char)0x74,  /* [2903] */
    (xdc_Char)0x61,  /* [2904] */
    (xdc_Char)0x63,  /* [2905] */
    (xdc_Char)0x6b,  /* [2906] */
    (xdc_Char)0x4f,  /* [2907] */
    (xdc_Char)0x76,  /* [2908] */
    (xdc_Char)0x65,  /* [2909] */
    (xdc_Char)0x72,  /* [2910] */
    (xdc_Char)0x66,  /* [2911] */
    (xdc_Char)0x6c,  /* [2912] */
    (xdc_Char)0x6f,  /* [2913] */
    (xdc_Char)0x77,  /* [2914] */
    (xdc_Char)0x3a,  /* [2915] */
    (xdc_Char)0x20,  /* [2916] */
    (xdc_Char)0x54,  /* [2917] */
    (xdc_Char)0x61,  /* [2918] */
    (xdc_Char)0x73,  /* [2919] */
    (xdc_Char)0x6b,  /* [2920] */
    (xdc_Char)0x20,  /* [2921] */
    (xdc_Char)0x30,  /* [2922] */
    (xdc_Char)0x78,  /* [2923] */
    (xdc_Char)0x25,  /* [2924] */
    (xdc_Char)0x78,  /* [2925] */
    (xdc_Char)0x20,  /* [2926] */
    (xdc_Char)0x73,  /* [2927] */
    (xdc_Char)0x74,  /* [2928] */
    (xdc_Char)0x61,  /* [2929] */
    (xdc_Char)0x63,  /* [2930] */
    (xdc_Char)0x6b,  /* [2931] */
    (xdc_Char)0x20,  /* [2932] */
    (xdc_Char)0x6f,  /* [2933] */
    (xdc_Char)0x76,  /* [2934] */
    (xdc_Char)0x65,  /* [2935] */
    (xdc_Char)0x72,  /* [2936] */
    (xdc_Char)0x66,  /* [2937] */
    (xdc_Char)0x6c,  /* [2938] */
    (xdc_Char)0x6f,  /* [2939] */
    (xdc_Char)0x77,  /* [2940] */
    (xdc_Char)0x2e,  /* [2941] */
    (xdc_Char)0x0,  /* [2942] */
    (xdc_Char)0x45,  /* [2943] */
    (xdc_Char)0x5f,  /* [2944] */
    (xdc_Char)0x73,  /* [2945] */
    (xdc_Char)0x70,  /* [2946] */
    (xdc_Char)0x4f,  /* [2947] */
    (xdc_Char)0x75,  /* [2948] */
    (xdc_Char)0x74,  /* [2949] */
    (xdc_Char)0x4f,  /* [2950] */
    (xdc_Char)0x66,  /* [2951] */
    (xdc_Char)0x42,  /* [2952] */
    (xdc_Char)0x6f,  /* [2953] */
    (xdc_Char)0x75,  /* [2954] */
    (xdc_Char)0x6e,  /* [2955] */
    (xdc_Char)0x64,  /* [2956] */
    (xdc_Char)0x73,  /* [2957] */
    (xdc_Char)0x3a,  /* [2958] */
    (xdc_Char)0x20,  /* [2959] */
    (xdc_Char)0x54,  /* [2960] */
    (xdc_Char)0x61,  /* [2961] */
    (xdc_Char)0x73,  /* [2962] */
    (xdc_Char)0x6b,  /* [2963] */
    (xdc_Char)0x20,  /* [2964] */
    (xdc_Char)0x30,  /* [2965] */
    (xdc_Char)0x78,  /* [2966] */
    (xdc_Char)0x25,  /* [2967] */
    (xdc_Char)0x78,  /* [2968] */
    (xdc_Char)0x20,  /* [2969] */
    (xdc_Char)0x73,  /* [2970] */
    (xdc_Char)0x74,  /* [2971] */
    (xdc_Char)0x61,  /* [2972] */
    (xdc_Char)0x63,  /* [2973] */
    (xdc_Char)0x6b,  /* [2974] */
    (xdc_Char)0x20,  /* [2975] */
    (xdc_Char)0x65,  /* [2976] */
    (xdc_Char)0x72,  /* [2977] */
    (xdc_Char)0x72,  /* [2978] */
    (xdc_Char)0x6f,  /* [2979] */
    (xdc_Char)0x72,  /* [2980] */
    (xdc_Char)0x2c,  /* [2981] */
    (xdc_Char)0x20,  /* [2982] */
    (xdc_Char)0x53,  /* [2983] */
    (xdc_Char)0x50,  /* [2984] */
    (xdc_Char)0x20,  /* [2985] */
    (xdc_Char)0x3d,  /* [2986] */
    (xdc_Char)0x20,  /* [2987] */
    (xdc_Char)0x30,  /* [2988] */
    (xdc_Char)0x78,  /* [2989] */
    (xdc_Char)0x25,  /* [2990] */
    (xdc_Char)0x78,  /* [2991] */
    (xdc_Char)0x2e,  /* [2992] */
    (xdc_Char)0x0,  /* [2993] */
    (xdc_Char)0x45,  /* [2994] */
    (xdc_Char)0x5f,  /* [2995] */
    (xdc_Char)0x61,  /* [2996] */
    (xdc_Char)0x6c,  /* [2997] */
    (xdc_Char)0x72,  /* [2998] */
    (xdc_Char)0x65,  /* [2999] */
    (xdc_Char)0x61,  /* [3000] */
    (xdc_Char)0x64,  /* [3001] */
    (xdc_Char)0x79,  /* [3002] */
    (xdc_Char)0x44,  /* [3003] */
    (xdc_Char)0x65,  /* [3004] */
    (xdc_Char)0x66,  /* [3005] */
    (xdc_Char)0x69,  /* [3006] */
    (xdc_Char)0x6e,  /* [3007] */
    (xdc_Char)0x65,  /* [3008] */
    (xdc_Char)0x64,  /* [3009] */
    (xdc_Char)0x3a,  /* [3010] */
    (xdc_Char)0x20,  /* [3011] */
    (xdc_Char)0x48,  /* [3012] */
    (xdc_Char)0x77,  /* [3013] */
    (xdc_Char)0x69,  /* [3014] */
    (xdc_Char)0x20,  /* [3015] */
    (xdc_Char)0x61,  /* [3016] */
    (xdc_Char)0x6c,  /* [3017] */
    (xdc_Char)0x72,  /* [3018] */
    (xdc_Char)0x65,  /* [3019] */
    (xdc_Char)0x61,  /* [3020] */
    (xdc_Char)0x64,  /* [3021] */
    (xdc_Char)0x79,  /* [3022] */
    (xdc_Char)0x20,  /* [3023] */
    (xdc_Char)0x64,  /* [3024] */
    (xdc_Char)0x65,  /* [3025] */
    (xdc_Char)0x66,  /* [3026] */
    (xdc_Char)0x69,  /* [3027] */
    (xdc_Char)0x6e,  /* [3028] */
    (xdc_Char)0x65,  /* [3029] */
    (xdc_Char)0x64,  /* [3030] */
    (xdc_Char)0x3a,  /* [3031] */
    (xdc_Char)0x20,  /* [3032] */
    (xdc_Char)0x69,  /* [3033] */
    (xdc_Char)0x6e,  /* [3034] */
    (xdc_Char)0x74,  /* [3035] */
    (xdc_Char)0x72,  /* [3036] */
    (xdc_Char)0x23,  /* [3037] */
    (xdc_Char)0x20,  /* [3038] */
    (xdc_Char)0x25,  /* [3039] */
    (xdc_Char)0x64,  /* [3040] */
    (xdc_Char)0x0,  /* [3041] */
    (xdc_Char)0x45,  /* [3042] */
    (xdc_Char)0x5f,  /* [3043] */
    (xdc_Char)0x65,  /* [3044] */
    (xdc_Char)0x78,  /* [3045] */
    (xdc_Char)0x63,  /* [3046] */
    (xdc_Char)0x65,  /* [3047] */
    (xdc_Char)0x70,  /* [3048] */
    (xdc_Char)0x74,  /* [3049] */
    (xdc_Char)0x69,  /* [3050] */
    (xdc_Char)0x6f,  /* [3051] */
    (xdc_Char)0x6e,  /* [3052] */
    (xdc_Char)0x3a,  /* [3053] */
    (xdc_Char)0x20,  /* [3054] */
    (xdc_Char)0x69,  /* [3055] */
    (xdc_Char)0x64,  /* [3056] */
    (xdc_Char)0x20,  /* [3057] */
    (xdc_Char)0x3d,  /* [3058] */
    (xdc_Char)0x20,  /* [3059] */
    (xdc_Char)0x25,  /* [3060] */
    (xdc_Char)0x64,  /* [3061] */
    (xdc_Char)0x2c,  /* [3062] */
    (xdc_Char)0x20,  /* [3063] */
    (xdc_Char)0x70,  /* [3064] */
    (xdc_Char)0x63,  /* [3065] */
    (xdc_Char)0x20,  /* [3066] */
    (xdc_Char)0x3d,  /* [3067] */
    (xdc_Char)0x20,  /* [3068] */
    (xdc_Char)0x25,  /* [3069] */
    (xdc_Char)0x30,  /* [3070] */
    (xdc_Char)0x38,  /* [3071] */
    (xdc_Char)0x78,  /* [3072] */
    (xdc_Char)0x2e,  /* [3073] */
    (xdc_Char)0xa,  /* [3074] */
    (xdc_Char)0x54,  /* [3075] */
    (xdc_Char)0x6f,  /* [3076] */
    (xdc_Char)0x20,  /* [3077] */
    (xdc_Char)0x73,  /* [3078] */
    (xdc_Char)0x65,  /* [3079] */
    (xdc_Char)0x65,  /* [3080] */
    (xdc_Char)0x20,  /* [3081] */
    (xdc_Char)0x6d,  /* [3082] */
    (xdc_Char)0x6f,  /* [3083] */
    (xdc_Char)0x72,  /* [3084] */
    (xdc_Char)0x65,  /* [3085] */
    (xdc_Char)0x20,  /* [3086] */
    (xdc_Char)0x65,  /* [3087] */
    (xdc_Char)0x78,  /* [3088] */
    (xdc_Char)0x63,  /* [3089] */
    (xdc_Char)0x65,  /* [3090] */
    (xdc_Char)0x70,  /* [3091] */
    (xdc_Char)0x74,  /* [3092] */
    (xdc_Char)0x69,  /* [3093] */
    (xdc_Char)0x6f,  /* [3094] */
    (xdc_Char)0x6e,  /* [3095] */
    (xdc_Char)0x20,  /* [3096] */
    (xdc_Char)0x64,  /* [3097] */
    (xdc_Char)0x65,  /* [3098] */
    (xdc_Char)0x74,  /* [3099] */
    (xdc_Char)0x61,  /* [3100] */
    (xdc_Char)0x69,  /* [3101] */
    (xdc_Char)0x6c,  /* [3102] */
    (xdc_Char)0x2c,  /* [3103] */
    (xdc_Char)0x20,  /* [3104] */
    (xdc_Char)0x73,  /* [3105] */
    (xdc_Char)0x65,  /* [3106] */
    (xdc_Char)0x74,  /* [3107] */
    (xdc_Char)0x20,  /* [3108] */
    (xdc_Char)0x74,  /* [3109] */
    (xdc_Char)0x69,  /* [3110] */
    (xdc_Char)0x2e,  /* [3111] */
    (xdc_Char)0x73,  /* [3112] */
    (xdc_Char)0x79,  /* [3113] */
    (xdc_Char)0x73,  /* [3114] */
    (xdc_Char)0x62,  /* [3115] */
    (xdc_Char)0x69,  /* [3116] */
    (xdc_Char)0x6f,  /* [3117] */
    (xdc_Char)0x73,  /* [3118] */
    (xdc_Char)0x2e,  /* [3119] */
    (xdc_Char)0x66,  /* [3120] */
    (xdc_Char)0x61,  /* [3121] */
    (xdc_Char)0x6d,  /* [3122] */
    (xdc_Char)0x69,  /* [3123] */
    (xdc_Char)0x6c,  /* [3124] */
    (xdc_Char)0x79,  /* [3125] */
    (xdc_Char)0x2e,  /* [3126] */
    (xdc_Char)0x61,  /* [3127] */
    (xdc_Char)0x72,  /* [3128] */
    (xdc_Char)0x6d,  /* [3129] */
    (xdc_Char)0x2e,  /* [3130] */
    (xdc_Char)0x6d,  /* [3131] */
    (xdc_Char)0x33,  /* [3132] */
    (xdc_Char)0x2e,  /* [3133] */
    (xdc_Char)0x48,  /* [3134] */
    (xdc_Char)0x77,  /* [3135] */
    (xdc_Char)0x69,  /* [3136] */
    (xdc_Char)0x2e,  /* [3137] */
    (xdc_Char)0x65,  /* [3138] */
    (xdc_Char)0x6e,  /* [3139] */
    (xdc_Char)0x61,  /* [3140] */
    (xdc_Char)0x62,  /* [3141] */
    (xdc_Char)0x6c,  /* [3142] */
    (xdc_Char)0x65,  /* [3143] */
    (xdc_Char)0x45,  /* [3144] */
    (xdc_Char)0x78,  /* [3145] */
    (xdc_Char)0x63,  /* [3146] */
    (xdc_Char)0x65,  /* [3147] */
    (xdc_Char)0x70,  /* [3148] */
    (xdc_Char)0x74,  /* [3149] */
    (xdc_Char)0x69,  /* [3150] */
    (xdc_Char)0x6f,  /* [3151] */
    (xdc_Char)0x6e,  /* [3152] */
    (xdc_Char)0x20,  /* [3153] */
    (xdc_Char)0x3d,  /* [3154] */
    (xdc_Char)0x20,  /* [3155] */
    (xdc_Char)0x74,  /* [3156] */
    (xdc_Char)0x72,  /* [3157] */
    (xdc_Char)0x75,  /* [3158] */
    (xdc_Char)0x65,  /* [3159] */
    (xdc_Char)0x20,  /* [3160] */
    (xdc_Char)0x6f,  /* [3161] */
    (xdc_Char)0x72,  /* [3162] */
    (xdc_Char)0x2c,  /* [3163] */
    (xdc_Char)0xa,  /* [3164] */
    (xdc_Char)0x65,  /* [3165] */
    (xdc_Char)0x78,  /* [3166] */
    (xdc_Char)0x61,  /* [3167] */
    (xdc_Char)0x6d,  /* [3168] */
    (xdc_Char)0x69,  /* [3169] */
    (xdc_Char)0x6e,  /* [3170] */
    (xdc_Char)0x65,  /* [3171] */
    (xdc_Char)0x20,  /* [3172] */
    (xdc_Char)0x74,  /* [3173] */
    (xdc_Char)0x68,  /* [3174] */
    (xdc_Char)0x65,  /* [3175] */
    (xdc_Char)0x20,  /* [3176] */
    (xdc_Char)0x45,  /* [3177] */
    (xdc_Char)0x78,  /* [3178] */
    (xdc_Char)0x63,  /* [3179] */
    (xdc_Char)0x65,  /* [3180] */
    (xdc_Char)0x70,  /* [3181] */
    (xdc_Char)0x74,  /* [3182] */
    (xdc_Char)0x69,  /* [3183] */
    (xdc_Char)0x6f,  /* [3184] */
    (xdc_Char)0x6e,  /* [3185] */
    (xdc_Char)0x20,  /* [3186] */
    (xdc_Char)0x76,  /* [3187] */
    (xdc_Char)0x69,  /* [3188] */
    (xdc_Char)0x65,  /* [3189] */
    (xdc_Char)0x77,  /* [3190] */
    (xdc_Char)0x20,  /* [3191] */
    (xdc_Char)0x66,  /* [3192] */
    (xdc_Char)0x6f,  /* [3193] */
    (xdc_Char)0x72,  /* [3194] */
    (xdc_Char)0x20,  /* [3195] */
    (xdc_Char)0x74,  /* [3196] */
    (xdc_Char)0x68,  /* [3197] */
    (xdc_Char)0x65,  /* [3198] */
    (xdc_Char)0x20,  /* [3199] */
    (xdc_Char)0x74,  /* [3200] */
    (xdc_Char)0x69,  /* [3201] */
    (xdc_Char)0x2e,  /* [3202] */
    (xdc_Char)0x73,  /* [3203] */
    (xdc_Char)0x79,  /* [3204] */
    (xdc_Char)0x73,  /* [3205] */
    (xdc_Char)0x62,  /* [3206] */
    (xdc_Char)0x69,  /* [3207] */
    (xdc_Char)0x6f,  /* [3208] */
    (xdc_Char)0x73,  /* [3209] */
    (xdc_Char)0x2e,  /* [3210] */
    (xdc_Char)0x66,  /* [3211] */
    (xdc_Char)0x61,  /* [3212] */
    (xdc_Char)0x6d,  /* [3213] */
    (xdc_Char)0x69,  /* [3214] */
    (xdc_Char)0x6c,  /* [3215] */
    (xdc_Char)0x79,  /* [3216] */
    (xdc_Char)0x2e,  /* [3217] */
    (xdc_Char)0x61,  /* [3218] */
    (xdc_Char)0x72,  /* [3219] */
    (xdc_Char)0x6d,  /* [3220] */
    (xdc_Char)0x2e,  /* [3221] */
    (xdc_Char)0x6d,  /* [3222] */
    (xdc_Char)0x33,  /* [3223] */
    (xdc_Char)0x2e,  /* [3224] */
    (xdc_Char)0x48,  /* [3225] */
    (xdc_Char)0x77,  /* [3226] */
    (xdc_Char)0x69,  /* [3227] */
    (xdc_Char)0x20,  /* [3228] */
    (xdc_Char)0x6d,  /* [3229] */
    (xdc_Char)0x6f,  /* [3230] */
    (xdc_Char)0x64,  /* [3231] */
    (xdc_Char)0x75,  /* [3232] */
    (xdc_Char)0x6c,  /* [3233] */
    (xdc_Char)0x65,  /* [3234] */
    (xdc_Char)0x20,  /* [3235] */
    (xdc_Char)0x75,  /* [3236] */
    (xdc_Char)0x73,  /* [3237] */
    (xdc_Char)0x69,  /* [3238] */
    (xdc_Char)0x6e,  /* [3239] */
    (xdc_Char)0x67,  /* [3240] */
    (xdc_Char)0x20,  /* [3241] */
    (xdc_Char)0x52,  /* [3242] */
    (xdc_Char)0x4f,  /* [3243] */
    (xdc_Char)0x56,  /* [3244] */
    (xdc_Char)0x2e,  /* [3245] */
    (xdc_Char)0x0,  /* [3246] */
    (xdc_Char)0x45,  /* [3247] */
    (xdc_Char)0x5f,  /* [3248] */
    (xdc_Char)0x6e,  /* [3249] */
    (xdc_Char)0x6f,  /* [3250] */
    (xdc_Char)0x49,  /* [3251] */
    (xdc_Char)0x73,  /* [3252] */
    (xdc_Char)0x72,  /* [3253] */
    (xdc_Char)0x3a,  /* [3254] */
    (xdc_Char)0x20,  /* [3255] */
    (xdc_Char)0x69,  /* [3256] */
    (xdc_Char)0x64,  /* [3257] */
    (xdc_Char)0x20,  /* [3258] */
    (xdc_Char)0x3d,  /* [3259] */
    (xdc_Char)0x20,  /* [3260] */
    (xdc_Char)0x25,  /* [3261] */
    (xdc_Char)0x64,  /* [3262] */
    (xdc_Char)0x2c,  /* [3263] */
    (xdc_Char)0x20,  /* [3264] */
    (xdc_Char)0x70,  /* [3265] */
    (xdc_Char)0x63,  /* [3266] */
    (xdc_Char)0x20,  /* [3267] */
    (xdc_Char)0x3d,  /* [3268] */
    (xdc_Char)0x20,  /* [3269] */
    (xdc_Char)0x25,  /* [3270] */
    (xdc_Char)0x30,  /* [3271] */
    (xdc_Char)0x38,  /* [3272] */
    (xdc_Char)0x78,  /* [3273] */
    (xdc_Char)0x0,  /* [3274] */
    (xdc_Char)0x45,  /* [3275] */
    (xdc_Char)0x5f,  /* [3276] */
    (xdc_Char)0x4e,  /* [3277] */
    (xdc_Char)0x4d,  /* [3278] */
    (xdc_Char)0x49,  /* [3279] */
    (xdc_Char)0x3a,  /* [3280] */
    (xdc_Char)0x20,  /* [3281] */
    (xdc_Char)0x25,  /* [3282] */
    (xdc_Char)0x73,  /* [3283] */
    (xdc_Char)0x0,  /* [3284] */
    (xdc_Char)0x45,  /* [3285] */
    (xdc_Char)0x5f,  /* [3286] */
    (xdc_Char)0x68,  /* [3287] */
    (xdc_Char)0x61,  /* [3288] */
    (xdc_Char)0x72,  /* [3289] */
    (xdc_Char)0x64,  /* [3290] */
    (xdc_Char)0x46,  /* [3291] */
    (xdc_Char)0x61,  /* [3292] */
    (xdc_Char)0x75,  /* [3293] */
    (xdc_Char)0x6c,  /* [3294] */
    (xdc_Char)0x74,  /* [3295] */
    (xdc_Char)0x3a,  /* [3296] */
    (xdc_Char)0x20,  /* [3297] */
    (xdc_Char)0x25,  /* [3298] */
    (xdc_Char)0x73,  /* [3299] */
    (xdc_Char)0x0,  /* [3300] */
    (xdc_Char)0x45,  /* [3301] */
    (xdc_Char)0x5f,  /* [3302] */
    (xdc_Char)0x6d,  /* [3303] */
    (xdc_Char)0x65,  /* [3304] */
    (xdc_Char)0x6d,  /* [3305] */
    (xdc_Char)0x46,  /* [3306] */
    (xdc_Char)0x61,  /* [3307] */
    (xdc_Char)0x75,  /* [3308] */
    (xdc_Char)0x6c,  /* [3309] */
    (xdc_Char)0x74,  /* [3310] */
    (xdc_Char)0x3a,  /* [3311] */
    (xdc_Char)0x20,  /* [3312] */
    (xdc_Char)0x25,  /* [3313] */
    (xdc_Char)0x73,  /* [3314] */
    (xdc_Char)0x0,  /* [3315] */
    (xdc_Char)0x45,  /* [3316] */
    (xdc_Char)0x5f,  /* [3317] */
    (xdc_Char)0x62,  /* [3318] */
    (xdc_Char)0x75,  /* [3319] */
    (xdc_Char)0x73,  /* [3320] */
    (xdc_Char)0x46,  /* [3321] */
    (xdc_Char)0x61,  /* [3322] */
    (xdc_Char)0x75,  /* [3323] */
    (xdc_Char)0x6c,  /* [3324] */
    (xdc_Char)0x74,  /* [3325] */
    (xdc_Char)0x3a,  /* [3326] */
    (xdc_Char)0x20,  /* [3327] */
    (xdc_Char)0x25,  /* [3328] */
    (xdc_Char)0x73,  /* [3329] */
    (xdc_Char)0x0,  /* [3330] */
    (xdc_Char)0x45,  /* [3331] */
    (xdc_Char)0x5f,  /* [3332] */
    (xdc_Char)0x75,  /* [3333] */
    (xdc_Char)0x73,  /* [3334] */
    (xdc_Char)0x61,  /* [3335] */
    (xdc_Char)0x67,  /* [3336] */
    (xdc_Char)0x65,  /* [3337] */
    (xdc_Char)0x46,  /* [3338] */
    (xdc_Char)0x61,  /* [3339] */
    (xdc_Char)0x75,  /* [3340] */
    (xdc_Char)0x6c,  /* [3341] */
    (xdc_Char)0x74,  /* [3342] */
    (xdc_Char)0x3a,  /* [3343] */
    (xdc_Char)0x20,  /* [3344] */
    (xdc_Char)0x25,  /* [3345] */
    (xdc_Char)0x73,  /* [3346] */
    (xdc_Char)0x0,  /* [3347] */
    (xdc_Char)0x45,  /* [3348] */
    (xdc_Char)0x5f,  /* [3349] */
    (xdc_Char)0x73,  /* [3350] */
    (xdc_Char)0x76,  /* [3351] */
    (xdc_Char)0x43,  /* [3352] */
    (xdc_Char)0x61,  /* [3353] */
    (xdc_Char)0x6c,  /* [3354] */
    (xdc_Char)0x6c,  /* [3355] */
    (xdc_Char)0x3a,  /* [3356] */
    (xdc_Char)0x20,  /* [3357] */
    (xdc_Char)0x73,  /* [3358] */
    (xdc_Char)0x76,  /* [3359] */
    (xdc_Char)0x4e,  /* [3360] */
    (xdc_Char)0x75,  /* [3361] */
    (xdc_Char)0x6d,  /* [3362] */
    (xdc_Char)0x20,  /* [3363] */
    (xdc_Char)0x3d,  /* [3364] */
    (xdc_Char)0x20,  /* [3365] */
    (xdc_Char)0x25,  /* [3366] */
    (xdc_Char)0x64,  /* [3367] */
    (xdc_Char)0x0,  /* [3368] */
    (xdc_Char)0x45,  /* [3369] */
    (xdc_Char)0x5f,  /* [3370] */
    (xdc_Char)0x64,  /* [3371] */
    (xdc_Char)0x65,  /* [3372] */
    (xdc_Char)0x62,  /* [3373] */
    (xdc_Char)0x75,  /* [3374] */
    (xdc_Char)0x67,  /* [3375] */
    (xdc_Char)0x4d,  /* [3376] */
    (xdc_Char)0x6f,  /* [3377] */
    (xdc_Char)0x6e,  /* [3378] */
    (xdc_Char)0x3a,  /* [3379] */
    (xdc_Char)0x20,  /* [3380] */
    (xdc_Char)0x25,  /* [3381] */
    (xdc_Char)0x73,  /* [3382] */
    (xdc_Char)0x0,  /* [3383] */
    (xdc_Char)0x45,  /* [3384] */
    (xdc_Char)0x5f,  /* [3385] */
    (xdc_Char)0x72,  /* [3386] */
    (xdc_Char)0x65,  /* [3387] */
    (xdc_Char)0x73,  /* [3388] */
    (xdc_Char)0x65,  /* [3389] */
    (xdc_Char)0x72,  /* [3390] */
    (xdc_Char)0x76,  /* [3391] */
    (xdc_Char)0x65,  /* [3392] */
    (xdc_Char)0x64,  /* [3393] */
    (xdc_Char)0x3a,  /* [3394] */
    (xdc_Char)0x20,  /* [3395] */
    (xdc_Char)0x25,  /* [3396] */
    (xdc_Char)0x73,  /* [3397] */
    (xdc_Char)0x20,  /* [3398] */
    (xdc_Char)0x25,  /* [3399] */
    (xdc_Char)0x64,  /* [3400] */
    (xdc_Char)0x0,  /* [3401] */
    (xdc_Char)0x45,  /* [3402] */
    (xdc_Char)0x5f,  /* [3403] */
    (xdc_Char)0x69,  /* [3404] */
    (xdc_Char)0x6e,  /* [3405] */
    (xdc_Char)0x76,  /* [3406] */
    (xdc_Char)0x61,  /* [3407] */
    (xdc_Char)0x6c,  /* [3408] */
    (xdc_Char)0x69,  /* [3409] */
    (xdc_Char)0x64,  /* [3410] */
    (xdc_Char)0x54,  /* [3411] */
    (xdc_Char)0x69,  /* [3412] */
    (xdc_Char)0x6d,  /* [3413] */
    (xdc_Char)0x65,  /* [3414] */
    (xdc_Char)0x72,  /* [3415] */
    (xdc_Char)0x3a,  /* [3416] */
    (xdc_Char)0x20,  /* [3417] */
    (xdc_Char)0x49,  /* [3418] */
    (xdc_Char)0x6e,  /* [3419] */
    (xdc_Char)0x76,  /* [3420] */
    (xdc_Char)0x61,  /* [3421] */
    (xdc_Char)0x6c,  /* [3422] */
    (xdc_Char)0x69,  /* [3423] */
    (xdc_Char)0x64,  /* [3424] */
    (xdc_Char)0x20,  /* [3425] */
    (xdc_Char)0x54,  /* [3426] */
    (xdc_Char)0x69,  /* [3427] */
    (xdc_Char)0x6d,  /* [3428] */
    (xdc_Char)0x65,  /* [3429] */
    (xdc_Char)0x72,  /* [3430] */
    (xdc_Char)0x20,  /* [3431] */
    (xdc_Char)0x49,  /* [3432] */
    (xdc_Char)0x64,  /* [3433] */
    (xdc_Char)0x20,  /* [3434] */
    (xdc_Char)0x25,  /* [3435] */
    (xdc_Char)0x64,  /* [3436] */
    (xdc_Char)0x0,  /* [3437] */
    (xdc_Char)0x45,  /* [3438] */
    (xdc_Char)0x5f,  /* [3439] */
    (xdc_Char)0x6e,  /* [3440] */
    (xdc_Char)0x6f,  /* [3441] */
    (xdc_Char)0x74,  /* [3442] */
    (xdc_Char)0x41,  /* [3443] */
    (xdc_Char)0x76,  /* [3444] */
    (xdc_Char)0x61,  /* [3445] */
    (xdc_Char)0x69,  /* [3446] */
    (xdc_Char)0x6c,  /* [3447] */
    (xdc_Char)0x61,  /* [3448] */
    (xdc_Char)0x62,  /* [3449] */
    (xdc_Char)0x6c,  /* [3450] */
    (xdc_Char)0x65,  /* [3451] */
    (xdc_Char)0x3a,  /* [3452] */
    (xdc_Char)0x20,  /* [3453] */
    (xdc_Char)0x54,  /* [3454] */
    (xdc_Char)0x69,  /* [3455] */
    (xdc_Char)0x6d,  /* [3456] */
    (xdc_Char)0x65,  /* [3457] */
    (xdc_Char)0x72,  /* [3458] */
    (xdc_Char)0x20,  /* [3459] */
    (xdc_Char)0x6e,  /* [3460] */
    (xdc_Char)0x6f,  /* [3461] */
    (xdc_Char)0x74,  /* [3462] */
    (xdc_Char)0x20,  /* [3463] */
    (xdc_Char)0x61,  /* [3464] */
    (xdc_Char)0x76,  /* [3465] */
    (xdc_Char)0x61,  /* [3466] */
    (xdc_Char)0x69,  /* [3467] */
    (xdc_Char)0x6c,  /* [3468] */
    (xdc_Char)0x61,  /* [3469] */
    (xdc_Char)0x62,  /* [3470] */
    (xdc_Char)0x6c,  /* [3471] */
    (xdc_Char)0x65,  /* [3472] */
    (xdc_Char)0x20,  /* [3473] */
    (xdc_Char)0x25,  /* [3474] */
    (xdc_Char)0x64,  /* [3475] */
    (xdc_Char)0x0,  /* [3476] */
    (xdc_Char)0x45,  /* [3477] */
    (xdc_Char)0x5f,  /* [3478] */
    (xdc_Char)0x63,  /* [3479] */
    (xdc_Char)0x61,  /* [3480] */
    (xdc_Char)0x6e,  /* [3481] */
    (xdc_Char)0x6e,  /* [3482] */
    (xdc_Char)0x6f,  /* [3483] */
    (xdc_Char)0x74,  /* [3484] */
    (xdc_Char)0x53,  /* [3485] */
    (xdc_Char)0x75,  /* [3486] */
    (xdc_Char)0x70,  /* [3487] */
    (xdc_Char)0x70,  /* [3488] */
    (xdc_Char)0x6f,  /* [3489] */
    (xdc_Char)0x72,  /* [3490] */
    (xdc_Char)0x74,  /* [3491] */
    (xdc_Char)0x3a,  /* [3492] */
    (xdc_Char)0x20,  /* [3493] */
    (xdc_Char)0x54,  /* [3494] */
    (xdc_Char)0x69,  /* [3495] */
    (xdc_Char)0x6d,  /* [3496] */
    (xdc_Char)0x65,  /* [3497] */
    (xdc_Char)0x72,  /* [3498] */
    (xdc_Char)0x20,  /* [3499] */
    (xdc_Char)0x63,  /* [3500] */
    (xdc_Char)0x61,  /* [3501] */
    (xdc_Char)0x6e,  /* [3502] */
    (xdc_Char)0x6e,  /* [3503] */
    (xdc_Char)0x6f,  /* [3504] */
    (xdc_Char)0x74,  /* [3505] */
    (xdc_Char)0x20,  /* [3506] */
    (xdc_Char)0x73,  /* [3507] */
    (xdc_Char)0x75,  /* [3508] */
    (xdc_Char)0x70,  /* [3509] */
    (xdc_Char)0x70,  /* [3510] */
    (xdc_Char)0x6f,  /* [3511] */
    (xdc_Char)0x72,  /* [3512] */
    (xdc_Char)0x74,  /* [3513] */
    (xdc_Char)0x20,  /* [3514] */
    (xdc_Char)0x72,  /* [3515] */
    (xdc_Char)0x65,  /* [3516] */
    (xdc_Char)0x71,  /* [3517] */
    (xdc_Char)0x75,  /* [3518] */
    (xdc_Char)0x65,  /* [3519] */
    (xdc_Char)0x73,  /* [3520] */
    (xdc_Char)0x74,  /* [3521] */
    (xdc_Char)0x65,  /* [3522] */
    (xdc_Char)0x64,  /* [3523] */
    (xdc_Char)0x20,  /* [3524] */
    (xdc_Char)0x70,  /* [3525] */
    (xdc_Char)0x65,  /* [3526] */
    (xdc_Char)0x72,  /* [3527] */
    (xdc_Char)0x69,  /* [3528] */
    (xdc_Char)0x6f,  /* [3529] */
    (xdc_Char)0x64,  /* [3530] */
    (xdc_Char)0x20,  /* [3531] */
    (xdc_Char)0x25,  /* [3532] */
    (xdc_Char)0x64,  /* [3533] */
    (xdc_Char)0x0,  /* [3534] */
    (xdc_Char)0x72,  /* [3535] */
    (xdc_Char)0x65,  /* [3536] */
    (xdc_Char)0x71,  /* [3537] */
    (xdc_Char)0x75,  /* [3538] */
    (xdc_Char)0x65,  /* [3539] */
    (xdc_Char)0x73,  /* [3540] */
    (xdc_Char)0x74,  /* [3541] */
    (xdc_Char)0x65,  /* [3542] */
    (xdc_Char)0x64,  /* [3543] */
    (xdc_Char)0x20,  /* [3544] */
    (xdc_Char)0x73,  /* [3545] */
    (xdc_Char)0x69,  /* [3546] */
    (xdc_Char)0x7a,  /* [3547] */
    (xdc_Char)0x65,  /* [3548] */
    (xdc_Char)0x20,  /* [3549] */
    (xdc_Char)0x69,  /* [3550] */
    (xdc_Char)0x73,  /* [3551] */
    (xdc_Char)0x20,  /* [3552] */
    (xdc_Char)0x74,  /* [3553] */
    (xdc_Char)0x6f,  /* [3554] */
    (xdc_Char)0x6f,  /* [3555] */
    (xdc_Char)0x20,  /* [3556] */
    (xdc_Char)0x62,  /* [3557] */
    (xdc_Char)0x69,  /* [3558] */
    (xdc_Char)0x67,  /* [3559] */
    (xdc_Char)0x3a,  /* [3560] */
    (xdc_Char)0x20,  /* [3561] */
    (xdc_Char)0x68,  /* [3562] */
    (xdc_Char)0x61,  /* [3563] */
    (xdc_Char)0x6e,  /* [3564] */
    (xdc_Char)0x64,  /* [3565] */
    (xdc_Char)0x6c,  /* [3566] */
    (xdc_Char)0x65,  /* [3567] */
    (xdc_Char)0x3d,  /* [3568] */
    (xdc_Char)0x30,  /* [3569] */
    (xdc_Char)0x78,  /* [3570] */
    (xdc_Char)0x25,  /* [3571] */
    (xdc_Char)0x78,  /* [3572] */
    (xdc_Char)0x2c,  /* [3573] */
    (xdc_Char)0x20,  /* [3574] */
    (xdc_Char)0x73,  /* [3575] */
    (xdc_Char)0x69,  /* [3576] */
    (xdc_Char)0x7a,  /* [3577] */
    (xdc_Char)0x65,  /* [3578] */
    (xdc_Char)0x3d,  /* [3579] */
    (xdc_Char)0x25,  /* [3580] */
    (xdc_Char)0x75,  /* [3581] */
    (xdc_Char)0x0,  /* [3582] */
    (xdc_Char)0x6f,  /* [3583] */
    (xdc_Char)0x75,  /* [3584] */
    (xdc_Char)0x74,  /* [3585] */
    (xdc_Char)0x20,  /* [3586] */
    (xdc_Char)0x6f,  /* [3587] */
    (xdc_Char)0x66,  /* [3588] */
    (xdc_Char)0x20,  /* [3589] */
    (xdc_Char)0x6d,  /* [3590] */
    (xdc_Char)0x65,  /* [3591] */
    (xdc_Char)0x6d,  /* [3592] */
    (xdc_Char)0x6f,  /* [3593] */
    (xdc_Char)0x72,  /* [3594] */
    (xdc_Char)0x79,  /* [3595] */
    (xdc_Char)0x3a,  /* [3596] */
    (xdc_Char)0x20,  /* [3597] */
    (xdc_Char)0x68,  /* [3598] */
    (xdc_Char)0x61,  /* [3599] */
    (xdc_Char)0x6e,  /* [3600] */
    (xdc_Char)0x64,  /* [3601] */
    (xdc_Char)0x6c,  /* [3602] */
    (xdc_Char)0x65,  /* [3603] */
    (xdc_Char)0x3d,  /* [3604] */
    (xdc_Char)0x30,  /* [3605] */
    (xdc_Char)0x78,  /* [3606] */
    (xdc_Char)0x25,  /* [3607] */
    (xdc_Char)0x78,  /* [3608] */
    (xdc_Char)0x2c,  /* [3609] */
    (xdc_Char)0x20,  /* [3610] */
    (xdc_Char)0x73,  /* [3611] */
    (xdc_Char)0x69,  /* [3612] */
    (xdc_Char)0x7a,  /* [3613] */
    (xdc_Char)0x65,  /* [3614] */
    (xdc_Char)0x3d,  /* [3615] */
    (xdc_Char)0x25,  /* [3616] */
    (xdc_Char)0x75,  /* [3617] */
    (xdc_Char)0x0,  /* [3618] */
    (xdc_Char)0x45,  /* [3619] */
    (xdc_Char)0x5f,  /* [3620] */
    (xdc_Char)0x70,  /* [3621] */
    (xdc_Char)0x72,  /* [3622] */
    (xdc_Char)0x69,  /* [3623] */
    (xdc_Char)0x6f,  /* [3624] */
    (xdc_Char)0x72,  /* [3625] */
    (xdc_Char)0x69,  /* [3626] */
    (xdc_Char)0x74,  /* [3627] */
    (xdc_Char)0x79,  /* [3628] */
    (xdc_Char)0x3a,  /* [3629] */
    (xdc_Char)0x20,  /* [3630] */
    (xdc_Char)0x54,  /* [3631] */
    (xdc_Char)0x68,  /* [3632] */
    (xdc_Char)0x72,  /* [3633] */
    (xdc_Char)0x65,  /* [3634] */
    (xdc_Char)0x61,  /* [3635] */
    (xdc_Char)0x64,  /* [3636] */
    (xdc_Char)0x20,  /* [3637] */
    (xdc_Char)0x70,  /* [3638] */
    (xdc_Char)0x72,  /* [3639] */
    (xdc_Char)0x69,  /* [3640] */
    (xdc_Char)0x6f,  /* [3641] */
    (xdc_Char)0x72,  /* [3642] */
    (xdc_Char)0x69,  /* [3643] */
    (xdc_Char)0x74,  /* [3644] */
    (xdc_Char)0x79,  /* [3645] */
    (xdc_Char)0x20,  /* [3646] */
    (xdc_Char)0x69,  /* [3647] */
    (xdc_Char)0x73,  /* [3648] */
    (xdc_Char)0x20,  /* [3649] */
    (xdc_Char)0x69,  /* [3650] */
    (xdc_Char)0x6e,  /* [3651] */
    (xdc_Char)0x76,  /* [3652] */
    (xdc_Char)0x61,  /* [3653] */
    (xdc_Char)0x6c,  /* [3654] */
    (xdc_Char)0x69,  /* [3655] */
    (xdc_Char)0x64,  /* [3656] */
    (xdc_Char)0x20,  /* [3657] */
    (xdc_Char)0x25,  /* [3658] */
    (xdc_Char)0x64,  /* [3659] */
    (xdc_Char)0x0,  /* [3660] */
    (xdc_Char)0x3c,  /* [3661] */
    (xdc_Char)0x2d,  /* [3662] */
    (xdc_Char)0x2d,  /* [3663] */
    (xdc_Char)0x20,  /* [3664] */
    (xdc_Char)0x63,  /* [3665] */
    (xdc_Char)0x6f,  /* [3666] */
    (xdc_Char)0x6e,  /* [3667] */
    (xdc_Char)0x73,  /* [3668] */
    (xdc_Char)0x74,  /* [3669] */
    (xdc_Char)0x72,  /* [3670] */
    (xdc_Char)0x75,  /* [3671] */
    (xdc_Char)0x63,  /* [3672] */
    (xdc_Char)0x74,  /* [3673] */
    (xdc_Char)0x3a,  /* [3674] */
    (xdc_Char)0x20,  /* [3675] */
    (xdc_Char)0x25,  /* [3676] */
    (xdc_Char)0x70,  /* [3677] */
    (xdc_Char)0x28,  /* [3678] */
    (xdc_Char)0x27,  /* [3679] */
    (xdc_Char)0x25,  /* [3680] */
    (xdc_Char)0x73,  /* [3681] */
    (xdc_Char)0x27,  /* [3682] */
    (xdc_Char)0x29,  /* [3683] */
    (xdc_Char)0x0,  /* [3684] */
    (xdc_Char)0x3c,  /* [3685] */
    (xdc_Char)0x2d,  /* [3686] */
    (xdc_Char)0x2d,  /* [3687] */
    (xdc_Char)0x20,  /* [3688] */
    (xdc_Char)0x63,  /* [3689] */
    (xdc_Char)0x72,  /* [3690] */
    (xdc_Char)0x65,  /* [3691] */
    (xdc_Char)0x61,  /* [3692] */
    (xdc_Char)0x74,  /* [3693] */
    (xdc_Char)0x65,  /* [3694] */
    (xdc_Char)0x3a,  /* [3695] */
    (xdc_Char)0x20,  /* [3696] */
    (xdc_Char)0x25,  /* [3697] */
    (xdc_Char)0x70,  /* [3698] */
    (xdc_Char)0x28,  /* [3699] */
    (xdc_Char)0x27,  /* [3700] */
    (xdc_Char)0x25,  /* [3701] */
    (xdc_Char)0x73,  /* [3702] */
    (xdc_Char)0x27,  /* [3703] */
    (xdc_Char)0x29,  /* [3704] */
    (xdc_Char)0x0,  /* [3705] */
    (xdc_Char)0x2d,  /* [3706] */
    (xdc_Char)0x2d,  /* [3707] */
    (xdc_Char)0x3e,  /* [3708] */
    (xdc_Char)0x20,  /* [3709] */
    (xdc_Char)0x64,  /* [3710] */
    (xdc_Char)0x65,  /* [3711] */
    (xdc_Char)0x73,  /* [3712] */
    (xdc_Char)0x74,  /* [3713] */
    (xdc_Char)0x72,  /* [3714] */
    (xdc_Char)0x75,  /* [3715] */
    (xdc_Char)0x63,  /* [3716] */
    (xdc_Char)0x74,  /* [3717] */
    (xdc_Char)0x3a,  /* [3718] */
    (xdc_Char)0x20,  /* [3719] */
    (xdc_Char)0x28,  /* [3720] */
    (xdc_Char)0x25,  /* [3721] */
    (xdc_Char)0x70,  /* [3722] */
    (xdc_Char)0x29,  /* [3723] */
    (xdc_Char)0x0,  /* [3724] */
    (xdc_Char)0x2d,  /* [3725] */
    (xdc_Char)0x2d,  /* [3726] */
    (xdc_Char)0x3e,  /* [3727] */
    (xdc_Char)0x20,  /* [3728] */
    (xdc_Char)0x64,  /* [3729] */
    (xdc_Char)0x65,  /* [3730] */
    (xdc_Char)0x6c,  /* [3731] */
    (xdc_Char)0x65,  /* [3732] */
    (xdc_Char)0x74,  /* [3733] */
    (xdc_Char)0x65,  /* [3734] */
    (xdc_Char)0x3a,  /* [3735] */
    (xdc_Char)0x20,  /* [3736] */
    (xdc_Char)0x28,  /* [3737] */
    (xdc_Char)0x25,  /* [3738] */
    (xdc_Char)0x70,  /* [3739] */
    (xdc_Char)0x29,  /* [3740] */
    (xdc_Char)0x0,  /* [3741] */
    (xdc_Char)0x45,  /* [3742] */
    (xdc_Char)0x52,  /* [3743] */
    (xdc_Char)0x52,  /* [3744] */
    (xdc_Char)0x4f,  /* [3745] */
    (xdc_Char)0x52,  /* [3746] */
    (xdc_Char)0x3a,  /* [3747] */
    (xdc_Char)0x20,  /* [3748] */
    (xdc_Char)0x25,  /* [3749] */
    (xdc_Char)0x24,  /* [3750] */
    (xdc_Char)0x46,  /* [3751] */
    (xdc_Char)0x25,  /* [3752] */
    (xdc_Char)0x24,  /* [3753] */
    (xdc_Char)0x53,  /* [3754] */
    (xdc_Char)0x0,  /* [3755] */
    (xdc_Char)0x57,  /* [3756] */
    (xdc_Char)0x41,  /* [3757] */
    (xdc_Char)0x52,  /* [3758] */
    (xdc_Char)0x4e,  /* [3759] */
    (xdc_Char)0x49,  /* [3760] */
    (xdc_Char)0x4e,  /* [3761] */
    (xdc_Char)0x47,  /* [3762] */
    (xdc_Char)0x3a,  /* [3763] */
    (xdc_Char)0x20,  /* [3764] */
    (xdc_Char)0x25,  /* [3765] */
    (xdc_Char)0x24,  /* [3766] */
    (xdc_Char)0x46,  /* [3767] */
    (xdc_Char)0x25,  /* [3768] */
    (xdc_Char)0x24,  /* [3769] */
    (xdc_Char)0x53,  /* [3770] */
    (xdc_Char)0x0,  /* [3771] */
    (xdc_Char)0x25,  /* [3772] */
    (xdc_Char)0x24,  /* [3773] */
    (xdc_Char)0x46,  /* [3774] */
    (xdc_Char)0x25,  /* [3775] */
    (xdc_Char)0x24,  /* [3776] */
    (xdc_Char)0x53,  /* [3777] */
    (xdc_Char)0x0,  /* [3778] */
    (xdc_Char)0x53,  /* [3779] */
    (xdc_Char)0x74,  /* [3780] */
    (xdc_Char)0x61,  /* [3781] */
    (xdc_Char)0x72,  /* [3782] */
    (xdc_Char)0x74,  /* [3783] */
    (xdc_Char)0x3a,  /* [3784] */
    (xdc_Char)0x20,  /* [3785] */
    (xdc_Char)0x25,  /* [3786] */
    (xdc_Char)0x24,  /* [3787] */
    (xdc_Char)0x53,  /* [3788] */
    (xdc_Char)0x0,  /* [3789] */
    (xdc_Char)0x53,  /* [3790] */
    (xdc_Char)0x74,  /* [3791] */
    (xdc_Char)0x6f,  /* [3792] */
    (xdc_Char)0x70,  /* [3793] */
    (xdc_Char)0x3a,  /* [3794] */
    (xdc_Char)0x20,  /* [3795] */
    (xdc_Char)0x25,  /* [3796] */
    (xdc_Char)0x24,  /* [3797] */
    (xdc_Char)0x53,  /* [3798] */
    (xdc_Char)0x0,  /* [3799] */
    (xdc_Char)0x53,  /* [3800] */
    (xdc_Char)0x74,  /* [3801] */
    (xdc_Char)0x61,  /* [3802] */
    (xdc_Char)0x72,  /* [3803] */
    (xdc_Char)0x74,  /* [3804] */
    (xdc_Char)0x49,  /* [3805] */
    (xdc_Char)0x6e,  /* [3806] */
    (xdc_Char)0x73,  /* [3807] */
    (xdc_Char)0x74,  /* [3808] */
    (xdc_Char)0x61,  /* [3809] */
    (xdc_Char)0x6e,  /* [3810] */
    (xdc_Char)0x63,  /* [3811] */
    (xdc_Char)0x65,  /* [3812] */
    (xdc_Char)0x3a,  /* [3813] */
    (xdc_Char)0x20,  /* [3814] */
    (xdc_Char)0x25,  /* [3815] */
    (xdc_Char)0x24,  /* [3816] */
    (xdc_Char)0x53,  /* [3817] */
    (xdc_Char)0x0,  /* [3818] */
    (xdc_Char)0x53,  /* [3819] */
    (xdc_Char)0x74,  /* [3820] */
    (xdc_Char)0x6f,  /* [3821] */
    (xdc_Char)0x70,  /* [3822] */
    (xdc_Char)0x49,  /* [3823] */
    (xdc_Char)0x6e,  /* [3824] */
    (xdc_Char)0x73,  /* [3825] */
    (xdc_Char)0x74,  /* [3826] */
    (xdc_Char)0x61,  /* [3827] */
    (xdc_Char)0x6e,  /* [3828] */
    (xdc_Char)0x63,  /* [3829] */
    (xdc_Char)0x65,  /* [3830] */
    (xdc_Char)0x3a,  /* [3831] */
    (xdc_Char)0x20,  /* [3832] */
    (xdc_Char)0x25,  /* [3833] */
    (xdc_Char)0x24,  /* [3834] */
    (xdc_Char)0x53,  /* [3835] */
    (xdc_Char)0x0,  /* [3836] */
    (xdc_Char)0x4c,  /* [3837] */
    (xdc_Char)0x57,  /* [3838] */
    (xdc_Char)0x5f,  /* [3839] */
    (xdc_Char)0x64,  /* [3840] */
    (xdc_Char)0x65,  /* [3841] */
    (xdc_Char)0x6c,  /* [3842] */
    (xdc_Char)0x61,  /* [3843] */
    (xdc_Char)0x79,  /* [3844] */
    (xdc_Char)0x65,  /* [3845] */
    (xdc_Char)0x64,  /* [3846] */
    (xdc_Char)0x3a,  /* [3847] */
    (xdc_Char)0x20,  /* [3848] */
    (xdc_Char)0x64,  /* [3849] */
    (xdc_Char)0x65,  /* [3850] */
    (xdc_Char)0x6c,  /* [3851] */
    (xdc_Char)0x61,  /* [3852] */
    (xdc_Char)0x79,  /* [3853] */
    (xdc_Char)0x3a,  /* [3854] */
    (xdc_Char)0x20,  /* [3855] */
    (xdc_Char)0x25,  /* [3856] */
    (xdc_Char)0x64,  /* [3857] */
    (xdc_Char)0x0,  /* [3858] */
    (xdc_Char)0x4c,  /* [3859] */
    (xdc_Char)0x4d,  /* [3860] */
    (xdc_Char)0x5f,  /* [3861] */
    (xdc_Char)0x74,  /* [3862] */
    (xdc_Char)0x69,  /* [3863] */
    (xdc_Char)0x63,  /* [3864] */
    (xdc_Char)0x6b,  /* [3865] */
    (xdc_Char)0x3a,  /* [3866] */
    (xdc_Char)0x20,  /* [3867] */
    (xdc_Char)0x74,  /* [3868] */
    (xdc_Char)0x69,  /* [3869] */
    (xdc_Char)0x63,  /* [3870] */
    (xdc_Char)0x6b,  /* [3871] */
    (xdc_Char)0x3a,  /* [3872] */
    (xdc_Char)0x20,  /* [3873] */
    (xdc_Char)0x25,  /* [3874] */
    (xdc_Char)0x64,  /* [3875] */
    (xdc_Char)0x0,  /* [3876] */
    (xdc_Char)0x4c,  /* [3877] */
    (xdc_Char)0x4d,  /* [3878] */
    (xdc_Char)0x5f,  /* [3879] */
    (xdc_Char)0x62,  /* [3880] */
    (xdc_Char)0x65,  /* [3881] */
    (xdc_Char)0x67,  /* [3882] */
    (xdc_Char)0x69,  /* [3883] */
    (xdc_Char)0x6e,  /* [3884] */
    (xdc_Char)0x3a,  /* [3885] */
    (xdc_Char)0x20,  /* [3886] */
    (xdc_Char)0x63,  /* [3887] */
    (xdc_Char)0x6c,  /* [3888] */
    (xdc_Char)0x6b,  /* [3889] */
    (xdc_Char)0x3a,  /* [3890] */
    (xdc_Char)0x20,  /* [3891] */
    (xdc_Char)0x30,  /* [3892] */
    (xdc_Char)0x78,  /* [3893] */
    (xdc_Char)0x25,  /* [3894] */
    (xdc_Char)0x78,  /* [3895] */
    (xdc_Char)0x2c,  /* [3896] */
    (xdc_Char)0x20,  /* [3897] */
    (xdc_Char)0x66,  /* [3898] */
    (xdc_Char)0x75,  /* [3899] */
    (xdc_Char)0x6e,  /* [3900] */
    (xdc_Char)0x63,  /* [3901] */
    (xdc_Char)0x3a,  /* [3902] */
    (xdc_Char)0x20,  /* [3903] */
    (xdc_Char)0x30,  /* [3904] */
    (xdc_Char)0x78,  /* [3905] */
    (xdc_Char)0x25,  /* [3906] */
    (xdc_Char)0x78,  /* [3907] */
    (xdc_Char)0x0,  /* [3908] */
    (xdc_Char)0x4c,  /* [3909] */
    (xdc_Char)0x4d,  /* [3910] */
    (xdc_Char)0x5f,  /* [3911] */
    (xdc_Char)0x70,  /* [3912] */
    (xdc_Char)0x6f,  /* [3913] */
    (xdc_Char)0x73,  /* [3914] */
    (xdc_Char)0x74,  /* [3915] */
    (xdc_Char)0x3a,  /* [3916] */
    (xdc_Char)0x20,  /* [3917] */
    (xdc_Char)0x65,  /* [3918] */
    (xdc_Char)0x76,  /* [3919] */
    (xdc_Char)0x65,  /* [3920] */
    (xdc_Char)0x6e,  /* [3921] */
    (xdc_Char)0x74,  /* [3922] */
    (xdc_Char)0x3a,  /* [3923] */
    (xdc_Char)0x20,  /* [3924] */
    (xdc_Char)0x30,  /* [3925] */
    (xdc_Char)0x78,  /* [3926] */
    (xdc_Char)0x25,  /* [3927] */
    (xdc_Char)0x78,  /* [3928] */
    (xdc_Char)0x2c,  /* [3929] */
    (xdc_Char)0x20,  /* [3930] */
    (xdc_Char)0x63,  /* [3931] */
    (xdc_Char)0x75,  /* [3932] */
    (xdc_Char)0x72,  /* [3933] */
    (xdc_Char)0x72,  /* [3934] */
    (xdc_Char)0x45,  /* [3935] */
    (xdc_Char)0x76,  /* [3936] */
    (xdc_Char)0x65,  /* [3937] */
    (xdc_Char)0x6e,  /* [3938] */
    (xdc_Char)0x74,  /* [3939] */
    (xdc_Char)0x73,  /* [3940] */
    (xdc_Char)0x3a,  /* [3941] */
    (xdc_Char)0x20,  /* [3942] */
    (xdc_Char)0x30,  /* [3943] */
    (xdc_Char)0x78,  /* [3944] */
    (xdc_Char)0x25,  /* [3945] */
    (xdc_Char)0x78,  /* [3946] */
    (xdc_Char)0x2c,  /* [3947] */
    (xdc_Char)0x20,  /* [3948] */
    (xdc_Char)0x65,  /* [3949] */
    (xdc_Char)0x76,  /* [3950] */
    (xdc_Char)0x65,  /* [3951] */
    (xdc_Char)0x6e,  /* [3952] */
    (xdc_Char)0x74,  /* [3953] */
    (xdc_Char)0x49,  /* [3954] */
    (xdc_Char)0x64,  /* [3955] */
    (xdc_Char)0x3a,  /* [3956] */
    (xdc_Char)0x20,  /* [3957] */
    (xdc_Char)0x30,  /* [3958] */
    (xdc_Char)0x78,  /* [3959] */
    (xdc_Char)0x25,  /* [3960] */
    (xdc_Char)0x78,  /* [3961] */
    (xdc_Char)0x0,  /* [3962] */
    (xdc_Char)0x4c,  /* [3963] */
    (xdc_Char)0x4d,  /* [3964] */
    (xdc_Char)0x5f,  /* [3965] */
    (xdc_Char)0x70,  /* [3966] */
    (xdc_Char)0x65,  /* [3967] */
    (xdc_Char)0x6e,  /* [3968] */
    (xdc_Char)0x64,  /* [3969] */
    (xdc_Char)0x3a,  /* [3970] */
    (xdc_Char)0x20,  /* [3971] */
    (xdc_Char)0x65,  /* [3972] */
    (xdc_Char)0x76,  /* [3973] */
    (xdc_Char)0x65,  /* [3974] */
    (xdc_Char)0x6e,  /* [3975] */
    (xdc_Char)0x74,  /* [3976] */
    (xdc_Char)0x3a,  /* [3977] */
    (xdc_Char)0x20,  /* [3978] */
    (xdc_Char)0x30,  /* [3979] */
    (xdc_Char)0x78,  /* [3980] */
    (xdc_Char)0x25,  /* [3981] */
    (xdc_Char)0x78,  /* [3982] */
    (xdc_Char)0x2c,  /* [3983] */
    (xdc_Char)0x20,  /* [3984] */
    (xdc_Char)0x63,  /* [3985] */
    (xdc_Char)0x75,  /* [3986] */
    (xdc_Char)0x72,  /* [3987] */
    (xdc_Char)0x72,  /* [3988] */
    (xdc_Char)0x45,  /* [3989] */
    (xdc_Char)0x76,  /* [3990] */
    (xdc_Char)0x65,  /* [3991] */
    (xdc_Char)0x6e,  /* [3992] */
    (xdc_Char)0x74,  /* [3993] */
    (xdc_Char)0x73,  /* [3994] */
    (xdc_Char)0x3a,  /* [3995] */
    (xdc_Char)0x20,  /* [3996] */
    (xdc_Char)0x30,  /* [3997] */
    (xdc_Char)0x78,  /* [3998] */
    (xdc_Char)0x25,  /* [3999] */
    (xdc_Char)0x78,  /* [4000] */
    (xdc_Char)0x2c,  /* [4001] */
    (xdc_Char)0x20,  /* [4002] */
    (xdc_Char)0x61,  /* [4003] */
    (xdc_Char)0x6e,  /* [4004] */
    (xdc_Char)0x64,  /* [4005] */
    (xdc_Char)0x4d,  /* [4006] */
    (xdc_Char)0x61,  /* [4007] */
    (xdc_Char)0x73,  /* [4008] */
    (xdc_Char)0x6b,  /* [4009] */
    (xdc_Char)0x3a,  /* [4010] */
    (xdc_Char)0x20,  /* [4011] */
    (xdc_Char)0x30,  /* [4012] */
    (xdc_Char)0x78,  /* [4013] */
    (xdc_Char)0x25,  /* [4014] */
    (xdc_Char)0x78,  /* [4015] */
    (xdc_Char)0x2c,  /* [4016] */
    (xdc_Char)0x20,  /* [4017] */
    (xdc_Char)0x6f,  /* [4018] */
    (xdc_Char)0x72,  /* [4019] */
    (xdc_Char)0x4d,  /* [4020] */
    (xdc_Char)0x61,  /* [4021] */
    (xdc_Char)0x73,  /* [4022] */
    (xdc_Char)0x6b,  /* [4023] */
    (xdc_Char)0x3a,  /* [4024] */
    (xdc_Char)0x20,  /* [4025] */
    (xdc_Char)0x30,  /* [4026] */
    (xdc_Char)0x78,  /* [4027] */
    (xdc_Char)0x25,  /* [4028] */
    (xdc_Char)0x78,  /* [4029] */
    (xdc_Char)0x2c,  /* [4030] */
    (xdc_Char)0x20,  /* [4031] */
    (xdc_Char)0x74,  /* [4032] */
    (xdc_Char)0x69,  /* [4033] */
    (xdc_Char)0x6d,  /* [4034] */
    (xdc_Char)0x65,  /* [4035] */
    (xdc_Char)0x6f,  /* [4036] */
    (xdc_Char)0x75,  /* [4037] */
    (xdc_Char)0x74,  /* [4038] */
    (xdc_Char)0x3a,  /* [4039] */
    (xdc_Char)0x20,  /* [4040] */
    (xdc_Char)0x25,  /* [4041] */
    (xdc_Char)0x64,  /* [4042] */
    (xdc_Char)0x0,  /* [4043] */
    (xdc_Char)0x4c,  /* [4044] */
    (xdc_Char)0x4d,  /* [4045] */
    (xdc_Char)0x5f,  /* [4046] */
    (xdc_Char)0x70,  /* [4047] */
    (xdc_Char)0x6f,  /* [4048] */
    (xdc_Char)0x73,  /* [4049] */
    (xdc_Char)0x74,  /* [4050] */
    (xdc_Char)0x3a,  /* [4051] */
    (xdc_Char)0x20,  /* [4052] */
    (xdc_Char)0x73,  /* [4053] */
    (xdc_Char)0x65,  /* [4054] */
    (xdc_Char)0x6d,  /* [4055] */
    (xdc_Char)0x3a,  /* [4056] */
    (xdc_Char)0x20,  /* [4057] */
    (xdc_Char)0x30,  /* [4058] */
    (xdc_Char)0x78,  /* [4059] */
    (xdc_Char)0x25,  /* [4060] */
    (xdc_Char)0x78,  /* [4061] */
    (xdc_Char)0x2c,  /* [4062] */
    (xdc_Char)0x20,  /* [4063] */
    (xdc_Char)0x63,  /* [4064] */
    (xdc_Char)0x6f,  /* [4065] */
    (xdc_Char)0x75,  /* [4066] */
    (xdc_Char)0x6e,  /* [4067] */
    (xdc_Char)0x74,  /* [4068] */
    (xdc_Char)0x3a,  /* [4069] */
    (xdc_Char)0x20,  /* [4070] */
    (xdc_Char)0x25,  /* [4071] */
    (xdc_Char)0x64,  /* [4072] */
    (xdc_Char)0x0,  /* [4073] */
    (xdc_Char)0x4c,  /* [4074] */
    (xdc_Char)0x4d,  /* [4075] */
    (xdc_Char)0x5f,  /* [4076] */
    (xdc_Char)0x70,  /* [4077] */
    (xdc_Char)0x65,  /* [4078] */
    (xdc_Char)0x6e,  /* [4079] */
    (xdc_Char)0x64,  /* [4080] */
    (xdc_Char)0x3a,  /* [4081] */
    (xdc_Char)0x20,  /* [4082] */
    (xdc_Char)0x73,  /* [4083] */
    (xdc_Char)0x65,  /* [4084] */
    (xdc_Char)0x6d,  /* [4085] */
    (xdc_Char)0x3a,  /* [4086] */
    (xdc_Char)0x20,  /* [4087] */
    (xdc_Char)0x30,  /* [4088] */
    (xdc_Char)0x78,  /* [4089] */
    (xdc_Char)0x25,  /* [4090] */
    (xdc_Char)0x78,  /* [4091] */
    (xdc_Char)0x2c,  /* [4092] */
    (xdc_Char)0x20,  /* [4093] */
    (xdc_Char)0x63,  /* [4094] */
    (xdc_Char)0x6f,  /* [4095] */
    (xdc_Char)0x75,  /* [4096] */
    (xdc_Char)0x6e,  /* [4097] */
    (xdc_Char)0x74,  /* [4098] */
    (xdc_Char)0x3a,  /* [4099] */
    (xdc_Char)0x20,  /* [4100] */
    (xdc_Char)0x25,  /* [4101] */
    (xdc_Char)0x64,  /* [4102] */
    (xdc_Char)0x2c,  /* [4103] */
    (xdc_Char)0x20,  /* [4104] */
    (xdc_Char)0x74,  /* [4105] */
    (xdc_Char)0x69,  /* [4106] */
    (xdc_Char)0x6d,  /* [4107] */
    (xdc_Char)0x65,  /* [4108] */
    (xdc_Char)0x6f,  /* [4109] */
    (xdc_Char)0x75,  /* [4110] */
    (xdc_Char)0x74,  /* [4111] */
    (xdc_Char)0x3a,  /* [4112] */
    (xdc_Char)0x20,  /* [4113] */
    (xdc_Char)0x25,  /* [4114] */
    (xdc_Char)0x64,  /* [4115] */
    (xdc_Char)0x0,  /* [4116] */
    (xdc_Char)0x4c,  /* [4117] */
    (xdc_Char)0x4d,  /* [4118] */
    (xdc_Char)0x5f,  /* [4119] */
    (xdc_Char)0x62,  /* [4120] */
    (xdc_Char)0x65,  /* [4121] */
    (xdc_Char)0x67,  /* [4122] */
    (xdc_Char)0x69,  /* [4123] */
    (xdc_Char)0x6e,  /* [4124] */
    (xdc_Char)0x3a,  /* [4125] */
    (xdc_Char)0x20,  /* [4126] */
    (xdc_Char)0x73,  /* [4127] */
    (xdc_Char)0x77,  /* [4128] */
    (xdc_Char)0x69,  /* [4129] */
    (xdc_Char)0x3a,  /* [4130] */
    (xdc_Char)0x20,  /* [4131] */
    (xdc_Char)0x30,  /* [4132] */
    (xdc_Char)0x78,  /* [4133] */
    (xdc_Char)0x25,  /* [4134] */
    (xdc_Char)0x78,  /* [4135] */
    (xdc_Char)0x2c,  /* [4136] */
    (xdc_Char)0x20,  /* [4137] */
    (xdc_Char)0x66,  /* [4138] */
    (xdc_Char)0x75,  /* [4139] */
    (xdc_Char)0x6e,  /* [4140] */
    (xdc_Char)0x63,  /* [4141] */
    (xdc_Char)0x3a,  /* [4142] */
    (xdc_Char)0x20,  /* [4143] */
    (xdc_Char)0x30,  /* [4144] */
    (xdc_Char)0x78,  /* [4145] */
    (xdc_Char)0x25,  /* [4146] */
    (xdc_Char)0x78,  /* [4147] */
    (xdc_Char)0x2c,  /* [4148] */
    (xdc_Char)0x20,  /* [4149] */
    (xdc_Char)0x70,  /* [4150] */
    (xdc_Char)0x72,  /* [4151] */
    (xdc_Char)0x65,  /* [4152] */
    (xdc_Char)0x54,  /* [4153] */
    (xdc_Char)0x68,  /* [4154] */
    (xdc_Char)0x72,  /* [4155] */
    (xdc_Char)0x65,  /* [4156] */
    (xdc_Char)0x61,  /* [4157] */
    (xdc_Char)0x64,  /* [4158] */
    (xdc_Char)0x3a,  /* [4159] */
    (xdc_Char)0x20,  /* [4160] */
    (xdc_Char)0x25,  /* [4161] */
    (xdc_Char)0x64,  /* [4162] */
    (xdc_Char)0x0,  /* [4163] */
    (xdc_Char)0x4c,  /* [4164] */
    (xdc_Char)0x44,  /* [4165] */
    (xdc_Char)0x5f,  /* [4166] */
    (xdc_Char)0x65,  /* [4167] */
    (xdc_Char)0x6e,  /* [4168] */
    (xdc_Char)0x64,  /* [4169] */
    (xdc_Char)0x3a,  /* [4170] */
    (xdc_Char)0x20,  /* [4171] */
    (xdc_Char)0x73,  /* [4172] */
    (xdc_Char)0x77,  /* [4173] */
    (xdc_Char)0x69,  /* [4174] */
    (xdc_Char)0x3a,  /* [4175] */
    (xdc_Char)0x20,  /* [4176] */
    (xdc_Char)0x30,  /* [4177] */
    (xdc_Char)0x78,  /* [4178] */
    (xdc_Char)0x25,  /* [4179] */
    (xdc_Char)0x78,  /* [4180] */
    (xdc_Char)0x0,  /* [4181] */
    (xdc_Char)0x4c,  /* [4182] */
    (xdc_Char)0x4d,  /* [4183] */
    (xdc_Char)0x5f,  /* [4184] */
    (xdc_Char)0x70,  /* [4185] */
    (xdc_Char)0x6f,  /* [4186] */
    (xdc_Char)0x73,  /* [4187] */
    (xdc_Char)0x74,  /* [4188] */
    (xdc_Char)0x3a,  /* [4189] */
    (xdc_Char)0x20,  /* [4190] */
    (xdc_Char)0x73,  /* [4191] */
    (xdc_Char)0x77,  /* [4192] */
    (xdc_Char)0x69,  /* [4193] */
    (xdc_Char)0x3a,  /* [4194] */
    (xdc_Char)0x20,  /* [4195] */
    (xdc_Char)0x30,  /* [4196] */
    (xdc_Char)0x78,  /* [4197] */
    (xdc_Char)0x25,  /* [4198] */
    (xdc_Char)0x78,  /* [4199] */
    (xdc_Char)0x2c,  /* [4200] */
    (xdc_Char)0x20,  /* [4201] */
    (xdc_Char)0x66,  /* [4202] */
    (xdc_Char)0x75,  /* [4203] */
    (xdc_Char)0x6e,  /* [4204] */
    (xdc_Char)0x63,  /* [4205] */
    (xdc_Char)0x3a,  /* [4206] */
    (xdc_Char)0x20,  /* [4207] */
    (xdc_Char)0x30,  /* [4208] */
    (xdc_Char)0x78,  /* [4209] */
    (xdc_Char)0x25,  /* [4210] */
    (xdc_Char)0x78,  /* [4211] */
    (xdc_Char)0x2c,  /* [4212] */
    (xdc_Char)0x20,  /* [4213] */
    (xdc_Char)0x70,  /* [4214] */
    (xdc_Char)0x72,  /* [4215] */
    (xdc_Char)0x69,  /* [4216] */
    (xdc_Char)0x3a,  /* [4217] */
    (xdc_Char)0x20,  /* [4218] */
    (xdc_Char)0x25,  /* [4219] */
    (xdc_Char)0x64,  /* [4220] */
    (xdc_Char)0x0,  /* [4221] */
    (xdc_Char)0x4c,  /* [4222] */
    (xdc_Char)0x4d,  /* [4223] */
    (xdc_Char)0x5f,  /* [4224] */
    (xdc_Char)0x73,  /* [4225] */
    (xdc_Char)0x77,  /* [4226] */
    (xdc_Char)0x69,  /* [4227] */
    (xdc_Char)0x74,  /* [4228] */
    (xdc_Char)0x63,  /* [4229] */
    (xdc_Char)0x68,  /* [4230] */
    (xdc_Char)0x3a,  /* [4231] */
    (xdc_Char)0x20,  /* [4232] */
    (xdc_Char)0x6f,  /* [4233] */
    (xdc_Char)0x6c,  /* [4234] */
    (xdc_Char)0x64,  /* [4235] */
    (xdc_Char)0x74,  /* [4236] */
    (xdc_Char)0x73,  /* [4237] */
    (xdc_Char)0x6b,  /* [4238] */
    (xdc_Char)0x3a,  /* [4239] */
    (xdc_Char)0x20,  /* [4240] */
    (xdc_Char)0x30,  /* [4241] */
    (xdc_Char)0x78,  /* [4242] */
    (xdc_Char)0x25,  /* [4243] */
    (xdc_Char)0x78,  /* [4244] */
    (xdc_Char)0x2c,  /* [4245] */
    (xdc_Char)0x20,  /* [4246] */
    (xdc_Char)0x6f,  /* [4247] */
    (xdc_Char)0x6c,  /* [4248] */
    (xdc_Char)0x64,  /* [4249] */
    (xdc_Char)0x66,  /* [4250] */
    (xdc_Char)0x75,  /* [4251] */
    (xdc_Char)0x6e,  /* [4252] */
    (xdc_Char)0x63,  /* [4253] */
    (xdc_Char)0x3a,  /* [4254] */
    (xdc_Char)0x20,  /* [4255] */
    (xdc_Char)0x30,  /* [4256] */
    (xdc_Char)0x78,  /* [4257] */
    (xdc_Char)0x25,  /* [4258] */
    (xdc_Char)0x78,  /* [4259] */
    (xdc_Char)0x2c,  /* [4260] */
    (xdc_Char)0x20,  /* [4261] */
    (xdc_Char)0x6e,  /* [4262] */
    (xdc_Char)0x65,  /* [4263] */
    (xdc_Char)0x77,  /* [4264] */
    (xdc_Char)0x74,  /* [4265] */
    (xdc_Char)0x73,  /* [4266] */
    (xdc_Char)0x6b,  /* [4267] */
    (xdc_Char)0x3a,  /* [4268] */
    (xdc_Char)0x20,  /* [4269] */
    (xdc_Char)0x30,  /* [4270] */
    (xdc_Char)0x78,  /* [4271] */
    (xdc_Char)0x25,  /* [4272] */
    (xdc_Char)0x78,  /* [4273] */
    (xdc_Char)0x2c,  /* [4274] */
    (xdc_Char)0x20,  /* [4275] */
    (xdc_Char)0x6e,  /* [4276] */
    (xdc_Char)0x65,  /* [4277] */
    (xdc_Char)0x77,  /* [4278] */
    (xdc_Char)0x66,  /* [4279] */
    (xdc_Char)0x75,  /* [4280] */
    (xdc_Char)0x6e,  /* [4281] */
    (xdc_Char)0x63,  /* [4282] */
    (xdc_Char)0x3a,  /* [4283] */
    (xdc_Char)0x20,  /* [4284] */
    (xdc_Char)0x30,  /* [4285] */
    (xdc_Char)0x78,  /* [4286] */
    (xdc_Char)0x25,  /* [4287] */
    (xdc_Char)0x78,  /* [4288] */
    (xdc_Char)0x0,  /* [4289] */
    (xdc_Char)0x4c,  /* [4290] */
    (xdc_Char)0x4d,  /* [4291] */
    (xdc_Char)0x5f,  /* [4292] */
    (xdc_Char)0x73,  /* [4293] */
    (xdc_Char)0x6c,  /* [4294] */
    (xdc_Char)0x65,  /* [4295] */
    (xdc_Char)0x65,  /* [4296] */
    (xdc_Char)0x70,  /* [4297] */
    (xdc_Char)0x3a,  /* [4298] */
    (xdc_Char)0x20,  /* [4299] */
    (xdc_Char)0x74,  /* [4300] */
    (xdc_Char)0x73,  /* [4301] */
    (xdc_Char)0x6b,  /* [4302] */
    (xdc_Char)0x3a,  /* [4303] */
    (xdc_Char)0x20,  /* [4304] */
    (xdc_Char)0x30,  /* [4305] */
    (xdc_Char)0x78,  /* [4306] */
    (xdc_Char)0x25,  /* [4307] */
    (xdc_Char)0x78,  /* [4308] */
    (xdc_Char)0x2c,  /* [4309] */
    (xdc_Char)0x20,  /* [4310] */
    (xdc_Char)0x66,  /* [4311] */
    (xdc_Char)0x75,  /* [4312] */
    (xdc_Char)0x6e,  /* [4313] */
    (xdc_Char)0x63,  /* [4314] */
    (xdc_Char)0x3a,  /* [4315] */
    (xdc_Char)0x20,  /* [4316] */
    (xdc_Char)0x30,  /* [4317] */
    (xdc_Char)0x78,  /* [4318] */
    (xdc_Char)0x25,  /* [4319] */
    (xdc_Char)0x78,  /* [4320] */
    (xdc_Char)0x2c,  /* [4321] */
    (xdc_Char)0x20,  /* [4322] */
    (xdc_Char)0x74,  /* [4323] */
    (xdc_Char)0x69,  /* [4324] */
    (xdc_Char)0x6d,  /* [4325] */
    (xdc_Char)0x65,  /* [4326] */
    (xdc_Char)0x6f,  /* [4327] */
    (xdc_Char)0x75,  /* [4328] */
    (xdc_Char)0x74,  /* [4329] */
    (xdc_Char)0x3a,  /* [4330] */
    (xdc_Char)0x20,  /* [4331] */
    (xdc_Char)0x25,  /* [4332] */
    (xdc_Char)0x64,  /* [4333] */
    (xdc_Char)0x0,  /* [4334] */
    (xdc_Char)0x4c,  /* [4335] */
    (xdc_Char)0x44,  /* [4336] */
    (xdc_Char)0x5f,  /* [4337] */
    (xdc_Char)0x72,  /* [4338] */
    (xdc_Char)0x65,  /* [4339] */
    (xdc_Char)0x61,  /* [4340] */
    (xdc_Char)0x64,  /* [4341] */
    (xdc_Char)0x79,  /* [4342] */
    (xdc_Char)0x3a,  /* [4343] */
    (xdc_Char)0x20,  /* [4344] */
    (xdc_Char)0x74,  /* [4345] */
    (xdc_Char)0x73,  /* [4346] */
    (xdc_Char)0x6b,  /* [4347] */
    (xdc_Char)0x3a,  /* [4348] */
    (xdc_Char)0x20,  /* [4349] */
    (xdc_Char)0x30,  /* [4350] */
    (xdc_Char)0x78,  /* [4351] */
    (xdc_Char)0x25,  /* [4352] */
    (xdc_Char)0x78,  /* [4353] */
    (xdc_Char)0x2c,  /* [4354] */
    (xdc_Char)0x20,  /* [4355] */
    (xdc_Char)0x66,  /* [4356] */
    (xdc_Char)0x75,  /* [4357] */
    (xdc_Char)0x6e,  /* [4358] */
    (xdc_Char)0x63,  /* [4359] */
    (xdc_Char)0x3a,  /* [4360] */
    (xdc_Char)0x20,  /* [4361] */
    (xdc_Char)0x30,  /* [4362] */
    (xdc_Char)0x78,  /* [4363] */
    (xdc_Char)0x25,  /* [4364] */
    (xdc_Char)0x78,  /* [4365] */
    (xdc_Char)0x2c,  /* [4366] */
    (xdc_Char)0x20,  /* [4367] */
    (xdc_Char)0x70,  /* [4368] */
    (xdc_Char)0x72,  /* [4369] */
    (xdc_Char)0x69,  /* [4370] */
    (xdc_Char)0x3a,  /* [4371] */
    (xdc_Char)0x20,  /* [4372] */
    (xdc_Char)0x25,  /* [4373] */
    (xdc_Char)0x64,  /* [4374] */
    (xdc_Char)0x0,  /* [4375] */
    (xdc_Char)0x4c,  /* [4376] */
    (xdc_Char)0x44,  /* [4377] */
    (xdc_Char)0x5f,  /* [4378] */
    (xdc_Char)0x62,  /* [4379] */
    (xdc_Char)0x6c,  /* [4380] */
    (xdc_Char)0x6f,  /* [4381] */
    (xdc_Char)0x63,  /* [4382] */
    (xdc_Char)0x6b,  /* [4383] */
    (xdc_Char)0x3a,  /* [4384] */
    (xdc_Char)0x20,  /* [4385] */
    (xdc_Char)0x74,  /* [4386] */
    (xdc_Char)0x73,  /* [4387] */
    (xdc_Char)0x6b,  /* [4388] */
    (xdc_Char)0x3a,  /* [4389] */
    (xdc_Char)0x20,  /* [4390] */
    (xdc_Char)0x30,  /* [4391] */
    (xdc_Char)0x78,  /* [4392] */
    (xdc_Char)0x25,  /* [4393] */
    (xdc_Char)0x78,  /* [4394] */
    (xdc_Char)0x2c,  /* [4395] */
    (xdc_Char)0x20,  /* [4396] */
    (xdc_Char)0x66,  /* [4397] */
    (xdc_Char)0x75,  /* [4398] */
    (xdc_Char)0x6e,  /* [4399] */
    (xdc_Char)0x63,  /* [4400] */
    (xdc_Char)0x3a,  /* [4401] */
    (xdc_Char)0x20,  /* [4402] */
    (xdc_Char)0x30,  /* [4403] */
    (xdc_Char)0x78,  /* [4404] */
    (xdc_Char)0x25,  /* [4405] */
    (xdc_Char)0x78,  /* [4406] */
    (xdc_Char)0x0,  /* [4407] */
    (xdc_Char)0x4c,  /* [4408] */
    (xdc_Char)0x4d,  /* [4409] */
    (xdc_Char)0x5f,  /* [4410] */
    (xdc_Char)0x79,  /* [4411] */
    (xdc_Char)0x69,  /* [4412] */
    (xdc_Char)0x65,  /* [4413] */
    (xdc_Char)0x6c,  /* [4414] */
    (xdc_Char)0x64,  /* [4415] */
    (xdc_Char)0x3a,  /* [4416] */
    (xdc_Char)0x20,  /* [4417] */
    (xdc_Char)0x74,  /* [4418] */
    (xdc_Char)0x73,  /* [4419] */
    (xdc_Char)0x6b,  /* [4420] */
    (xdc_Char)0x3a,  /* [4421] */
    (xdc_Char)0x20,  /* [4422] */
    (xdc_Char)0x30,  /* [4423] */
    (xdc_Char)0x78,  /* [4424] */
    (xdc_Char)0x25,  /* [4425] */
    (xdc_Char)0x78,  /* [4426] */
    (xdc_Char)0x2c,  /* [4427] */
    (xdc_Char)0x20,  /* [4428] */
    (xdc_Char)0x66,  /* [4429] */
    (xdc_Char)0x75,  /* [4430] */
    (xdc_Char)0x6e,  /* [4431] */
    (xdc_Char)0x63,  /* [4432] */
    (xdc_Char)0x3a,  /* [4433] */
    (xdc_Char)0x20,  /* [4434] */
    (xdc_Char)0x30,  /* [4435] */
    (xdc_Char)0x78,  /* [4436] */
    (xdc_Char)0x25,  /* [4437] */
    (xdc_Char)0x78,  /* [4438] */
    (xdc_Char)0x2c,  /* [4439] */
    (xdc_Char)0x20,  /* [4440] */
    (xdc_Char)0x63,  /* [4441] */
    (xdc_Char)0x75,  /* [4442] */
    (xdc_Char)0x72,  /* [4443] */
    (xdc_Char)0x72,  /* [4444] */
    (xdc_Char)0x54,  /* [4445] */
    (xdc_Char)0x68,  /* [4446] */
    (xdc_Char)0x72,  /* [4447] */
    (xdc_Char)0x65,  /* [4448] */
    (xdc_Char)0x61,  /* [4449] */
    (xdc_Char)0x64,  /* [4450] */
    (xdc_Char)0x3a,  /* [4451] */
    (xdc_Char)0x20,  /* [4452] */
    (xdc_Char)0x25,  /* [4453] */
    (xdc_Char)0x64,  /* [4454] */
    (xdc_Char)0x0,  /* [4455] */
    (xdc_Char)0x4c,  /* [4456] */
    (xdc_Char)0x4d,  /* [4457] */
    (xdc_Char)0x5f,  /* [4458] */
    (xdc_Char)0x73,  /* [4459] */
    (xdc_Char)0x65,  /* [4460] */
    (xdc_Char)0x74,  /* [4461] */
    (xdc_Char)0x50,  /* [4462] */
    (xdc_Char)0x72,  /* [4463] */
    (xdc_Char)0x69,  /* [4464] */
    (xdc_Char)0x3a,  /* [4465] */
    (xdc_Char)0x20,  /* [4466] */
    (xdc_Char)0x74,  /* [4467] */
    (xdc_Char)0x73,  /* [4468] */
    (xdc_Char)0x6b,  /* [4469] */
    (xdc_Char)0x3a,  /* [4470] */
    (xdc_Char)0x20,  /* [4471] */
    (xdc_Char)0x30,  /* [4472] */
    (xdc_Char)0x78,  /* [4473] */
    (xdc_Char)0x25,  /* [4474] */
    (xdc_Char)0x78,  /* [4475] */
    (xdc_Char)0x2c,  /* [4476] */
    (xdc_Char)0x20,  /* [4477] */
    (xdc_Char)0x66,  /* [4478] */
    (xdc_Char)0x75,  /* [4479] */
    (xdc_Char)0x6e,  /* [4480] */
    (xdc_Char)0x63,  /* [4481] */
    (xdc_Char)0x3a,  /* [4482] */
    (xdc_Char)0x20,  /* [4483] */
    (xdc_Char)0x30,  /* [4484] */
    (xdc_Char)0x78,  /* [4485] */
    (xdc_Char)0x25,  /* [4486] */
    (xdc_Char)0x78,  /* [4487] */
    (xdc_Char)0x2c,  /* [4488] */
    (xdc_Char)0x20,  /* [4489] */
    (xdc_Char)0x6f,  /* [4490] */
    (xdc_Char)0x6c,  /* [4491] */
    (xdc_Char)0x64,  /* [4492] */
    (xdc_Char)0x50,  /* [4493] */
    (xdc_Char)0x72,  /* [4494] */
    (xdc_Char)0x69,  /* [4495] */
    (xdc_Char)0x3a,  /* [4496] */
    (xdc_Char)0x20,  /* [4497] */
    (xdc_Char)0x25,  /* [4498] */
    (xdc_Char)0x64,  /* [4499] */
    (xdc_Char)0x2c,  /* [4500] */
    (xdc_Char)0x20,  /* [4501] */
    (xdc_Char)0x6e,  /* [4502] */
    (xdc_Char)0x65,  /* [4503] */
    (xdc_Char)0x77,  /* [4504] */
    (xdc_Char)0x50,  /* [4505] */
    (xdc_Char)0x72,  /* [4506] */
    (xdc_Char)0x69,  /* [4507] */
    (xdc_Char)0x20,  /* [4508] */
    (xdc_Char)0x25,  /* [4509] */
    (xdc_Char)0x64,  /* [4510] */
    (xdc_Char)0x0,  /* [4511] */
    (xdc_Char)0x4c,  /* [4512] */
    (xdc_Char)0x44,  /* [4513] */
    (xdc_Char)0x5f,  /* [4514] */
    (xdc_Char)0x65,  /* [4515] */
    (xdc_Char)0x78,  /* [4516] */
    (xdc_Char)0x69,  /* [4517] */
    (xdc_Char)0x74,  /* [4518] */
    (xdc_Char)0x3a,  /* [4519] */
    (xdc_Char)0x20,  /* [4520] */
    (xdc_Char)0x74,  /* [4521] */
    (xdc_Char)0x73,  /* [4522] */
    (xdc_Char)0x6b,  /* [4523] */
    (xdc_Char)0x3a,  /* [4524] */
    (xdc_Char)0x20,  /* [4525] */
    (xdc_Char)0x30,  /* [4526] */
    (xdc_Char)0x78,  /* [4527] */
    (xdc_Char)0x25,  /* [4528] */
    (xdc_Char)0x78,  /* [4529] */
    (xdc_Char)0x2c,  /* [4530] */
    (xdc_Char)0x20,  /* [4531] */
    (xdc_Char)0x66,  /* [4532] */
    (xdc_Char)0x75,  /* [4533] */
    (xdc_Char)0x6e,  /* [4534] */
    (xdc_Char)0x63,  /* [4535] */
    (xdc_Char)0x3a,  /* [4536] */
    (xdc_Char)0x20,  /* [4537] */
    (xdc_Char)0x30,  /* [4538] */
    (xdc_Char)0x78,  /* [4539] */
    (xdc_Char)0x25,  /* [4540] */
    (xdc_Char)0x78,  /* [4541] */
    (xdc_Char)0x0,  /* [4542] */
    (xdc_Char)0x4c,  /* [4543] */
    (xdc_Char)0x4d,  /* [4544] */
    (xdc_Char)0x5f,  /* [4545] */
    (xdc_Char)0x62,  /* [4546] */
    (xdc_Char)0x65,  /* [4547] */
    (xdc_Char)0x67,  /* [4548] */
    (xdc_Char)0x69,  /* [4549] */
    (xdc_Char)0x6e,  /* [4550] */
    (xdc_Char)0x3a,  /* [4551] */
    (xdc_Char)0x20,  /* [4552] */
    (xdc_Char)0x68,  /* [4553] */
    (xdc_Char)0x77,  /* [4554] */
    (xdc_Char)0x69,  /* [4555] */
    (xdc_Char)0x3a,  /* [4556] */
    (xdc_Char)0x20,  /* [4557] */
    (xdc_Char)0x30,  /* [4558] */
    (xdc_Char)0x78,  /* [4559] */
    (xdc_Char)0x25,  /* [4560] */
    (xdc_Char)0x78,  /* [4561] */
    (xdc_Char)0x2c,  /* [4562] */
    (xdc_Char)0x20,  /* [4563] */
    (xdc_Char)0x66,  /* [4564] */
    (xdc_Char)0x75,  /* [4565] */
    (xdc_Char)0x6e,  /* [4566] */
    (xdc_Char)0x63,  /* [4567] */
    (xdc_Char)0x3a,  /* [4568] */
    (xdc_Char)0x20,  /* [4569] */
    (xdc_Char)0x30,  /* [4570] */
    (xdc_Char)0x78,  /* [4571] */
    (xdc_Char)0x25,  /* [4572] */
    (xdc_Char)0x78,  /* [4573] */
    (xdc_Char)0x2c,  /* [4574] */
    (xdc_Char)0x20,  /* [4575] */
    (xdc_Char)0x70,  /* [4576] */
    (xdc_Char)0x72,  /* [4577] */
    (xdc_Char)0x65,  /* [4578] */
    (xdc_Char)0x54,  /* [4579] */
    (xdc_Char)0x68,  /* [4580] */
    (xdc_Char)0x72,  /* [4581] */
    (xdc_Char)0x65,  /* [4582] */
    (xdc_Char)0x61,  /* [4583] */
    (xdc_Char)0x64,  /* [4584] */
    (xdc_Char)0x3a,  /* [4585] */
    (xdc_Char)0x20,  /* [4586] */
    (xdc_Char)0x25,  /* [4587] */
    (xdc_Char)0x64,  /* [4588] */
    (xdc_Char)0x2c,  /* [4589] */
    (xdc_Char)0x20,  /* [4590] */
    (xdc_Char)0x69,  /* [4591] */
    (xdc_Char)0x6e,  /* [4592] */
    (xdc_Char)0x74,  /* [4593] */
    (xdc_Char)0x4e,  /* [4594] */
    (xdc_Char)0x75,  /* [4595] */
    (xdc_Char)0x6d,  /* [4596] */
    (xdc_Char)0x3a,  /* [4597] */
    (xdc_Char)0x20,  /* [4598] */
    (xdc_Char)0x25,  /* [4599] */
    (xdc_Char)0x64,  /* [4600] */
    (xdc_Char)0x2c,  /* [4601] */
    (xdc_Char)0x20,  /* [4602] */
    (xdc_Char)0x69,  /* [4603] */
    (xdc_Char)0x72,  /* [4604] */
    (xdc_Char)0x70,  /* [4605] */
    (xdc_Char)0x3a,  /* [4606] */
    (xdc_Char)0x20,  /* [4607] */
    (xdc_Char)0x30,  /* [4608] */
    (xdc_Char)0x78,  /* [4609] */
    (xdc_Char)0x25,  /* [4610] */
    (xdc_Char)0x78,  /* [4611] */
    (xdc_Char)0x0,  /* [4612] */
    (xdc_Char)0x4c,  /* [4613] */
    (xdc_Char)0x44,  /* [4614] */
    (xdc_Char)0x5f,  /* [4615] */
    (xdc_Char)0x65,  /* [4616] */
    (xdc_Char)0x6e,  /* [4617] */
    (xdc_Char)0x64,  /* [4618] */
    (xdc_Char)0x3a,  /* [4619] */
    (xdc_Char)0x20,  /* [4620] */
    (xdc_Char)0x68,  /* [4621] */
    (xdc_Char)0x77,  /* [4622] */
    (xdc_Char)0x69,  /* [4623] */
    (xdc_Char)0x3a,  /* [4624] */
    (xdc_Char)0x20,  /* [4625] */
    (xdc_Char)0x30,  /* [4626] */
    (xdc_Char)0x78,  /* [4627] */
    (xdc_Char)0x25,  /* [4628] */
    (xdc_Char)0x78,  /* [4629] */
    (xdc_Char)0x0,  /* [4630] */
    (xdc_Char)0x4c,  /* [4631] */
    (xdc_Char)0x53,  /* [4632] */
    (xdc_Char)0x5f,  /* [4633] */
    (xdc_Char)0x63,  /* [4634] */
    (xdc_Char)0x70,  /* [4635] */
    (xdc_Char)0x75,  /* [4636] */
    (xdc_Char)0x4c,  /* [4637] */
    (xdc_Char)0x6f,  /* [4638] */
    (xdc_Char)0x61,  /* [4639] */
    (xdc_Char)0x64,  /* [4640] */
    (xdc_Char)0x3a,  /* [4641] */
    (xdc_Char)0x20,  /* [4642] */
    (xdc_Char)0x25,  /* [4643] */
    (xdc_Char)0x64,  /* [4644] */
    (xdc_Char)0x25,  /* [4645] */
    (xdc_Char)0x25,  /* [4646] */
    (xdc_Char)0x0,  /* [4647] */
    (xdc_Char)0x4c,  /* [4648] */
    (xdc_Char)0x53,  /* [4649] */
    (xdc_Char)0x5f,  /* [4650] */
    (xdc_Char)0x68,  /* [4651] */
    (xdc_Char)0x77,  /* [4652] */
    (xdc_Char)0x69,  /* [4653] */
    (xdc_Char)0x4c,  /* [4654] */
    (xdc_Char)0x6f,  /* [4655] */
    (xdc_Char)0x61,  /* [4656] */
    (xdc_Char)0x64,  /* [4657] */
    (xdc_Char)0x3a,  /* [4658] */
    (xdc_Char)0x20,  /* [4659] */
    (xdc_Char)0x25,  /* [4660] */
    (xdc_Char)0x64,  /* [4661] */
    (xdc_Char)0x2c,  /* [4662] */
    (xdc_Char)0x25,  /* [4663] */
    (xdc_Char)0x64,  /* [4664] */
    (xdc_Char)0x0,  /* [4665] */
    (xdc_Char)0x4c,  /* [4666] */
    (xdc_Char)0x53,  /* [4667] */
    (xdc_Char)0x5f,  /* [4668] */
    (xdc_Char)0x73,  /* [4669] */
    (xdc_Char)0x77,  /* [4670] */
    (xdc_Char)0x69,  /* [4671] */
    (xdc_Char)0x4c,  /* [4672] */
    (xdc_Char)0x6f,  /* [4673] */
    (xdc_Char)0x61,  /* [4674] */
    (xdc_Char)0x64,  /* [4675] */
    (xdc_Char)0x3a,  /* [4676] */
    (xdc_Char)0x20,  /* [4677] */
    (xdc_Char)0x25,  /* [4678] */
    (xdc_Char)0x64,  /* [4679] */
    (xdc_Char)0x2c,  /* [4680] */
    (xdc_Char)0x25,  /* [4681] */
    (xdc_Char)0x64,  /* [4682] */
    (xdc_Char)0x0,  /* [4683] */
    (xdc_Char)0x4c,  /* [4684] */
    (xdc_Char)0x53,  /* [4685] */
    (xdc_Char)0x5f,  /* [4686] */
    (xdc_Char)0x74,  /* [4687] */
    (xdc_Char)0x61,  /* [4688] */
    (xdc_Char)0x73,  /* [4689] */
    (xdc_Char)0x6b,  /* [4690] */
    (xdc_Char)0x4c,  /* [4691] */
    (xdc_Char)0x6f,  /* [4692] */
    (xdc_Char)0x61,  /* [4693] */
    (xdc_Char)0x64,  /* [4694] */
    (xdc_Char)0x3a,  /* [4695] */
    (xdc_Char)0x20,  /* [4696] */
    (xdc_Char)0x30,  /* [4697] */
    (xdc_Char)0x78,  /* [4698] */
    (xdc_Char)0x25,  /* [4699] */
    (xdc_Char)0x78,  /* [4700] */
    (xdc_Char)0x2c,  /* [4701] */
    (xdc_Char)0x25,  /* [4702] */
    (xdc_Char)0x64,  /* [4703] */
    (xdc_Char)0x2c,  /* [4704] */
    (xdc_Char)0x25,  /* [4705] */
    (xdc_Char)0x64,  /* [4706] */
    (xdc_Char)0x2c,  /* [4707] */
    (xdc_Char)0x30,  /* [4708] */
    (xdc_Char)0x78,  /* [4709] */
    (xdc_Char)0x25,  /* [4710] */
    (xdc_Char)0x78,  /* [4711] */
    (xdc_Char)0x0,  /* [4712] */
    (xdc_Char)0x53,  /* [4713] */
    (xdc_Char)0x74,  /* [4714] */
    (xdc_Char)0x61,  /* [4715] */
    (xdc_Char)0x72,  /* [4716] */
    (xdc_Char)0x74,  /* [4717] */
    (xdc_Char)0x3a,  /* [4718] */
    (xdc_Char)0x20,  /* [4719] */
    (xdc_Char)0x25,  /* [4720] */
    (xdc_Char)0x24,  /* [4721] */
    (xdc_Char)0x53,  /* [4722] */
    (xdc_Char)0x20,  /* [4723] */
    (xdc_Char)0x0,  /* [4724] */
    (xdc_Char)0x53,  /* [4725] */
    (xdc_Char)0x74,  /* [4726] */
    (xdc_Char)0x6f,  /* [4727] */
    (xdc_Char)0x70,  /* [4728] */
    (xdc_Char)0x3a,  /* [4729] */
    (xdc_Char)0x20,  /* [4730] */
    (xdc_Char)0x25,  /* [4731] */
    (xdc_Char)0x24,  /* [4732] */
    (xdc_Char)0x53,  /* [4733] */
    (xdc_Char)0x20,  /* [4734] */
    (xdc_Char)0x0,  /* [4735] */
    (xdc_Char)0x53,  /* [4736] */
    (xdc_Char)0x74,  /* [4737] */
    (xdc_Char)0x61,  /* [4738] */
    (xdc_Char)0x72,  /* [4739] */
    (xdc_Char)0x74,  /* [4740] */
    (xdc_Char)0x49,  /* [4741] */
    (xdc_Char)0x6e,  /* [4742] */
    (xdc_Char)0x73,  /* [4743] */
    (xdc_Char)0x74,  /* [4744] */
    (xdc_Char)0x61,  /* [4745] */
    (xdc_Char)0x6e,  /* [4746] */
    (xdc_Char)0x63,  /* [4747] */
    (xdc_Char)0x65,  /* [4748] */
    (xdc_Char)0x3a,  /* [4749] */
    (xdc_Char)0x20,  /* [4750] */
    (xdc_Char)0x25,  /* [4751] */
    (xdc_Char)0x24,  /* [4752] */
    (xdc_Char)0x53,  /* [4753] */
    (xdc_Char)0x20,  /* [4754] */
    (xdc_Char)0x0,  /* [4755] */
    (xdc_Char)0x53,  /* [4756] */
    (xdc_Char)0x74,  /* [4757] */
    (xdc_Char)0x6f,  /* [4758] */
    (xdc_Char)0x70,  /* [4759] */
    (xdc_Char)0x49,  /* [4760] */
    (xdc_Char)0x6e,  /* [4761] */
    (xdc_Char)0x73,  /* [4762] */
    (xdc_Char)0x74,  /* [4763] */
    (xdc_Char)0x61,  /* [4764] */
    (xdc_Char)0x6e,  /* [4765] */
    (xdc_Char)0x63,  /* [4766] */
    (xdc_Char)0x65,  /* [4767] */
    (xdc_Char)0x3a,  /* [4768] */
    (xdc_Char)0x20,  /* [4769] */
    (xdc_Char)0x25,  /* [4770] */
    (xdc_Char)0x24,  /* [4771] */
    (xdc_Char)0x53,  /* [4772] */
    (xdc_Char)0x20,  /* [4773] */
    (xdc_Char)0x0,  /* [4774] */
    (xdc_Char)0x53,  /* [4775] */
    (xdc_Char)0x74,  /* [4776] */
    (xdc_Char)0x61,  /* [4777] */
    (xdc_Char)0x72,  /* [4778] */
    (xdc_Char)0x74,  /* [4779] */
    (xdc_Char)0x49,  /* [4780] */
    (xdc_Char)0x6e,  /* [4781] */
    (xdc_Char)0x73,  /* [4782] */
    (xdc_Char)0x74,  /* [4783] */
    (xdc_Char)0x61,  /* [4784] */
    (xdc_Char)0x6e,  /* [4785] */
    (xdc_Char)0x63,  /* [4786] */
    (xdc_Char)0x65,  /* [4787] */
    (xdc_Char)0x57,  /* [4788] */
    (xdc_Char)0x69,  /* [4789] */
    (xdc_Char)0x74,  /* [4790] */
    (xdc_Char)0x68,  /* [4791] */
    (xdc_Char)0x41,  /* [4792] */
    (xdc_Char)0x64,  /* [4793] */
    (xdc_Char)0x72,  /* [4794] */
    (xdc_Char)0x73,  /* [4795] */
    (xdc_Char)0x3a,  /* [4796] */
    (xdc_Char)0x20,  /* [4797] */
    (xdc_Char)0x25,  /* [4798] */
    (xdc_Char)0x24,  /* [4799] */
    (xdc_Char)0x53,  /* [4800] */
    (xdc_Char)0x0,  /* [4801] */
    (xdc_Char)0x53,  /* [4802] */
    (xdc_Char)0x74,  /* [4803] */
    (xdc_Char)0x6f,  /* [4804] */
    (xdc_Char)0x70,  /* [4805] */
    (xdc_Char)0x49,  /* [4806] */
    (xdc_Char)0x6e,  /* [4807] */
    (xdc_Char)0x73,  /* [4808] */
    (xdc_Char)0x74,  /* [4809] */
    (xdc_Char)0x61,  /* [4810] */
    (xdc_Char)0x6e,  /* [4811] */
    (xdc_Char)0x63,  /* [4812] */
    (xdc_Char)0x65,  /* [4813] */
    (xdc_Char)0x57,  /* [4814] */
    (xdc_Char)0x69,  /* [4815] */
    (xdc_Char)0x74,  /* [4816] */
    (xdc_Char)0x68,  /* [4817] */
    (xdc_Char)0x41,  /* [4818] */
    (xdc_Char)0x64,  /* [4819] */
    (xdc_Char)0x72,  /* [4820] */
    (xdc_Char)0x73,  /* [4821] */
    (xdc_Char)0x3a,  /* [4822] */
    (xdc_Char)0x20,  /* [4823] */
    (xdc_Char)0x25,  /* [4824] */
    (xdc_Char)0x24,  /* [4825] */
    (xdc_Char)0x53,  /* [4826] */
    (xdc_Char)0x0,  /* [4827] */
    (xdc_Char)0x53,  /* [4828] */
    (xdc_Char)0x74,  /* [4829] */
    (xdc_Char)0x61,  /* [4830] */
    (xdc_Char)0x72,  /* [4831] */
    (xdc_Char)0x74,  /* [4832] */
    (xdc_Char)0x49,  /* [4833] */
    (xdc_Char)0x6e,  /* [4834] */
    (xdc_Char)0x73,  /* [4835] */
    (xdc_Char)0x74,  /* [4836] */
    (xdc_Char)0x61,  /* [4837] */
    (xdc_Char)0x6e,  /* [4838] */
    (xdc_Char)0x63,  /* [4839] */
    (xdc_Char)0x65,  /* [4840] */
    (xdc_Char)0x57,  /* [4841] */
    (xdc_Char)0x69,  /* [4842] */
    (xdc_Char)0x74,  /* [4843] */
    (xdc_Char)0x68,  /* [4844] */
    (xdc_Char)0x53,  /* [4845] */
    (xdc_Char)0x74,  /* [4846] */
    (xdc_Char)0x72,  /* [4847] */
    (xdc_Char)0x3a,  /* [4848] */
    (xdc_Char)0x20,  /* [4849] */
    (xdc_Char)0x25,  /* [4850] */
    (xdc_Char)0x24,  /* [4851] */
    (xdc_Char)0x53,  /* [4852] */
    (xdc_Char)0x0,  /* [4853] */
    (xdc_Char)0x53,  /* [4854] */
    (xdc_Char)0x74,  /* [4855] */
    (xdc_Char)0x6f,  /* [4856] */
    (xdc_Char)0x70,  /* [4857] */
    (xdc_Char)0x49,  /* [4858] */
    (xdc_Char)0x6e,  /* [4859] */
    (xdc_Char)0x73,  /* [4860] */
    (xdc_Char)0x74,  /* [4861] */
    (xdc_Char)0x61,  /* [4862] */
    (xdc_Char)0x6e,  /* [4863] */
    (xdc_Char)0x63,  /* [4864] */
    (xdc_Char)0x65,  /* [4865] */
    (xdc_Char)0x57,  /* [4866] */
    (xdc_Char)0x69,  /* [4867] */
    (xdc_Char)0x74,  /* [4868] */
    (xdc_Char)0x68,  /* [4869] */
    (xdc_Char)0x53,  /* [4870] */
    (xdc_Char)0x74,  /* [4871] */
    (xdc_Char)0x72,  /* [4872] */
    (xdc_Char)0x3a,  /* [4873] */
    (xdc_Char)0x20,  /* [4874] */
    (xdc_Char)0x25,  /* [4875] */
    (xdc_Char)0x24,  /* [4876] */
    (xdc_Char)0x53,  /* [4877] */
    (xdc_Char)0x0,  /* [4878] */
    (xdc_Char)0x45,  /* [4879] */
    (xdc_Char)0x52,  /* [4880] */
    (xdc_Char)0x52,  /* [4881] */
    (xdc_Char)0x4f,  /* [4882] */
    (xdc_Char)0x52,  /* [4883] */
    (xdc_Char)0x3a,  /* [4884] */
    (xdc_Char)0x20,  /* [4885] */
    (xdc_Char)0x45,  /* [4886] */
    (xdc_Char)0x72,  /* [4887] */
    (xdc_Char)0x72,  /* [4888] */
    (xdc_Char)0x6f,  /* [4889] */
    (xdc_Char)0x72,  /* [4890] */
    (xdc_Char)0x43,  /* [4891] */
    (xdc_Char)0x6f,  /* [4892] */
    (xdc_Char)0x64,  /* [4893] */
    (xdc_Char)0x65,  /* [4894] */
    (xdc_Char)0x3a,  /* [4895] */
    (xdc_Char)0x30,  /* [4896] */
    (xdc_Char)0x78,  /* [4897] */
    (xdc_Char)0x25,  /* [4898] */
    (xdc_Char)0x78,  /* [4899] */
    (xdc_Char)0x0,  /* [4900] */
    (xdc_Char)0x45,  /* [4901] */
    (xdc_Char)0x52,  /* [4902] */
    (xdc_Char)0x52,  /* [4903] */
    (xdc_Char)0x4f,  /* [4904] */
    (xdc_Char)0x52,  /* [4905] */
    (xdc_Char)0x3a,  /* [4906] */
    (xdc_Char)0x20,  /* [4907] */
    (xdc_Char)0x45,  /* [4908] */
    (xdc_Char)0x72,  /* [4909] */
    (xdc_Char)0x72,  /* [4910] */
    (xdc_Char)0x6f,  /* [4911] */
    (xdc_Char)0x72,  /* [4912] */
    (xdc_Char)0x43,  /* [4913] */
    (xdc_Char)0x6f,  /* [4914] */
    (xdc_Char)0x64,  /* [4915] */
    (xdc_Char)0x65,  /* [4916] */
    (xdc_Char)0x3a,  /* [4917] */
    (xdc_Char)0x30,  /* [4918] */
    (xdc_Char)0x78,  /* [4919] */
    (xdc_Char)0x25,  /* [4920] */
    (xdc_Char)0x78,  /* [4921] */
    (xdc_Char)0x2e,  /* [4922] */
    (xdc_Char)0x20,  /* [4923] */
    (xdc_Char)0x25,  /* [4924] */
    (xdc_Char)0x24,  /* [4925] */
    (xdc_Char)0x53,  /* [4926] */
    (xdc_Char)0x0,  /* [4927] */
    (xdc_Char)0x48,  /* [4928] */
    (xdc_Char)0x57,  /* [4929] */
    (xdc_Char)0x20,  /* [4930] */
    (xdc_Char)0x45,  /* [4931] */
    (xdc_Char)0x52,  /* [4932] */
    (xdc_Char)0x52,  /* [4933] */
    (xdc_Char)0x4f,  /* [4934] */
    (xdc_Char)0x52,  /* [4935] */
    (xdc_Char)0x3a,  /* [4936] */
    (xdc_Char)0x20,  /* [4937] */
    (xdc_Char)0x45,  /* [4938] */
    (xdc_Char)0x72,  /* [4939] */
    (xdc_Char)0x72,  /* [4940] */
    (xdc_Char)0x6f,  /* [4941] */
    (xdc_Char)0x72,  /* [4942] */
    (xdc_Char)0x43,  /* [4943] */
    (xdc_Char)0x6f,  /* [4944] */
    (xdc_Char)0x64,  /* [4945] */
    (xdc_Char)0x65,  /* [4946] */
    (xdc_Char)0x3a,  /* [4947] */
    (xdc_Char)0x30,  /* [4948] */
    (xdc_Char)0x78,  /* [4949] */
    (xdc_Char)0x25,  /* [4950] */
    (xdc_Char)0x78,  /* [4951] */
    (xdc_Char)0x0,  /* [4952] */
    (xdc_Char)0x48,  /* [4953] */
    (xdc_Char)0x57,  /* [4954] */
    (xdc_Char)0x20,  /* [4955] */
    (xdc_Char)0x45,  /* [4956] */
    (xdc_Char)0x52,  /* [4957] */
    (xdc_Char)0x52,  /* [4958] */
    (xdc_Char)0x4f,  /* [4959] */
    (xdc_Char)0x52,  /* [4960] */
    (xdc_Char)0x3a,  /* [4961] */
    (xdc_Char)0x20,  /* [4962] */
    (xdc_Char)0x45,  /* [4963] */
    (xdc_Char)0x72,  /* [4964] */
    (xdc_Char)0x72,  /* [4965] */
    (xdc_Char)0x6f,  /* [4966] */
    (xdc_Char)0x72,  /* [4967] */
    (xdc_Char)0x43,  /* [4968] */
    (xdc_Char)0x6f,  /* [4969] */
    (xdc_Char)0x64,  /* [4970] */
    (xdc_Char)0x65,  /* [4971] */
    (xdc_Char)0x3a,  /* [4972] */
    (xdc_Char)0x30,  /* [4973] */
    (xdc_Char)0x78,  /* [4974] */
    (xdc_Char)0x25,  /* [4975] */
    (xdc_Char)0x78,  /* [4976] */
    (xdc_Char)0x2e,  /* [4977] */
    (xdc_Char)0x20,  /* [4978] */
    (xdc_Char)0x25,  /* [4979] */
    (xdc_Char)0x24,  /* [4980] */
    (xdc_Char)0x53,  /* [4981] */
    (xdc_Char)0x0,  /* [4982] */
    (xdc_Char)0x46,  /* [4983] */
    (xdc_Char)0x41,  /* [4984] */
    (xdc_Char)0x54,  /* [4985] */
    (xdc_Char)0x41,  /* [4986] */
    (xdc_Char)0x4c,  /* [4987] */
    (xdc_Char)0x20,  /* [4988] */
    (xdc_Char)0x45,  /* [4989] */
    (xdc_Char)0x52,  /* [4990] */
    (xdc_Char)0x52,  /* [4991] */
    (xdc_Char)0x4f,  /* [4992] */
    (xdc_Char)0x52,  /* [4993] */
    (xdc_Char)0x3a,  /* [4994] */
    (xdc_Char)0x20,  /* [4995] */
    (xdc_Char)0x45,  /* [4996] */
    (xdc_Char)0x72,  /* [4997] */
    (xdc_Char)0x72,  /* [4998] */
    (xdc_Char)0x6f,  /* [4999] */
    (xdc_Char)0x72,  /* [5000] */
    (xdc_Char)0x43,  /* [5001] */
    (xdc_Char)0x6f,  /* [5002] */
    (xdc_Char)0x64,  /* [5003] */
    (xdc_Char)0x65,  /* [5004] */
    (xdc_Char)0x3a,  /* [5005] */
    (xdc_Char)0x30,  /* [5006] */
    (xdc_Char)0x78,  /* [5007] */
    (xdc_Char)0x25,  /* [5008] */
    (xdc_Char)0x78,  /* [5009] */
    (xdc_Char)0x0,  /* [5010] */
    (xdc_Char)0x46,  /* [5011] */
    (xdc_Char)0x41,  /* [5012] */
    (xdc_Char)0x54,  /* [5013] */
    (xdc_Char)0x41,  /* [5014] */
    (xdc_Char)0x4c,  /* [5015] */
    (xdc_Char)0x20,  /* [5016] */
    (xdc_Char)0x45,  /* [5017] */
    (xdc_Char)0x52,  /* [5018] */
    (xdc_Char)0x52,  /* [5019] */
    (xdc_Char)0x4f,  /* [5020] */
    (xdc_Char)0x52,  /* [5021] */
    (xdc_Char)0x3a,  /* [5022] */
    (xdc_Char)0x20,  /* [5023] */
    (xdc_Char)0x45,  /* [5024] */
    (xdc_Char)0x72,  /* [5025] */
    (xdc_Char)0x72,  /* [5026] */
    (xdc_Char)0x6f,  /* [5027] */
    (xdc_Char)0x72,  /* [5028] */
    (xdc_Char)0x43,  /* [5029] */
    (xdc_Char)0x6f,  /* [5030] */
    (xdc_Char)0x64,  /* [5031] */
    (xdc_Char)0x65,  /* [5032] */
    (xdc_Char)0x3a,  /* [5033] */
    (xdc_Char)0x30,  /* [5034] */
    (xdc_Char)0x78,  /* [5035] */
    (xdc_Char)0x25,  /* [5036] */
    (xdc_Char)0x78,  /* [5037] */
    (xdc_Char)0x2e,  /* [5038] */
    (xdc_Char)0x20,  /* [5039] */
    (xdc_Char)0x25,  /* [5040] */
    (xdc_Char)0x24,  /* [5041] */
    (xdc_Char)0x53,  /* [5042] */
    (xdc_Char)0x0,  /* [5043] */
    (xdc_Char)0x43,  /* [5044] */
    (xdc_Char)0x52,  /* [5045] */
    (xdc_Char)0x49,  /* [5046] */
    (xdc_Char)0x54,  /* [5047] */
    (xdc_Char)0x49,  /* [5048] */
    (xdc_Char)0x43,  /* [5049] */
    (xdc_Char)0x41,  /* [5050] */
    (xdc_Char)0x4c,  /* [5051] */
    (xdc_Char)0x20,  /* [5052] */
    (xdc_Char)0x45,  /* [5053] */
    (xdc_Char)0x52,  /* [5054] */
    (xdc_Char)0x52,  /* [5055] */
    (xdc_Char)0x4f,  /* [5056] */
    (xdc_Char)0x52,  /* [5057] */
    (xdc_Char)0x3a,  /* [5058] */
    (xdc_Char)0x20,  /* [5059] */
    (xdc_Char)0x45,  /* [5060] */
    (xdc_Char)0x72,  /* [5061] */
    (xdc_Char)0x72,  /* [5062] */
    (xdc_Char)0x6f,  /* [5063] */
    (xdc_Char)0x72,  /* [5064] */
    (xdc_Char)0x43,  /* [5065] */
    (xdc_Char)0x6f,  /* [5066] */
    (xdc_Char)0x64,  /* [5067] */
    (xdc_Char)0x65,  /* [5068] */
    (xdc_Char)0x3a,  /* [5069] */
    (xdc_Char)0x30,  /* [5070] */
    (xdc_Char)0x78,  /* [5071] */
    (xdc_Char)0x25,  /* [5072] */
    (xdc_Char)0x78,  /* [5073] */
    (xdc_Char)0x0,  /* [5074] */
    (xdc_Char)0x43,  /* [5075] */
    (xdc_Char)0x52,  /* [5076] */
    (xdc_Char)0x49,  /* [5077] */
    (xdc_Char)0x54,  /* [5078] */
    (xdc_Char)0x49,  /* [5079] */
    (xdc_Char)0x43,  /* [5080] */
    (xdc_Char)0x41,  /* [5081] */
    (xdc_Char)0x4c,  /* [5082] */
    (xdc_Char)0x20,  /* [5083] */
    (xdc_Char)0x45,  /* [5084] */
    (xdc_Char)0x52,  /* [5085] */
    (xdc_Char)0x52,  /* [5086] */
    (xdc_Char)0x4f,  /* [5087] */
    (xdc_Char)0x52,  /* [5088] */
    (xdc_Char)0x3a,  /* [5089] */
    (xdc_Char)0x20,  /* [5090] */
    (xdc_Char)0x45,  /* [5091] */
    (xdc_Char)0x72,  /* [5092] */
    (xdc_Char)0x72,  /* [5093] */
    (xdc_Char)0x6f,  /* [5094] */
    (xdc_Char)0x72,  /* [5095] */
    (xdc_Char)0x43,  /* [5096] */
    (xdc_Char)0x6f,  /* [5097] */
    (xdc_Char)0x64,  /* [5098] */
    (xdc_Char)0x65,  /* [5099] */
    (xdc_Char)0x3a,  /* [5100] */
    (xdc_Char)0x30,  /* [5101] */
    (xdc_Char)0x78,  /* [5102] */
    (xdc_Char)0x25,  /* [5103] */
    (xdc_Char)0x78,  /* [5104] */
    (xdc_Char)0x2e,  /* [5105] */
    (xdc_Char)0x20,  /* [5106] */
    (xdc_Char)0x25,  /* [5107] */
    (xdc_Char)0x24,  /* [5108] */
    (xdc_Char)0x53,  /* [5109] */
    (xdc_Char)0x0,  /* [5110] */
    (xdc_Char)0x45,  /* [5111] */
    (xdc_Char)0x52,  /* [5112] */
    (xdc_Char)0x52,  /* [5113] */
    (xdc_Char)0x4f,  /* [5114] */
    (xdc_Char)0x52,  /* [5115] */
    (xdc_Char)0x3a,  /* [5116] */
    (xdc_Char)0x20,  /* [5117] */
    (xdc_Char)0x45,  /* [5118] */
    (xdc_Char)0x78,  /* [5119] */
    (xdc_Char)0x63,  /* [5120] */
    (xdc_Char)0x65,  /* [5121] */
    (xdc_Char)0x70,  /* [5122] */
    (xdc_Char)0x74,  /* [5123] */
    (xdc_Char)0x69,  /* [5124] */
    (xdc_Char)0x6f,  /* [5125] */
    (xdc_Char)0x6e,  /* [5126] */
    (xdc_Char)0x20,  /* [5127] */
    (xdc_Char)0x61,  /* [5128] */
    (xdc_Char)0x74,  /* [5129] */
    (xdc_Char)0x20,  /* [5130] */
    (xdc_Char)0x25,  /* [5131] */
    (xdc_Char)0x24,  /* [5132] */
    (xdc_Char)0x46,  /* [5133] */
    (xdc_Char)0x2e,  /* [5134] */
    (xdc_Char)0x0,  /* [5135] */
    (xdc_Char)0x45,  /* [5136] */
    (xdc_Char)0x52,  /* [5137] */
    (xdc_Char)0x52,  /* [5138] */
    (xdc_Char)0x4f,  /* [5139] */
    (xdc_Char)0x52,  /* [5140] */
    (xdc_Char)0x3a,  /* [5141] */
    (xdc_Char)0x20,  /* [5142] */
    (xdc_Char)0x55,  /* [5143] */
    (xdc_Char)0x6e,  /* [5144] */
    (xdc_Char)0x63,  /* [5145] */
    (xdc_Char)0x61,  /* [5146] */
    (xdc_Char)0x75,  /* [5147] */
    (xdc_Char)0x67,  /* [5148] */
    (xdc_Char)0x68,  /* [5149] */
    (xdc_Char)0x74,  /* [5150] */
    (xdc_Char)0x20,  /* [5151] */
    (xdc_Char)0x45,  /* [5152] */
    (xdc_Char)0x78,  /* [5153] */
    (xdc_Char)0x63,  /* [5154] */
    (xdc_Char)0x65,  /* [5155] */
    (xdc_Char)0x70,  /* [5156] */
    (xdc_Char)0x74,  /* [5157] */
    (xdc_Char)0x69,  /* [5158] */
    (xdc_Char)0x6f,  /* [5159] */
    (xdc_Char)0x6e,  /* [5160] */
    (xdc_Char)0x20,  /* [5161] */
    (xdc_Char)0x61,  /* [5162] */
    (xdc_Char)0x74,  /* [5163] */
    (xdc_Char)0x20,  /* [5164] */
    (xdc_Char)0x25,  /* [5165] */
    (xdc_Char)0x24,  /* [5166] */
    (xdc_Char)0x46,  /* [5167] */
    (xdc_Char)0x2e,  /* [5168] */
    (xdc_Char)0x0,  /* [5169] */
    (xdc_Char)0x45,  /* [5170] */
    (xdc_Char)0x52,  /* [5171] */
    (xdc_Char)0x52,  /* [5172] */
    (xdc_Char)0x4f,  /* [5173] */
    (xdc_Char)0x52,  /* [5174] */
    (xdc_Char)0x3a,  /* [5175] */
    (xdc_Char)0x20,  /* [5176] */
    (xdc_Char)0x4e,  /* [5177] */
    (xdc_Char)0x75,  /* [5178] */
    (xdc_Char)0x6c,  /* [5179] */
    (xdc_Char)0x6c,  /* [5180] */
    (xdc_Char)0x20,  /* [5181] */
    (xdc_Char)0x50,  /* [5182] */
    (xdc_Char)0x6f,  /* [5183] */
    (xdc_Char)0x69,  /* [5184] */
    (xdc_Char)0x6e,  /* [5185] */
    (xdc_Char)0x74,  /* [5186] */
    (xdc_Char)0x65,  /* [5187] */
    (xdc_Char)0x72,  /* [5188] */
    (xdc_Char)0x20,  /* [5189] */
    (xdc_Char)0x45,  /* [5190] */
    (xdc_Char)0x78,  /* [5191] */
    (xdc_Char)0x63,  /* [5192] */
    (xdc_Char)0x65,  /* [5193] */
    (xdc_Char)0x70,  /* [5194] */
    (xdc_Char)0x74,  /* [5195] */
    (xdc_Char)0x69,  /* [5196] */
    (xdc_Char)0x6f,  /* [5197] */
    (xdc_Char)0x6e,  /* [5198] */
    (xdc_Char)0x20,  /* [5199] */
    (xdc_Char)0x61,  /* [5200] */
    (xdc_Char)0x74,  /* [5201] */
    (xdc_Char)0x20,  /* [5202] */
    (xdc_Char)0x25,  /* [5203] */
    (xdc_Char)0x24,  /* [5204] */
    (xdc_Char)0x46,  /* [5205] */
    (xdc_Char)0x2e,  /* [5206] */
    (xdc_Char)0x0,  /* [5207] */
    (xdc_Char)0x45,  /* [5208] */
    (xdc_Char)0x52,  /* [5209] */
    (xdc_Char)0x52,  /* [5210] */
    (xdc_Char)0x4f,  /* [5211] */
    (xdc_Char)0x52,  /* [5212] */
    (xdc_Char)0x3a,  /* [5213] */
    (xdc_Char)0x20,  /* [5214] */
    (xdc_Char)0x55,  /* [5215] */
    (xdc_Char)0x6e,  /* [5216] */
    (xdc_Char)0x65,  /* [5217] */
    (xdc_Char)0x78,  /* [5218] */
    (xdc_Char)0x70,  /* [5219] */
    (xdc_Char)0x65,  /* [5220] */
    (xdc_Char)0x63,  /* [5221] */
    (xdc_Char)0x74,  /* [5222] */
    (xdc_Char)0x65,  /* [5223] */
    (xdc_Char)0x64,  /* [5224] */
    (xdc_Char)0x20,  /* [5225] */
    (xdc_Char)0x49,  /* [5226] */
    (xdc_Char)0x6e,  /* [5227] */
    (xdc_Char)0x74,  /* [5228] */
    (xdc_Char)0x65,  /* [5229] */
    (xdc_Char)0x72,  /* [5230] */
    (xdc_Char)0x72,  /* [5231] */
    (xdc_Char)0x75,  /* [5232] */
    (xdc_Char)0x70,  /* [5233] */
    (xdc_Char)0x74,  /* [5234] */
    (xdc_Char)0x20,  /* [5235] */
    (xdc_Char)0x61,  /* [5236] */
    (xdc_Char)0x74,  /* [5237] */
    (xdc_Char)0x20,  /* [5238] */
    (xdc_Char)0x25,  /* [5239] */
    (xdc_Char)0x24,  /* [5240] */
    (xdc_Char)0x46,  /* [5241] */
    (xdc_Char)0x2e,  /* [5242] */
    (xdc_Char)0x0,  /* [5243] */
    (xdc_Char)0x45,  /* [5244] */
    (xdc_Char)0x52,  /* [5245] */
    (xdc_Char)0x52,  /* [5246] */
    (xdc_Char)0x4f,  /* [5247] */
    (xdc_Char)0x52,  /* [5248] */
    (xdc_Char)0x3a,  /* [5249] */
    (xdc_Char)0x20,  /* [5250] */
    (xdc_Char)0x4d,  /* [5251] */
    (xdc_Char)0x65,  /* [5252] */
    (xdc_Char)0x6d,  /* [5253] */
    (xdc_Char)0x6f,  /* [5254] */
    (xdc_Char)0x72,  /* [5255] */
    (xdc_Char)0x79,  /* [5256] */
    (xdc_Char)0x20,  /* [5257] */
    (xdc_Char)0x41,  /* [5258] */
    (xdc_Char)0x63,  /* [5259] */
    (xdc_Char)0x63,  /* [5260] */
    (xdc_Char)0x65,  /* [5261] */
    (xdc_Char)0x73,  /* [5262] */
    (xdc_Char)0x73,  /* [5263] */
    (xdc_Char)0x20,  /* [5264] */
    (xdc_Char)0x46,  /* [5265] */
    (xdc_Char)0x61,  /* [5266] */
    (xdc_Char)0x75,  /* [5267] */
    (xdc_Char)0x6c,  /* [5268] */
    (xdc_Char)0x74,  /* [5269] */
    (xdc_Char)0x20,  /* [5270] */
    (xdc_Char)0x61,  /* [5271] */
    (xdc_Char)0x74,  /* [5272] */
    (xdc_Char)0x20,  /* [5273] */
    (xdc_Char)0x25,  /* [5274] */
    (xdc_Char)0x24,  /* [5275] */
    (xdc_Char)0x46,  /* [5276] */
    (xdc_Char)0x2e,  /* [5277] */
    (xdc_Char)0x20,  /* [5278] */
    (xdc_Char)0x5b,  /* [5279] */
    (xdc_Char)0x41,  /* [5280] */
    (xdc_Char)0x44,  /* [5281] */
    (xdc_Char)0x52,  /* [5282] */
    (xdc_Char)0x53,  /* [5283] */
    (xdc_Char)0x5d,  /* [5284] */
    (xdc_Char)0x30,  /* [5285] */
    (xdc_Char)0x78,  /* [5286] */
    (xdc_Char)0x25,  /* [5287] */
    (xdc_Char)0x78,  /* [5288] */
    (xdc_Char)0x0,  /* [5289] */
    (xdc_Char)0x45,  /* [5290] */
    (xdc_Char)0x52,  /* [5291] */
    (xdc_Char)0x52,  /* [5292] */
    (xdc_Char)0x4f,  /* [5293] */
    (xdc_Char)0x52,  /* [5294] */
    (xdc_Char)0x3a,  /* [5295] */
    (xdc_Char)0x20,  /* [5296] */
    (xdc_Char)0x53,  /* [5297] */
    (xdc_Char)0x65,  /* [5298] */
    (xdc_Char)0x63,  /* [5299] */
    (xdc_Char)0x75,  /* [5300] */
    (xdc_Char)0x72,  /* [5301] */
    (xdc_Char)0x69,  /* [5302] */
    (xdc_Char)0x74,  /* [5303] */
    (xdc_Char)0x79,  /* [5304] */
    (xdc_Char)0x20,  /* [5305] */
    (xdc_Char)0x45,  /* [5306] */
    (xdc_Char)0x78,  /* [5307] */
    (xdc_Char)0x63,  /* [5308] */
    (xdc_Char)0x65,  /* [5309] */
    (xdc_Char)0x70,  /* [5310] */
    (xdc_Char)0x74,  /* [5311] */
    (xdc_Char)0x69,  /* [5312] */
    (xdc_Char)0x6f,  /* [5313] */
    (xdc_Char)0x6e,  /* [5314] */
    (xdc_Char)0x20,  /* [5315] */
    (xdc_Char)0x61,  /* [5316] */
    (xdc_Char)0x74,  /* [5317] */
    (xdc_Char)0x20,  /* [5318] */
    (xdc_Char)0x25,  /* [5319] */
    (xdc_Char)0x24,  /* [5320] */
    (xdc_Char)0x46,  /* [5321] */
    (xdc_Char)0x2e,  /* [5322] */
    (xdc_Char)0x0,  /* [5323] */
    (xdc_Char)0x45,  /* [5324] */
    (xdc_Char)0x52,  /* [5325] */
    (xdc_Char)0x52,  /* [5326] */
    (xdc_Char)0x4f,  /* [5327] */
    (xdc_Char)0x52,  /* [5328] */
    (xdc_Char)0x3a,  /* [5329] */
    (xdc_Char)0x20,  /* [5330] */
    (xdc_Char)0x44,  /* [5331] */
    (xdc_Char)0x69,  /* [5332] */
    (xdc_Char)0x76,  /* [5333] */
    (xdc_Char)0x69,  /* [5334] */
    (xdc_Char)0x73,  /* [5335] */
    (xdc_Char)0x69,  /* [5336] */
    (xdc_Char)0x6f,  /* [5337] */
    (xdc_Char)0x6e,  /* [5338] */
    (xdc_Char)0x20,  /* [5339] */
    (xdc_Char)0x62,  /* [5340] */
    (xdc_Char)0x79,  /* [5341] */
    (xdc_Char)0x20,  /* [5342] */
    (xdc_Char)0x7a,  /* [5343] */
    (xdc_Char)0x65,  /* [5344] */
    (xdc_Char)0x72,  /* [5345] */
    (xdc_Char)0x6f,  /* [5346] */
    (xdc_Char)0x20,  /* [5347] */
    (xdc_Char)0x61,  /* [5348] */
    (xdc_Char)0x74,  /* [5349] */
    (xdc_Char)0x20,  /* [5350] */
    (xdc_Char)0x25,  /* [5351] */
    (xdc_Char)0x24,  /* [5352] */
    (xdc_Char)0x46,  /* [5353] */
    (xdc_Char)0x2e,  /* [5354] */
    (xdc_Char)0x0,  /* [5355] */
    (xdc_Char)0x45,  /* [5356] */
    (xdc_Char)0x52,  /* [5357] */
    (xdc_Char)0x52,  /* [5358] */
    (xdc_Char)0x4f,  /* [5359] */
    (xdc_Char)0x52,  /* [5360] */
    (xdc_Char)0x3a,  /* [5361] */
    (xdc_Char)0x20,  /* [5362] */
    (xdc_Char)0x4f,  /* [5363] */
    (xdc_Char)0x76,  /* [5364] */
    (xdc_Char)0x65,  /* [5365] */
    (xdc_Char)0x72,  /* [5366] */
    (xdc_Char)0x66,  /* [5367] */
    (xdc_Char)0x6c,  /* [5368] */
    (xdc_Char)0x6f,  /* [5369] */
    (xdc_Char)0x77,  /* [5370] */
    (xdc_Char)0x20,  /* [5371] */
    (xdc_Char)0x65,  /* [5372] */
    (xdc_Char)0x78,  /* [5373] */
    (xdc_Char)0x63,  /* [5374] */
    (xdc_Char)0x65,  /* [5375] */
    (xdc_Char)0x70,  /* [5376] */
    (xdc_Char)0x74,  /* [5377] */
    (xdc_Char)0x69,  /* [5378] */
    (xdc_Char)0x6f,  /* [5379] */
    (xdc_Char)0x6e,  /* [5380] */
    (xdc_Char)0x20,  /* [5381] */
    (xdc_Char)0x61,  /* [5382] */
    (xdc_Char)0x74,  /* [5383] */
    (xdc_Char)0x20,  /* [5384] */
    (xdc_Char)0x25,  /* [5385] */
    (xdc_Char)0x24,  /* [5386] */
    (xdc_Char)0x46,  /* [5387] */
    (xdc_Char)0x2e,  /* [5388] */
    (xdc_Char)0x0,  /* [5389] */
    (xdc_Char)0x45,  /* [5390] */
    (xdc_Char)0x52,  /* [5391] */
    (xdc_Char)0x52,  /* [5392] */
    (xdc_Char)0x4f,  /* [5393] */
    (xdc_Char)0x52,  /* [5394] */
    (xdc_Char)0x3a,  /* [5395] */
    (xdc_Char)0x20,  /* [5396] */
    (xdc_Char)0x49,  /* [5397] */
    (xdc_Char)0x6e,  /* [5398] */
    (xdc_Char)0x64,  /* [5399] */
    (xdc_Char)0x65,  /* [5400] */
    (xdc_Char)0x78,  /* [5401] */
    (xdc_Char)0x20,  /* [5402] */
    (xdc_Char)0x6f,  /* [5403] */
    (xdc_Char)0x75,  /* [5404] */
    (xdc_Char)0x74,  /* [5405] */
    (xdc_Char)0x20,  /* [5406] */
    (xdc_Char)0x6f,  /* [5407] */
    (xdc_Char)0x66,  /* [5408] */
    (xdc_Char)0x20,  /* [5409] */
    (xdc_Char)0x72,  /* [5410] */
    (xdc_Char)0x61,  /* [5411] */
    (xdc_Char)0x6e,  /* [5412] */
    (xdc_Char)0x67,  /* [5413] */
    (xdc_Char)0x65,  /* [5414] */
    (xdc_Char)0x20,  /* [5415] */
    (xdc_Char)0x61,  /* [5416] */
    (xdc_Char)0x74,  /* [5417] */
    (xdc_Char)0x20,  /* [5418] */
    (xdc_Char)0x25,  /* [5419] */
    (xdc_Char)0x24,  /* [5420] */
    (xdc_Char)0x46,  /* [5421] */
    (xdc_Char)0x2e,  /* [5422] */
    (xdc_Char)0x20,  /* [5423] */
    (xdc_Char)0x5b,  /* [5424] */
    (xdc_Char)0x49,  /* [5425] */
    (xdc_Char)0x4e,  /* [5426] */
    (xdc_Char)0x44,  /* [5427] */
    (xdc_Char)0x45,  /* [5428] */
    (xdc_Char)0x58,  /* [5429] */
    (xdc_Char)0x5d,  /* [5430] */
    (xdc_Char)0x30,  /* [5431] */
    (xdc_Char)0x78,  /* [5432] */
    (xdc_Char)0x25,  /* [5433] */
    (xdc_Char)0x78,  /* [5434] */
    (xdc_Char)0x0,  /* [5435] */
    (xdc_Char)0x45,  /* [5436] */
    (xdc_Char)0x52,  /* [5437] */
    (xdc_Char)0x52,  /* [5438] */
    (xdc_Char)0x4f,  /* [5439] */
    (xdc_Char)0x52,  /* [5440] */
    (xdc_Char)0x3a,  /* [5441] */
    (xdc_Char)0x20,  /* [5442] */
    (xdc_Char)0x41,  /* [5443] */
    (xdc_Char)0x74,  /* [5444] */
    (xdc_Char)0x74,  /* [5445] */
    (xdc_Char)0x65,  /* [5446] */
    (xdc_Char)0x6d,  /* [5447] */
    (xdc_Char)0x70,  /* [5448] */
    (xdc_Char)0x74,  /* [5449] */
    (xdc_Char)0x20,  /* [5450] */
    (xdc_Char)0x74,  /* [5451] */
    (xdc_Char)0x6f,  /* [5452] */
    (xdc_Char)0x20,  /* [5453] */
    (xdc_Char)0x61,  /* [5454] */
    (xdc_Char)0x63,  /* [5455] */
    (xdc_Char)0x63,  /* [5456] */
    (xdc_Char)0x65,  /* [5457] */
    (xdc_Char)0x73,  /* [5458] */
    (xdc_Char)0x73,  /* [5459] */
    (xdc_Char)0x20,  /* [5460] */
    (xdc_Char)0x66,  /* [5461] */
    (xdc_Char)0x65,  /* [5462] */
    (xdc_Char)0x61,  /* [5463] */
    (xdc_Char)0x74,  /* [5464] */
    (xdc_Char)0x75,  /* [5465] */
    (xdc_Char)0x72,  /* [5466] */
    (xdc_Char)0x65,  /* [5467] */
    (xdc_Char)0x20,  /* [5468] */
    (xdc_Char)0x74,  /* [5469] */
    (xdc_Char)0x68,  /* [5470] */
    (xdc_Char)0x61,  /* [5471] */
    (xdc_Char)0x74,  /* [5472] */
    (xdc_Char)0x20,  /* [5473] */
    (xdc_Char)0x69,  /* [5474] */
    (xdc_Char)0x73,  /* [5475] */
    (xdc_Char)0x20,  /* [5476] */
    (xdc_Char)0x6e,  /* [5477] */
    (xdc_Char)0x6f,  /* [5478] */
    (xdc_Char)0x74,  /* [5479] */
    (xdc_Char)0x20,  /* [5480] */
    (xdc_Char)0x69,  /* [5481] */
    (xdc_Char)0x6d,  /* [5482] */
    (xdc_Char)0x70,  /* [5483] */
    (xdc_Char)0x6c,  /* [5484] */
    (xdc_Char)0x65,  /* [5485] */
    (xdc_Char)0x6d,  /* [5486] */
    (xdc_Char)0x65,  /* [5487] */
    (xdc_Char)0x6e,  /* [5488] */
    (xdc_Char)0x74,  /* [5489] */
    (xdc_Char)0x65,  /* [5490] */
    (xdc_Char)0x64,  /* [5491] */
    (xdc_Char)0x20,  /* [5492] */
    (xdc_Char)0x61,  /* [5493] */
    (xdc_Char)0x74,  /* [5494] */
    (xdc_Char)0x20,  /* [5495] */
    (xdc_Char)0x25,  /* [5496] */
    (xdc_Char)0x24,  /* [5497] */
    (xdc_Char)0x46,  /* [5498] */
    (xdc_Char)0x2e,  /* [5499] */
    (xdc_Char)0x0,  /* [5500] */
    (xdc_Char)0x45,  /* [5501] */
    (xdc_Char)0x52,  /* [5502] */
    (xdc_Char)0x52,  /* [5503] */
    (xdc_Char)0x4f,  /* [5504] */
    (xdc_Char)0x52,  /* [5505] */
    (xdc_Char)0x3a,  /* [5506] */
    (xdc_Char)0x20,  /* [5507] */
    (xdc_Char)0x53,  /* [5508] */
    (xdc_Char)0x74,  /* [5509] */
    (xdc_Char)0x61,  /* [5510] */
    (xdc_Char)0x63,  /* [5511] */
    (xdc_Char)0x6b,  /* [5512] */
    (xdc_Char)0x20,  /* [5513] */
    (xdc_Char)0x4f,  /* [5514] */
    (xdc_Char)0x76,  /* [5515] */
    (xdc_Char)0x65,  /* [5516] */
    (xdc_Char)0x72,  /* [5517] */
    (xdc_Char)0x66,  /* [5518] */
    (xdc_Char)0x6c,  /* [5519] */
    (xdc_Char)0x6f,  /* [5520] */
    (xdc_Char)0x77,  /* [5521] */
    (xdc_Char)0x20,  /* [5522] */
    (xdc_Char)0x64,  /* [5523] */
    (xdc_Char)0x65,  /* [5524] */
    (xdc_Char)0x74,  /* [5525] */
    (xdc_Char)0x65,  /* [5526] */
    (xdc_Char)0x63,  /* [5527] */
    (xdc_Char)0x74,  /* [5528] */
    (xdc_Char)0x65,  /* [5529] */
    (xdc_Char)0x64,  /* [5530] */
    (xdc_Char)0x20,  /* [5531] */
    (xdc_Char)0x61,  /* [5532] */
    (xdc_Char)0x74,  /* [5533] */
    (xdc_Char)0x20,  /* [5534] */
    (xdc_Char)0x25,  /* [5535] */
    (xdc_Char)0x24,  /* [5536] */
    (xdc_Char)0x46,  /* [5537] */
    (xdc_Char)0x2e,  /* [5538] */
    (xdc_Char)0x0,  /* [5539] */
    (xdc_Char)0x45,  /* [5540] */
    (xdc_Char)0x52,  /* [5541] */
    (xdc_Char)0x52,  /* [5542] */
    (xdc_Char)0x4f,  /* [5543] */
    (xdc_Char)0x52,  /* [5544] */
    (xdc_Char)0x3a,  /* [5545] */
    (xdc_Char)0x20,  /* [5546] */
    (xdc_Char)0x49,  /* [5547] */
    (xdc_Char)0x6c,  /* [5548] */
    (xdc_Char)0x6c,  /* [5549] */
    (xdc_Char)0x65,  /* [5550] */
    (xdc_Char)0x67,  /* [5551] */
    (xdc_Char)0x61,  /* [5552] */
    (xdc_Char)0x6c,  /* [5553] */
    (xdc_Char)0x20,  /* [5554] */
    (xdc_Char)0x49,  /* [5555] */
    (xdc_Char)0x6e,  /* [5556] */
    (xdc_Char)0x73,  /* [5557] */
    (xdc_Char)0x74,  /* [5558] */
    (xdc_Char)0x72,  /* [5559] */
    (xdc_Char)0x75,  /* [5560] */
    (xdc_Char)0x63,  /* [5561] */
    (xdc_Char)0x74,  /* [5562] */
    (xdc_Char)0x69,  /* [5563] */
    (xdc_Char)0x6f,  /* [5564] */
    (xdc_Char)0x6e,  /* [5565] */
    (xdc_Char)0x20,  /* [5566] */
    (xdc_Char)0x65,  /* [5567] */
    (xdc_Char)0x78,  /* [5568] */
    (xdc_Char)0x65,  /* [5569] */
    (xdc_Char)0x63,  /* [5570] */
    (xdc_Char)0x75,  /* [5571] */
    (xdc_Char)0x74,  /* [5572] */
    (xdc_Char)0x65,  /* [5573] */
    (xdc_Char)0x64,  /* [5574] */
    (xdc_Char)0x20,  /* [5575] */
    (xdc_Char)0x61,  /* [5576] */
    (xdc_Char)0x74,  /* [5577] */
    (xdc_Char)0x20,  /* [5578] */
    (xdc_Char)0x25,  /* [5579] */
    (xdc_Char)0x24,  /* [5580] */
    (xdc_Char)0x46,  /* [5581] */
    (xdc_Char)0x2e,  /* [5582] */
    (xdc_Char)0x0,  /* [5583] */
    (xdc_Char)0x45,  /* [5584] */
    (xdc_Char)0x52,  /* [5585] */
    (xdc_Char)0x52,  /* [5586] */
    (xdc_Char)0x4f,  /* [5587] */
    (xdc_Char)0x52,  /* [5588] */
    (xdc_Char)0x3a,  /* [5589] */
    (xdc_Char)0x20,  /* [5590] */
    (xdc_Char)0x45,  /* [5591] */
    (xdc_Char)0x6e,  /* [5592] */
    (xdc_Char)0x74,  /* [5593] */
    (xdc_Char)0x72,  /* [5594] */
    (xdc_Char)0x79,  /* [5595] */
    (xdc_Char)0x20,  /* [5596] */
    (xdc_Char)0x50,  /* [5597] */
    (xdc_Char)0x6f,  /* [5598] */
    (xdc_Char)0x69,  /* [5599] */
    (xdc_Char)0x6e,  /* [5600] */
    (xdc_Char)0x74,  /* [5601] */
    (xdc_Char)0x20,  /* [5602] */
    (xdc_Char)0x4e,  /* [5603] */
    (xdc_Char)0x6f,  /* [5604] */
    (xdc_Char)0x74,  /* [5605] */
    (xdc_Char)0x20,  /* [5606] */
    (xdc_Char)0x46,  /* [5607] */
    (xdc_Char)0x6f,  /* [5608] */
    (xdc_Char)0x75,  /* [5609] */
    (xdc_Char)0x6e,  /* [5610] */
    (xdc_Char)0x64,  /* [5611] */
    (xdc_Char)0x20,  /* [5612] */
    (xdc_Char)0x61,  /* [5613] */
    (xdc_Char)0x74,  /* [5614] */
    (xdc_Char)0x20,  /* [5615] */
    (xdc_Char)0x25,  /* [5616] */
    (xdc_Char)0x24,  /* [5617] */
    (xdc_Char)0x46,  /* [5618] */
    (xdc_Char)0x2e,  /* [5619] */
    (xdc_Char)0x0,  /* [5620] */
    (xdc_Char)0x45,  /* [5621] */
    (xdc_Char)0x52,  /* [5622] */
    (xdc_Char)0x52,  /* [5623] */
    (xdc_Char)0x4f,  /* [5624] */
    (xdc_Char)0x52,  /* [5625] */
    (xdc_Char)0x3a,  /* [5626] */
    (xdc_Char)0x20,  /* [5627] */
    (xdc_Char)0x4d,  /* [5628] */
    (xdc_Char)0x6f,  /* [5629] */
    (xdc_Char)0x64,  /* [5630] */
    (xdc_Char)0x75,  /* [5631] */
    (xdc_Char)0x6c,  /* [5632] */
    (xdc_Char)0x65,  /* [5633] */
    (xdc_Char)0x20,  /* [5634] */
    (xdc_Char)0x6e,  /* [5635] */
    (xdc_Char)0x6f,  /* [5636] */
    (xdc_Char)0x74,  /* [5637] */
    (xdc_Char)0x20,  /* [5638] */
    (xdc_Char)0x66,  /* [5639] */
    (xdc_Char)0x6f,  /* [5640] */
    (xdc_Char)0x75,  /* [5641] */
    (xdc_Char)0x6e,  /* [5642] */
    (xdc_Char)0x64,  /* [5643] */
    (xdc_Char)0x20,  /* [5644] */
    (xdc_Char)0x61,  /* [5645] */
    (xdc_Char)0x74,  /* [5646] */
    (xdc_Char)0x20,  /* [5647] */
    (xdc_Char)0x25,  /* [5648] */
    (xdc_Char)0x24,  /* [5649] */
    (xdc_Char)0x46,  /* [5650] */
    (xdc_Char)0x2e,  /* [5651] */
    (xdc_Char)0x20,  /* [5652] */
    (xdc_Char)0x5b,  /* [5653] */
    (xdc_Char)0x4d,  /* [5654] */
    (xdc_Char)0x4f,  /* [5655] */
    (xdc_Char)0x44,  /* [5656] */
    (xdc_Char)0x55,  /* [5657] */
    (xdc_Char)0x4c,  /* [5658] */
    (xdc_Char)0x45,  /* [5659] */
    (xdc_Char)0x5f,  /* [5660] */
    (xdc_Char)0x49,  /* [5661] */
    (xdc_Char)0x44,  /* [5662] */
    (xdc_Char)0x5d,  /* [5663] */
    (xdc_Char)0x30,  /* [5664] */
    (xdc_Char)0x78,  /* [5665] */
    (xdc_Char)0x25,  /* [5666] */
    (xdc_Char)0x78,  /* [5667] */
    (xdc_Char)0x2e,  /* [5668] */
    (xdc_Char)0x0,  /* [5669] */
    (xdc_Char)0x45,  /* [5670] */
    (xdc_Char)0x52,  /* [5671] */
    (xdc_Char)0x52,  /* [5672] */
    (xdc_Char)0x4f,  /* [5673] */
    (xdc_Char)0x52,  /* [5674] */
    (xdc_Char)0x3a,  /* [5675] */
    (xdc_Char)0x20,  /* [5676] */
    (xdc_Char)0x46,  /* [5677] */
    (xdc_Char)0x6c,  /* [5678] */
    (xdc_Char)0x6f,  /* [5679] */
    (xdc_Char)0x61,  /* [5680] */
    (xdc_Char)0x74,  /* [5681] */
    (xdc_Char)0x69,  /* [5682] */
    (xdc_Char)0x6e,  /* [5683] */
    (xdc_Char)0x67,  /* [5684] */
    (xdc_Char)0x20,  /* [5685] */
    (xdc_Char)0x50,  /* [5686] */
    (xdc_Char)0x6f,  /* [5687] */
    (xdc_Char)0x69,  /* [5688] */
    (xdc_Char)0x6e,  /* [5689] */
    (xdc_Char)0x74,  /* [5690] */
    (xdc_Char)0x20,  /* [5691] */
    (xdc_Char)0x45,  /* [5692] */
    (xdc_Char)0x72,  /* [5693] */
    (xdc_Char)0x72,  /* [5694] */
    (xdc_Char)0x6f,  /* [5695] */
    (xdc_Char)0x72,  /* [5696] */
    (xdc_Char)0x20,  /* [5697] */
    (xdc_Char)0x61,  /* [5698] */
    (xdc_Char)0x74,  /* [5699] */
    (xdc_Char)0x20,  /* [5700] */
    (xdc_Char)0x25,  /* [5701] */
    (xdc_Char)0x24,  /* [5702] */
    (xdc_Char)0x46,  /* [5703] */
    (xdc_Char)0x2e,  /* [5704] */
    (xdc_Char)0x0,  /* [5705] */
    (xdc_Char)0x45,  /* [5706] */
    (xdc_Char)0x52,  /* [5707] */
    (xdc_Char)0x52,  /* [5708] */
    (xdc_Char)0x4f,  /* [5709] */
    (xdc_Char)0x52,  /* [5710] */
    (xdc_Char)0x3a,  /* [5711] */
    (xdc_Char)0x20,  /* [5712] */
    (xdc_Char)0x49,  /* [5713] */
    (xdc_Char)0x6e,  /* [5714] */
    (xdc_Char)0x76,  /* [5715] */
    (xdc_Char)0x61,  /* [5716] */
    (xdc_Char)0x6c,  /* [5717] */
    (xdc_Char)0x69,  /* [5718] */
    (xdc_Char)0x64,  /* [5719] */
    (xdc_Char)0x20,  /* [5720] */
    (xdc_Char)0x50,  /* [5721] */
    (xdc_Char)0x61,  /* [5722] */
    (xdc_Char)0x72,  /* [5723] */
    (xdc_Char)0x61,  /* [5724] */
    (xdc_Char)0x6d,  /* [5725] */
    (xdc_Char)0x65,  /* [5726] */
    (xdc_Char)0x74,  /* [5727] */
    (xdc_Char)0x65,  /* [5728] */
    (xdc_Char)0x72,  /* [5729] */
    (xdc_Char)0x20,  /* [5730] */
    (xdc_Char)0x61,  /* [5731] */
    (xdc_Char)0x74,  /* [5732] */
    (xdc_Char)0x20,  /* [5733] */
    (xdc_Char)0x25,  /* [5734] */
    (xdc_Char)0x24,  /* [5735] */
    (xdc_Char)0x46,  /* [5736] */
    (xdc_Char)0x2e,  /* [5737] */
    (xdc_Char)0x20,  /* [5738] */
    (xdc_Char)0x5b,  /* [5739] */
    (xdc_Char)0x50,  /* [5740] */
    (xdc_Char)0x61,  /* [5741] */
    (xdc_Char)0x72,  /* [5742] */
    (xdc_Char)0x61,  /* [5743] */
    (xdc_Char)0x6d,  /* [5744] */
    (xdc_Char)0x4e,  /* [5745] */
    (xdc_Char)0x75,  /* [5746] */
    (xdc_Char)0x6d,  /* [5747] */
    (xdc_Char)0x5d,  /* [5748] */
    (xdc_Char)0x25,  /* [5749] */
    (xdc_Char)0x64,  /* [5750] */
    (xdc_Char)0x20,  /* [5751] */
    (xdc_Char)0x5b,  /* [5752] */
    (xdc_Char)0x50,  /* [5753] */
    (xdc_Char)0x61,  /* [5754] */
    (xdc_Char)0x72,  /* [5755] */
    (xdc_Char)0x61,  /* [5756] */
    (xdc_Char)0x6d,  /* [5757] */
    (xdc_Char)0x56,  /* [5758] */
    (xdc_Char)0x61,  /* [5759] */
    (xdc_Char)0x6c,  /* [5760] */
    (xdc_Char)0x75,  /* [5761] */
    (xdc_Char)0x65,  /* [5762] */
    (xdc_Char)0x5d,  /* [5763] */
    (xdc_Char)0x30,  /* [5764] */
    (xdc_Char)0x78,  /* [5765] */
    (xdc_Char)0x25,  /* [5766] */
    (xdc_Char)0x78,  /* [5767] */
    (xdc_Char)0x0,  /* [5768] */
    (xdc_Char)0x57,  /* [5769] */
    (xdc_Char)0x41,  /* [5770] */
    (xdc_Char)0x52,  /* [5771] */
    (xdc_Char)0x4e,  /* [5772] */
    (xdc_Char)0x49,  /* [5773] */
    (xdc_Char)0x4e,  /* [5774] */
    (xdc_Char)0x47,  /* [5775] */
    (xdc_Char)0x3a,  /* [5776] */
    (xdc_Char)0x20,  /* [5777] */
    (xdc_Char)0x45,  /* [5778] */
    (xdc_Char)0x76,  /* [5779] */
    (xdc_Char)0x65,  /* [5780] */
    (xdc_Char)0x6e,  /* [5781] */
    (xdc_Char)0x74,  /* [5782] */
    (xdc_Char)0x43,  /* [5783] */
    (xdc_Char)0x6f,  /* [5784] */
    (xdc_Char)0x64,  /* [5785] */
    (xdc_Char)0x65,  /* [5786] */
    (xdc_Char)0x3a,  /* [5787] */
    (xdc_Char)0x30,  /* [5788] */
    (xdc_Char)0x78,  /* [5789] */
    (xdc_Char)0x25,  /* [5790] */
    (xdc_Char)0x78,  /* [5791] */
    (xdc_Char)0x0,  /* [5792] */
    (xdc_Char)0x57,  /* [5793] */
    (xdc_Char)0x41,  /* [5794] */
    (xdc_Char)0x52,  /* [5795] */
    (xdc_Char)0x4e,  /* [5796] */
    (xdc_Char)0x49,  /* [5797] */
    (xdc_Char)0x4e,  /* [5798] */
    (xdc_Char)0x47,  /* [5799] */
    (xdc_Char)0x3a,  /* [5800] */
    (xdc_Char)0x20,  /* [5801] */
    (xdc_Char)0x45,  /* [5802] */
    (xdc_Char)0x76,  /* [5803] */
    (xdc_Char)0x65,  /* [5804] */
    (xdc_Char)0x6e,  /* [5805] */
    (xdc_Char)0x74,  /* [5806] */
    (xdc_Char)0x43,  /* [5807] */
    (xdc_Char)0x6f,  /* [5808] */
    (xdc_Char)0x64,  /* [5809] */
    (xdc_Char)0x65,  /* [5810] */
    (xdc_Char)0x3a,  /* [5811] */
    (xdc_Char)0x30,  /* [5812] */
    (xdc_Char)0x78,  /* [5813] */
    (xdc_Char)0x25,  /* [5814] */
    (xdc_Char)0x78,  /* [5815] */
    (xdc_Char)0x2e,  /* [5816] */
    (xdc_Char)0x20,  /* [5817] */
    (xdc_Char)0x25,  /* [5818] */
    (xdc_Char)0x24,  /* [5819] */
    (xdc_Char)0x53,  /* [5820] */
    (xdc_Char)0x0,  /* [5821] */
    (xdc_Char)0x49,  /* [5822] */
    (xdc_Char)0x4e,  /* [5823] */
    (xdc_Char)0x46,  /* [5824] */
    (xdc_Char)0x4f,  /* [5825] */
    (xdc_Char)0x3a,  /* [5826] */
    (xdc_Char)0x20,  /* [5827] */
    (xdc_Char)0x45,  /* [5828] */
    (xdc_Char)0x76,  /* [5829] */
    (xdc_Char)0x65,  /* [5830] */
    (xdc_Char)0x6e,  /* [5831] */
    (xdc_Char)0x74,  /* [5832] */
    (xdc_Char)0x43,  /* [5833] */
    (xdc_Char)0x6f,  /* [5834] */
    (xdc_Char)0x64,  /* [5835] */
    (xdc_Char)0x65,  /* [5836] */
    (xdc_Char)0x3a,  /* [5837] */
    (xdc_Char)0x20,  /* [5838] */
    (xdc_Char)0x30,  /* [5839] */
    (xdc_Char)0x78,  /* [5840] */
    (xdc_Char)0x25,  /* [5841] */
    (xdc_Char)0x78,  /* [5842] */
    (xdc_Char)0x0,  /* [5843] */
    (xdc_Char)0x49,  /* [5844] */
    (xdc_Char)0x4e,  /* [5845] */
    (xdc_Char)0x46,  /* [5846] */
    (xdc_Char)0x4f,  /* [5847] */
    (xdc_Char)0x3a,  /* [5848] */
    (xdc_Char)0x20,  /* [5849] */
    (xdc_Char)0x45,  /* [5850] */
    (xdc_Char)0x76,  /* [5851] */
    (xdc_Char)0x65,  /* [5852] */
    (xdc_Char)0x6e,  /* [5853] */
    (xdc_Char)0x74,  /* [5854] */
    (xdc_Char)0x43,  /* [5855] */
    (xdc_Char)0x6f,  /* [5856] */
    (xdc_Char)0x64,  /* [5857] */
    (xdc_Char)0x65,  /* [5858] */
    (xdc_Char)0x3a,  /* [5859] */
    (xdc_Char)0x30,  /* [5860] */
    (xdc_Char)0x78,  /* [5861] */
    (xdc_Char)0x25,  /* [5862] */
    (xdc_Char)0x78,  /* [5863] */
    (xdc_Char)0x2e,  /* [5864] */
    (xdc_Char)0x20,  /* [5865] */
    (xdc_Char)0x20,  /* [5866] */
    (xdc_Char)0x25,  /* [5867] */
    (xdc_Char)0x24,  /* [5868] */
    (xdc_Char)0x53,  /* [5869] */
    (xdc_Char)0x0,  /* [5870] */
    (xdc_Char)0x44,  /* [5871] */
    (xdc_Char)0x45,  /* [5872] */
    (xdc_Char)0x54,  /* [5873] */
    (xdc_Char)0x41,  /* [5874] */
    (xdc_Char)0x49,  /* [5875] */
    (xdc_Char)0x4c,  /* [5876] */
    (xdc_Char)0x3a,  /* [5877] */
    (xdc_Char)0x20,  /* [5878] */
    (xdc_Char)0x45,  /* [5879] */
    (xdc_Char)0x76,  /* [5880] */
    (xdc_Char)0x65,  /* [5881] */
    (xdc_Char)0x6e,  /* [5882] */
    (xdc_Char)0x74,  /* [5883] */
    (xdc_Char)0x43,  /* [5884] */
    (xdc_Char)0x6f,  /* [5885] */
    (xdc_Char)0x64,  /* [5886] */
    (xdc_Char)0x65,  /* [5887] */
    (xdc_Char)0x3a,  /* [5888] */
    (xdc_Char)0x30,  /* [5889] */
    (xdc_Char)0x78,  /* [5890] */
    (xdc_Char)0x25,  /* [5891] */
    (xdc_Char)0x78,  /* [5892] */
    (xdc_Char)0x0,  /* [5893] */
    (xdc_Char)0x44,  /* [5894] */
    (xdc_Char)0x45,  /* [5895] */
    (xdc_Char)0x54,  /* [5896] */
    (xdc_Char)0x41,  /* [5897] */
    (xdc_Char)0x49,  /* [5898] */
    (xdc_Char)0x4c,  /* [5899] */
    (xdc_Char)0x3a,  /* [5900] */
    (xdc_Char)0x20,  /* [5901] */
    (xdc_Char)0x45,  /* [5902] */
    (xdc_Char)0x76,  /* [5903] */
    (xdc_Char)0x65,  /* [5904] */
    (xdc_Char)0x6e,  /* [5905] */
    (xdc_Char)0x74,  /* [5906] */
    (xdc_Char)0x43,  /* [5907] */
    (xdc_Char)0x6f,  /* [5908] */
    (xdc_Char)0x64,  /* [5909] */
    (xdc_Char)0x65,  /* [5910] */
    (xdc_Char)0x3a,  /* [5911] */
    (xdc_Char)0x30,  /* [5912] */
    (xdc_Char)0x78,  /* [5913] */
    (xdc_Char)0x25,  /* [5914] */
    (xdc_Char)0x78,  /* [5915] */
    (xdc_Char)0x2e,  /* [5916] */
    (xdc_Char)0x20,  /* [5917] */
    (xdc_Char)0x20,  /* [5918] */
    (xdc_Char)0x25,  /* [5919] */
    (xdc_Char)0x24,  /* [5920] */
    (xdc_Char)0x53,  /* [5921] */
    (xdc_Char)0x0,  /* [5922] */
    (xdc_Char)0x56,  /* [5923] */
    (xdc_Char)0x41,  /* [5924] */
    (xdc_Char)0x4c,  /* [5925] */
    (xdc_Char)0x55,  /* [5926] */
    (xdc_Char)0x45,  /* [5927] */
    (xdc_Char)0x3d,  /* [5928] */
    (xdc_Char)0x25,  /* [5929] */
    (xdc_Char)0x64,  /* [5930] */
    (xdc_Char)0x20,  /* [5931] */
    (xdc_Char)0x28,  /* [5932] */
    (xdc_Char)0x41,  /* [5933] */
    (xdc_Char)0x75,  /* [5934] */
    (xdc_Char)0x78,  /* [5935] */
    (xdc_Char)0x44,  /* [5936] */
    (xdc_Char)0x61,  /* [5937] */
    (xdc_Char)0x74,  /* [5938] */
    (xdc_Char)0x61,  /* [5939] */
    (xdc_Char)0x3d,  /* [5940] */
    (xdc_Char)0x25,  /* [5941] */
    (xdc_Char)0x64,  /* [5942] */
    (xdc_Char)0x2c,  /* [5943] */
    (xdc_Char)0x20,  /* [5944] */
    (xdc_Char)0x25,  /* [5945] */
    (xdc_Char)0x64,  /* [5946] */
    (xdc_Char)0x29,  /* [5947] */
    (xdc_Char)0x20,  /* [5948] */
    (xdc_Char)0x4b,  /* [5949] */
    (xdc_Char)0x65,  /* [5950] */
    (xdc_Char)0x79,  /* [5951] */
    (xdc_Char)0x3a,  /* [5952] */
    (xdc_Char)0x25,  /* [5953] */
    (xdc_Char)0x24,  /* [5954] */
    (xdc_Char)0x53,  /* [5955] */
    (xdc_Char)0x0,  /* [5956] */
    (xdc_Char)0x52,  /* [5957] */
    (xdc_Char)0x6f,  /* [5958] */
    (xdc_Char)0x75,  /* [5959] */
    (xdc_Char)0x6e,  /* [5960] */
    (xdc_Char)0x64,  /* [5961] */
    (xdc_Char)0x74,  /* [5962] */
    (xdc_Char)0x72,  /* [5963] */
    (xdc_Char)0x69,  /* [5964] */
    (xdc_Char)0x70,  /* [5965] */
    (xdc_Char)0x5f,  /* [5966] */
    (xdc_Char)0x53,  /* [5967] */
    (xdc_Char)0x74,  /* [5968] */
    (xdc_Char)0x61,  /* [5969] */
    (xdc_Char)0x72,  /* [5970] */
    (xdc_Char)0x74,  /* [5971] */
    (xdc_Char)0x3a,  /* [5972] */
    (xdc_Char)0x20,  /* [5973] */
    (xdc_Char)0x25,  /* [5974] */
    (xdc_Char)0x24,  /* [5975] */
    (xdc_Char)0x53,  /* [5976] */
    (xdc_Char)0x0,  /* [5977] */
    (xdc_Char)0x52,  /* [5978] */
    (xdc_Char)0x6f,  /* [5979] */
    (xdc_Char)0x75,  /* [5980] */
    (xdc_Char)0x6e,  /* [5981] */
    (xdc_Char)0x64,  /* [5982] */
    (xdc_Char)0x74,  /* [5983] */
    (xdc_Char)0x72,  /* [5984] */
    (xdc_Char)0x69,  /* [5985] */
    (xdc_Char)0x70,  /* [5986] */
    (xdc_Char)0x5f,  /* [5987] */
    (xdc_Char)0x53,  /* [5988] */
    (xdc_Char)0x74,  /* [5989] */
    (xdc_Char)0x6f,  /* [5990] */
    (xdc_Char)0x70,  /* [5991] */
    (xdc_Char)0x3a,  /* [5992] */
    (xdc_Char)0x20,  /* [5993] */
    (xdc_Char)0x25,  /* [5994] */
    (xdc_Char)0x24,  /* [5995] */
    (xdc_Char)0x53,  /* [5996] */
    (xdc_Char)0x0,  /* [5997] */
    (xdc_Char)0x52,  /* [5998] */
    (xdc_Char)0x6f,  /* [5999] */
    (xdc_Char)0x75,  /* [6000] */
    (xdc_Char)0x6e,  /* [6001] */
    (xdc_Char)0x64,  /* [6002] */
    (xdc_Char)0x74,  /* [6003] */
    (xdc_Char)0x72,  /* [6004] */
    (xdc_Char)0x69,  /* [6005] */
    (xdc_Char)0x70,  /* [6006] */
    (xdc_Char)0x5f,  /* [6007] */
    (xdc_Char)0x53,  /* [6008] */
    (xdc_Char)0x74,  /* [6009] */
    (xdc_Char)0x61,  /* [6010] */
    (xdc_Char)0x72,  /* [6011] */
    (xdc_Char)0x74,  /* [6012] */
    (xdc_Char)0x49,  /* [6013] */
    (xdc_Char)0x6e,  /* [6014] */
    (xdc_Char)0x73,  /* [6015] */
    (xdc_Char)0x74,  /* [6016] */
    (xdc_Char)0x61,  /* [6017] */
    (xdc_Char)0x6e,  /* [6018] */
    (xdc_Char)0x63,  /* [6019] */
    (xdc_Char)0x65,  /* [6020] */
    (xdc_Char)0x3a,  /* [6021] */
    (xdc_Char)0x20,  /* [6022] */
    (xdc_Char)0x25,  /* [6023] */
    (xdc_Char)0x24,  /* [6024] */
    (xdc_Char)0x53,  /* [6025] */
    (xdc_Char)0x0,  /* [6026] */
    (xdc_Char)0x52,  /* [6027] */
    (xdc_Char)0x6f,  /* [6028] */
    (xdc_Char)0x75,  /* [6029] */
    (xdc_Char)0x6e,  /* [6030] */
    (xdc_Char)0x64,  /* [6031] */
    (xdc_Char)0x74,  /* [6032] */
    (xdc_Char)0x72,  /* [6033] */
    (xdc_Char)0x69,  /* [6034] */
    (xdc_Char)0x70,  /* [6035] */
    (xdc_Char)0x5f,  /* [6036] */
    (xdc_Char)0x53,  /* [6037] */
    (xdc_Char)0x74,  /* [6038] */
    (xdc_Char)0x6f,  /* [6039] */
    (xdc_Char)0x70,  /* [6040] */
    (xdc_Char)0x49,  /* [6041] */
    (xdc_Char)0x6e,  /* [6042] */
    (xdc_Char)0x73,  /* [6043] */
    (xdc_Char)0x74,  /* [6044] */
    (xdc_Char)0x61,  /* [6045] */
    (xdc_Char)0x6e,  /* [6046] */
    (xdc_Char)0x63,  /* [6047] */
    (xdc_Char)0x65,  /* [6048] */
    (xdc_Char)0x3a,  /* [6049] */
    (xdc_Char)0x20,  /* [6050] */
    (xdc_Char)0x25,  /* [6051] */
    (xdc_Char)0x24,  /* [6052] */
    (xdc_Char)0x53,  /* [6053] */
    (xdc_Char)0x0,  /* [6054] */
    (xdc_Char)0x52,  /* [6055] */
    (xdc_Char)0x6f,  /* [6056] */
    (xdc_Char)0x75,  /* [6057] */
    (xdc_Char)0x6e,  /* [6058] */
    (xdc_Char)0x64,  /* [6059] */
    (xdc_Char)0x74,  /* [6060] */
    (xdc_Char)0x72,  /* [6061] */
    (xdc_Char)0x69,  /* [6062] */
    (xdc_Char)0x70,  /* [6063] */
    (xdc_Char)0x5f,  /* [6064] */
    (xdc_Char)0x53,  /* [6065] */
    (xdc_Char)0x74,  /* [6066] */
    (xdc_Char)0x61,  /* [6067] */
    (xdc_Char)0x72,  /* [6068] */
    (xdc_Char)0x74,  /* [6069] */
    (xdc_Char)0x49,  /* [6070] */
    (xdc_Char)0x6e,  /* [6071] */
    (xdc_Char)0x73,  /* [6072] */
    (xdc_Char)0x74,  /* [6073] */
    (xdc_Char)0x61,  /* [6074] */
    (xdc_Char)0x6e,  /* [6075] */
    (xdc_Char)0x63,  /* [6076] */
    (xdc_Char)0x65,  /* [6077] */
    (xdc_Char)0x57,  /* [6078] */
    (xdc_Char)0x69,  /* [6079] */
    (xdc_Char)0x74,  /* [6080] */
    (xdc_Char)0x68,  /* [6081] */
    (xdc_Char)0x41,  /* [6082] */
    (xdc_Char)0x64,  /* [6083] */
    (xdc_Char)0x72,  /* [6084] */
    (xdc_Char)0x73,  /* [6085] */
    (xdc_Char)0x3a,  /* [6086] */
    (xdc_Char)0x20,  /* [6087] */
    (xdc_Char)0x25,  /* [6088] */
    (xdc_Char)0x24,  /* [6089] */
    (xdc_Char)0x53,  /* [6090] */
    (xdc_Char)0x0,  /* [6091] */
    (xdc_Char)0x52,  /* [6092] */
    (xdc_Char)0x6f,  /* [6093] */
    (xdc_Char)0x75,  /* [6094] */
    (xdc_Char)0x6e,  /* [6095] */
    (xdc_Char)0x64,  /* [6096] */
    (xdc_Char)0x74,  /* [6097] */
    (xdc_Char)0x72,  /* [6098] */
    (xdc_Char)0x69,  /* [6099] */
    (xdc_Char)0x70,  /* [6100] */
    (xdc_Char)0x5f,  /* [6101] */
    (xdc_Char)0x53,  /* [6102] */
    (xdc_Char)0x74,  /* [6103] */
    (xdc_Char)0x6f,  /* [6104] */
    (xdc_Char)0x70,  /* [6105] */
    (xdc_Char)0x49,  /* [6106] */
    (xdc_Char)0x6e,  /* [6107] */
    (xdc_Char)0x73,  /* [6108] */
    (xdc_Char)0x74,  /* [6109] */
    (xdc_Char)0x61,  /* [6110] */
    (xdc_Char)0x6e,  /* [6111] */
    (xdc_Char)0x63,  /* [6112] */
    (xdc_Char)0x65,  /* [6113] */
    (xdc_Char)0x57,  /* [6114] */
    (xdc_Char)0x69,  /* [6115] */
    (xdc_Char)0x74,  /* [6116] */
    (xdc_Char)0x68,  /* [6117] */
    (xdc_Char)0x41,  /* [6118] */
    (xdc_Char)0x64,  /* [6119] */
    (xdc_Char)0x72,  /* [6120] */
    (xdc_Char)0x73,  /* [6121] */
    (xdc_Char)0x3a,  /* [6122] */
    (xdc_Char)0x20,  /* [6123] */
    (xdc_Char)0x25,  /* [6124] */
    (xdc_Char)0x24,  /* [6125] */
    (xdc_Char)0x53,  /* [6126] */
    (xdc_Char)0x0,  /* [6127] */
    (xdc_Char)0x52,  /* [6128] */
    (xdc_Char)0x6f,  /* [6129] */
    (xdc_Char)0x75,  /* [6130] */
    (xdc_Char)0x6e,  /* [6131] */
    (xdc_Char)0x64,  /* [6132] */
    (xdc_Char)0x74,  /* [6133] */
    (xdc_Char)0x72,  /* [6134] */
    (xdc_Char)0x69,  /* [6135] */
    (xdc_Char)0x70,  /* [6136] */
    (xdc_Char)0x5f,  /* [6137] */
    (xdc_Char)0x53,  /* [6138] */
    (xdc_Char)0x74,  /* [6139] */
    (xdc_Char)0x61,  /* [6140] */
    (xdc_Char)0x72,  /* [6141] */
    (xdc_Char)0x74,  /* [6142] */
    (xdc_Char)0x49,  /* [6143] */
    (xdc_Char)0x6e,  /* [6144] */
    (xdc_Char)0x73,  /* [6145] */
    (xdc_Char)0x74,  /* [6146] */
    (xdc_Char)0x61,  /* [6147] */
    (xdc_Char)0x6e,  /* [6148] */
    (xdc_Char)0x63,  /* [6149] */
    (xdc_Char)0x65,  /* [6150] */
    (xdc_Char)0x57,  /* [6151] */
    (xdc_Char)0x69,  /* [6152] */
    (xdc_Char)0x74,  /* [6153] */
    (xdc_Char)0x68,  /* [6154] */
    (xdc_Char)0x53,  /* [6155] */
    (xdc_Char)0x74,  /* [6156] */
    (xdc_Char)0x72,  /* [6157] */
    (xdc_Char)0x3a,  /* [6158] */
    (xdc_Char)0x20,  /* [6159] */
    (xdc_Char)0x25,  /* [6160] */
    (xdc_Char)0x24,  /* [6161] */
    (xdc_Char)0x53,  /* [6162] */
    (xdc_Char)0x0,  /* [6163] */
    (xdc_Char)0x52,  /* [6164] */
    (xdc_Char)0x6f,  /* [6165] */
    (xdc_Char)0x75,  /* [6166] */
    (xdc_Char)0x6e,  /* [6167] */
    (xdc_Char)0x64,  /* [6168] */
    (xdc_Char)0x74,  /* [6169] */
    (xdc_Char)0x72,  /* [6170] */
    (xdc_Char)0x69,  /* [6171] */
    (xdc_Char)0x70,  /* [6172] */
    (xdc_Char)0x5f,  /* [6173] */
    (xdc_Char)0x53,  /* [6174] */
    (xdc_Char)0x74,  /* [6175] */
    (xdc_Char)0x6f,  /* [6176] */
    (xdc_Char)0x70,  /* [6177] */
    (xdc_Char)0x49,  /* [6178] */
    (xdc_Char)0x6e,  /* [6179] */
    (xdc_Char)0x73,  /* [6180] */
    (xdc_Char)0x74,  /* [6181] */
    (xdc_Char)0x61,  /* [6182] */
    (xdc_Char)0x6e,  /* [6183] */
    (xdc_Char)0x63,  /* [6184] */
    (xdc_Char)0x65,  /* [6185] */
    (xdc_Char)0x57,  /* [6186] */
    (xdc_Char)0x69,  /* [6187] */
    (xdc_Char)0x74,  /* [6188] */
    (xdc_Char)0x68,  /* [6189] */
    (xdc_Char)0x53,  /* [6190] */
    (xdc_Char)0x74,  /* [6191] */
    (xdc_Char)0x72,  /* [6192] */
    (xdc_Char)0x3a,  /* [6193] */
    (xdc_Char)0x20,  /* [6194] */
    (xdc_Char)0x25,  /* [6195] */
    (xdc_Char)0x24,  /* [6196] */
    (xdc_Char)0x53,  /* [6197] */
    (xdc_Char)0x0,  /* [6198] */
    (xdc_Char)0x43,  /* [6199] */
    (xdc_Char)0x50,  /* [6200] */
    (xdc_Char)0x55,  /* [6201] */
    (xdc_Char)0x20,  /* [6202] */
    (xdc_Char)0x4c,  /* [6203] */
    (xdc_Char)0x6f,  /* [6204] */
    (xdc_Char)0x61,  /* [6205] */
    (xdc_Char)0x64,  /* [6206] */
    (xdc_Char)0x3a,  /* [6207] */
    (xdc_Char)0x20,  /* [6208] */
    (xdc_Char)0x4e,  /* [6209] */
    (xdc_Char)0x75,  /* [6210] */
    (xdc_Char)0x6d,  /* [6211] */
    (xdc_Char)0x43,  /* [6212] */
    (xdc_Char)0x79,  /* [6213] */
    (xdc_Char)0x63,  /* [6214] */
    (xdc_Char)0x6c,  /* [6215] */
    (xdc_Char)0x65,  /* [6216] */
    (xdc_Char)0x73,  /* [6217] */
    (xdc_Char)0x3d,  /* [6218] */
    (xdc_Char)0x25,  /* [6219] */
    (xdc_Char)0x64,  /* [6220] */
    (xdc_Char)0x0,  /* [6221] */
    (xdc_Char)0x43,  /* [6222] */
    (xdc_Char)0x50,  /* [6223] */
    (xdc_Char)0x55,  /* [6224] */
    (xdc_Char)0x20,  /* [6225] */
    (xdc_Char)0x4c,  /* [6226] */
    (xdc_Char)0x6f,  /* [6227] */
    (xdc_Char)0x61,  /* [6228] */
    (xdc_Char)0x64,  /* [6229] */
    (xdc_Char)0x20,  /* [6230] */
    (xdc_Char)0x66,  /* [6231] */
    (xdc_Char)0x6f,  /* [6232] */
    (xdc_Char)0x72,  /* [6233] */
    (xdc_Char)0x20,  /* [6234] */
    (xdc_Char)0x25,  /* [6235] */
    (xdc_Char)0x73,  /* [6236] */
    (xdc_Char)0x20,  /* [6237] */
    (xdc_Char)0x28,  /* [6238] */
    (xdc_Char)0x69,  /* [6239] */
    (xdc_Char)0x6e,  /* [6240] */
    (xdc_Char)0x73,  /* [6241] */
    (xdc_Char)0x74,  /* [6242] */
    (xdc_Char)0x61,  /* [6243] */
    (xdc_Char)0x6e,  /* [6244] */
    (xdc_Char)0x63,  /* [6245] */
    (xdc_Char)0x65,  /* [6246] */
    (xdc_Char)0x49,  /* [6247] */
    (xdc_Char)0x64,  /* [6248] */
    (xdc_Char)0x20,  /* [6249] */
    (xdc_Char)0x3d,  /* [6250] */
    (xdc_Char)0x20,  /* [6251] */
    (xdc_Char)0x30,  /* [6252] */
    (xdc_Char)0x78,  /* [6253] */
    (xdc_Char)0x25,  /* [6254] */
    (xdc_Char)0x78,  /* [6255] */
    (xdc_Char)0x29,  /* [6256] */
    (xdc_Char)0x3a,  /* [6257] */
    (xdc_Char)0x20,  /* [6258] */
    (xdc_Char)0x4e,  /* [6259] */
    (xdc_Char)0x75,  /* [6260] */
    (xdc_Char)0x6d,  /* [6261] */
    (xdc_Char)0x43,  /* [6262] */
    (xdc_Char)0x79,  /* [6263] */
    (xdc_Char)0x63,  /* [6264] */
    (xdc_Char)0x6c,  /* [6265] */
    (xdc_Char)0x65,  /* [6266] */
    (xdc_Char)0x73,  /* [6267] */
    (xdc_Char)0x3d,  /* [6268] */
    (xdc_Char)0x25,  /* [6269] */
    (xdc_Char)0x64,  /* [6270] */
    (xdc_Char)0x0,  /* [6271] */
    (xdc_Char)0x42,  /* [6272] */
    (xdc_Char)0x79,  /* [6273] */
    (xdc_Char)0x74,  /* [6274] */
    (xdc_Char)0x65,  /* [6275] */
    (xdc_Char)0x73,  /* [6276] */
    (xdc_Char)0x20,  /* [6277] */
    (xdc_Char)0x50,  /* [6278] */
    (xdc_Char)0x72,  /* [6279] */
    (xdc_Char)0x6f,  /* [6280] */
    (xdc_Char)0x63,  /* [6281] */
    (xdc_Char)0x65,  /* [6282] */
    (xdc_Char)0x73,  /* [6283] */
    (xdc_Char)0x73,  /* [6284] */
    (xdc_Char)0x65,  /* [6285] */
    (xdc_Char)0x64,  /* [6286] */
    (xdc_Char)0x20,  /* [6287] */
    (xdc_Char)0x62,  /* [6288] */
    (xdc_Char)0x79,  /* [6289] */
    (xdc_Char)0x20,  /* [6290] */
    (xdc_Char)0x25,  /* [6291] */
    (xdc_Char)0x73,  /* [6292] */
    (xdc_Char)0x3a,  /* [6293] */
    (xdc_Char)0x20,  /* [6294] */
    (xdc_Char)0x4e,  /* [6295] */
    (xdc_Char)0x75,  /* [6296] */
    (xdc_Char)0x6d,  /* [6297] */
    (xdc_Char)0x42,  /* [6298] */
    (xdc_Char)0x79,  /* [6299] */
    (xdc_Char)0x74,  /* [6300] */
    (xdc_Char)0x65,  /* [6301] */
    (xdc_Char)0x73,  /* [6302] */
    (xdc_Char)0x3d,  /* [6303] */
    (xdc_Char)0x30,  /* [6304] */
    (xdc_Char)0x78,  /* [6305] */
    (xdc_Char)0x25,  /* [6306] */
    (xdc_Char)0x78,  /* [6307] */
    (xdc_Char)0x0,  /* [6308] */
    (xdc_Char)0x42,  /* [6309] */
    (xdc_Char)0x79,  /* [6310] */
    (xdc_Char)0x74,  /* [6311] */
    (xdc_Char)0x65,  /* [6312] */
    (xdc_Char)0x73,  /* [6313] */
    (xdc_Char)0x20,  /* [6314] */
    (xdc_Char)0x50,  /* [6315] */
    (xdc_Char)0x72,  /* [6316] */
    (xdc_Char)0x6f,  /* [6317] */
    (xdc_Char)0x63,  /* [6318] */
    (xdc_Char)0x65,  /* [6319] */
    (xdc_Char)0x73,  /* [6320] */
    (xdc_Char)0x73,  /* [6321] */
    (xdc_Char)0x65,  /* [6322] */
    (xdc_Char)0x64,  /* [6323] */
    (xdc_Char)0x20,  /* [6324] */
    (xdc_Char)0x61,  /* [6325] */
    (xdc_Char)0x74,  /* [6326] */
    (xdc_Char)0x20,  /* [6327] */
    (xdc_Char)0x25,  /* [6328] */
    (xdc_Char)0x24,  /* [6329] */
    (xdc_Char)0x46,  /* [6330] */
    (xdc_Char)0x20,  /* [6331] */
    (xdc_Char)0x28,  /* [6332] */
    (xdc_Char)0x49,  /* [6333] */
    (xdc_Char)0x6e,  /* [6334] */
    (xdc_Char)0x73,  /* [6335] */
    (xdc_Char)0x74,  /* [6336] */
    (xdc_Char)0x61,  /* [6337] */
    (xdc_Char)0x6e,  /* [6338] */
    (xdc_Char)0x63,  /* [6339] */
    (xdc_Char)0x65,  /* [6340] */
    (xdc_Char)0x49,  /* [6341] */
    (xdc_Char)0x64,  /* [6342] */
    (xdc_Char)0x20,  /* [6343] */
    (xdc_Char)0x30,  /* [6344] */
    (xdc_Char)0x78,  /* [6345] */
    (xdc_Char)0x25,  /* [6346] */
    (xdc_Char)0x78,  /* [6347] */
    (xdc_Char)0x29,  /* [6348] */
    (xdc_Char)0x3a,  /* [6349] */
    (xdc_Char)0x20,  /* [6350] */
    (xdc_Char)0x4e,  /* [6351] */
    (xdc_Char)0x75,  /* [6352] */
    (xdc_Char)0x6d,  /* [6353] */
    (xdc_Char)0x20,  /* [6354] */
    (xdc_Char)0x42,  /* [6355] */
    (xdc_Char)0x79,  /* [6356] */
    (xdc_Char)0x74,  /* [6357] */
    (xdc_Char)0x65,  /* [6358] */
    (xdc_Char)0x73,  /* [6359] */
    (xdc_Char)0x3d,  /* [6360] */
    (xdc_Char)0x25,  /* [6361] */
    (xdc_Char)0x64,  /* [6362] */
    (xdc_Char)0x0,  /* [6363] */
    (xdc_Char)0x57,  /* [6364] */
    (xdc_Char)0x6f,  /* [6365] */
    (xdc_Char)0x72,  /* [6366] */
    (xdc_Char)0x64,  /* [6367] */
    (xdc_Char)0x73,  /* [6368] */
    (xdc_Char)0x20,  /* [6369] */
    (xdc_Char)0x50,  /* [6370] */
    (xdc_Char)0x72,  /* [6371] */
    (xdc_Char)0x6f,  /* [6372] */
    (xdc_Char)0x63,  /* [6373] */
    (xdc_Char)0x65,  /* [6374] */
    (xdc_Char)0x73,  /* [6375] */
    (xdc_Char)0x73,  /* [6376] */
    (xdc_Char)0x65,  /* [6377] */
    (xdc_Char)0x64,  /* [6378] */
    (xdc_Char)0x20,  /* [6379] */
    (xdc_Char)0x62,  /* [6380] */
    (xdc_Char)0x79,  /* [6381] */
    (xdc_Char)0x20,  /* [6382] */
    (xdc_Char)0x25,  /* [6383] */
    (xdc_Char)0x73,  /* [6384] */
    (xdc_Char)0x3a,  /* [6385] */
    (xdc_Char)0x20,  /* [6386] */
    (xdc_Char)0x4e,  /* [6387] */
    (xdc_Char)0x75,  /* [6388] */
    (xdc_Char)0x6d,  /* [6389] */
    (xdc_Char)0x57,  /* [6390] */
    (xdc_Char)0x6f,  /* [6391] */
    (xdc_Char)0x72,  /* [6392] */
    (xdc_Char)0x64,  /* [6393] */
    (xdc_Char)0x73,  /* [6394] */
    (xdc_Char)0x3d,  /* [6395] */
    (xdc_Char)0x30,  /* [6396] */
    (xdc_Char)0x78,  /* [6397] */
    (xdc_Char)0x25,  /* [6398] */
    (xdc_Char)0x78,  /* [6399] */
    (xdc_Char)0x0,  /* [6400] */
    (xdc_Char)0x57,  /* [6401] */
    (xdc_Char)0x6f,  /* [6402] */
    (xdc_Char)0x72,  /* [6403] */
    (xdc_Char)0x64,  /* [6404] */
    (xdc_Char)0x73,  /* [6405] */
    (xdc_Char)0x20,  /* [6406] */
    (xdc_Char)0x50,  /* [6407] */
    (xdc_Char)0x72,  /* [6408] */
    (xdc_Char)0x6f,  /* [6409] */
    (xdc_Char)0x63,  /* [6410] */
    (xdc_Char)0x65,  /* [6411] */
    (xdc_Char)0x73,  /* [6412] */
    (xdc_Char)0x73,  /* [6413] */
    (xdc_Char)0x65,  /* [6414] */
    (xdc_Char)0x64,  /* [6415] */
    (xdc_Char)0x20,  /* [6416] */
    (xdc_Char)0x61,  /* [6417] */
    (xdc_Char)0x74,  /* [6418] */
    (xdc_Char)0x20,  /* [6419] */
    (xdc_Char)0x25,  /* [6420] */
    (xdc_Char)0x24,  /* [6421] */
    (xdc_Char)0x46,  /* [6422] */
    (xdc_Char)0x20,  /* [6423] */
    (xdc_Char)0x28,  /* [6424] */
    (xdc_Char)0x49,  /* [6425] */
    (xdc_Char)0x6e,  /* [6426] */
    (xdc_Char)0x73,  /* [6427] */
    (xdc_Char)0x74,  /* [6428] */
    (xdc_Char)0x61,  /* [6429] */
    (xdc_Char)0x6e,  /* [6430] */
    (xdc_Char)0x63,  /* [6431] */
    (xdc_Char)0x65,  /* [6432] */
    (xdc_Char)0x49,  /* [6433] */
    (xdc_Char)0x64,  /* [6434] */
    (xdc_Char)0x20,  /* [6435] */
    (xdc_Char)0x30,  /* [6436] */
    (xdc_Char)0x78,  /* [6437] */
    (xdc_Char)0x25,  /* [6438] */
    (xdc_Char)0x78,  /* [6439] */
    (xdc_Char)0x29,  /* [6440] */
    (xdc_Char)0x3a,  /* [6441] */
    (xdc_Char)0x20,  /* [6442] */
    (xdc_Char)0x4e,  /* [6443] */
    (xdc_Char)0x75,  /* [6444] */
    (xdc_Char)0x6d,  /* [6445] */
    (xdc_Char)0x20,  /* [6446] */
    (xdc_Char)0x57,  /* [6447] */
    (xdc_Char)0x6f,  /* [6448] */
    (xdc_Char)0x72,  /* [6449] */
    (xdc_Char)0x64,  /* [6450] */
    (xdc_Char)0x73,  /* [6451] */
    (xdc_Char)0x3d,  /* [6452] */
    (xdc_Char)0x25,  /* [6453] */
    (xdc_Char)0x64,  /* [6454] */
    (xdc_Char)0x0,  /* [6455] */
    (xdc_Char)0x48,  /* [6456] */
    (xdc_Char)0x65,  /* [6457] */
    (xdc_Char)0x61,  /* [6458] */
    (xdc_Char)0x70,  /* [6459] */
    (xdc_Char)0x20,  /* [6460] */
    (xdc_Char)0x61,  /* [6461] */
    (xdc_Char)0x74,  /* [6462] */
    (xdc_Char)0x20,  /* [6463] */
    (xdc_Char)0x25,  /* [6464] */
    (xdc_Char)0x24,  /* [6465] */
    (xdc_Char)0x46,  /* [6466] */
    (xdc_Char)0x20,  /* [6467] */
    (xdc_Char)0x28,  /* [6468] */
    (xdc_Char)0x48,  /* [6469] */
    (xdc_Char)0x65,  /* [6470] */
    (xdc_Char)0x61,  /* [6471] */
    (xdc_Char)0x70,  /* [6472] */
    (xdc_Char)0x49,  /* [6473] */
    (xdc_Char)0x64,  /* [6474] */
    (xdc_Char)0x20,  /* [6475] */
    (xdc_Char)0x30,  /* [6476] */
    (xdc_Char)0x78,  /* [6477] */
    (xdc_Char)0x25,  /* [6478] */
    (xdc_Char)0x78,  /* [6479] */
    (xdc_Char)0x29,  /* [6480] */
    (xdc_Char)0x3a,  /* [6481] */
    (xdc_Char)0x20,  /* [6482] */
    (xdc_Char)0x46,  /* [6483] */
    (xdc_Char)0x72,  /* [6484] */
    (xdc_Char)0x65,  /* [6485] */
    (xdc_Char)0x65,  /* [6486] */
    (xdc_Char)0x20,  /* [6487] */
    (xdc_Char)0x42,  /* [6488] */
    (xdc_Char)0x79,  /* [6489] */
    (xdc_Char)0x74,  /* [6490] */
    (xdc_Char)0x65,  /* [6491] */
    (xdc_Char)0x73,  /* [6492] */
    (xdc_Char)0x3d,  /* [6493] */
    (xdc_Char)0x25,  /* [6494] */
    (xdc_Char)0x64,  /* [6495] */
    (xdc_Char)0x0,  /* [6496] */
    (xdc_Char)0x53,  /* [6497] */
    (xdc_Char)0x79,  /* [6498] */
    (xdc_Char)0x6e,  /* [6499] */
    (xdc_Char)0x63,  /* [6500] */
    (xdc_Char)0x20,  /* [6501] */
    (xdc_Char)0x50,  /* [6502] */
    (xdc_Char)0x6f,  /* [6503] */
    (xdc_Char)0x69,  /* [6504] */
    (xdc_Char)0x6e,  /* [6505] */
    (xdc_Char)0x74,  /* [6506] */
    (xdc_Char)0x3a,  /* [6507] */
    (xdc_Char)0x20,  /* [6508] */
    (xdc_Char)0x20,  /* [6509] */
    (xdc_Char)0x53,  /* [6510] */
    (xdc_Char)0x65,  /* [6511] */
    (xdc_Char)0x72,  /* [6512] */
    (xdc_Char)0x69,  /* [6513] */
    (xdc_Char)0x61,  /* [6514] */
    (xdc_Char)0x6c,  /* [6515] */
    (xdc_Char)0x4e,  /* [6516] */
    (xdc_Char)0x75,  /* [6517] */
    (xdc_Char)0x6d,  /* [6518] */
    (xdc_Char)0x62,  /* [6519] */
    (xdc_Char)0x65,  /* [6520] */
    (xdc_Char)0x72,  /* [6521] */
    (xdc_Char)0x3d,  /* [6522] */
    (xdc_Char)0x30,  /* [6523] */
    (xdc_Char)0x78,  /* [6524] */
    (xdc_Char)0x25,  /* [6525] */
    (xdc_Char)0x78,  /* [6526] */
    (xdc_Char)0x2c,  /* [6527] */
    (xdc_Char)0x20,  /* [6528] */
    (xdc_Char)0x43,  /* [6529] */
    (xdc_Char)0x70,  /* [6530] */
    (xdc_Char)0x75,  /* [6531] */
    (xdc_Char)0x54,  /* [6532] */
    (xdc_Char)0x53,  /* [6533] */
    (xdc_Char)0x74,  /* [6534] */
    (xdc_Char)0x61,  /* [6535] */
    (xdc_Char)0x6d,  /* [6536] */
    (xdc_Char)0x70,  /* [6537] */
    (xdc_Char)0x20,  /* [6538] */
    (xdc_Char)0x5b,  /* [6539] */
    (xdc_Char)0x4c,  /* [6540] */
    (xdc_Char)0x53,  /* [6541] */
    (xdc_Char)0x57,  /* [6542] */
    (xdc_Char)0x3d,  /* [6543] */
    (xdc_Char)0x30,  /* [6544] */
    (xdc_Char)0x78,  /* [6545] */
    (xdc_Char)0x25,  /* [6546] */
    (xdc_Char)0x78,  /* [6547] */
    (xdc_Char)0x2c,  /* [6548] */
    (xdc_Char)0x20,  /* [6549] */
    (xdc_Char)0x4d,  /* [6550] */
    (xdc_Char)0x53,  /* [6551] */
    (xdc_Char)0x57,  /* [6552] */
    (xdc_Char)0x3d,  /* [6553] */
    (xdc_Char)0x30,  /* [6554] */
    (xdc_Char)0x78,  /* [6555] */
    (xdc_Char)0x25,  /* [6556] */
    (xdc_Char)0x78,  /* [6557] */
    (xdc_Char)0x5d,  /* [6558] */
    (xdc_Char)0x2c,  /* [6559] */
    (xdc_Char)0x20,  /* [6560] */
    (xdc_Char)0x47,  /* [6561] */
    (xdc_Char)0x6c,  /* [6562] */
    (xdc_Char)0x6f,  /* [6563] */
    (xdc_Char)0x62,  /* [6564] */
    (xdc_Char)0x61,  /* [6565] */
    (xdc_Char)0x6c,  /* [6566] */
    (xdc_Char)0x54,  /* [6567] */
    (xdc_Char)0x53,  /* [6568] */
    (xdc_Char)0x74,  /* [6569] */
    (xdc_Char)0x61,  /* [6570] */
    (xdc_Char)0x6d,  /* [6571] */
    (xdc_Char)0x70,  /* [6572] */
    (xdc_Char)0x20,  /* [6573] */
    (xdc_Char)0x5b,  /* [6574] */
    (xdc_Char)0x4c,  /* [6575] */
    (xdc_Char)0x53,  /* [6576] */
    (xdc_Char)0x57,  /* [6577] */
    (xdc_Char)0x3d,  /* [6578] */
    (xdc_Char)0x30,  /* [6579] */
    (xdc_Char)0x78,  /* [6580] */
    (xdc_Char)0x25,  /* [6581] */
    (xdc_Char)0x78,  /* [6582] */
    (xdc_Char)0x2c,  /* [6583] */
    (xdc_Char)0x20,  /* [6584] */
    (xdc_Char)0x4d,  /* [6585] */
    (xdc_Char)0x53,  /* [6586] */
    (xdc_Char)0x57,  /* [6587] */
    (xdc_Char)0x3d,  /* [6588] */
    (xdc_Char)0x30,  /* [6589] */
    (xdc_Char)0x78,  /* [6590] */
    (xdc_Char)0x25,  /* [6591] */
    (xdc_Char)0x78,  /* [6592] */
    (xdc_Char)0x5d,  /* [6593] */
    (xdc_Char)0x2c,  /* [6594] */
    (xdc_Char)0x20,  /* [6595] */
    (xdc_Char)0x43,  /* [6596] */
    (xdc_Char)0x70,  /* [6597] */
    (xdc_Char)0x75,  /* [6598] */
    (xdc_Char)0x43,  /* [6599] */
    (xdc_Char)0x79,  /* [6600] */
    (xdc_Char)0x63,  /* [6601] */
    (xdc_Char)0x6c,  /* [6602] */
    (xdc_Char)0x65,  /* [6603] */
    (xdc_Char)0x73,  /* [6604] */
    (xdc_Char)0x50,  /* [6605] */
    (xdc_Char)0x65,  /* [6606] */
    (xdc_Char)0x72,  /* [6607] */
    (xdc_Char)0x43,  /* [6608] */
    (xdc_Char)0x70,  /* [6609] */
    (xdc_Char)0x75,  /* [6610] */
    (xdc_Char)0x54,  /* [6611] */
    (xdc_Char)0x69,  /* [6612] */
    (xdc_Char)0x6d,  /* [6613] */
    (xdc_Char)0x65,  /* [6614] */
    (xdc_Char)0x72,  /* [6615] */
    (xdc_Char)0x54,  /* [6616] */
    (xdc_Char)0x69,  /* [6617] */
    (xdc_Char)0x63,  /* [6618] */
    (xdc_Char)0x6b,  /* [6619] */
    (xdc_Char)0x3d,  /* [6620] */
    (xdc_Char)0x25,  /* [6621] */
    (xdc_Char)0x64,  /* [6622] */
    (xdc_Char)0x2c,  /* [6623] */
    (xdc_Char)0x20,  /* [6624] */
    (xdc_Char)0x43,  /* [6625] */
    (xdc_Char)0x70,  /* [6626] */
    (xdc_Char)0x75,  /* [6627] */
    (xdc_Char)0x46,  /* [6628] */
    (xdc_Char)0x72,  /* [6629] */
    (xdc_Char)0x65,  /* [6630] */
    (xdc_Char)0x71,  /* [6631] */
    (xdc_Char)0x20,  /* [6632] */
    (xdc_Char)0x5b,  /* [6633] */
    (xdc_Char)0x4c,  /* [6634] */
    (xdc_Char)0x53,  /* [6635] */
    (xdc_Char)0x57,  /* [6636] */
    (xdc_Char)0x3d,  /* [6637] */
    (xdc_Char)0x30,  /* [6638] */
    (xdc_Char)0x78,  /* [6639] */
    (xdc_Char)0x25,  /* [6640] */
    (xdc_Char)0x78,  /* [6641] */
    (xdc_Char)0x2c,  /* [6642] */
    (xdc_Char)0x20,  /* [6643] */
    (xdc_Char)0x4d,  /* [6644] */
    (xdc_Char)0x53,  /* [6645] */
    (xdc_Char)0x57,  /* [6646] */
    (xdc_Char)0x3d,  /* [6647] */
    (xdc_Char)0x30,  /* [6648] */
    (xdc_Char)0x78,  /* [6649] */
    (xdc_Char)0x25,  /* [6650] */
    (xdc_Char)0x78,  /* [6651] */
    (xdc_Char)0x5d,  /* [6652] */
    (xdc_Char)0x0,  /* [6653] */
    (xdc_Char)0x53,  /* [6654] */
    (xdc_Char)0x79,  /* [6655] */
    (xdc_Char)0x6e,  /* [6656] */
    (xdc_Char)0x63,  /* [6657] */
    (xdc_Char)0x20,  /* [6658] */
    (xdc_Char)0x50,  /* [6659] */
    (xdc_Char)0x6f,  /* [6660] */
    (xdc_Char)0x69,  /* [6661] */
    (xdc_Char)0x6e,  /* [6662] */
    (xdc_Char)0x74,  /* [6663] */
    (xdc_Char)0x20,  /* [6664] */
    (xdc_Char)0x41,  /* [6665] */
    (xdc_Char)0x66,  /* [6666] */
    (xdc_Char)0x74,  /* [6667] */
    (xdc_Char)0x65,  /* [6668] */
    (xdc_Char)0x72,  /* [6669] */
    (xdc_Char)0x20,  /* [6670] */
    (xdc_Char)0x48,  /* [6671] */
    (xdc_Char)0x61,  /* [6672] */
    (xdc_Char)0x6c,  /* [6673] */
    (xdc_Char)0x74,  /* [6674] */
    (xdc_Char)0x3a,  /* [6675] */
    (xdc_Char)0x20,  /* [6676] */
    (xdc_Char)0x20,  /* [6677] */
    (xdc_Char)0x53,  /* [6678] */
    (xdc_Char)0x65,  /* [6679] */
    (xdc_Char)0x72,  /* [6680] */
    (xdc_Char)0x69,  /* [6681] */
    (xdc_Char)0x61,  /* [6682] */
    (xdc_Char)0x6c,  /* [6683] */
    (xdc_Char)0x4e,  /* [6684] */
    (xdc_Char)0x75,  /* [6685] */
    (xdc_Char)0x6d,  /* [6686] */
    (xdc_Char)0x62,  /* [6687] */
    (xdc_Char)0x65,  /* [6688] */
    (xdc_Char)0x72,  /* [6689] */
    (xdc_Char)0x3d,  /* [6690] */
    (xdc_Char)0x30,  /* [6691] */
    (xdc_Char)0x78,  /* [6692] */
    (xdc_Char)0x25,  /* [6693] */
    (xdc_Char)0x78,  /* [6694] */
    (xdc_Char)0x2c,  /* [6695] */
    (xdc_Char)0x20,  /* [6696] */
    (xdc_Char)0x43,  /* [6697] */
    (xdc_Char)0x70,  /* [6698] */
    (xdc_Char)0x75,  /* [6699] */
    (xdc_Char)0x54,  /* [6700] */
    (xdc_Char)0x53,  /* [6701] */
    (xdc_Char)0x74,  /* [6702] */
    (xdc_Char)0x61,  /* [6703] */
    (xdc_Char)0x6d,  /* [6704] */
    (xdc_Char)0x70,  /* [6705] */
    (xdc_Char)0x20,  /* [6706] */
    (xdc_Char)0x5b,  /* [6707] */
    (xdc_Char)0x4c,  /* [6708] */
    (xdc_Char)0x53,  /* [6709] */
    (xdc_Char)0x57,  /* [6710] */
    (xdc_Char)0x3d,  /* [6711] */
    (xdc_Char)0x30,  /* [6712] */
    (xdc_Char)0x78,  /* [6713] */
    (xdc_Char)0x25,  /* [6714] */
    (xdc_Char)0x78,  /* [6715] */
    (xdc_Char)0x2c,  /* [6716] */
    (xdc_Char)0x20,  /* [6717] */
    (xdc_Char)0x4d,  /* [6718] */
    (xdc_Char)0x53,  /* [6719] */
    (xdc_Char)0x57,  /* [6720] */
    (xdc_Char)0x3d,  /* [6721] */
    (xdc_Char)0x30,  /* [6722] */
    (xdc_Char)0x78,  /* [6723] */
    (xdc_Char)0x25,  /* [6724] */
    (xdc_Char)0x78,  /* [6725] */
    (xdc_Char)0x5d,  /* [6726] */
    (xdc_Char)0x2c,  /* [6727] */
    (xdc_Char)0x20,  /* [6728] */
    (xdc_Char)0x47,  /* [6729] */
    (xdc_Char)0x6c,  /* [6730] */
    (xdc_Char)0x6f,  /* [6731] */
    (xdc_Char)0x62,  /* [6732] */
    (xdc_Char)0x61,  /* [6733] */
    (xdc_Char)0x6c,  /* [6734] */
    (xdc_Char)0x54,  /* [6735] */
    (xdc_Char)0x53,  /* [6736] */
    (xdc_Char)0x74,  /* [6737] */
    (xdc_Char)0x61,  /* [6738] */
    (xdc_Char)0x6d,  /* [6739] */
    (xdc_Char)0x70,  /* [6740] */
    (xdc_Char)0x20,  /* [6741] */
    (xdc_Char)0x5b,  /* [6742] */
    (xdc_Char)0x4c,  /* [6743] */
    (xdc_Char)0x53,  /* [6744] */
    (xdc_Char)0x57,  /* [6745] */
    (xdc_Char)0x3d,  /* [6746] */
    (xdc_Char)0x30,  /* [6747] */
    (xdc_Char)0x78,  /* [6748] */
    (xdc_Char)0x25,  /* [6749] */
    (xdc_Char)0x78,  /* [6750] */
    (xdc_Char)0x2c,  /* [6751] */
    (xdc_Char)0x20,  /* [6752] */
    (xdc_Char)0x4d,  /* [6753] */
    (xdc_Char)0x53,  /* [6754] */
    (xdc_Char)0x57,  /* [6755] */
    (xdc_Char)0x3d,  /* [6756] */
    (xdc_Char)0x30,  /* [6757] */
    (xdc_Char)0x78,  /* [6758] */
    (xdc_Char)0x25,  /* [6759] */
    (xdc_Char)0x78,  /* [6760] */
    (xdc_Char)0x5d,  /* [6761] */
    (xdc_Char)0x2c,  /* [6762] */
    (xdc_Char)0x20,  /* [6763] */
    (xdc_Char)0x43,  /* [6764] */
    (xdc_Char)0x70,  /* [6765] */
    (xdc_Char)0x75,  /* [6766] */
    (xdc_Char)0x43,  /* [6767] */
    (xdc_Char)0x79,  /* [6768] */
    (xdc_Char)0x63,  /* [6769] */
    (xdc_Char)0x6c,  /* [6770] */
    (xdc_Char)0x65,  /* [6771] */
    (xdc_Char)0x73,  /* [6772] */
    (xdc_Char)0x50,  /* [6773] */
    (xdc_Char)0x65,  /* [6774] */
    (xdc_Char)0x72,  /* [6775] */
    (xdc_Char)0x43,  /* [6776] */
    (xdc_Char)0x70,  /* [6777] */
    (xdc_Char)0x75,  /* [6778] */
    (xdc_Char)0x54,  /* [6779] */
    (xdc_Char)0x69,  /* [6780] */
    (xdc_Char)0x6d,  /* [6781] */
    (xdc_Char)0x65,  /* [6782] */
    (xdc_Char)0x72,  /* [6783] */
    (xdc_Char)0x54,  /* [6784] */
    (xdc_Char)0x69,  /* [6785] */
    (xdc_Char)0x63,  /* [6786] */
    (xdc_Char)0x6b,  /* [6787] */
    (xdc_Char)0x3d,  /* [6788] */
    (xdc_Char)0x25,  /* [6789] */
    (xdc_Char)0x64,  /* [6790] */
    (xdc_Char)0x2c,  /* [6791] */
    (xdc_Char)0x20,  /* [6792] */
    (xdc_Char)0x43,  /* [6793] */
    (xdc_Char)0x70,  /* [6794] */
    (xdc_Char)0x75,  /* [6795] */
    (xdc_Char)0x46,  /* [6796] */
    (xdc_Char)0x72,  /* [6797] */
    (xdc_Char)0x65,  /* [6798] */
    (xdc_Char)0x71,  /* [6799] */
    (xdc_Char)0x20,  /* [6800] */
    (xdc_Char)0x5b,  /* [6801] */
    (xdc_Char)0x4c,  /* [6802] */
    (xdc_Char)0x53,  /* [6803] */
    (xdc_Char)0x57,  /* [6804] */
    (xdc_Char)0x3d,  /* [6805] */
    (xdc_Char)0x30,  /* [6806] */
    (xdc_Char)0x78,  /* [6807] */
    (xdc_Char)0x25,  /* [6808] */
    (xdc_Char)0x78,  /* [6809] */
    (xdc_Char)0x2c,  /* [6810] */
    (xdc_Char)0x20,  /* [6811] */
    (xdc_Char)0x4d,  /* [6812] */
    (xdc_Char)0x53,  /* [6813] */
    (xdc_Char)0x57,  /* [6814] */
    (xdc_Char)0x3d,  /* [6815] */
    (xdc_Char)0x30,  /* [6816] */
    (xdc_Char)0x78,  /* [6817] */
    (xdc_Char)0x25,  /* [6818] */
    (xdc_Char)0x78,  /* [6819] */
    (xdc_Char)0x5d,  /* [6820] */
    (xdc_Char)0x0,  /* [6821] */
    (xdc_Char)0x53,  /* [6822] */
    (xdc_Char)0x79,  /* [6823] */
    (xdc_Char)0x6e,  /* [6824] */
    (xdc_Char)0x63,  /* [6825] */
    (xdc_Char)0x20,  /* [6826] */
    (xdc_Char)0x50,  /* [6827] */
    (xdc_Char)0x6f,  /* [6828] */
    (xdc_Char)0x69,  /* [6829] */
    (xdc_Char)0x6e,  /* [6830] */
    (xdc_Char)0x74,  /* [6831] */
    (xdc_Char)0x20,  /* [6832] */
    (xdc_Char)0x47,  /* [6833] */
    (xdc_Char)0x6c,  /* [6834] */
    (xdc_Char)0x6f,  /* [6835] */
    (xdc_Char)0x62,  /* [6836] */
    (xdc_Char)0x61,  /* [6837] */
    (xdc_Char)0x6c,  /* [6838] */
    (xdc_Char)0x20,  /* [6839] */
    (xdc_Char)0x54,  /* [6840] */
    (xdc_Char)0x69,  /* [6841] */
    (xdc_Char)0x6d,  /* [6842] */
    (xdc_Char)0x65,  /* [6843] */
    (xdc_Char)0x72,  /* [6844] */
    (xdc_Char)0x20,  /* [6845] */
    (xdc_Char)0x46,  /* [6846] */
    (xdc_Char)0x72,  /* [6847] */
    (xdc_Char)0x65,  /* [6848] */
    (xdc_Char)0x71,  /* [6849] */
    (xdc_Char)0x3a,  /* [6850] */
    (xdc_Char)0x20,  /* [6851] */
    (xdc_Char)0x20,  /* [6852] */
    (xdc_Char)0x53,  /* [6853] */
    (xdc_Char)0x65,  /* [6854] */
    (xdc_Char)0x72,  /* [6855] */
    (xdc_Char)0x69,  /* [6856] */
    (xdc_Char)0x61,  /* [6857] */
    (xdc_Char)0x6c,  /* [6858] */
    (xdc_Char)0x4e,  /* [6859] */
    (xdc_Char)0x75,  /* [6860] */
    (xdc_Char)0x6d,  /* [6861] */
    (xdc_Char)0x62,  /* [6862] */
    (xdc_Char)0x65,  /* [6863] */
    (xdc_Char)0x72,  /* [6864] */
    (xdc_Char)0x3d,  /* [6865] */
    (xdc_Char)0x30,  /* [6866] */
    (xdc_Char)0x78,  /* [6867] */
    (xdc_Char)0x25,  /* [6868] */
    (xdc_Char)0x78,  /* [6869] */
    (xdc_Char)0x2c,  /* [6870] */
    (xdc_Char)0x20,  /* [6871] */
    (xdc_Char)0x43,  /* [6872] */
    (xdc_Char)0x70,  /* [6873] */
    (xdc_Char)0x75,  /* [6874] */
    (xdc_Char)0x43,  /* [6875] */
    (xdc_Char)0x79,  /* [6876] */
    (xdc_Char)0x63,  /* [6877] */
    (xdc_Char)0x6c,  /* [6878] */
    (xdc_Char)0x65,  /* [6879] */
    (xdc_Char)0x73,  /* [6880] */
    (xdc_Char)0x50,  /* [6881] */
    (xdc_Char)0x65,  /* [6882] */
    (xdc_Char)0x72,  /* [6883] */
    (xdc_Char)0x47,  /* [6884] */
    (xdc_Char)0x6c,  /* [6885] */
    (xdc_Char)0x6f,  /* [6886] */
    (xdc_Char)0x62,  /* [6887] */
    (xdc_Char)0x61,  /* [6888] */
    (xdc_Char)0x6c,  /* [6889] */
    (xdc_Char)0x54,  /* [6890] */
    (xdc_Char)0x69,  /* [6891] */
    (xdc_Char)0x6d,  /* [6892] */
    (xdc_Char)0x65,  /* [6893] */
    (xdc_Char)0x72,  /* [6894] */
    (xdc_Char)0x54,  /* [6895] */
    (xdc_Char)0x69,  /* [6896] */
    (xdc_Char)0x63,  /* [6897] */
    (xdc_Char)0x6b,  /* [6898] */
    (xdc_Char)0x3d,  /* [6899] */
    (xdc_Char)0x25,  /* [6900] */
    (xdc_Char)0x64,  /* [6901] */
    (xdc_Char)0x2c,  /* [6902] */
    (xdc_Char)0x20,  /* [6903] */
    (xdc_Char)0x47,  /* [6904] */
    (xdc_Char)0x6c,  /* [6905] */
    (xdc_Char)0x6f,  /* [6906] */
    (xdc_Char)0x62,  /* [6907] */
    (xdc_Char)0x61,  /* [6908] */
    (xdc_Char)0x6c,  /* [6909] */
    (xdc_Char)0x54,  /* [6910] */
    (xdc_Char)0x69,  /* [6911] */
    (xdc_Char)0x6d,  /* [6912] */
    (xdc_Char)0x65,  /* [6913] */
    (xdc_Char)0x72,  /* [6914] */
    (xdc_Char)0x46,  /* [6915] */
    (xdc_Char)0x72,  /* [6916] */
    (xdc_Char)0x65,  /* [6917] */
    (xdc_Char)0x71,  /* [6918] */
    (xdc_Char)0x20,  /* [6919] */
    (xdc_Char)0x5b,  /* [6920] */
    (xdc_Char)0x4c,  /* [6921] */
    (xdc_Char)0x53,  /* [6922] */
    (xdc_Char)0x57,  /* [6923] */
    (xdc_Char)0x3d,  /* [6924] */
    (xdc_Char)0x30,  /* [6925] */
    (xdc_Char)0x78,  /* [6926] */
    (xdc_Char)0x25,  /* [6927] */
    (xdc_Char)0x78,  /* [6928] */
    (xdc_Char)0x2c,  /* [6929] */
    (xdc_Char)0x20,  /* [6930] */
    (xdc_Char)0x4d,  /* [6931] */
    (xdc_Char)0x53,  /* [6932] */
    (xdc_Char)0x57,  /* [6933] */
    (xdc_Char)0x3d,  /* [6934] */
    (xdc_Char)0x30,  /* [6935] */
    (xdc_Char)0x78,  /* [6936] */
    (xdc_Char)0x25,  /* [6937] */
    (xdc_Char)0x78,  /* [6938] */
    (xdc_Char)0x5d,  /* [6939] */
    (xdc_Char)0x0,  /* [6940] */
    (xdc_Char)0x53,  /* [6941] */
    (xdc_Char)0x79,  /* [6942] */
    (xdc_Char)0x6e,  /* [6943] */
    (xdc_Char)0x63,  /* [6944] */
    (xdc_Char)0x20,  /* [6945] */
    (xdc_Char)0x50,  /* [6946] */
    (xdc_Char)0x6f,  /* [6947] */
    (xdc_Char)0x69,  /* [6948] */
    (xdc_Char)0x6e,  /* [6949] */
    (xdc_Char)0x74,  /* [6950] */
    (xdc_Char)0x20,  /* [6951] */
    (xdc_Char)0x55,  /* [6952] */
    (xdc_Char)0x73,  /* [6953] */
    (xdc_Char)0x65,  /* [6954] */
    (xdc_Char)0x72,  /* [6955] */
    (xdc_Char)0x20,  /* [6956] */
    (xdc_Char)0x44,  /* [6957] */
    (xdc_Char)0x61,  /* [6958] */
    (xdc_Char)0x74,  /* [6959] */
    (xdc_Char)0x61,  /* [6960] */
    (xdc_Char)0x3a,  /* [6961] */
    (xdc_Char)0x20,  /* [6962] */
    (xdc_Char)0x53,  /* [6963] */
    (xdc_Char)0x65,  /* [6964] */
    (xdc_Char)0x72,  /* [6965] */
    (xdc_Char)0x69,  /* [6966] */
    (xdc_Char)0x61,  /* [6967] */
    (xdc_Char)0x6c,  /* [6968] */
    (xdc_Char)0x4e,  /* [6969] */
    (xdc_Char)0x75,  /* [6970] */
    (xdc_Char)0x6d,  /* [6971] */
    (xdc_Char)0x62,  /* [6972] */
    (xdc_Char)0x65,  /* [6973] */
    (xdc_Char)0x72,  /* [6974] */
    (xdc_Char)0x3d,  /* [6975] */
    (xdc_Char)0x30,  /* [6976] */
    (xdc_Char)0x78,  /* [6977] */
    (xdc_Char)0x25,  /* [6978] */
    (xdc_Char)0x78,  /* [6979] */
    (xdc_Char)0x2c,  /* [6980] */
    (xdc_Char)0x20,  /* [6981] */
    (xdc_Char)0x25,  /* [6982] */
    (xdc_Char)0x24,  /* [6983] */
    (xdc_Char)0x53,  /* [6984] */
    (xdc_Char)0x0,  /* [6985] */
    (xdc_Char)0x78,  /* [6986] */
    (xdc_Char)0x64,  /* [6987] */
    (xdc_Char)0x63,  /* [6988] */
    (xdc_Char)0x2e,  /* [6989] */
    (xdc_Char)0x0,  /* [6990] */
    (xdc_Char)0x72,  /* [6991] */
    (xdc_Char)0x75,  /* [6992] */
    (xdc_Char)0x6e,  /* [6993] */
    (xdc_Char)0x74,  /* [6994] */
    (xdc_Char)0x69,  /* [6995] */
    (xdc_Char)0x6d,  /* [6996] */
    (xdc_Char)0x65,  /* [6997] */
    (xdc_Char)0x2e,  /* [6998] */
    (xdc_Char)0x0,  /* [6999] */
    (xdc_Char)0x41,  /* [7000] */
    (xdc_Char)0x73,  /* [7001] */
    (xdc_Char)0x73,  /* [7002] */
    (xdc_Char)0x65,  /* [7003] */
    (xdc_Char)0x72,  /* [7004] */
    (xdc_Char)0x74,  /* [7005] */
    (xdc_Char)0x0,  /* [7006] */
    (xdc_Char)0x43,  /* [7007] */
    (xdc_Char)0x6f,  /* [7008] */
    (xdc_Char)0x72,  /* [7009] */
    (xdc_Char)0x65,  /* [7010] */
    (xdc_Char)0x0,  /* [7011] */
    (xdc_Char)0x44,  /* [7012] */
    (xdc_Char)0x65,  /* [7013] */
    (xdc_Char)0x66,  /* [7014] */
    (xdc_Char)0x61,  /* [7015] */
    (xdc_Char)0x75,  /* [7016] */
    (xdc_Char)0x6c,  /* [7017] */
    (xdc_Char)0x74,  /* [7018] */
    (xdc_Char)0x73,  /* [7019] */
    (xdc_Char)0x0,  /* [7020] */
    (xdc_Char)0x44,  /* [7021] */
    (xdc_Char)0x69,  /* [7022] */
    (xdc_Char)0x61,  /* [7023] */
    (xdc_Char)0x67,  /* [7024] */
    (xdc_Char)0x73,  /* [7025] */
    (xdc_Char)0x0,  /* [7026] */
    (xdc_Char)0x45,  /* [7027] */
    (xdc_Char)0x72,  /* [7028] */
    (xdc_Char)0x72,  /* [7029] */
    (xdc_Char)0x6f,  /* [7030] */
    (xdc_Char)0x72,  /* [7031] */
    (xdc_Char)0x0,  /* [7032] */
    (xdc_Char)0x47,  /* [7033] */
    (xdc_Char)0x61,  /* [7034] */
    (xdc_Char)0x74,  /* [7035] */
    (xdc_Char)0x65,  /* [7036] */
    (xdc_Char)0x0,  /* [7037] */
    (xdc_Char)0x4c,  /* [7038] */
    (xdc_Char)0x6f,  /* [7039] */
    (xdc_Char)0x67,  /* [7040] */
    (xdc_Char)0x0,  /* [7041] */
    (xdc_Char)0x4d,  /* [7042] */
    (xdc_Char)0x61,  /* [7043] */
    (xdc_Char)0x69,  /* [7044] */
    (xdc_Char)0x6e,  /* [7045] */
    (xdc_Char)0x0,  /* [7046] */
    (xdc_Char)0x4d,  /* [7047] */
    (xdc_Char)0x65,  /* [7048] */
    (xdc_Char)0x6d,  /* [7049] */
    (xdc_Char)0x6f,  /* [7050] */
    (xdc_Char)0x72,  /* [7051] */
    (xdc_Char)0x79,  /* [7052] */
    (xdc_Char)0x0,  /* [7053] */
    (xdc_Char)0x52,  /* [7054] */
    (xdc_Char)0x65,  /* [7055] */
    (xdc_Char)0x67,  /* [7056] */
    (xdc_Char)0x69,  /* [7057] */
    (xdc_Char)0x73,  /* [7058] */
    (xdc_Char)0x74,  /* [7059] */
    (xdc_Char)0x72,  /* [7060] */
    (xdc_Char)0x79,  /* [7061] */
    (xdc_Char)0x0,  /* [7062] */
    (xdc_Char)0x53,  /* [7063] */
    (xdc_Char)0x74,  /* [7064] */
    (xdc_Char)0x61,  /* [7065] */
    (xdc_Char)0x72,  /* [7066] */
    (xdc_Char)0x74,  /* [7067] */
    (xdc_Char)0x75,  /* [7068] */
    (xdc_Char)0x70,  /* [7069] */
    (xdc_Char)0x0,  /* [7070] */
    (xdc_Char)0x53,  /* [7071] */
    (xdc_Char)0x79,  /* [7072] */
    (xdc_Char)0x73,  /* [7073] */
    (xdc_Char)0x74,  /* [7074] */
    (xdc_Char)0x65,  /* [7075] */
    (xdc_Char)0x6d,  /* [7076] */
    (xdc_Char)0x0,  /* [7077] */
    (xdc_Char)0x53,  /* [7078] */
    (xdc_Char)0x79,  /* [7079] */
    (xdc_Char)0x73,  /* [7080] */
    (xdc_Char)0x4d,  /* [7081] */
    (xdc_Char)0x69,  /* [7082] */
    (xdc_Char)0x6e,  /* [7083] */
    (xdc_Char)0x0,  /* [7084] */
    (xdc_Char)0x54,  /* [7085] */
    (xdc_Char)0x65,  /* [7086] */
    (xdc_Char)0x78,  /* [7087] */
    (xdc_Char)0x74,  /* [7088] */
    (xdc_Char)0x0,  /* [7089] */
    (xdc_Char)0x54,  /* [7090] */
    (xdc_Char)0x69,  /* [7091] */
    (xdc_Char)0x6d,  /* [7092] */
    (xdc_Char)0x65,  /* [7093] */
    (xdc_Char)0x73,  /* [7094] */
    (xdc_Char)0x74,  /* [7095] */
    (xdc_Char)0x61,  /* [7096] */
    (xdc_Char)0x6d,  /* [7097] */
    (xdc_Char)0x70,  /* [7098] */
    (xdc_Char)0x0,  /* [7099] */
    (xdc_Char)0x54,  /* [7100] */
    (xdc_Char)0x69,  /* [7101] */
    (xdc_Char)0x6d,  /* [7102] */
    (xdc_Char)0x65,  /* [7103] */
    (xdc_Char)0x73,  /* [7104] */
    (xdc_Char)0x74,  /* [7105] */
    (xdc_Char)0x61,  /* [7106] */
    (xdc_Char)0x6d,  /* [7107] */
    (xdc_Char)0x70,  /* [7108] */
    (xdc_Char)0x4e,  /* [7109] */
    (xdc_Char)0x75,  /* [7110] */
    (xdc_Char)0x6c,  /* [7111] */
    (xdc_Char)0x6c,  /* [7112] */
    (xdc_Char)0x0,  /* [7113] */
    (xdc_Char)0x54,  /* [7114] */
    (xdc_Char)0x79,  /* [7115] */
    (xdc_Char)0x70,  /* [7116] */
    (xdc_Char)0x65,  /* [7117] */
    (xdc_Char)0x73,  /* [7118] */
    (xdc_Char)0x0,  /* [7119] */
    (xdc_Char)0x74,  /* [7120] */
    (xdc_Char)0x69,  /* [7121] */
    (xdc_Char)0x2e,  /* [7122] */
    (xdc_Char)0x0,  /* [7123] */
    (xdc_Char)0x73,  /* [7124] */
    (xdc_Char)0x79,  /* [7125] */
    (xdc_Char)0x73,  /* [7126] */
    (xdc_Char)0x62,  /* [7127] */
    (xdc_Char)0x69,  /* [7128] */
    (xdc_Char)0x6f,  /* [7129] */
    (xdc_Char)0x73,  /* [7130] */
    (xdc_Char)0x2e,  /* [7131] */
    (xdc_Char)0x0,  /* [7132] */
    (xdc_Char)0x42,  /* [7133] */
    (xdc_Char)0x49,  /* [7134] */
    (xdc_Char)0x4f,  /* [7135] */
    (xdc_Char)0x53,  /* [7136] */
    (xdc_Char)0x0,  /* [7137] */
    (xdc_Char)0x68,  /* [7138] */
    (xdc_Char)0x61,  /* [7139] */
    (xdc_Char)0x6c,  /* [7140] */
    (xdc_Char)0x2e,  /* [7141] */
    (xdc_Char)0x0,  /* [7142] */
    (xdc_Char)0x48,  /* [7143] */
    (xdc_Char)0x77,  /* [7144] */
    (xdc_Char)0x69,  /* [7145] */
    (xdc_Char)0x0,  /* [7146] */
    (xdc_Char)0x54,  /* [7147] */
    (xdc_Char)0x69,  /* [7148] */
    (xdc_Char)0x6d,  /* [7149] */
    (xdc_Char)0x65,  /* [7150] */
    (xdc_Char)0x72,  /* [7151] */
    (xdc_Char)0x0,  /* [7152] */
    (xdc_Char)0x6b,  /* [7153] */
    (xdc_Char)0x6e,  /* [7154] */
    (xdc_Char)0x6c,  /* [7155] */
    (xdc_Char)0x2e,  /* [7156] */
    (xdc_Char)0x0,  /* [7157] */
    (xdc_Char)0x43,  /* [7158] */
    (xdc_Char)0x6c,  /* [7159] */
    (xdc_Char)0x6f,  /* [7160] */
    (xdc_Char)0x63,  /* [7161] */
    (xdc_Char)0x6b,  /* [7162] */
    (xdc_Char)0x0,  /* [7163] */
    (xdc_Char)0x49,  /* [7164] */
    (xdc_Char)0x64,  /* [7165] */
    (xdc_Char)0x6c,  /* [7166] */
    (xdc_Char)0x65,  /* [7167] */
    (xdc_Char)0x0,  /* [7168] */
    (xdc_Char)0x49,  /* [7169] */
    (xdc_Char)0x6e,  /* [7170] */
    (xdc_Char)0x74,  /* [7171] */
    (xdc_Char)0x72,  /* [7172] */
    (xdc_Char)0x69,  /* [7173] */
    (xdc_Char)0x6e,  /* [7174] */
    (xdc_Char)0x73,  /* [7175] */
    (xdc_Char)0x69,  /* [7176] */
    (xdc_Char)0x63,  /* [7177] */
    (xdc_Char)0x73,  /* [7178] */
    (xdc_Char)0x0,  /* [7179] */
    (xdc_Char)0x45,  /* [7180] */
    (xdc_Char)0x76,  /* [7181] */
    (xdc_Char)0x65,  /* [7182] */
    (xdc_Char)0x6e,  /* [7183] */
    (xdc_Char)0x74,  /* [7184] */
    (xdc_Char)0x0,  /* [7185] */
    (xdc_Char)0x51,  /* [7186] */
    (xdc_Char)0x75,  /* [7187] */
    (xdc_Char)0x65,  /* [7188] */
    (xdc_Char)0x75,  /* [7189] */
    (xdc_Char)0x65,  /* [7190] */
    (xdc_Char)0x0,  /* [7191] */
    (xdc_Char)0x53,  /* [7192] */
    (xdc_Char)0x65,  /* [7193] */
    (xdc_Char)0x6d,  /* [7194] */
    (xdc_Char)0x61,  /* [7195] */
    (xdc_Char)0x70,  /* [7196] */
    (xdc_Char)0x68,  /* [7197] */
    (xdc_Char)0x6f,  /* [7198] */
    (xdc_Char)0x72,  /* [7199] */
    (xdc_Char)0x65,  /* [7200] */
    (xdc_Char)0x0,  /* [7201] */
    (xdc_Char)0x53,  /* [7202] */
    (xdc_Char)0x77,  /* [7203] */
    (xdc_Char)0x69,  /* [7204] */
    (xdc_Char)0x0,  /* [7205] */
    (xdc_Char)0x54,  /* [7206] */
    (xdc_Char)0x61,  /* [7207] */
    (xdc_Char)0x73,  /* [7208] */
    (xdc_Char)0x6b,  /* [7209] */
    (xdc_Char)0x0,  /* [7210] */
    (xdc_Char)0x66,  /* [7211] */
    (xdc_Char)0x61,  /* [7212] */
    (xdc_Char)0x6d,  /* [7213] */
    (xdc_Char)0x69,  /* [7214] */
    (xdc_Char)0x6c,  /* [7215] */
    (xdc_Char)0x79,  /* [7216] */
    (xdc_Char)0x2e,  /* [7217] */
    (xdc_Char)0x0,  /* [7218] */
    (xdc_Char)0x61,  /* [7219] */
    (xdc_Char)0x72,  /* [7220] */
    (xdc_Char)0x6d,  /* [7221] */
    (xdc_Char)0x2e,  /* [7222] */
    (xdc_Char)0x0,  /* [7223] */
    (xdc_Char)0x6d,  /* [7224] */
    (xdc_Char)0x33,  /* [7225] */
    (xdc_Char)0x2e,  /* [7226] */
    (xdc_Char)0x0,  /* [7227] */
    (xdc_Char)0x49,  /* [7228] */
    (xdc_Char)0x6e,  /* [7229] */
    (xdc_Char)0x74,  /* [7230] */
    (xdc_Char)0x72,  /* [7231] */
    (xdc_Char)0x69,  /* [7232] */
    (xdc_Char)0x6e,  /* [7233] */
    (xdc_Char)0x73,  /* [7234] */
    (xdc_Char)0x69,  /* [7235] */
    (xdc_Char)0x63,  /* [7236] */
    (xdc_Char)0x73,  /* [7237] */
    (xdc_Char)0x53,  /* [7238] */
    (xdc_Char)0x75,  /* [7239] */
    (xdc_Char)0x70,  /* [7240] */
    (xdc_Char)0x70,  /* [7241] */
    (xdc_Char)0x6f,  /* [7242] */
    (xdc_Char)0x72,  /* [7243] */
    (xdc_Char)0x74,  /* [7244] */
    (xdc_Char)0x0,  /* [7245] */
    (xdc_Char)0x54,  /* [7246] */
    (xdc_Char)0x61,  /* [7247] */
    (xdc_Char)0x73,  /* [7248] */
    (xdc_Char)0x6b,  /* [7249] */
    (xdc_Char)0x53,  /* [7250] */
    (xdc_Char)0x75,  /* [7251] */
    (xdc_Char)0x70,  /* [7252] */
    (xdc_Char)0x70,  /* [7253] */
    (xdc_Char)0x6f,  /* [7254] */
    (xdc_Char)0x72,  /* [7255] */
    (xdc_Char)0x74,  /* [7256] */
    (xdc_Char)0x0,  /* [7257] */
    (xdc_Char)0x6c,  /* [7258] */
    (xdc_Char)0x6d,  /* [7259] */
    (xdc_Char)0x33,  /* [7260] */
    (xdc_Char)0x2e,  /* [7261] */
    (xdc_Char)0x0,  /* [7262] */
    (xdc_Char)0x54,  /* [7263] */
    (xdc_Char)0x69,  /* [7264] */
    (xdc_Char)0x6d,  /* [7265] */
    (xdc_Char)0x65,  /* [7266] */
    (xdc_Char)0x73,  /* [7267] */
    (xdc_Char)0x74,  /* [7268] */
    (xdc_Char)0x61,  /* [7269] */
    (xdc_Char)0x6d,  /* [7270] */
    (xdc_Char)0x70,  /* [7271] */
    (xdc_Char)0x50,  /* [7272] */
    (xdc_Char)0x72,  /* [7273] */
    (xdc_Char)0x6f,  /* [7274] */
    (xdc_Char)0x76,  /* [7275] */
    (xdc_Char)0x69,  /* [7276] */
    (xdc_Char)0x64,  /* [7277] */
    (xdc_Char)0x65,  /* [7278] */
    (xdc_Char)0x72,  /* [7279] */
    (xdc_Char)0x0,  /* [7280] */
    (xdc_Char)0x68,  /* [7281] */
    (xdc_Char)0x65,  /* [7282] */
    (xdc_Char)0x61,  /* [7283] */
    (xdc_Char)0x70,  /* [7284] */
    (xdc_Char)0x73,  /* [7285] */
    (xdc_Char)0x2e,  /* [7286] */
    (xdc_Char)0x0,  /* [7287] */
    (xdc_Char)0x48,  /* [7288] */
    (xdc_Char)0x65,  /* [7289] */
    (xdc_Char)0x61,  /* [7290] */
    (xdc_Char)0x70,  /* [7291] */
    (xdc_Char)0x4d,  /* [7292] */
    (xdc_Char)0x65,  /* [7293] */
    (xdc_Char)0x6d,  /* [7294] */
    (xdc_Char)0x0,  /* [7295] */
    (xdc_Char)0x67,  /* [7296] */
    (xdc_Char)0x61,  /* [7297] */
    (xdc_Char)0x74,  /* [7298] */
    (xdc_Char)0x65,  /* [7299] */
    (xdc_Char)0x73,  /* [7300] */
    (xdc_Char)0x2e,  /* [7301] */
    (xdc_Char)0x0,  /* [7302] */
    (xdc_Char)0x47,  /* [7303] */
    (xdc_Char)0x61,  /* [7304] */
    (xdc_Char)0x74,  /* [7305] */
    (xdc_Char)0x65,  /* [7306] */
    (xdc_Char)0x48,  /* [7307] */
    (xdc_Char)0x77,  /* [7308] */
    (xdc_Char)0x69,  /* [7309] */
    (xdc_Char)0x0,  /* [7310] */
    (xdc_Char)0x47,  /* [7311] */
    (xdc_Char)0x61,  /* [7312] */
    (xdc_Char)0x74,  /* [7313] */
    (xdc_Char)0x65,  /* [7314] */
    (xdc_Char)0x4d,  /* [7315] */
    (xdc_Char)0x75,  /* [7316] */
    (xdc_Char)0x74,  /* [7317] */
    (xdc_Char)0x65,  /* [7318] */
    (xdc_Char)0x78,  /* [7319] */
    (xdc_Char)0x0,  /* [7320] */
    (xdc_Char)0x75,  /* [7321] */
    (xdc_Char)0x74,  /* [7322] */
    (xdc_Char)0x69,  /* [7323] */
    (xdc_Char)0x6c,  /* [7324] */
    (xdc_Char)0x73,  /* [7325] */
    (xdc_Char)0x2e,  /* [7326] */
    (xdc_Char)0x0,  /* [7327] */
    (xdc_Char)0x4c,  /* [7328] */
    (xdc_Char)0x6f,  /* [7329] */
    (xdc_Char)0x61,  /* [7330] */
    (xdc_Char)0x64,  /* [7331] */
    (xdc_Char)0x0,  /* [7332] */
    (xdc_Char)0x75,  /* [7333] */
    (xdc_Char)0x69,  /* [7334] */
    (xdc_Char)0x61,  /* [7335] */
    (xdc_Char)0x2e,  /* [7336] */
    (xdc_Char)0x0,  /* [7337] */
    (xdc_Char)0x65,  /* [7338] */
    (xdc_Char)0x76,  /* [7339] */
    (xdc_Char)0x65,  /* [7340] */
    (xdc_Char)0x6e,  /* [7341] */
    (xdc_Char)0x74,  /* [7342] */
    (xdc_Char)0x73,  /* [7343] */
    (xdc_Char)0x2e,  /* [7344] */
    (xdc_Char)0x0,  /* [7345] */
    (xdc_Char)0x44,  /* [7346] */
    (xdc_Char)0x76,  /* [7347] */
    (xdc_Char)0x74,  /* [7348] */
    (xdc_Char)0x54,  /* [7349] */
    (xdc_Char)0x79,  /* [7350] */
    (xdc_Char)0x70,  /* [7351] */
    (xdc_Char)0x65,  /* [7352] */
    (xdc_Char)0x73,  /* [7353] */
    (xdc_Char)0x0,  /* [7354] */
    (xdc_Char)0x55,  /* [7355] */
    (xdc_Char)0x49,  /* [7356] */
    (xdc_Char)0x41,  /* [7357] */
    (xdc_Char)0x42,  /* [7358] */
    (xdc_Char)0x65,  /* [7359] */
    (xdc_Char)0x6e,  /* [7360] */
    (xdc_Char)0x63,  /* [7361] */
    (xdc_Char)0x68,  /* [7362] */
    (xdc_Char)0x6d,  /* [7363] */
    (xdc_Char)0x61,  /* [7364] */
    (xdc_Char)0x72,  /* [7365] */
    (xdc_Char)0x6b,  /* [7366] */
    (xdc_Char)0x0,  /* [7367] */
    (xdc_Char)0x55,  /* [7368] */
    (xdc_Char)0x49,  /* [7369] */
    (xdc_Char)0x41,  /* [7370] */
    (xdc_Char)0x45,  /* [7371] */
    (xdc_Char)0x72,  /* [7372] */
    (xdc_Char)0x72,  /* [7373] */
    (xdc_Char)0x0,  /* [7374] */
    (xdc_Char)0x55,  /* [7375] */
    (xdc_Char)0x49,  /* [7376] */
    (xdc_Char)0x41,  /* [7377] */
    (xdc_Char)0x45,  /* [7378] */
    (xdc_Char)0x76,  /* [7379] */
    (xdc_Char)0x74,  /* [7380] */
    (xdc_Char)0x0,  /* [7381] */
    (xdc_Char)0x55,  /* [7382] */
    (xdc_Char)0x49,  /* [7383] */
    (xdc_Char)0x41,  /* [7384] */
    (xdc_Char)0x52,  /* [7385] */
    (xdc_Char)0x6f,  /* [7386] */
    (xdc_Char)0x75,  /* [7387] */
    (xdc_Char)0x6e,  /* [7388] */
    (xdc_Char)0x64,  /* [7389] */
    (xdc_Char)0x74,  /* [7390] */
    (xdc_Char)0x72,  /* [7391] */
    (xdc_Char)0x69,  /* [7392] */
    (xdc_Char)0x70,  /* [7393] */
    (xdc_Char)0x0,  /* [7394] */
    (xdc_Char)0x55,  /* [7395] */
    (xdc_Char)0x49,  /* [7396] */
    (xdc_Char)0x41,  /* [7397] */
    (xdc_Char)0x53,  /* [7398] */
    (xdc_Char)0x74,  /* [7399] */
    (xdc_Char)0x61,  /* [7400] */
    (xdc_Char)0x74,  /* [7401] */
    (xdc_Char)0x69,  /* [7402] */
    (xdc_Char)0x73,  /* [7403] */
    (xdc_Char)0x74,  /* [7404] */
    (xdc_Char)0x69,  /* [7405] */
    (xdc_Char)0x63,  /* [7406] */
    (xdc_Char)0x0,  /* [7407] */
    (xdc_Char)0x55,  /* [7408] */
    (xdc_Char)0x49,  /* [7409] */
    (xdc_Char)0x41,  /* [7410] */
    (xdc_Char)0x53,  /* [7411] */
    (xdc_Char)0x79,  /* [7412] */
    (xdc_Char)0x6e,  /* [7413] */
    (xdc_Char)0x63,  /* [7414] */
    (xdc_Char)0x0,  /* [7415] */
    (xdc_Char)0x4c,  /* [7416] */
    (xdc_Char)0x6f,  /* [7417] */
    (xdc_Char)0x67,  /* [7418] */
    (xdc_Char)0x53,  /* [7419] */
    (xdc_Char)0x79,  /* [7420] */
    (xdc_Char)0x6e,  /* [7421] */
    (xdc_Char)0x63,  /* [7422] */
    (xdc_Char)0x0,  /* [7423] */
    (xdc_Char)0x4c,  /* [7424] */
    (xdc_Char)0x6f,  /* [7425] */
    (xdc_Char)0x67,  /* [7426] */
    (xdc_Char)0x67,  /* [7427] */
    (xdc_Char)0x65,  /* [7428] */
    (xdc_Char)0x72,  /* [7429] */
    (xdc_Char)0x53,  /* [7430] */
    (xdc_Char)0x74,  /* [7431] */
    (xdc_Char)0x6f,  /* [7432] */
    (xdc_Char)0x70,  /* [7433] */
    (xdc_Char)0x4d,  /* [7434] */
    (xdc_Char)0x6f,  /* [7435] */
    (xdc_Char)0x64,  /* [7436] */
    (xdc_Char)0x65,  /* [7437] */
    (xdc_Char)0x0,  /* [7438] */
    (xdc_Char)0x51,  /* [7439] */
    (xdc_Char)0x75,  /* [7440] */
    (xdc_Char)0x65,  /* [7441] */
    (xdc_Char)0x75,  /* [7442] */
    (xdc_Char)0x65,  /* [7443] */
    (xdc_Char)0x44,  /* [7444] */
    (xdc_Char)0x65,  /* [7445] */
    (xdc_Char)0x73,  /* [7446] */
    (xdc_Char)0x63,  /* [7447] */
    (xdc_Char)0x72,  /* [7448] */
    (xdc_Char)0x69,  /* [7449] */
    (xdc_Char)0x70,  /* [7450] */
    (xdc_Char)0x74,  /* [7451] */
    (xdc_Char)0x6f,  /* [7452] */
    (xdc_Char)0x72,  /* [7453] */
    (xdc_Char)0x0,  /* [7454] */
    (xdc_Char)0x55,  /* [7455] */
    (xdc_Char)0x49,  /* [7456] */
    (xdc_Char)0x41,  /* [7457] */
    (xdc_Char)0x4d,  /* [7458] */
    (xdc_Char)0x65,  /* [7459] */
    (xdc_Char)0x74,  /* [7460] */
    (xdc_Char)0x61,  /* [7461] */
    (xdc_Char)0x44,  /* [7462] */
    (xdc_Char)0x61,  /* [7463] */
    (xdc_Char)0x74,  /* [7464] */
    (xdc_Char)0x61,  /* [7465] */
    (xdc_Char)0x0,  /* [7466] */
    (xdc_Char)0x63,  /* [7467] */
    (xdc_Char)0x6c,  /* [7468] */
    (xdc_Char)0x6f,  /* [7469] */
    (xdc_Char)0x63,  /* [7470] */
    (xdc_Char)0x6b,  /* [7471] */
    (xdc_Char)0x30,  /* [7472] */
    (xdc_Char)0x0,  /* [7473] */
    (xdc_Char)0x74,  /* [7474] */
    (xdc_Char)0x61,  /* [7475] */
    (xdc_Char)0x73,  /* [7476] */
    (xdc_Char)0x6b,  /* [7477] */
    (xdc_Char)0x30,  /* [7478] */
    (xdc_Char)0x0,  /* [7479] */
    (xdc_Char)0x74,  /* [7480] */
    (xdc_Char)0x69,  /* [7481] */
    (xdc_Char)0x2e,  /* [7482] */
    (xdc_Char)0x73,  /* [7483] */
    (xdc_Char)0x79,  /* [7484] */
    (xdc_Char)0x73,  /* [7485] */
    (xdc_Char)0x62,  /* [7486] */
    (xdc_Char)0x69,  /* [7487] */
    (xdc_Char)0x6f,  /* [7488] */
    (xdc_Char)0x73,  /* [7489] */
    (xdc_Char)0x2e,  /* [7490] */
    (xdc_Char)0x6b,  /* [7491] */
    (xdc_Char)0x6e,  /* [7492] */
    (xdc_Char)0x6c,  /* [7493] */
    (xdc_Char)0x2e,  /* [7494] */
    (xdc_Char)0x54,  /* [7495] */
    (xdc_Char)0x61,  /* [7496] */
    (xdc_Char)0x73,  /* [7497] */
    (xdc_Char)0x6b,  /* [7498] */
    (xdc_Char)0x2e,  /* [7499] */
    (xdc_Char)0x49,  /* [7500] */
    (xdc_Char)0x64,  /* [7501] */
    (xdc_Char)0x6c,  /* [7502] */
    (xdc_Char)0x65,  /* [7503] */
    (xdc_Char)0x54,  /* [7504] */
    (xdc_Char)0x61,  /* [7505] */
    (xdc_Char)0x73,  /* [7506] */
    (xdc_Char)0x6b,  /* [7507] */
    (xdc_Char)0x0,  /* [7508] */
    (xdc_Char)0x4c,  /* [7509] */
    (xdc_Char)0x6f,  /* [7510] */
    (xdc_Char)0x61,  /* [7511] */
    (xdc_Char)0x64,  /* [7512] */
    (xdc_Char)0x20,  /* [7513] */
    (xdc_Char)0x4c,  /* [7514] */
    (xdc_Char)0x6f,  /* [7515] */
    (xdc_Char)0x67,  /* [7516] */
    (xdc_Char)0x67,  /* [7517] */
    (xdc_Char)0x65,  /* [7518] */
    (xdc_Char)0x72,  /* [7519] */
    (xdc_Char)0x0,  /* [7520] */
    (xdc_Char)0x4d,  /* [7521] */
    (xdc_Char)0x61,  /* [7522] */
    (xdc_Char)0x69,  /* [7523] */
    (xdc_Char)0x6e,  /* [7524] */
    (xdc_Char)0x20,  /* [7525] */
    (xdc_Char)0x4c,  /* [7526] */
    (xdc_Char)0x6f,  /* [7527] */
    (xdc_Char)0x67,  /* [7528] */
    (xdc_Char)0x67,  /* [7529] */
    (xdc_Char)0x65,  /* [7530] */
    (xdc_Char)0x72,  /* [7531] */
    (xdc_Char)0x0,  /* [7532] */
    (xdc_Char)0x53,  /* [7533] */
    (xdc_Char)0x59,  /* [7534] */
    (xdc_Char)0x53,  /* [7535] */
    (xdc_Char)0x42,  /* [7536] */
    (xdc_Char)0x49,  /* [7537] */
    (xdc_Char)0x4f,  /* [7538] */
    (xdc_Char)0x53,  /* [7539] */
    (xdc_Char)0x20,  /* [7540] */
    (xdc_Char)0x53,  /* [7541] */
    (xdc_Char)0x79,  /* [7542] */
    (xdc_Char)0x73,  /* [7543] */
    (xdc_Char)0x74,  /* [7544] */
    (xdc_Char)0x65,  /* [7545] */
    (xdc_Char)0x6d,  /* [7546] */
    (xdc_Char)0x20,  /* [7547] */
    (xdc_Char)0x4c,  /* [7548] */
    (xdc_Char)0x6f,  /* [7549] */
    (xdc_Char)0x67,  /* [7550] */
    (xdc_Char)0x67,  /* [7551] */
    (xdc_Char)0x65,  /* [7552] */
    (xdc_Char)0x72,  /* [7553] */
    (xdc_Char)0x0,  /* [7554] */
};

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[63] = {
    {
        (xdc_Bits16)0x0,  /* left */
        (xdc_Bits16)0x0,  /* right */
    },  /* [0] */
    {
        (xdc_Bits16)0x1b4a,  /* left */
        (xdc_Bits16)0x1b4f,  /* right */
    },  /* [1] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1b58,  /* right */
    },  /* [2] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1b5f,  /* right */
    },  /* [3] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1b64,  /* right */
    },  /* [4] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1b6d,  /* right */
    },  /* [5] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1b73,  /* right */
    },  /* [6] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1b79,  /* right */
    },  /* [7] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1b7e,  /* right */
    },  /* [8] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1b82,  /* right */
    },  /* [9] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1b87,  /* right */
    },  /* [10] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1b8e,  /* right */
    },  /* [11] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1b97,  /* right */
    },  /* [12] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1b9f,  /* right */
    },  /* [13] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1ba6,  /* right */
    },  /* [14] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1bad,  /* right */
    },  /* [15] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1bb2,  /* right */
    },  /* [16] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1bbc,  /* right */
    },  /* [17] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1bca,  /* right */
    },  /* [18] */
    {
        (xdc_Bits16)0x1bd0,  /* left */
        (xdc_Bits16)0x1bd4,  /* right */
    },  /* [19] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x1bdd,  /* right */
    },  /* [20] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x1be2,  /* right */
    },  /* [21] */
    {
        (xdc_Bits16)0x8015,  /* left */
        (xdc_Bits16)0x1be7,  /* right */
    },  /* [22] */
    {
        (xdc_Bits16)0x8015,  /* left */
        (xdc_Bits16)0x1beb,  /* right */
    },  /* [23] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x1bf1,  /* right */
    },  /* [24] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1bf6,  /* right */
    },  /* [25] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1bfc,  /* right */
    },  /* [26] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1c01,  /* right */
    },  /* [27] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1c0c,  /* right */
    },  /* [28] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1c12,  /* right */
    },  /* [29] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1c18,  /* right */
    },  /* [30] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1c22,  /* right */
    },  /* [31] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1c26,  /* right */
    },  /* [32] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x1c2b,  /* right */
    },  /* [33] */
    {
        (xdc_Bits16)0x8021,  /* left */
        (xdc_Bits16)0x1c33,  /* right */
    },  /* [34] */
    {
        (xdc_Bits16)0x8022,  /* left */
        (xdc_Bits16)0x1c38,  /* right */
    },  /* [35] */
    {
        (xdc_Bits16)0x8023,  /* left */
        (xdc_Bits16)0x1be7,  /* right */
    },  /* [36] */
    {
        (xdc_Bits16)0x8023,  /* left */
        (xdc_Bits16)0x1c3c,  /* right */
    },  /* [37] */
    {
        (xdc_Bits16)0x8023,  /* left */
        (xdc_Bits16)0x1c4e,  /* right */
    },  /* [38] */
    {
        (xdc_Bits16)0x8022,  /* left */
        (xdc_Bits16)0x1c5a,  /* right */
    },  /* [39] */
    {
        (xdc_Bits16)0x8027,  /* left */
        (xdc_Bits16)0x1c5f,  /* right */
    },  /* [40] */
    {
        (xdc_Bits16)0x8027,  /* left */
        (xdc_Bits16)0x1beb,  /* right */
    },  /* [41] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x1c71,  /* right */
    },  /* [42] */
    {
        (xdc_Bits16)0x802a,  /* left */
        (xdc_Bits16)0x1c78,  /* right */
    },  /* [43] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x1c80,  /* right */
    },  /* [44] */
    {
        (xdc_Bits16)0x802c,  /* left */
        (xdc_Bits16)0x1c87,  /* right */
    },  /* [45] */
    {
        (xdc_Bits16)0x802c,  /* left */
        (xdc_Bits16)0x1c8f,  /* right */
    },  /* [46] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x1c99,  /* right */
    },  /* [47] */
    {
        (xdc_Bits16)0x802f,  /* left */
        (xdc_Bits16)0x1ca0,  /* right */
    },  /* [48] */
    {
        (xdc_Bits16)0x1bd0,  /* left */
        (xdc_Bits16)0x1ca5,  /* right */
    },  /* [49] */
    {
        (xdc_Bits16)0x8031,  /* left */
        (xdc_Bits16)0x1caa,  /* right */
    },  /* [50] */
    {
        (xdc_Bits16)0x8032,  /* left */
        (xdc_Bits16)0x1cb2,  /* right */
    },  /* [51] */
    {
        (xdc_Bits16)0x8032,  /* left */
        (xdc_Bits16)0x1cbb,  /* right */
    },  /* [52] */
    {
        (xdc_Bits16)0x8032,  /* left */
        (xdc_Bits16)0x1cc8,  /* right */
    },  /* [53] */
    {
        (xdc_Bits16)0x8032,  /* left */
        (xdc_Bits16)0x1ccf,  /* right */
    },  /* [54] */
    {
        (xdc_Bits16)0x8032,  /* left */
        (xdc_Bits16)0x1cd6,  /* right */
    },  /* [55] */
    {
        (xdc_Bits16)0x8032,  /* left */
        (xdc_Bits16)0x1ce3,  /* right */
    },  /* [56] */
    {
        (xdc_Bits16)0x8032,  /* left */
        (xdc_Bits16)0x1cf0,  /* right */
    },  /* [57] */
    {
        (xdc_Bits16)0x8031,  /* left */
        (xdc_Bits16)0x1b4f,  /* right */
    },  /* [58] */
    {
        (xdc_Bits16)0x803a,  /* left */
        (xdc_Bits16)0x1cf8,  /* right */
    },  /* [59] */
    {
        (xdc_Bits16)0x803a,  /* left */
        (xdc_Bits16)0x1d00,  /* right */
    },  /* [60] */
    {
        (xdc_Bits16)0x803a,  /* left */
        (xdc_Bits16)0x1d0f,  /* right */
    },  /* [61] */
    {
        (xdc_Bits16)0x803a,  /* left */
        (xdc_Bits16)0x1d1f,  /* right */
    },  /* [62] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C = ((CT__xdc_runtime_Text_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C = ((CT__xdc_runtime_Text_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C = ((CT__xdc_runtime_Text_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C = (xdc_Bits16)0x800f;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C = ((CT__xdc_runtime_Text_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C = ((CT__xdc_runtime_Text_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C = ((CT__xdc_runtime_Text_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C = ((CT__xdc_runtime_Text_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C = ((CT__xdc_runtime_Text_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C = ((CT__xdc_runtime_Text_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Text_Module__startupDoneFxn xdc_runtime_Text_Module__startupDoneFxn__C = ((CT__xdc_runtime_Text_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C = 0;

/* nameUnknown__C */
__FAR__ const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C = "{unknown-instance-name}";

/* nameEmpty__C */
__FAR__ const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C = "{empty-instance-name}";

/* nameStatic__C */
__FAR__ const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C = "{static-instance-name}";

/* isLoaded__C */
__FAR__ const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C = 1;

/* charTab__C */
__FAR__ const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C = ((CT__xdc_runtime_Text_charTab)xdc_runtime_Text_charTab__A);

/* nodeTab__C */
__FAR__ const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C = ((CT__xdc_runtime_Text_nodeTab)xdc_runtime_Text_nodeTab__A);

/* charCnt__C */
__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0x1d83;

/* nodeCnt__C */
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x3f;

/* unnamedModsLastId__C */
__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000;

/* registryModsLastId__C */
__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fff;

/* visitRopeFxn__C */
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((CT__xdc_runtime_Text_visitRopeFxn)((xdc_Fxn)xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((CT__xdc_runtime_Text_visitRopeFxn2)((xdc_Fxn)xdc_runtime_Text_visitRope2__I));


/*
 * ======== xdc.runtime.Timestamp INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsEnabled xdc_runtime_Timestamp_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsIncluded xdc_runtime_Timestamp_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsMask xdc_runtime_Timestamp_Module__diagsMask__C = ((CT__xdc_runtime_Timestamp_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__gateObj xdc_runtime_Timestamp_Module__gateObj__C = ((CT__xdc_runtime_Timestamp_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__gatePrms xdc_runtime_Timestamp_Module__gatePrms__C = ((CT__xdc_runtime_Timestamp_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__id xdc_runtime_Timestamp_Module__id__C = (xdc_Bits16)0x8010;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerDefined xdc_runtime_Timestamp_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerObj xdc_runtime_Timestamp_Module__loggerObj__C = ((CT__xdc_runtime_Timestamp_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn0 xdc_runtime_Timestamp_Module__loggerFxn0__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn1 xdc_runtime_Timestamp_Module__loggerFxn1__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn2 xdc_runtime_Timestamp_Module__loggerFxn2__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn4 xdc_runtime_Timestamp_Module__loggerFxn4__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn8 xdc_runtime_Timestamp_Module__loggerFxn8__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__startupDoneFxn xdc_runtime_Timestamp_Module__startupDoneFxn__C = ((CT__xdc_runtime_Timestamp_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Timestamp_Object__count xdc_runtime_Timestamp_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Timestamp_Object__heap xdc_runtime_Timestamp_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Timestamp_Object__sizeof xdc_runtime_Timestamp_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Timestamp_Object__table xdc_runtime_Timestamp_Object__table__C = 0;


/*
 * ======== xdc.runtime.TimestampNull INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__diagsEnabled xdc_runtime_TimestampNull_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__diagsIncluded xdc_runtime_TimestampNull_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__diagsMask xdc_runtime_TimestampNull_Module__diagsMask__C = ((CT__xdc_runtime_TimestampNull_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__gateObj xdc_runtime_TimestampNull_Module__gateObj__C = ((CT__xdc_runtime_TimestampNull_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__gatePrms xdc_runtime_TimestampNull_Module__gatePrms__C = ((CT__xdc_runtime_TimestampNull_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__id xdc_runtime_TimestampNull_Module__id__C = (xdc_Bits16)0x8011;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerDefined xdc_runtime_TimestampNull_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerObj xdc_runtime_TimestampNull_Module__loggerObj__C = ((CT__xdc_runtime_TimestampNull_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn0 xdc_runtime_TimestampNull_Module__loggerFxn0__C = ((CT__xdc_runtime_TimestampNull_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn1 xdc_runtime_TimestampNull_Module__loggerFxn1__C = ((CT__xdc_runtime_TimestampNull_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn2 xdc_runtime_TimestampNull_Module__loggerFxn2__C = ((CT__xdc_runtime_TimestampNull_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn4 xdc_runtime_TimestampNull_Module__loggerFxn4__C = ((CT__xdc_runtime_TimestampNull_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn8 xdc_runtime_TimestampNull_Module__loggerFxn8__C = ((CT__xdc_runtime_TimestampNull_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__startupDoneFxn xdc_runtime_TimestampNull_Module__startupDoneFxn__C = ((CT__xdc_runtime_TimestampNull_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Object__count xdc_runtime_TimestampNull_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Object__heap xdc_runtime_TimestampNull_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Object__sizeof xdc_runtime_TimestampNull_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Object__table xdc_runtime_TimestampNull_Object__table__C = 0;


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Types INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Types_Module__diagsEnabled xdc_runtime_Types_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Types_Module__diagsIncluded xdc_runtime_Types_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Types_Module__diagsMask xdc_runtime_Types_Module__diagsMask__C = ((CT__xdc_runtime_Types_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Types_Module__gateObj xdc_runtime_Types_Module__gateObj__C = ((CT__xdc_runtime_Types_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Types_Module__gatePrms xdc_runtime_Types_Module__gatePrms__C = ((CT__xdc_runtime_Types_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Types_Module__id xdc_runtime_Types_Module__id__C = (xdc_Bits16)0x8012;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Types_Module__loggerDefined xdc_runtime_Types_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Types_Module__loggerObj xdc_runtime_Types_Module__loggerObj__C = ((CT__xdc_runtime_Types_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn0 xdc_runtime_Types_Module__loggerFxn0__C = ((CT__xdc_runtime_Types_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn1 xdc_runtime_Types_Module__loggerFxn1__C = ((CT__xdc_runtime_Types_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn2 xdc_runtime_Types_Module__loggerFxn2__C = ((CT__xdc_runtime_Types_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn4 xdc_runtime_Types_Module__loggerFxn4__C = ((CT__xdc_runtime_Types_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn8 xdc_runtime_Types_Module__loggerFxn8__C = ((CT__xdc_runtime_Types_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Types_Module__startupDoneFxn xdc_runtime_Types_Module__startupDoneFxn__C = ((CT__xdc_runtime_Types_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Types_Object__count xdc_runtime_Types_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Types_Object__heap xdc_runtime_Types_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Types_Object__sizeof xdc_runtime_Types_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Types_Object__table xdc_runtime_Types_Object__table__C = 0;

/* Module_startup */
xdc_Int ti_sysbios_family_arm_lm3_Timer_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_arm_lm3_Timer_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_family_arm_lm3_TimestampProvider_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_arm_lm3_TimestampProvider_Module_startup__F(state);
}


/*
 * ======== ti.sysbios.family.arm.m3.Hwi FUNCTION STUBS ========
 */

/* getStackInfo__E */
xdc_Bool ti_sysbios_family_arm_m3_Hwi_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo* stkInfo, xdc_Bool computeStackDepth ) 
{
    return ti_sysbios_family_arm_m3_Hwi_getStackInfo__F(stkInfo, computeStackDepth);
}

/* Module_startup */
xdc_Int ti_sysbios_family_arm_m3_Hwi_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_arm_m3_Hwi_Module_startup__F(state);
}


/*
 * ======== ti.sysbios.gates.GateHwi FUNCTION STUBS ========
 */

/* query__E */
xdc_Bool ti_sysbios_gates_GateHwi_query__E( xdc_Int qual ) 
{
    return ti_sysbios_gates_GateHwi_query__F(qual);
}


/*
 * ======== ti.sysbios.gates.GateMutex FUNCTION STUBS ========
 */

/* query__E */
xdc_Bool ti_sysbios_gates_GateMutex_query__E( xdc_Int qual ) 
{
    return ti_sysbios_gates_GateMutex_query__F(qual);
}


/*
 * ======== ti.sysbios.hal.Hwi FUNCTION STUBS ========
 */

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo* stkInfo, xdc_Bool computeStackDepth ) 
{
    return ti_sysbios_hal_Hwi_getStackInfo__F(stkInfo, computeStackDepth);
}

/* Module_startup */
xdc_Int ti_sysbios_hal_Hwi_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_hal_Hwi_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_hal_Timer_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_hal_Timer_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_knl_Clock_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_knl_Clock_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_knl_Swi_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_knl_Swi_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_knl_Task_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_knl_Task_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_uia_runtime_LogSync_Module_startup__E( xdc_Int state )
{
    return ti_uia_runtime_LogSync_Module_startup__F(state);
}


/*
 * ======== ti.uia.runtime.LoggerStopMode FUNCTION STUBS ========
 */

/* getTransferType__E */
ti_uia_runtime_IUIATransfer_TransferType ti_uia_runtime_LoggerStopMode_getTransferType__E( ti_uia_runtime_LoggerStopMode_Handle __inst ) 
{
    return ti_uia_runtime_LoggerStopMode_getTransferType__F((void*)__inst);
}

/* reset__E */
xdc_Void ti_uia_runtime_LoggerStopMode_reset__E( ti_uia_runtime_LoggerStopMode_Handle __inst ) 
{
    ti_uia_runtime_LoggerStopMode_reset__F((void*)__inst);
}

/* flushAll__E */
xdc_Void ti_uia_runtime_LoggerStopMode_flushAll__E( void ) 
{
    ti_uia_runtime_LoggerStopMode_flushAll__F();
}

/* Module_startup */
xdc_Int ti_uia_runtime_LoggerStopMode_Module_startup__E( xdc_Int state )
{
    return ti_uia_runtime_LoggerStopMode_Module_startup__F(state);
}


/*
 * ======== xdc.runtime.Diags FUNCTION STUBS ========
 */

/* setMask__E */
xdc_Void xdc_runtime_Diags_setMask__E( xdc_String control ) 
{
    xdc_runtime_Diags_setMask__F(control);
}


/*
 * ======== xdc.runtime.Error FUNCTION STUBS ========
 */

/* check__E */
xdc_Bool xdc_runtime_Error_check__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_check__F(eb);
}

/* getData__E */
xdc_runtime_Error_Data* xdc_runtime_Error_getData__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getData__F(eb);
}

/* getCode__E */
xdc_UInt16 xdc_runtime_Error_getCode__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getCode__F(eb);
}

/* getId__E */
xdc_runtime_Error_Id xdc_runtime_Error_getId__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getId__F(eb);
}

/* getMsg__E */
xdc_String xdc_runtime_Error_getMsg__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getMsg__F(eb);
}

/* getSite__E */
xdc_runtime_Types_Site* xdc_runtime_Error_getSite__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getSite__F(eb);
}

/* init__E */
xdc_Void xdc_runtime_Error_init__E( xdc_runtime_Error_Block* eb ) 
{
    xdc_runtime_Error_init__F(eb);
}

/* print__E */
xdc_Void xdc_runtime_Error_print__E( xdc_runtime_Error_Block* eb ) 
{
    xdc_runtime_Error_print__F(eb);
}

/* raiseX__E */
xdc_Void xdc_runtime_Error_raiseX__E( xdc_runtime_Error_Block* eb, xdc_runtime_Types_ModuleId mod, xdc_String file, xdc_Int line, xdc_runtime_Error_Id id, xdc_IArg arg1, xdc_IArg arg2 ) 
{
    xdc_runtime_Error_raiseX__F(eb, mod, file, line, id, arg1, arg2);
}


/*
 * ======== xdc.runtime.Gate FUNCTION STUBS ========
 */

/* enterSystem__E */
xdc_IArg xdc_runtime_Gate_enterSystem__E( void ) 
{
    return xdc_runtime_Gate_enterSystem__F();
}

/* leaveSystem__E */
xdc_Void xdc_runtime_Gate_leaveSystem__E( xdc_IArg key ) 
{
    xdc_runtime_Gate_leaveSystem__F(key);
}


/*
 * ======== xdc.runtime.Log FUNCTION STUBS ========
 */

/* doPrint__E */
xdc_Void xdc_runtime_Log_doPrint__E( xdc_runtime_Log_EventRec* evRec ) 
{
    xdc_runtime_Log_doPrint__F(evRec);
}


/*
 * ======== xdc.runtime.Memory FUNCTION STUBS ========
 */

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_alloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_alloc__F(heap, size, align, eb);
}

/* calloc__E */
xdc_Ptr xdc_runtime_Memory_calloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_calloc__F(heap, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_free__E( xdc_runtime_IHeap_Handle heap, xdc_Ptr block, xdc_SizeT size ) 
{
    xdc_runtime_Memory_free__F(heap, block, size);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_getStats__E( xdc_runtime_IHeap_Handle heap, xdc_runtime_Memory_Stats* stats ) 
{
    xdc_runtime_Memory_getStats__F(heap, stats);
}

/* query__E */
xdc_Bool xdc_runtime_Memory_query__E( xdc_runtime_IHeap_Handle heap, xdc_Int qual ) 
{
    return xdc_runtime_Memory_query__F(heap, qual);
}

/* getMaxDefaultTypeAlign__E */
xdc_SizeT xdc_runtime_Memory_getMaxDefaultTypeAlign__E( void ) 
{
    return xdc_runtime_Memory_getMaxDefaultTypeAlign__F();
}

/* valloc__E */
xdc_Ptr xdc_runtime_Memory_valloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_Char value, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_valloc__F(heap, size, align, value, eb);
}


/*
 * ======== xdc.runtime.Registry FUNCTION STUBS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Registry_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Registry_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Registry_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Registry_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Registry_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Registry_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Registry_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Registry_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Registry_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Registry_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Registry_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Registry_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Registry_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Registry_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Registry_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Registry_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Registry_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Registry_Module_GateProxy_query

/* entry/exit Log events */
#define xdc_runtime_Registry_addModule__ENTRY_EVT 0x0
#define xdc_runtime_Registry_addModule__EXIT_EVT 0x0
#define xdc_runtime_Registry_findByName__ENTRY_EVT 0x0
#define xdc_runtime_Registry_findByName__EXIT_EVT 0x0
#define xdc_runtime_Registry_findByNamePattern__ENTRY_EVT 0x0
#define xdc_runtime_Registry_findByNamePattern__EXIT_EVT 0x0
#define xdc_runtime_Registry_findById__ENTRY_EVT 0x0
#define xdc_runtime_Registry_findById__EXIT_EVT 0x0
#define xdc_runtime_Registry_getMask__ENTRY_EVT 0x0
#define xdc_runtime_Registry_getMask__EXIT_EVT 0x0
#define xdc_runtime_Registry_isMember__ENTRY_EVT 0x0
#define xdc_runtime_Registry_isMember__EXIT_EVT 0x0
#define xdc_runtime_Registry_getNextModule__ENTRY_EVT 0x0
#define xdc_runtime_Registry_getNextModule__EXIT_EVT 0x0
#define xdc_runtime_Registry_getModuleName__ENTRY_EVT 0x0
#define xdc_runtime_Registry_getModuleName__EXIT_EVT 0x0
#define xdc_runtime_Registry_getModuleId__ENTRY_EVT 0x0
#define xdc_runtime_Registry_getModuleId__EXIT_EVT 0x0

/* addModule__E */
xdc_runtime_Registry_Result xdc_runtime_Registry_addModule__E( xdc_runtime_Registry_Desc* desc, xdc_String modName ) 
{
    return xdc_runtime_Registry_addModule__F(desc, modName);
}

/* findByName__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findByName__E( xdc_String modName ) 
{
    return xdc_runtime_Registry_findByName__F(modName);
}

/* findByNamePattern__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findByNamePattern__E( xdc_String namePat, xdc_Int len, xdc_runtime_Registry_Desc* prev ) 
{
    return xdc_runtime_Registry_findByNamePattern__F(namePat, len, prev);
}

/* findById__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findById__E( xdc_runtime_Types_ModuleId mid ) 
{
    return xdc_runtime_Registry_findById__F(mid);
}

/* getMask__E */
xdc_Bool xdc_runtime_Registry_getMask__E( xdc_String name, xdc_runtime_Types_DiagsMask* mask ) 
{
    return xdc_runtime_Registry_getMask__F(name, mask);
}

/* isMember__E */
xdc_Bool xdc_runtime_Registry_isMember__E( xdc_runtime_Types_ModuleId mid ) 
{
    return xdc_runtime_Registry_isMember__F(mid);
}

/* getNextModule__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_getNextModule__E( xdc_runtime_Registry_Desc* desc ) 
{
    return xdc_runtime_Registry_getNextModule__F(desc);
}

/* getModuleName__E */
xdc_String xdc_runtime_Registry_getModuleName__E( xdc_runtime_Registry_Desc* desc ) 
{
    return xdc_runtime_Registry_getModuleName__F(desc);
}

/* getModuleId__E */
xdc_runtime_Types_ModuleId xdc_runtime_Registry_getModuleId__E( xdc_runtime_Registry_Desc* desc ) 
{
    return xdc_runtime_Registry_getModuleId__F(desc);
}


/*
 * ======== xdc.runtime.Startup FUNCTION STUBS ========
 */

/* exec__E */
xdc_Void xdc_runtime_Startup_exec__E( void ) 
{
    xdc_runtime_Startup_exec__F();
}

/* rtsDone__E */
xdc_Bool xdc_runtime_Startup_rtsDone__E( void ) 
{
    return xdc_runtime_Startup_rtsDone__F();
}


/*
 * ======== xdc.runtime.SysMin FUNCTION STUBS ========
 */

/* abort__E */
xdc_Void xdc_runtime_SysMin_abort__E( xdc_String str ) 
{
    xdc_runtime_SysMin_abort__F(str);
}

/* exit__E */
xdc_Void xdc_runtime_SysMin_exit__E( xdc_Int stat ) 
{
    xdc_runtime_SysMin_exit__F(stat);
}

/* flush__E */
xdc_Void xdc_runtime_SysMin_flush__E( void ) 
{
    xdc_runtime_SysMin_flush__F();
}

/* putch__E */
xdc_Void xdc_runtime_SysMin_putch__E( xdc_Char ch ) 
{
    xdc_runtime_SysMin_putch__F(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_SysMin_ready__E( void ) 
{
    return xdc_runtime_SysMin_ready__F();
}

/* Module_startup */
xdc_Int xdc_runtime_SysMin_Module_startup__E( xdc_Int state )
{
    return xdc_runtime_SysMin_Module_startup__F(state);
}


/*
 * ======== xdc.runtime.System FUNCTION STUBS ========
 */

/* abort__E */
xdc_Void xdc_runtime_System_abort__E( xdc_String str ) 
{
    xdc_runtime_System_abort__F(str);
}

/* atexit__E */
xdc_Bool xdc_runtime_System_atexit__E( xdc_runtime_System_AtexitHandler handler ) 
{
    return xdc_runtime_System_atexit__F(handler);
}

/* exit__E */
xdc_Void xdc_runtime_System_exit__E( xdc_Int stat ) 
{
    xdc_runtime_System_exit__F(stat);
}

/* putch__E */
xdc_Void xdc_runtime_System_putch__E( xdc_Char ch ) 
{
    xdc_runtime_System_putch__F(ch);
}

/* flush__E */
xdc_Void xdc_runtime_System_flush__E( void ) 
{
    xdc_runtime_System_flush__F();
}

/* printf_va__E */
xdc_Int xdc_runtime_System_printf_va__E( xdc_String fmt, va_list __va ) 
{
    return xdc_runtime_System_printf_va__F(fmt, __va);
}

/* printf__E */
xdc_Int xdc_runtime_System_printf__E( xdc_String fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_printf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* aprintf_va__E */
xdc_Int xdc_runtime_System_aprintf_va__E( xdc_String fmt, va_list __va ) 
{
    return xdc_runtime_System_aprintf_va__F(fmt, __va);
}

/* aprintf__E */
xdc_Int xdc_runtime_System_aprintf__E( xdc_String fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_aprintf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* sprintf_va__E */
xdc_Int xdc_runtime_System_sprintf_va__E( xdc_Char buf[], xdc_String fmt, va_list __va ) 
{
    return xdc_runtime_System_sprintf_va__F(buf, fmt, __va);
}

/* sprintf__E */
xdc_Int xdc_runtime_System_sprintf__E( xdc_Char buf[], xdc_String fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_sprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* asprintf_va__E */
xdc_Int xdc_runtime_System_asprintf_va__E( xdc_Char buf[], xdc_String fmt, va_list __va ) 
{
    return xdc_runtime_System_asprintf_va__F(buf, fmt, __va);
}

/* asprintf__E */
xdc_Int xdc_runtime_System_asprintf__E( xdc_Char buf[], xdc_String fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_asprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* vprintf__E */
xdc_Int xdc_runtime_System_vprintf__E( xdc_String fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_vprintf__F(fmt, va);
}

/* avprintf__E */
xdc_Int xdc_runtime_System_avprintf__E( xdc_String fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_avprintf__F(fmt, va);
}

/* vsprintf__E */
xdc_Int xdc_runtime_System_vsprintf__E( xdc_Char buf[], xdc_String fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_vsprintf__F(buf, fmt, va);
}

/* avsprintf__E */
xdc_Int xdc_runtime_System_avsprintf__E( xdc_Char buf[], xdc_String fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_avsprintf__F(buf, fmt, va);
}

/* Module_startup */
xdc_Int xdc_runtime_System_Module_startup__E( xdc_Int state )
{
    return xdc_runtime_System_Module_startup__F(state);
}


/*
 * ======== xdc.runtime.Text FUNCTION STUBS ========
 */

/* cordText__E */
xdc_String xdc_runtime_Text_cordText__E( xdc_runtime_Text_CordAddr cord ) 
{
    return xdc_runtime_Text_cordText__F(cord);
}

/* ropeText__E */
xdc_String xdc_runtime_Text_ropeText__E( xdc_runtime_Text_RopeId rope ) 
{
    return xdc_runtime_Text_ropeText__F(rope);
}

/* matchRope__E */
xdc_Int xdc_runtime_Text_matchRope__E( xdc_runtime_Text_RopeId rope, xdc_String pat, xdc_Int* lenp ) 
{
    return xdc_runtime_Text_matchRope__F(rope, pat, lenp);
}

/* putLab__E */
xdc_Int xdc_runtime_Text_putLab__E( xdc_runtime_Types_Label* lab, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putLab__F(lab, bufp, len);
}

/* putMod__E */
xdc_Int xdc_runtime_Text_putMod__E( xdc_runtime_Types_ModuleId mid, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putMod__F(mid, bufp, len);
}

/* putSite__E */
xdc_Int xdc_runtime_Text_putSite__E( xdc_runtime_Types_Site* site, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putSite__F(site, bufp, len);
}


/*
 * ======== xdc.runtime.Timestamp FUNCTION STUBS ========
 */

/* get32__E */
xdc_Bits32 xdc_runtime_Timestamp_get32__E( void ) 
{
    return xdc_runtime_Timestamp_get32__F();
}

/* get64__E */
xdc_Void xdc_runtime_Timestamp_get64__E( xdc_runtime_Types_Timestamp64* result ) 
{
    xdc_runtime_Timestamp_get64__F(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_Timestamp_getFreq__E( xdc_runtime_Types_FreqHz* freq ) 
{
    xdc_runtime_Timestamp_getFreq__F(freq);
}


/*
 * ======== xdc.runtime.TimestampNull FUNCTION STUBS ========
 */

/* get32__E */
xdc_Bits32 xdc_runtime_TimestampNull_get32__E( void ) 
{
    return xdc_runtime_TimestampNull_get32__F();
}

/* get64__E */
xdc_Void xdc_runtime_TimestampNull_get64__E( xdc_runtime_Types_Timestamp64* result ) 
{
    xdc_runtime_TimestampNull_get64__F(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_TimestampNull_getFreq__E( xdc_runtime_Types_FreqHz* freq ) 
{
    xdc_runtime_TimestampNull_getFreq__F(freq);
}


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_BIOS_RtsGateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateMutex_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateMutex___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_BIOS_RtsGateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_BIOS_RtsGateProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_BIOS_RtsGateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_BIOS_RtsGateProxy_enter__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_BIOS_RtsGateProxy_leave__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.Hwi */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_Hwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_family_arm_m3_Hwi_Object__create__S(oa, osz, aa, (ti_sysbios_family_arm_m3_Hwi___ParamsPtr)pa, sizeof(ti_sysbios_interfaces_IHwi_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Hwi_HwiProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_family_arm_m3_Hwi_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Hwi_HwiProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_m3_Hwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Hwi_HwiProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_family_arm_m3_Hwi_Handle__label__S(obj, lab);
}

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo* stkInfo, xdc_Bool computeStackDepth )
{
    return ti_sysbios_family_arm_m3_Hwi_getStackInfo(stkInfo, computeStackDepth);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_startup__E( void )
{
    ti_sysbios_family_arm_m3_Hwi_startup();
}

/* disable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disable__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_disable();
}

/* enable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enable__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_enable();
}

/* restore__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restore__E( xdc_UInt key )
{
    ti_sysbios_family_arm_m3_Hwi_restore(key);
}

/* switchFromBootStack__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_switchFromBootStack__E( void )
{
    ti_sysbios_family_arm_m3_Hwi_switchFromBootStack();
}

/* post__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_post__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_m3_Hwi_post(intNum);
}

/* getTaskSP__E */
xdc_Char* ti_sysbios_hal_Hwi_HwiProxy_getTaskSP__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_getTaskSP();
}

/* disableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_m3_Hwi_disableInterrupt(intNum);
}

/* enableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_m3_Hwi_enableInterrupt(intNum);
}

/* restoreInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restoreInterrupt__E( xdc_UInt intNum, xdc_UInt key )
{
    ti_sysbios_family_arm_m3_Hwi_restoreInterrupt(intNum, key);
}

/* clearInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_clearInterrupt__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_m3_Hwi_clearInterrupt(intNum);
}

/* getFunc__E */
ti_sysbios_interfaces_IHwi_FuncPtr ti_sysbios_hal_Hwi_HwiProxy_getFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_UArg* arg )
{
    return ti_sysbios_family_arm_m3_Hwi_getFunc((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, ti_sysbios_interfaces_IHwi_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_m3_Hwi_setFunc((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, fxn, arg);
}

/* getHookContext__E */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_getHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id )
{
    return ti_sysbios_family_arm_m3_Hwi_getHookContext((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, id);
}

/* setHookContext__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id, xdc_Ptr hookContext )
{
    ti_sysbios_family_arm_m3_Hwi_setHookContext((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, id, hookContext);
}

/* getIrp__E */
ti_sysbios_interfaces_IHwi_Irp ti_sysbios_hal_Hwi_HwiProxy_getIrp__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst )
{
    return ti_sysbios_family_arm_m3_Hwi_getIrp((ti_sysbios_family_arm_m3_Hwi_Handle)__inst);
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.lm3.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_lm3_Timer_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Timer_TimerProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Timer_TimerProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_family_arm_lm3_Timer_Object__create__S(oa, osz, aa, (ti_sysbios_family_arm_lm3_Timer___ParamsPtr)pa, sizeof(ti_sysbios_interfaces_ITimer_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Timer_TimerProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_family_arm_lm3_Timer_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Timer_TimerProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_lm3_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Timer_TimerProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_family_arm_lm3_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_hal_Timer_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_family_arm_lm3_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_hal_Timer_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_family_arm_lm3_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_startup__E( void )
{
    ti_sysbios_family_arm_lm3_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getMaxTicks__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 periodCounts )
{
    return ti_sysbios_family_arm_lm3_Timer_getMaxTicks((ti_sysbios_family_arm_lm3_Timer_Handle)__inst, periodCounts);
}

/* setNextTick__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setNextTick__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 newPeriod, xdc_UInt32 countsPerTick )
{
    ti_sysbios_family_arm_lm3_Timer_setNextTick((ti_sysbios_family_arm_lm3_Timer_Handle)__inst, newPeriod, countsPerTick);
}

/* start__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_start__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    ti_sysbios_family_arm_lm3_Timer_start((ti_sysbios_family_arm_lm3_Timer_Handle)__inst);
}

/* stop__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_stop__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    ti_sysbios_family_arm_lm3_Timer_stop((ti_sysbios_family_arm_lm3_Timer_Handle)__inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 period )
{
    ti_sysbios_family_arm_lm3_Timer_setPeriod((ti_sysbios_family_arm_lm3_Timer_Handle)__inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_family_arm_lm3_Timer_setPeriodMicroSecs((ti_sysbios_family_arm_lm3_Timer_Handle)__inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm3_Timer_getPeriod((ti_sysbios_family_arm_lm3_Timer_Handle)__inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getCount__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm3_Timer_getCount((ti_sysbios_family_arm_lm3_Timer_Handle)__inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_getFreq__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_runtime_Types_FreqHz* freq )
{
    ti_sysbios_family_arm_lm3_Timer_getFreq((ti_sysbios_family_arm_lm3_Timer_Handle)__inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_hal_Timer_TimerProxy_getFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UArg* arg )
{
    return ti_sysbios_family_arm_lm3_Timer_getFunc((ti_sysbios_family_arm_lm3_Timer_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_lm3_Timer_setFunc((ti_sysbios_family_arm_lm3_Timer_Handle)__inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_trigger__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 cycles )
{
    ti_sysbios_family_arm_lm3_Timer_trigger((ti_sysbios_family_arm_lm3_Timer_Handle)__inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getExpiredCounts__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm3_Timer_getExpiredCounts((ti_sysbios_family_arm_lm3_Timer_Handle)__inst);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateMutex_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateMutex___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_heaps_HeapMem_Module_GateProxy_enter__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_heaps_HeapMem_Module_GateProxy_leave__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.IntrinsicsSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S();
}

/* maxbit__E */
xdc_UInt ti_sysbios_knl_Intrinsics_SupportProxy_maxbit__E( xdc_UInt bits )
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit(bits);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.TaskSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_TaskSupport_Module__startupDone__S();
}

/* start__E */
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_start__E( xdc_Ptr curTask, ti_sysbios_interfaces_ITaskSupport_FuncPtr enter, ti_sysbios_interfaces_ITaskSupport_FuncPtr exit, xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_family_arm_m3_TaskSupport_start(curTask, enter, exit, eb);
}

/* swap__E */
xdc_Void ti_sysbios_knl_Task_SupportProxy_swap__E( xdc_Ptr* oldtskContext, xdc_Ptr* newtskContext )
{
    ti_sysbios_family_arm_m3_TaskSupport_swap(oldtskContext, newtskContext);
}

/* checkStack__E */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_checkStack__E( xdc_Char* stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_m3_TaskSupport_checkStack(stack, size);
}

/* stackUsed__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_stackUsed__E( xdc_Char* stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_m3_TaskSupport_stackUsed(stack, size);
}

/* getStackAlignment__E */
xdc_UInt ti_sysbios_knl_Task_SupportProxy_getStackAlignment__E( void )
{
    return ti_sysbios_family_arm_m3_TaskSupport_getStackAlignment();
}

/* getDefaultStackSize__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_getDefaultStackSize__E( void )
{
    return ti_sysbios_family_arm_m3_TaskSupport_getDefaultStackSize();
}


/*
 * ======== ti.uia.runtime.LogSync_CpuTimestampProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.Timestamp */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_LogSync_CpuTimestampProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_Timestamp_Module__startupDone__S();
}

/* get32__E */
xdc_Bits32 ti_uia_runtime_LogSync_CpuTimestampProxy_get32__E( void )
{
    return xdc_runtime_Timestamp_get32();
}

/* get64__E */
xdc_Void ti_uia_runtime_LogSync_CpuTimestampProxy_get64__E( xdc_runtime_Types_Timestamp64* result )
{
    xdc_runtime_Timestamp_get64(result);
}

/* getFreq__E */
xdc_Void ti_uia_runtime_LogSync_CpuTimestampProxy_getFreq__E( xdc_runtime_Types_FreqHz* freq )
{
    xdc_runtime_Timestamp_getFreq(freq);
}


/*
 * ======== ti.uia.runtime.LogSync_GlobalTimestampProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.TimestampNull */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_LogSync_GlobalTimestampProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_TimestampNull_Module__startupDone__S();
}

/* get32__E */
xdc_Bits32 ti_uia_runtime_LogSync_GlobalTimestampProxy_get32__E( void )
{
    return xdc_runtime_TimestampNull_get32();
}

/* get64__E */
xdc_Void ti_uia_runtime_LogSync_GlobalTimestampProxy_get64__E( xdc_runtime_Types_Timestamp64* result )
{
    xdc_runtime_TimestampNull_get64(result);
}

/* getFreq__E */
xdc_Void ti_uia_runtime_LogSync_GlobalTimestampProxy_getFreq__E( xdc_runtime_Types_FreqHz* freq )
{
    xdc_runtime_TimestampNull_getFreq(freq);
}


/*
 * ======== xdc.runtime.Main_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_Main_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateHwi_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateHwi___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_Main_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Main_Module_GateProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_Main_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_Main_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_Main_Module_GateProxy_enter__E( xdc_runtime_Main_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_Main_Module_GateProxy_leave__E( xdc_runtime_Main_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.Memory_HeapProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.heaps.HeapMem */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_HeapProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_heaps_HeapMem_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Memory_HeapProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_Memory_HeapProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_heaps_HeapMem_Object__create__S(oa, osz, aa, (ti_sysbios_heaps_HeapMem___ParamsPtr)pa, sizeof(xdc_runtime_IHeap_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_Memory_HeapProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Memory_HeapProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_heaps_HeapMem_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_Memory_HeapProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_heaps_HeapMem_Handle__label__S(obj, lab);
}

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_HeapProxy_alloc__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb )
{
    return xdc_runtime_IHeap_alloc((xdc_runtime_IHeap_Handle)__inst, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_HeapProxy_free__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_Ptr block, xdc_SizeT size )
{
    xdc_runtime_IHeap_free((xdc_runtime_IHeap_Handle)__inst, block, size);
}

/* isBlocking__E */
xdc_Bool xdc_runtime_Memory_HeapProxy_isBlocking__E( xdc_runtime_Memory_HeapProxy_Handle __inst )
{
    return xdc_runtime_IHeap_isBlocking((xdc_runtime_IHeap_Handle)__inst);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_HeapProxy_getStats__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_runtime_Memory_Stats* stats )
{
    xdc_runtime_IHeap_getStats((xdc_runtime_IHeap_Handle)__inst, stats);
}


/*
 * ======== xdc.runtime.System_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_System_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_System_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateHwi_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateHwi___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_System_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_System_Module_GateProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_System_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_System_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_System_Module_GateProxy_enter__E( xdc_runtime_System_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_System_Module_GateProxy_leave__E( xdc_runtime_System_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.System_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.SysMin */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_SupportProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysMin_Module__startupDone__S();
}

/* abort__E */
xdc_Void xdc_runtime_System_SupportProxy_abort__E( xdc_String str )
{
    xdc_runtime_SysMin_abort(str);
}

/* exit__E */
xdc_Void xdc_runtime_System_SupportProxy_exit__E( xdc_Int stat )
{
    xdc_runtime_SysMin_exit(stat);
}

/* flush__E */
xdc_Void xdc_runtime_System_SupportProxy_flush__E( void )
{
    xdc_runtime_SysMin_flush();
}

/* putch__E */
xdc_Void xdc_runtime_System_SupportProxy_putch__E( xdc_Char ch )
{
    xdc_runtime_SysMin_putch(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_System_SupportProxy_ready__E( void )
{
    return xdc_runtime_SysMin_ready();
}


/*
 * ======== xdc.runtime.Timestamp_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.lm3.TimestampProvider */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_lm3_TimestampProvider_Module__startupDone__S();
}

/* get32__E */
xdc_Bits32 xdc_runtime_Timestamp_SupportProxy_get32__E( void )
{
    return ti_sysbios_family_arm_lm3_TimestampProvider_get32();
}

/* get64__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_get64__E( xdc_runtime_Types_Timestamp64* result )
{
    ti_sysbios_family_arm_lm3_TimestampProvider_get64(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_getFreq__E( xdc_runtime_Types_FreqHz* freq )
{
    ti_sysbios_family_arm_lm3_TimestampProvider_getFreq(freq);
}


/*
 * ======== ti.sysbios.family.arm.lm3.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_lm3_Timer_Object2__ s0; char c; } ti_sysbios_family_arm_lm3_Timer___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_lm3_Timer_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_family_arm_lm3_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_lm3_Timer___S1) - sizeof(ti_sysbios_family_arm_lm3_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_lm3_Timer_Object2__), /* objSize */
    (Ptr)&ti_sysbios_family_arm_lm3_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_lm3_Timer_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.family.arm.m3.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_m3_Hwi_Object2__ s0; char c; } ti_sysbios_family_arm_m3_Hwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_m3_Hwi___S1) - sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.gates.GateHwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateHwi_Object2__ s0; char c; } ti_sysbios_gates_GateHwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C = {
    (Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateHwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateHwi___S1) - sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_gates_GateHwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateHwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.gates.GateMutex OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateMutex_Object2__ s0; char c; } ti_sysbios_gates_GateMutex___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C = {
    (Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateMutex_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateMutex___S1) - sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objSize */
    (Ptr)&ti_sysbios_gates_GateMutex_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateMutex_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.hal.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Hwi_Object2__ s0; char c; } ti_sysbios_hal_Hwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_hal_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Hwi___S1) - sizeof(ti_sysbios_hal_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Hwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_hal_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Hwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.hal.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Timer_Object2__ s0; char c; } ti_sysbios_hal_Timer___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Timer_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_hal_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Timer___S1) - sizeof(ti_sysbios_hal_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Timer_Object2__), /* objSize */
    (Ptr)&ti_sysbios_hal_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Timer_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.heaps.HeapMem OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapMem_Object2__ s0; char c; } ti_sysbios_heaps_HeapMem___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C = {
    (Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_heaps_HeapMem___S1) - sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objSize */
    (Ptr)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_heaps_HeapMem_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Clock OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Clock_Object2__ s0; char c; } ti_sysbios_knl_Clock___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Clock_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Clock___S1) - sizeof(ti_sysbios_knl_Clock_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Clock_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Clock_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Clock_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Event OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Event_Object2__ s0; char c; } ti_sysbios_knl_Event___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Event_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Event___S1) - sizeof(ti_sysbios_knl_Event_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Event_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Event_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Event_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Queue OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Queue_Object2__ s0; char c; } ti_sysbios_knl_Queue___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Queue_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Queue___S1) - sizeof(ti_sysbios_knl_Queue_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Queue_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Queue_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Queue_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Semaphore OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Semaphore_Object2__ s0; char c; } ti_sysbios_knl_Semaphore___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Semaphore_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Semaphore___S1) - sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Semaphore_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Semaphore_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Swi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Swi_Object2__ s0; char c; } ti_sysbios_knl_Swi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Swi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Swi___S1) - sizeof(ti_sysbios_knl_Swi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Swi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Swi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Swi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Task OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Task_Object2__ s0; char c; } ti_sysbios_knl_Task___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Task_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Task___S1) - sizeof(ti_sysbios_knl_Task_Object2__), /* objAlign */
    0, /* objHeap */
    offsetof(ti_sysbios_knl_Task_Object__, __name), /* objName */
    sizeof(ti_sysbios_knl_Task_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Task_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Task_Params), /* prmsSize */
};



/*
 * ======== ti.uia.runtime.LogSync OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_uia_runtime_LogSync_Object2__ s0; char c; } ti_uia_runtime_LogSync___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_uia_runtime_LogSync_Object__DESC__C = {
    (Ptr)&ti_uia_runtime_LogSync_Module__FXNS__C, /* fxnTab */
    &ti_uia_runtime_LogSync_Module__root__V.link, /* modLink */
    sizeof(ti_uia_runtime_LogSync___S1) - sizeof(ti_uia_runtime_LogSync_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_uia_runtime_LogSync_Object2__), /* objSize */
    (Ptr)&ti_uia_runtime_LogSync_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_uia_runtime_LogSync_Params), /* prmsSize */
};



/*
 * ======== ti.uia.runtime.LoggerStopMode OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_uia_runtime_LoggerStopMode_Object2__ s0; char c; } ti_uia_runtime_LoggerStopMode___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_uia_runtime_LoggerStopMode_Object__DESC__C = {
    (Ptr)&ti_uia_runtime_LoggerStopMode_Module__FXNS__C, /* fxnTab */
    &ti_uia_runtime_LoggerStopMode_Module__root__V.link, /* modLink */
    sizeof(ti_uia_runtime_LoggerStopMode___S1) - sizeof(ti_uia_runtime_LoggerStopMode_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_uia_runtime_LoggerStopMode_Object2__), /* objSize */
    (Ptr)&ti_uia_runtime_LoggerStopMode_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_uia_runtime_LoggerStopMode_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.BIOS SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS_RtsGateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_BIOS_RtsGateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.family.arm.lm3.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_lm3_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_lm3_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_lm3_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_lm3_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_lm3_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_lm3_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_lm3_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_lm3_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_lm3_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_lm3_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_lm3_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_lm3_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_lm3_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_lm3_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_lm3_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_lm3_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_lm3_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_lm3_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_lm3_Timer_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_lm3_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_family_arm_lm3_Timer_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32809;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_lm3_Timer_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_arm_lm3_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_lm3_Timer_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_family_arm_lm3_Timer_Object__*)oa) + i;
    }

    if (ti_sysbios_family_arm_lm3_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_arm_lm3_Timer_Object__*)ti_sysbios_family_arm_lm3_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_lm3_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_lm3_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_lm3_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_lm3_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_lm3_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_lm3_Timer_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_family_arm_lm3_Timer___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_family_arm_lm3_Timer_Params prms;
    ti_sysbios_family_arm_lm3_Timer_Object* obj;
    int iStat;

    ti_sysbios_family_arm_lm3_Timer_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_lm3_Timer_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_lm3_Timer_Instance_init__F(obj, args->id, args->tickFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm3_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_lm3_Timer_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_arm_lm3_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm3_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_lm3_Timer_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_lm3_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm3_Timer_Object__DESC__C, *((ti_sysbios_family_arm_lm3_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_lm3_Timer_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_family_arm_lm3_Timer_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.family.arm.lm3.TimestampProvider SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_lm3_TimestampProvider_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_lm3_TimestampProvider_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.arm.m3.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_m3_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_family_arm_m3_Hwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32804;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_family_arm_m3_Hwi_Object__*)oa) + i;
    }

    if (ti_sysbios_family_arm_m3_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_arm_m3_Hwi_Object__*)ti_sysbios_family_arm_m3_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_m3_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_family_arm_m3_Hwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_family_arm_m3_Hwi_Params prms;
    ti_sysbios_family_arm_m3_Hwi_Object* obj;
    int iStat;

    ti_sysbios_family_arm_m3_Hwi_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__F(obj, args->intNum, args->hwiFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, *((ti_sysbios_family_arm_m3_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_family_arm_m3_Hwi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_TaskSupport_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.gates.GateHwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateHwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateHwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateHwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateHwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateHwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateHwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateHwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateHwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateHwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateHwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateHwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateHwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateHwi_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_gates_GateHwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32813;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateHwi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateHwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_gates_GateHwi_Object__*)oa) + i;
    }

    if (ti_sysbios_gates_GateHwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateHwi_Object__*)ti_sysbios_gates_GateHwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateHwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_gates_GateHwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_gates_GateHwi_Params prms;
    ti_sysbios_gates_GateHwi_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, *((ti_sysbios_gates_GateHwi_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_gates_GateHwi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.gates.GateMutex SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateMutex_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateMutex_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateMutex_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateMutex_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateMutex_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateMutex_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateMutex_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateMutex_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateMutex_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateMutex_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateMutex_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateMutex_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateMutex_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateMutex_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_gates_GateMutex_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32814;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateMutex_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateMutex_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_gates_GateMutex_Object__*)oa) + i;
    }

    if (ti_sysbios_gates_GateMutex_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateMutex_Object__*)ti_sysbios_gates_GateMutex_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateMutex_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_gates_GateMutex___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_gates_GateMutex_Params prms;
    ti_sysbios_gates_GateMutex_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__F, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, *((ti_sysbios_gates_GateMutex_Object**)instp), (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__F, -1, FALSE);
    *((ti_sysbios_gates_GateMutex_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.hal.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__S( void ) 
{
    return ti_sysbios_hal_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Hwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32790;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Hwi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_hal_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_hal_Hwi_Object__*)oa) + i;
    }

    if (ti_sysbios_hal_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_hal_Hwi_Object__*)ti_sysbios_hal_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Hwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_hal_Hwi_Params prms;
    ti_sysbios_hal_Hwi_Object* obj;
    int iStat;

    ti_sysbios_hal_Hwi_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__F(obj, args->intNum, args->hwiFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_hal_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, *((ti_sysbios_hal_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_hal_Hwi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_HwiProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.hal.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__S( void ) 
{
    return ti_sysbios_hal_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Timer_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32791;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Timer_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_hal_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_hal_Timer_Object__*)oa) + i;
    }

    if (ti_sysbios_hal_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_hal_Timer_Object__*)ti_sysbios_hal_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Timer___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_hal_Timer_Params prms;
    ti_sysbios_hal_Timer_Object* obj;
    int iStat;

    ti_sysbios_hal_Timer_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Timer_Instance_init__F(obj, args->id, args->tickFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_hal_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, *((ti_sysbios_hal_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_hal_Timer_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Timer_TimerProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Timer_TimerProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Timer_TimerProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Timer_TimerProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Timer_TimerProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Timer_TimerProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Timer_TimerProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Timer_TimerProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Timer_TimerProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.heaps.HeapMem SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_heaps_HeapMem_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32811;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_heaps_HeapMem_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_heaps_HeapMem_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_heaps_HeapMem_Object__*)oa) + i;
    }

    if (ti_sysbios_heaps_HeapMem_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_heaps_HeapMem_Object__*)ti_sysbios_heaps_HeapMem_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_heaps_HeapMem_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_heaps_HeapMem___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_heaps_HeapMem_Params prms;
    ti_sysbios_heaps_HeapMem_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, *((ti_sysbios_heaps_HeapMem_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_heaps_HeapMem_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.knl.Clock SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__S( void ) 
{
    return ti_sysbios_knl_Clock_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Clock_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32793;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Clock_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Clock_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Clock_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Clock_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Clock_Object__*)ti_sysbios_knl_Clock_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Clock_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Clock___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Clock_Params prms;
    ti_sysbios_knl_Clock_Object* obj;

    ti_sysbios_knl_Clock_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__F(obj, args->clockFxn, args->timeout, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Clock_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__F, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Clock_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, *((ti_sysbios_knl_Clock_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__F, -1, FALSE);
    *((ti_sysbios_knl_Clock_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Event SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Event_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Event_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Event_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Event_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Event_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Event_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Event_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Event_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Event_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Event_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Event_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Event_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Event_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Event_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Event_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Event_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Event_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Event_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Event_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Event_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32796;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Event_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Event_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Event_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Event_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Event_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Event_Object__*)ti_sysbios_knl_Event_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Event_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Event_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Event_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Event_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Event___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Event_Params prms;
    ti_sysbios_knl_Event_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Event_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Event_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, *((ti_sysbios_knl_Event_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Event_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Idle SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Idle_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C;
}


/*
 * ======== ti.sysbios.knl.Queue SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Queue_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Queue_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Queue_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Queue_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Queue_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Queue_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Queue_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Queue_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Queue_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Queue_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Queue_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Queue_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Queue_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Queue_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Queue_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Queue_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Queue_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Queue_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Queue_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Queue_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32797;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Queue_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Queue_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Queue_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Queue_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Queue_Object__*)ti_sysbios_knl_Queue_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Queue_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Queue___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Queue_Params prms;
    ti_sysbios_knl_Queue_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Queue_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Queue_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, *((ti_sysbios_knl_Queue_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Queue_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Semaphore SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Semaphore_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Semaphore_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Semaphore_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Semaphore_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Semaphore_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Semaphore_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Semaphore_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Semaphore_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Semaphore_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Semaphore_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Semaphore_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Semaphore_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Semaphore_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Semaphore_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Semaphore_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32798;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Semaphore_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Semaphore_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Semaphore_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Semaphore_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Semaphore_Object__*)ti_sysbios_knl_Semaphore_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Semaphore_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Semaphore___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Semaphore_Params prms;
    ti_sysbios_knl_Semaphore_Object* obj;

    ti_sysbios_knl_Semaphore_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__F(obj, args->count, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__F, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, *((ti_sysbios_knl_Semaphore_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__F, -1, FALSE);
    *((ti_sysbios_knl_Semaphore_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Swi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Swi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Swi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Swi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Swi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Swi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Swi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Swi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Swi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Swi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Swi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Swi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Swi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Swi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Swi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Swi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Swi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Swi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Swi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__S( void ) 
{
    return ti_sysbios_knl_Swi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Swi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32799;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Swi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Swi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Swi_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Swi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Swi_Object__*)ti_sysbios_knl_Swi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Swi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Swi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Swi_Params prms;
    ti_sysbios_knl_Swi_Object* obj;
    int iStat;

    ti_sysbios_knl_Swi_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__F(obj, args->fxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Swi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Swi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, *((ti_sysbios_knl_Swi_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_knl_Swi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Task SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Task_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Task_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Task_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Task_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Task_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Task_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Task_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Task_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Task_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Task_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Task_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Task_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Task_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Task_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Task_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Task_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Task_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Task_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__S( void ) 
{
    return ti_sysbios_knl_Task_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Task_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32800;
    xdc_runtime_Core_assignLabel(lab, ((ti_sysbios_knl_Task_Object__*)obj)->__name, 1);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Task_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Task_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Task_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Task_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Task_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Task_Object__*)ti_sysbios_knl_Task_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Task_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Task_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Task_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Task_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Task___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Task_Params prms;
    ti_sysbios_knl_Task_Object* obj;
    int iStat;

    ti_sysbios_knl_Task_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__F(obj, args->fxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Task_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Task_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, *((ti_sysbios_knl_Task_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_knl_Task_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_sysbios_knl_Task_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== ti.sysbios.utils.Load SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_utils_Load_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.uia.events.DvtTypes SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_DvtTypes_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.uia.events.UIABenchmark SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIABenchmark_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.uia.events.UIAErr SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIAErr_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.uia.events.UIAEvt SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIAEvt_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.uia.events.UIARoundtrip SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIARoundtrip_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.uia.events.UIAStatistic SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIAStatistic_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.uia.events.UIASync SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIASync_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.uia.runtime.LogSync SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_uia_runtime_LogSync_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_uia_runtime_LogSync_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_uia_runtime_LogSync_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_uia_runtime_LogSync_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_uia_runtime_LogSync_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_uia_runtime_LogSync_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_uia_runtime_LogSync_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_uia_runtime_LogSync_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_uia_runtime_LogSync_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_uia_runtime_LogSync_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_uia_runtime_LogSync_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_uia_runtime_LogSync_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_uia_runtime_LogSync_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_uia_runtime_LogSync_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_uia_runtime_LogSync_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_uia_runtime_LogSync_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_uia_runtime_LogSync_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_uia_runtime_LogSync_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_LogSync_Module__startupDone__S( void ) 
{
    return ti_uia_runtime_LogSync_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_uia_runtime_LogSync_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32827;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_uia_runtime_LogSync_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_uia_runtime_LogSync_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_uia_runtime_LogSync_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_uia_runtime_LogSync_Object__*)oa) + i;
    }

    if (ti_uia_runtime_LogSync_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_uia_runtime_LogSync_Object__*)ti_uia_runtime_LogSync_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_uia_runtime_LogSync_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_uia_runtime_LogSync_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_uia_runtime_LogSync_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_uia_runtime_LogSync_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_uia_runtime_LogSync_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_uia_runtime_LogSync_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_uia_runtime_LogSync___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_uia_runtime_LogSync_Params prms;
    ti_uia_runtime_LogSync_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_uia_runtime_LogSync_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_uia_runtime_LogSync_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_uia_runtime_LogSync_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_uia_runtime_LogSync_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_uia_runtime_LogSync_Object__DESC__C, *((ti_uia_runtime_LogSync_Object**)instp), NULL, -1, FALSE);
    *((ti_uia_runtime_LogSync_Handle*)instp) = NULL;
}


/*
 * ======== ti.uia.runtime.LogSync_CpuTimestampProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_uia_runtime_LogSync_CpuTimestampProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_uia_runtime_LogSync_CpuTimestampProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_Timestamp_Module__FXNS__C;
}


/*
 * ======== ti.uia.runtime.LogSync_GlobalTimestampProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_uia_runtime_LogSync_GlobalTimestampProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_uia_runtime_LogSync_GlobalTimestampProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_TimestampNull_Module__FXNS__C;
}


/*
 * ======== ti.uia.runtime.LoggerStopMode SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_uia_runtime_LoggerStopMode_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_uia_runtime_LoggerStopMode_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_uia_runtime_LoggerStopMode_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_uia_runtime_LoggerStopMode_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_uia_runtime_LoggerStopMode_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_uia_runtime_LoggerStopMode_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_uia_runtime_LoggerStopMode_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_uia_runtime_LoggerStopMode_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_uia_runtime_LoggerStopMode_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_uia_runtime_LoggerStopMode_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_uia_runtime_LoggerStopMode_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_uia_runtime_LoggerStopMode_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_uia_runtime_LoggerStopMode_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_uia_runtime_LoggerStopMode_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_uia_runtime_LoggerStopMode_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_uia_runtime_LoggerStopMode_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_uia_runtime_LoggerStopMode_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_uia_runtime_LoggerStopMode_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_LoggerStopMode_Module__startupDone__S( void ) 
{
    return ti_uia_runtime_LoggerStopMode_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_uia_runtime_LoggerStopMode_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32828;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_uia_runtime_LoggerStopMode_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_uia_runtime_LoggerStopMode_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_uia_runtime_LoggerStopMode_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_uia_runtime_LoggerStopMode_Object__*)oa) + i;
    }

    if (ti_uia_runtime_LoggerStopMode_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_uia_runtime_LoggerStopMode_Object__*)ti_uia_runtime_LoggerStopMode_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_uia_runtime_LoggerStopMode_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_uia_runtime_LoggerStopMode_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_uia_runtime_LoggerStopMode_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_uia_runtime_LoggerStopMode_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_uia_runtime_LoggerStopMode_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_uia_runtime_LoggerStopMode_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_uia_runtime_LoggerStopMode___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_uia_runtime_LoggerStopMode_Params prms;
    ti_uia_runtime_LoggerStopMode_Object* obj;
    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_uia_runtime_LoggerStopMode_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_uia_runtime_LoggerStopMode_Instance_init__F(obj, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_uia_runtime_LoggerStopMode_Object__DESC__C, obj, (xdc_Fxn)ti_uia_runtime_LoggerStopMode_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_uia_runtime_LoggerStopMode_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_uia_runtime_LoggerStopMode_Object__DESC__C, obj, (xdc_Fxn)ti_uia_runtime_LoggerStopMode_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_uia_runtime_LoggerStopMode_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_uia_runtime_LoggerStopMode_Object__DESC__C, *((ti_uia_runtime_LoggerStopMode_Object**)instp), (xdc_Fxn)ti_uia_runtime_LoggerStopMode_Instance_finalize__F, 0, FALSE);
    *((ti_uia_runtime_LoggerStopMode_Handle*)instp) = NULL;
}


/*
 * ======== ti.uia.runtime.QueueDescriptor SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_QueueDescriptor_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.uia.runtime.UIAMetaData SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_UIAMetaData_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Assert SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Assert_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Core_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Defaults SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Diags SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Diags_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Error SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Error_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Gate SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Gate_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Log SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Log_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Main SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Main_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Main_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Main_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Main_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Main_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Main_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Main_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Main_Module_GateProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_Main_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Memory SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Memory_HeapProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Memory_HeapProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Memory_HeapProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Memory_HeapProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Memory_HeapProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Memory_HeapProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Memory_HeapProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Memory_HeapProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Memory_HeapProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Memory_HeapProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_Memory_HeapProxy_Proxy__abstract__S( void )
{
    return 1;
}
xdc_Ptr xdc_runtime_Memory_HeapProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Registry SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Registry_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Startup SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Startup_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.SysMin SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysMin_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module__startupDone__S( void ) 
{
    return xdc_runtime_System_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_System_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_System_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_System_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_System_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_System_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_System_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_System_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_System_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_System_Module_GateProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_System_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.System_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool xdc_runtime_System_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_SysMin_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Text SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Text_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.TimestampNull SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_TimestampNull_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool xdc_runtime_Timestamp_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Timestamp_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== xdc.runtime.Types SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Types_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== INITIALIZATION ENTRY POINT ========
 */

extern int __xdc__init(void);
#ifdef __GNUC__
#if __GNUC__ >= 4
    __attribute__ ((externally_visible))
#endif
#endif
__FAR__ int (* volatile __xdc__init__addr)(void) = &__xdc__init;


/*
 * ======== PROGRAM GLOBALS ========
 */

#ifdef __GNUC__
#if __GNUC__ >= 4
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Clock_Handle clock0 = (ti_sysbios_knl_Clock_Handle)((ti_sysbios_knl_Clock_Handle)&ti_sysbios_knl_Clock_Object__table__V[0]);

#ifdef __GNUC__
#if __GNUC__ >= 4
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Task_Handle task0 = (ti_sysbios_knl_Task_Handle)((ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[0]);


/*
 * ======== CONSTANTS ========
 */

#pragma DATA_SECTION(xdc_runtime_IModule_Interface__BASE__C, ".const:xdc_runtime_IModule_Interface__BASE__C");
#pragma DATA_SECTION(ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, ".const:ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_IGateProvider_Interface__BASE__C, ".const:xdc_runtime_IGateProvider_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_IHeap_Interface__BASE__C, ".const:xdc_runtime_IHeap_Interface__BASE__C");
#pragma DATA_SECTION(ti_uia_events_IUIAEvent_Interface__BASE__C, ".const:ti_uia_events_IUIAEvent_Interface__BASE__C");
#pragma DATA_SECTION(ti_uia_events_IUIAMetaProvider_Interface__BASE__C, ".const:ti_uia_events_IUIAMetaProvider_Interface__BASE__C");
#pragma DATA_SECTION(ti_uia_runtime_IUIATraceSyncClient_Interface__BASE__C, ".const:ti_uia_runtime_IUIATraceSyncClient_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_ILogger_Interface__BASE__C, ".const:xdc_runtime_ILogger_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_IFilterLogger_Interface__BASE__C, ".const:xdc_runtime_IFilterLogger_Interface__BASE__C");
#pragma DATA_SECTION(ti_uia_runtime_IUIATransfer_Interface__BASE__C, ".const:ti_uia_runtime_IUIATransfer_Interface__BASE__C");
#pragma DATA_SECTION(ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C, ".const:ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_ISystemSupport_Interface__BASE__C, ".const:xdc_runtime_ISystemSupport_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_ITimestampClient_Interface__BASE__C, ".const:xdc_runtime_ITimestampClient_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_ITimestampProvider_Interface__BASE__C, ".const:xdc_runtime_ITimestampProvider_Interface__BASE__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__FXNS__C, ".const:ti_sysbios_gates_GateHwi_Module__FXNS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__FXNS__C, ".const:ti_sysbios_gates_GateMutex_Module__FXNS__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__FXNS__C, ".const:ti_sysbios_heaps_HeapMem_Module__FXNS__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__FXNS__C, ".const:ti_uia_events_UIABenchmark_Module__FXNS__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__FXNS__C, ".const:ti_uia_events_UIAErr_Module__FXNS__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__FXNS__C, ".const:ti_uia_events_UIAEvt_Module__FXNS__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__FXNS__C, ".const:ti_uia_events_UIARoundtrip_Module__FXNS__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__FXNS__C, ".const:ti_uia_events_UIAStatistic_Module__FXNS__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__FXNS__C, ".const:ti_uia_events_UIASync_Module__FXNS__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__FXNS__C, ".const:ti_uia_runtime_LogSync_Module__FXNS__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__FXNS__C, ".const:ti_uia_runtime_LoggerStopMode_Module__FXNS__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__FXNS__C, ".const:xdc_runtime_SysMin_Module__FXNS__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__FXNS__C, ".const:xdc_runtime_Timestamp_Module__FXNS__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__FXNS__C, ".const:xdc_runtime_TimestampNull_Module__FXNS__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_Timer_Object__PARAMS__C, ".const:ti_sysbios_family_arm_lm3_Timer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__PARAMS__C, ".const:ti_sysbios_hal_Timer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__PARAMS__C, ".const:ti_sysbios_knl_Event_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Object__PARAMS__C, ".const:ti_uia_runtime_LogSync_Object__PARAMS__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Object__PARAMS__C, ".const:ti_uia_runtime_LoggerStopMode_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Instance_State_sem__O, ".const:ti_sysbios_gates_GateMutex_Instance_State_sem__O");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module_State_clockQ__O, ".const:ti_sysbios_knl_Clock_Module_State_clockQ__O");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Event_Instance_State_pendQ__O");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_inactiveQ__O, ".const:ti_sysbios_knl_Task_Module_State_inactiveQ__O");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_terminatedQ__O, ".const:ti_sysbios_knl_Task_Module_State_terminatedQ__O");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module_State_taskList__O, ".const:ti_sysbios_utils_Load_Module_State_taskList__O");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module_State_gate__O, ".const:ti_sysbios_utils_Load_Module_State_gate__O");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsEnabled__C, ".const:ti_sysbios_BIOS_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsIncluded__C, ".const:ti_sysbios_BIOS_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsMask__C, ".const:ti_sysbios_BIOS_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gateObj__C, ".const:ti_sysbios_BIOS_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gatePrms__C, ".const:ti_sysbios_BIOS_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__id__C, ".const:ti_sysbios_BIOS_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerDefined__C, ".const:ti_sysbios_BIOS_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerObj__C, ".const:ti_sysbios_BIOS_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn0__C, ".const:ti_sysbios_BIOS_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn1__C, ".const:ti_sysbios_BIOS_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn2__C, ".const:ti_sysbios_BIOS_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn4__C, ".const:ti_sysbios_BIOS_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn8__C, ".const:ti_sysbios_BIOS_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__startupDoneFxn__C, ".const:ti_sysbios_BIOS_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__count__C, ".const:ti_sysbios_BIOS_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__heap__C, ".const:ti_sysbios_BIOS_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__sizeof__C, ".const:ti_sysbios_BIOS_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__table__C, ".const:ti_sysbios_BIOS_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_smpEnabled__C, ".const:ti_sysbios_BIOS_smpEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_cpuFreq__C, ".const:ti_sysbios_BIOS_cpuFreq__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_taskEnabled__C, ".const:ti_sysbios_BIOS_taskEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_swiEnabled__C, ".const:ti_sysbios_BIOS_swiEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_clockEnabled__C, ".const:ti_sysbios_BIOS_clockEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSize__C, ".const:ti_sysbios_BIOS_heapSize__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSection__C, ".const:ti_sysbios_BIOS_heapSection__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_installedErrorHook__C, ".const:ti_sysbios_BIOS_installedErrorHook__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_Timer_Object__DESC__C, ".const:ti_sysbios_family_arm_lm3_Timer_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_Timer_Object__PARAMS__C, ".const:ti_sysbios_family_arm_lm3_Timer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_lm3_Timer_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_lm3_Timer_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_Timer_Module__diagsMask__C, ".const:ti_sysbios_family_arm_lm3_Timer_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_Timer_Module__gateObj__C, ".const:ti_sysbios_family_arm_lm3_Timer_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_Timer_Module__gatePrms__C, ".const:ti_sysbios_family_arm_lm3_Timer_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_Timer_Module__id__C, ".const:ti_sysbios_family_arm_lm3_Timer_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_Timer_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_lm3_Timer_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_Timer_Module__loggerObj__C, ".const:ti_sysbios_family_arm_lm3_Timer_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_lm3_Timer_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_lm3_Timer_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_lm3_Timer_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_lm3_Timer_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_lm3_Timer_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_lm3_Timer_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_Timer_Object__count__C, ".const:ti_sysbios_family_arm_lm3_Timer_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_Timer_Object__heap__C, ".const:ti_sysbios_family_arm_lm3_Timer_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_Timer_Object__sizeof__C, ".const:ti_sysbios_family_arm_lm3_Timer_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_Timer_Object__table__C, ".const:ti_sysbios_family_arm_lm3_Timer_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_Timer_E_invalidTimer__C, ".const:ti_sysbios_family_arm_lm3_Timer_E_invalidTimer__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_Timer_E_notAvailable__C, ".const:ti_sysbios_family_arm_lm3_Timer_E_notAvailable__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_Timer_E_cannotSupport__C, ".const:ti_sysbios_family_arm_lm3_Timer_E_cannotSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_Timer_anyMask__C, ".const:ti_sysbios_family_arm_lm3_Timer_anyMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_Timer_startupNeeded__C, ".const:ti_sysbios_family_arm_lm3_Timer_startupNeeded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_Timer_numTimerDevices__C, ".const:ti_sysbios_family_arm_lm3_Timer_numTimerDevices__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_Timer_WRALLOW__C, ".const:ti_sysbios_family_arm_lm3_Timer_WRALLOW__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_TimestampProvider_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_lm3_TimestampProvider_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_TimestampProvider_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_lm3_TimestampProvider_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_TimestampProvider_Module__diagsMask__C, ".const:ti_sysbios_family_arm_lm3_TimestampProvider_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_TimestampProvider_Module__gateObj__C, ".const:ti_sysbios_family_arm_lm3_TimestampProvider_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_TimestampProvider_Module__gatePrms__C, ".const:ti_sysbios_family_arm_lm3_TimestampProvider_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_TimestampProvider_Module__id__C, ".const:ti_sysbios_family_arm_lm3_TimestampProvider_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_TimestampProvider_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_lm3_TimestampProvider_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_TimestampProvider_Module__loggerObj__C, ".const:ti_sysbios_family_arm_lm3_TimestampProvider_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_TimestampProvider_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_lm3_TimestampProvider_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_TimestampProvider_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_lm3_TimestampProvider_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_TimestampProvider_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_lm3_TimestampProvider_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_TimestampProvider_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_lm3_TimestampProvider_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_TimestampProvider_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_lm3_TimestampProvider_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_TimestampProvider_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_lm3_TimestampProvider_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_TimestampProvider_Object__count__C, ".const:ti_sysbios_family_arm_lm3_TimestampProvider_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_TimestampProvider_Object__heap__C, ".const:ti_sysbios_family_arm_lm3_TimestampProvider_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_TimestampProvider_Object__sizeof__C, ".const:ti_sysbios_family_arm_lm3_TimestampProvider_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_TimestampProvider_Object__table__C, ".const:ti_sysbios_family_arm_lm3_TimestampProvider_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_TimestampProvider_useClockTimer__C, ".const:ti_sysbios_family_arm_lm3_TimestampProvider_useClockTimer__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm3_TimestampProvider_timerId__C, ".const:ti_sysbios_family_arm_lm3_TimestampProvider_timerId__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__id__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__count__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__heap__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__table__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C, ".const:ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C, ".const:ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_LM_begin__C, ".const:ti_sysbios_family_arm_m3_Hwi_LM_begin__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_LD_end__C, ".const:ti_sysbios_family_arm_m3_Hwi_LD_end__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C, ".const:ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_exception__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_exception__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_noIsr__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_noIsr__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_NMI__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_NMI__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_hardFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_hardFault__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_memFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_memFault__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_busFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_busFault__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_usageFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_usageFault__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_svCall__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_svCall__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_debugMon__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_debugMon__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_reserved__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_reserved__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFunc__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_disablePriority__C, ".const:ti_sysbios_family_arm_m3_Hwi_disablePriority__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_priGroup__C, ".const:ti_sysbios_family_arm_m3_Hwi_priGroup__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiDisable__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiDisable__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_taskDisable__C, ".const:ti_sysbios_family_arm_m3_Hwi_taskDisable__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C, ".const:ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_ccr__C, ".const:ti_sysbios_family_arm_m3_Hwi_ccr__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_hooks__C, ".const:ti_sysbios_family_arm_m3_Hwi_hooks__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__id__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__count__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__table__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__DESC__C, ".const:ti_sysbios_gates_GateHwi_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsMask__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gateObj__C, ".const:ti_sysbios_gates_GateHwi_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gatePrms__C, ".const:ti_sysbios_gates_GateHwi_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__id__C, ".const:ti_sysbios_gates_GateHwi_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerObj__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__count__C, ".const:ti_sysbios_gates_GateHwi_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__heap__C, ".const:ti_sysbios_gates_GateHwi_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__sizeof__C, ".const:ti_sysbios_gates_GateHwi_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__table__C, ".const:ti_sysbios_gates_GateHwi_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__DESC__C, ".const:ti_sysbios_gates_GateMutex_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsMask__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gateObj__C, ".const:ti_sysbios_gates_GateMutex_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gatePrms__C, ".const:ti_sysbios_gates_GateMutex_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__id__C, ".const:ti_sysbios_gates_GateMutex_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerObj__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__count__C, ".const:ti_sysbios_gates_GateMutex_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__heap__C, ".const:ti_sysbios_gates_GateMutex_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__sizeof__C, ".const:ti_sysbios_gates_GateMutex_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__table__C, ".const:ti_sysbios_gates_GateMutex_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_A_badContext__C, ".const:ti_sysbios_gates_GateMutex_A_badContext__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__DESC__C, ".const:ti_sysbios_hal_Hwi_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Hwi_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Hwi_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsMask__C, ".const:ti_sysbios_hal_Hwi_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gateObj__C, ".const:ti_sysbios_hal_Hwi_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gatePrms__C, ".const:ti_sysbios_hal_Hwi_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__id__C, ".const:ti_sysbios_hal_Hwi_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_hal_Hwi_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerObj__C, ".const:ti_sysbios_hal_Hwi_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Hwi_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__count__C, ".const:ti_sysbios_hal_Hwi_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__heap__C, ".const:ti_sysbios_hal_Hwi_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__sizeof__C, ".const:ti_sysbios_hal_Hwi_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__table__C, ".const:ti_sysbios_hal_Hwi_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_E_stackOverflow__C, ".const:ti_sysbios_hal_Hwi_E_stackOverflow__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__DESC__C, ".const:ti_sysbios_hal_Timer_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__PARAMS__C, ".const:ti_sysbios_hal_Timer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Timer_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Timer_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsMask__C, ".const:ti_sysbios_hal_Timer_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__gateObj__C, ".const:ti_sysbios_hal_Timer_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__gatePrms__C, ".const:ti_sysbios_hal_Timer_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__id__C, ".const:ti_sysbios_hal_Timer_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerDefined__C, ".const:ti_sysbios_hal_Timer_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerObj__C, ".const:ti_sysbios_hal_Timer_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Timer_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__count__C, ".const:ti_sysbios_hal_Timer_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__heap__C, ".const:ti_sysbios_hal_Timer_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__sizeof__C, ".const:ti_sysbios_hal_Timer_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__table__C, ".const:ti_sysbios_hal_Timer_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__DESC__C, ".const:ti_sysbios_heaps_HeapMem_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsMask__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gateObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gatePrms__C, ".const:ti_sysbios_heaps_HeapMem_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__id__C, ".const:ti_sysbios_heaps_HeapMem_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerDefined__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C, ".const:ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__count__C, ".const:ti_sysbios_heaps_HeapMem_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__heap__C, ".const:ti_sysbios_heaps_HeapMem_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__sizeof__C, ".const:ti_sysbios_heaps_HeapMem_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__table__C, ".const:ti_sysbios_heaps_HeapMem_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_zeroBlock__C, ".const:ti_sysbios_heaps_HeapMem_A_zeroBlock__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_heapSize__C, ".const:ti_sysbios_heaps_HeapMem_A_heapSize__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_align__C, ".const:ti_sysbios_heaps_HeapMem_A_align__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_E_memory__C, ".const:ti_sysbios_heaps_HeapMem_E_memory__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_invalidFree__C, ".const:ti_sysbios_heaps_HeapMem_A_invalidFree__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_reqAlign__C, ".const:ti_sysbios_heaps_HeapMem_reqAlign__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_reqAlignMask__C, ".const:ti_sysbios_heaps_HeapMem_reqAlignMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__DESC__C, ".const:ti_sysbios_knl_Clock_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Clock_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Clock_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsMask__C, ".const:ti_sysbios_knl_Clock_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gateObj__C, ".const:ti_sysbios_knl_Clock_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gatePrms__C, ".const:ti_sysbios_knl_Clock_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__id__C, ".const:ti_sysbios_knl_Clock_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerDefined__C, ".const:ti_sysbios_knl_Clock_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerObj__C, ".const:ti_sysbios_knl_Clock_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Clock_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__count__C, ".const:ti_sysbios_knl_Clock_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__heap__C, ".const:ti_sysbios_knl_Clock_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__sizeof__C, ".const:ti_sysbios_knl_Clock_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__table__C, ".const:ti_sysbios_knl_Clock_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LW_delayed__C, ".const:ti_sysbios_knl_Clock_LW_delayed__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_tick__C, ".const:ti_sysbios_knl_Clock_LM_tick__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_begin__C, ".const:ti_sysbios_knl_Clock_LM_begin__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_clockDisabled__C, ".const:ti_sysbios_knl_Clock_A_clockDisabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_badThreadType__C, ".const:ti_sysbios_knl_Clock_A_badThreadType__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickSource__C, ".const:ti_sysbios_knl_Clock_tickSource__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickMode__C, ".const:ti_sysbios_knl_Clock_tickMode__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_timerId__C, ".const:ti_sysbios_knl_Clock_timerId__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickPeriod__C, ".const:ti_sysbios_knl_Clock_tickPeriod__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__DESC__C, ".const:ti_sysbios_knl_Event_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__PARAMS__C, ".const:ti_sysbios_knl_Event_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Event_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Event_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsMask__C, ".const:ti_sysbios_knl_Event_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gateObj__C, ".const:ti_sysbios_knl_Event_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gatePrms__C, ".const:ti_sysbios_knl_Event_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__id__C, ".const:ti_sysbios_knl_Event_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerDefined__C, ".const:ti_sysbios_knl_Event_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerObj__C, ".const:ti_sysbios_knl_Event_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Event_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__count__C, ".const:ti_sysbios_knl_Event_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__heap__C, ".const:ti_sysbios_knl_Event_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__sizeof__C, ".const:ti_sysbios_knl_Event_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__table__C, ".const:ti_sysbios_knl_Event_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_post__C, ".const:ti_sysbios_knl_Event_LM_post__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_pend__C, ".const:ti_sysbios_knl_Event_LM_pend__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventMasks__C, ".const:ti_sysbios_knl_Event_A_nullEventMasks__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventId__C, ".const:ti_sysbios_knl_Event_A_nullEventId__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_eventInUse__C, ".const:ti_sysbios_knl_Event_A_eventInUse__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_badContext__C, ".const:ti_sysbios_knl_Event_A_badContext__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__A, ".const:ti_sysbios_knl_Idle_funcList__A");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Idle_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Idle_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsMask__C, ".const:ti_sysbios_knl_Idle_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gateObj__C, ".const:ti_sysbios_knl_Idle_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gatePrms__C, ".const:ti_sysbios_knl_Idle_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__id__C, ".const:ti_sysbios_knl_Idle_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerDefined__C, ".const:ti_sysbios_knl_Idle_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerObj__C, ".const:ti_sysbios_knl_Idle_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Idle_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__count__C, ".const:ti_sysbios_knl_Idle_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__heap__C, ".const:ti_sysbios_knl_Idle_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__sizeof__C, ".const:ti_sysbios_knl_Idle_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__table__C, ".const:ti_sysbios_knl_Idle_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__C, ".const:ti_sysbios_knl_Idle_funcList__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsMask__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gateObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gatePrms__C, ".const:ti_sysbios_knl_Intrinsics_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__id__C, ".const:ti_sysbios_knl_Intrinsics_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerDefined__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__count__C, ".const:ti_sysbios_knl_Intrinsics_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__heap__C, ".const:ti_sysbios_knl_Intrinsics_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__sizeof__C, ".const:ti_sysbios_knl_Intrinsics_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__table__C, ".const:ti_sysbios_knl_Intrinsics_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__DESC__C, ".const:ti_sysbios_knl_Queue_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Queue_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Queue_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsMask__C, ".const:ti_sysbios_knl_Queue_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gateObj__C, ".const:ti_sysbios_knl_Queue_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gatePrms__C, ".const:ti_sysbios_knl_Queue_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__id__C, ".const:ti_sysbios_knl_Queue_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerDefined__C, ".const:ti_sysbios_knl_Queue_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerObj__C, ".const:ti_sysbios_knl_Queue_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Queue_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__count__C, ".const:ti_sysbios_knl_Queue_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__heap__C, ".const:ti_sysbios_knl_Queue_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__sizeof__C, ".const:ti_sysbios_knl_Queue_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__table__C, ".const:ti_sysbios_knl_Queue_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__DESC__C, ".const:ti_sysbios_knl_Semaphore_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsMask__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gateObj__C, ".const:ti_sysbios_knl_Semaphore_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gatePrms__C, ".const:ti_sysbios_knl_Semaphore_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__id__C, ".const:ti_sysbios_knl_Semaphore_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerDefined__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerObj__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__count__C, ".const:ti_sysbios_knl_Semaphore_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__heap__C, ".const:ti_sysbios_knl_Semaphore_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__sizeof__C, ".const:ti_sysbios_knl_Semaphore_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__table__C, ".const:ti_sysbios_knl_Semaphore_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_post__C, ".const:ti_sysbios_knl_Semaphore_LM_post__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_pend__C, ".const:ti_sysbios_knl_Semaphore_LM_pend__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_noEvents__C, ".const:ti_sysbios_knl_Semaphore_A_noEvents__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_invTimeout__C, ".const:ti_sysbios_knl_Semaphore_A_invTimeout__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_badContext__C, ".const:ti_sysbios_knl_Semaphore_A_badContext__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsEvents__C, ".const:ti_sysbios_knl_Semaphore_supportsEvents__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventPost__C, ".const:ti_sysbios_knl_Semaphore_eventPost__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventSync__C, ".const:ti_sysbios_knl_Semaphore_eventSync__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__DESC__C, ".const:ti_sysbios_knl_Swi_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Swi_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Swi_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsMask__C, ".const:ti_sysbios_knl_Swi_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gateObj__C, ".const:ti_sysbios_knl_Swi_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gatePrms__C, ".const:ti_sysbios_knl_Swi_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__id__C, ".const:ti_sysbios_knl_Swi_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerDefined__C, ".const:ti_sysbios_knl_Swi_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerObj__C, ".const:ti_sysbios_knl_Swi_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Swi_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__count__C, ".const:ti_sysbios_knl_Swi_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__heap__C, ".const:ti_sysbios_knl_Swi_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__sizeof__C, ".const:ti_sysbios_knl_Swi_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__table__C, ".const:ti_sysbios_knl_Swi_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_begin__C, ".const:ti_sysbios_knl_Swi_LM_begin__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LD_end__C, ".const:ti_sysbios_knl_Swi_LD_end__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_post__C, ".const:ti_sysbios_knl_Swi_LM_post__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_swiDisabled__C, ".const:ti_sysbios_knl_Swi_A_swiDisabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_badPriority__C, ".const:ti_sysbios_knl_Swi_A_badPriority__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numPriorities__C, ".const:ti_sysbios_knl_Swi_numPriorities__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_hooks__C, ".const:ti_sysbios_knl_Swi_hooks__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskDisable__C, ".const:ti_sysbios_knl_Swi_taskDisable__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskRestore__C, ".const:ti_sysbios_knl_Swi_taskRestore__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numConstructedSwis__C, ".const:ti_sysbios_knl_Swi_numConstructedSwis__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__DESC__C, ".const:ti_sysbios_knl_Task_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__A, ".const:ti_sysbios_knl_Task_hooks__A");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Task_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Task_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsMask__C, ".const:ti_sysbios_knl_Task_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gateObj__C, ".const:ti_sysbios_knl_Task_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gatePrms__C, ".const:ti_sysbios_knl_Task_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__id__C, ".const:ti_sysbios_knl_Task_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerDefined__C, ".const:ti_sysbios_knl_Task_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerObj__C, ".const:ti_sysbios_knl_Task_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Task_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__count__C, ".const:ti_sysbios_knl_Task_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__heap__C, ".const:ti_sysbios_knl_Task_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__sizeof__C, ".const:ti_sysbios_knl_Task_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__table__C, ".const:ti_sysbios_knl_Task_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_switch__C, ".const:ti_sysbios_knl_Task_LM_switch__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_sleep__C, ".const:ti_sysbios_knl_Task_LM_sleep__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_ready__C, ".const:ti_sysbios_knl_Task_LD_ready__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_block__C, ".const:ti_sysbios_knl_Task_LD_block__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_yield__C, ".const:ti_sysbios_knl_Task_LM_yield__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setPri__C, ".const:ti_sysbios_knl_Task_LM_setPri__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_exit__C, ".const:ti_sysbios_knl_Task_LD_exit__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_stackOverflow__C, ".const:ti_sysbios_knl_Task_E_stackOverflow__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_spOutOfBounds__C, ".const:ti_sysbios_knl_Task_E_spOutOfBounds__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badThreadType__C, ".const:ti_sysbios_knl_Task_A_badThreadType__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTaskState__C, ".const:ti_sysbios_knl_Task_A_badTaskState__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_noPendElem__C, ".const:ti_sysbios_knl_Task_A_noPendElem__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_taskDisabled__C, ".const:ti_sysbios_knl_Task_A_taskDisabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badPriority__C, ".const:ti_sysbios_knl_Task_A_badPriority__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTimeout__C, ".const:ti_sysbios_knl_Task_A_badTimeout__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_numPriorities__C, ".const:ti_sysbios_knl_Task_numPriorities__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackSize__C, ".const:ti_sysbios_knl_Task_defaultStackSize__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackHeap__C, ".const:ti_sysbios_knl_Task_defaultStackHeap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_allBlockedFunc__C, ".const:ti_sysbios_knl_Task_allBlockedFunc__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_initStackFlag__C, ".const:ti_sysbios_knl_Task_initStackFlag__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_deleteTerminatedTasks__C, ".const:ti_sysbios_knl_Task_deleteTerminatedTasks__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__C, ".const:ti_sysbios_knl_Task_hooks__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_numConstructedTasks__C, ".const:ti_sysbios_knl_Task_numConstructedTasks__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsEnabled__C, ".const:ti_sysbios_utils_Load_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsIncluded__C, ".const:ti_sysbios_utils_Load_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsMask__C, ".const:ti_sysbios_utils_Load_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__gateObj__C, ".const:ti_sysbios_utils_Load_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__gatePrms__C, ".const:ti_sysbios_utils_Load_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__id__C, ".const:ti_sysbios_utils_Load_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerDefined__C, ".const:ti_sysbios_utils_Load_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerObj__C, ".const:ti_sysbios_utils_Load_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn0__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn1__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn2__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn4__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn8__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__startupDoneFxn__C, ".const:ti_sysbios_utils_Load_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__count__C, ".const:ti_sysbios_utils_Load_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__heap__C, ".const:ti_sysbios_utils_Load_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__sizeof__C, ".const:ti_sysbios_utils_Load_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__table__C, ".const:ti_sysbios_utils_Load_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_cpuLoad__C, ".const:ti_sysbios_utils_Load_LS_cpuLoad__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_hwiLoad__C, ".const:ti_sysbios_utils_Load_LS_hwiLoad__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_swiLoad__C, ".const:ti_sysbios_utils_Load_LS_swiLoad__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_taskLoad__C, ".const:ti_sysbios_utils_Load_LS_taskLoad__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_postUpdate__C, ".const:ti_sysbios_utils_Load_postUpdate__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_updateInIdle__C, ".const:ti_sysbios_utils_Load_updateInIdle__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_windowInMs__C, ".const:ti_sysbios_utils_Load_windowInMs__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_hwiEnabled__C, ".const:ti_sysbios_utils_Load_hwiEnabled__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_swiEnabled__C, ".const:ti_sysbios_utils_Load_swiEnabled__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_taskEnabled__C, ".const:ti_sysbios_utils_Load_taskEnabled__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_autoAddTasks__C, ".const:ti_sysbios_utils_Load_autoAddTasks__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsEnabled__C, ".const:ti_uia_events_DvtTypes_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsIncluded__C, ".const:ti_uia_events_DvtTypes_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsMask__C, ".const:ti_uia_events_DvtTypes_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__gateObj__C, ".const:ti_uia_events_DvtTypes_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__gatePrms__C, ".const:ti_uia_events_DvtTypes_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__id__C, ".const:ti_uia_events_DvtTypes_Module__id__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerDefined__C, ".const:ti_uia_events_DvtTypes_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerObj__C, ".const:ti_uia_events_DvtTypes_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn0__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn1__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn2__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn4__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn8__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__startupDoneFxn__C, ".const:ti_uia_events_DvtTypes_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__count__C, ".const:ti_uia_events_DvtTypes_Object__count__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__heap__C, ".const:ti_uia_events_DvtTypes_Object__heap__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__sizeof__C, ".const:ti_uia_events_DvtTypes_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__table__C, ".const:ti_uia_events_DvtTypes_Object__table__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__diagsEnabled__C, ".const:ti_uia_events_UIABenchmark_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__diagsIncluded__C, ".const:ti_uia_events_UIABenchmark_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__diagsMask__C, ".const:ti_uia_events_UIABenchmark_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__gateObj__C, ".const:ti_uia_events_UIABenchmark_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__gatePrms__C, ".const:ti_uia_events_UIABenchmark_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__id__C, ".const:ti_uia_events_UIABenchmark_Module__id__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__loggerDefined__C, ".const:ti_uia_events_UIABenchmark_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__loggerObj__C, ".const:ti_uia_events_UIABenchmark_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__loggerFxn0__C, ".const:ti_uia_events_UIABenchmark_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__loggerFxn1__C, ".const:ti_uia_events_UIABenchmark_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__loggerFxn2__C, ".const:ti_uia_events_UIABenchmark_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__loggerFxn4__C, ".const:ti_uia_events_UIABenchmark_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__loggerFxn8__C, ".const:ti_uia_events_UIABenchmark_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__startupDoneFxn__C, ".const:ti_uia_events_UIABenchmark_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Object__count__C, ".const:ti_uia_events_UIABenchmark_Object__count__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Object__heap__C, ".const:ti_uia_events_UIABenchmark_Object__heap__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Object__sizeof__C, ".const:ti_uia_events_UIABenchmark_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Object__table__C, ".const:ti_uia_events_UIABenchmark_Object__table__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_start__C, ".const:ti_uia_events_UIABenchmark_start__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_stop__C, ".const:ti_uia_events_UIABenchmark_stop__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_startInstance__C, ".const:ti_uia_events_UIABenchmark_startInstance__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_stopInstance__C, ".const:ti_uia_events_UIABenchmark_stopInstance__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_startInstanceWithAdrs__C, ".const:ti_uia_events_UIABenchmark_startInstanceWithAdrs__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_stopInstanceWithAdrs__C, ".const:ti_uia_events_UIABenchmark_stopInstanceWithAdrs__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_startInstanceWithStr__C, ".const:ti_uia_events_UIABenchmark_startInstanceWithStr__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_stopInstanceWithStr__C, ".const:ti_uia_events_UIABenchmark_stopInstanceWithStr__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsEnabled__C, ".const:ti_uia_events_UIAErr_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsIncluded__C, ".const:ti_uia_events_UIAErr_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsMask__C, ".const:ti_uia_events_UIAErr_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__gateObj__C, ".const:ti_uia_events_UIAErr_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__gatePrms__C, ".const:ti_uia_events_UIAErr_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__id__C, ".const:ti_uia_events_UIAErr_Module__id__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerDefined__C, ".const:ti_uia_events_UIAErr_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerObj__C, ".const:ti_uia_events_UIAErr_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn0__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn1__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn2__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn4__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn8__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__startupDoneFxn__C, ".const:ti_uia_events_UIAErr_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__count__C, ".const:ti_uia_events_UIAErr_Object__count__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__heap__C, ".const:ti_uia_events_UIAErr_Object__heap__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__sizeof__C, ".const:ti_uia_events_UIAErr_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__table__C, ".const:ti_uia_events_UIAErr_Object__table__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_error__C, ".const:ti_uia_events_UIAErr_error__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_errorWithStr__C, ".const:ti_uia_events_UIAErr_errorWithStr__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_hwError__C, ".const:ti_uia_events_UIAErr_hwError__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_hwErrorWithStr__C, ".const:ti_uia_events_UIAErr_hwErrorWithStr__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_fatal__C, ".const:ti_uia_events_UIAErr_fatal__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_fatalWithStr__C, ".const:ti_uia_events_UIAErr_fatalWithStr__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_critical__C, ".const:ti_uia_events_UIAErr_critical__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_criticalWithStr__C, ".const:ti_uia_events_UIAErr_criticalWithStr__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_exception__C, ".const:ti_uia_events_UIAErr_exception__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_uncaughtException__C, ".const:ti_uia_events_UIAErr_uncaughtException__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_nullPointerException__C, ".const:ti_uia_events_UIAErr_nullPointerException__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_unexpectedInterrupt__C, ".const:ti_uia_events_UIAErr_unexpectedInterrupt__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_memoryAccessFault__C, ".const:ti_uia_events_UIAErr_memoryAccessFault__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_securityException__C, ".const:ti_uia_events_UIAErr_securityException__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_divisionByZero__C, ".const:ti_uia_events_UIAErr_divisionByZero__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_overflowException__C, ".const:ti_uia_events_UIAErr_overflowException__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_indexOutOfRange__C, ".const:ti_uia_events_UIAErr_indexOutOfRange__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_notImplemented__C, ".const:ti_uia_events_UIAErr_notImplemented__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_stackOverflow__C, ".const:ti_uia_events_UIAErr_stackOverflow__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_illegalInstruction__C, ".const:ti_uia_events_UIAErr_illegalInstruction__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_entryPointNotFound__C, ".const:ti_uia_events_UIAErr_entryPointNotFound__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_moduleNotFound__C, ".const:ti_uia_events_UIAErr_moduleNotFound__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_floatingPointError__C, ".const:ti_uia_events_UIAErr_floatingPointError__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_invalidParameter__C, ".const:ti_uia_events_UIAErr_invalidParameter__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsEnabled__C, ".const:ti_uia_events_UIAEvt_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsIncluded__C, ".const:ti_uia_events_UIAEvt_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsMask__C, ".const:ti_uia_events_UIAEvt_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__gateObj__C, ".const:ti_uia_events_UIAEvt_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__gatePrms__C, ".const:ti_uia_events_UIAEvt_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__id__C, ".const:ti_uia_events_UIAEvt_Module__id__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerDefined__C, ".const:ti_uia_events_UIAEvt_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerObj__C, ".const:ti_uia_events_UIAEvt_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn0__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn1__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn2__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn4__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn8__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__startupDoneFxn__C, ".const:ti_uia_events_UIAEvt_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__count__C, ".const:ti_uia_events_UIAEvt_Object__count__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__heap__C, ".const:ti_uia_events_UIAEvt_Object__heap__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__sizeof__C, ".const:ti_uia_events_UIAEvt_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__table__C, ".const:ti_uia_events_UIAEvt_Object__table__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_warning__C, ".const:ti_uia_events_UIAEvt_warning__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_warningWithStr__C, ".const:ti_uia_events_UIAEvt_warningWithStr__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_info__C, ".const:ti_uia_events_UIAEvt_info__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_infoWithStr__C, ".const:ti_uia_events_UIAEvt_infoWithStr__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_detail__C, ".const:ti_uia_events_UIAEvt_detail__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_detailWithStr__C, ".const:ti_uia_events_UIAEvt_detailWithStr__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_intWithKey__C, ".const:ti_uia_events_UIAEvt_intWithKey__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__diagsEnabled__C, ".const:ti_uia_events_UIARoundtrip_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__diagsIncluded__C, ".const:ti_uia_events_UIARoundtrip_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__diagsMask__C, ".const:ti_uia_events_UIARoundtrip_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__gateObj__C, ".const:ti_uia_events_UIARoundtrip_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__gatePrms__C, ".const:ti_uia_events_UIARoundtrip_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__id__C, ".const:ti_uia_events_UIARoundtrip_Module__id__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__loggerDefined__C, ".const:ti_uia_events_UIARoundtrip_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__loggerObj__C, ".const:ti_uia_events_UIARoundtrip_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__loggerFxn0__C, ".const:ti_uia_events_UIARoundtrip_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__loggerFxn1__C, ".const:ti_uia_events_UIARoundtrip_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__loggerFxn2__C, ".const:ti_uia_events_UIARoundtrip_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__loggerFxn4__C, ".const:ti_uia_events_UIARoundtrip_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__loggerFxn8__C, ".const:ti_uia_events_UIARoundtrip_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__startupDoneFxn__C, ".const:ti_uia_events_UIARoundtrip_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Object__count__C, ".const:ti_uia_events_UIARoundtrip_Object__count__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Object__heap__C, ".const:ti_uia_events_UIARoundtrip_Object__heap__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Object__sizeof__C, ".const:ti_uia_events_UIARoundtrip_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Object__table__C, ".const:ti_uia_events_UIARoundtrip_Object__table__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_start__C, ".const:ti_uia_events_UIARoundtrip_start__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_stop__C, ".const:ti_uia_events_UIARoundtrip_stop__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_startInstance__C, ".const:ti_uia_events_UIARoundtrip_startInstance__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_stopInstance__C, ".const:ti_uia_events_UIARoundtrip_stopInstance__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_startInstanceWithAdrs__C, ".const:ti_uia_events_UIARoundtrip_startInstanceWithAdrs__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_stopInstanceWithAdrs__C, ".const:ti_uia_events_UIARoundtrip_stopInstanceWithAdrs__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_startInstanceWithStr__C, ".const:ti_uia_events_UIARoundtrip_startInstanceWithStr__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_stopInstanceWithStr__C, ".const:ti_uia_events_UIARoundtrip_stopInstanceWithStr__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__diagsEnabled__C, ".const:ti_uia_events_UIAStatistic_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__diagsIncluded__C, ".const:ti_uia_events_UIAStatistic_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__diagsMask__C, ".const:ti_uia_events_UIAStatistic_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__gateObj__C, ".const:ti_uia_events_UIAStatistic_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__gatePrms__C, ".const:ti_uia_events_UIAStatistic_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__id__C, ".const:ti_uia_events_UIAStatistic_Module__id__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__loggerDefined__C, ".const:ti_uia_events_UIAStatistic_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__loggerObj__C, ".const:ti_uia_events_UIAStatistic_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__loggerFxn0__C, ".const:ti_uia_events_UIAStatistic_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__loggerFxn1__C, ".const:ti_uia_events_UIAStatistic_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__loggerFxn2__C, ".const:ti_uia_events_UIAStatistic_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__loggerFxn4__C, ".const:ti_uia_events_UIAStatistic_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__loggerFxn8__C, ".const:ti_uia_events_UIAStatistic_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__startupDoneFxn__C, ".const:ti_uia_events_UIAStatistic_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Object__count__C, ".const:ti_uia_events_UIAStatistic_Object__count__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Object__heap__C, ".const:ti_uia_events_UIAStatistic_Object__heap__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Object__sizeof__C, ".const:ti_uia_events_UIAStatistic_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Object__table__C, ".const:ti_uia_events_UIAStatistic_Object__table__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_cpuLoad__C, ".const:ti_uia_events_UIAStatistic_cpuLoad__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_cpuLoadByInstance__C, ".const:ti_uia_events_UIAStatistic_cpuLoadByInstance__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_bytesProcessed__C, ".const:ti_uia_events_UIAStatistic_bytesProcessed__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_bytesProcessedByInstance__C, ".const:ti_uia_events_UIAStatistic_bytesProcessedByInstance__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_wordsProcessed__C, ".const:ti_uia_events_UIAStatistic_wordsProcessed__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_wordsProcessedByInstance__C, ".const:ti_uia_events_UIAStatistic_wordsProcessedByInstance__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_freeBytes__C, ".const:ti_uia_events_UIAStatistic_freeBytes__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__diagsEnabled__C, ".const:ti_uia_events_UIASync_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__diagsIncluded__C, ".const:ti_uia_events_UIASync_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__diagsMask__C, ".const:ti_uia_events_UIASync_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__gateObj__C, ".const:ti_uia_events_UIASync_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__gatePrms__C, ".const:ti_uia_events_UIASync_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__id__C, ".const:ti_uia_events_UIASync_Module__id__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__loggerDefined__C, ".const:ti_uia_events_UIASync_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__loggerObj__C, ".const:ti_uia_events_UIASync_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__loggerFxn0__C, ".const:ti_uia_events_UIASync_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__loggerFxn1__C, ".const:ti_uia_events_UIASync_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__loggerFxn2__C, ".const:ti_uia_events_UIASync_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__loggerFxn4__C, ".const:ti_uia_events_UIASync_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__loggerFxn8__C, ".const:ti_uia_events_UIASync_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__startupDoneFxn__C, ".const:ti_uia_events_UIASync_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Object__count__C, ".const:ti_uia_events_UIASync_Object__count__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Object__heap__C, ".const:ti_uia_events_UIASync_Object__heap__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Object__sizeof__C, ".const:ti_uia_events_UIASync_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Object__table__C, ".const:ti_uia_events_UIASync_Object__table__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_syncPoint__C, ".const:ti_uia_events_UIASync_syncPoint__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_syncPointAfterHalt__C, ".const:ti_uia_events_UIASync_syncPointAfterHalt__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_globalTimerFreq__C, ".const:ti_uia_events_UIASync_globalTimerFreq__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_syncPointUserProvidedData__C, ".const:ti_uia_events_UIASync_syncPointUserProvidedData__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Object__DESC__C, ".const:ti_uia_runtime_LogSync_Object__DESC__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Object__PARAMS__C, ".const:ti_uia_runtime_LogSync_Object__PARAMS__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__diagsEnabled__C, ".const:ti_uia_runtime_LogSync_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__diagsIncluded__C, ".const:ti_uia_runtime_LogSync_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__diagsMask__C, ".const:ti_uia_runtime_LogSync_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__gateObj__C, ".const:ti_uia_runtime_LogSync_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__gatePrms__C, ".const:ti_uia_runtime_LogSync_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__id__C, ".const:ti_uia_runtime_LogSync_Module__id__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__loggerDefined__C, ".const:ti_uia_runtime_LogSync_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__loggerObj__C, ".const:ti_uia_runtime_LogSync_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__loggerFxn0__C, ".const:ti_uia_runtime_LogSync_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__loggerFxn1__C, ".const:ti_uia_runtime_LogSync_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__loggerFxn2__C, ".const:ti_uia_runtime_LogSync_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__loggerFxn4__C, ".const:ti_uia_runtime_LogSync_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__loggerFxn8__C, ".const:ti_uia_runtime_LogSync_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__startupDoneFxn__C, ".const:ti_uia_runtime_LogSync_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Object__count__C, ".const:ti_uia_runtime_LogSync_Object__count__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Object__heap__C, ".const:ti_uia_runtime_LogSync_Object__heap__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Object__sizeof__C, ".const:ti_uia_runtime_LogSync_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Object__table__C, ".const:ti_uia_runtime_LogSync_Object__table__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_injectIntoTraceFxn__C, ".const:ti_uia_runtime_LogSync_injectIntoTraceFxn__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_cpuTimestampCyclesPerTick__C, ".const:ti_uia_runtime_LogSync_cpuTimestampCyclesPerTick__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_globalTimestampCpuCyclesPerTick__C, ".const:ti_uia_runtime_LogSync_globalTimestampCpuCyclesPerTick__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_maxGlobalClockFreq__C, ".const:ti_uia_runtime_LogSync_maxGlobalClockFreq__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Object__DESC__C, ".const:ti_uia_runtime_LoggerStopMode_Object__DESC__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Object__PARAMS__C, ".const:ti_uia_runtime_LoggerStopMode_Object__PARAMS__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__diagsEnabled__C, ".const:ti_uia_runtime_LoggerStopMode_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__diagsIncluded__C, ".const:ti_uia_runtime_LoggerStopMode_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__diagsMask__C, ".const:ti_uia_runtime_LoggerStopMode_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__gateObj__C, ".const:ti_uia_runtime_LoggerStopMode_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__gatePrms__C, ".const:ti_uia_runtime_LoggerStopMode_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__id__C, ".const:ti_uia_runtime_LoggerStopMode_Module__id__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__loggerDefined__C, ".const:ti_uia_runtime_LoggerStopMode_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__loggerObj__C, ".const:ti_uia_runtime_LoggerStopMode_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__loggerFxn0__C, ".const:ti_uia_runtime_LoggerStopMode_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__loggerFxn1__C, ".const:ti_uia_runtime_LoggerStopMode_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__loggerFxn2__C, ".const:ti_uia_runtime_LoggerStopMode_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__loggerFxn4__C, ".const:ti_uia_runtime_LoggerStopMode_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__loggerFxn8__C, ".const:ti_uia_runtime_LoggerStopMode_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__startupDoneFxn__C, ".const:ti_uia_runtime_LoggerStopMode_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Object__count__C, ".const:ti_uia_runtime_LoggerStopMode_Object__count__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Object__heap__C, ".const:ti_uia_runtime_LoggerStopMode_Object__heap__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Object__sizeof__C, ".const:ti_uia_runtime_LoggerStopMode_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Object__table__C, ".const:ti_uia_runtime_LoggerStopMode_Object__table__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_filterByLevel__C, ".const:ti_uia_runtime_LoggerStopMode_filterByLevel__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_E_badLevel__C, ".const:ti_uia_runtime_LoggerStopMode_E_badLevel__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_isTimestampEnabled__C, ".const:ti_uia_runtime_LoggerStopMode_isTimestampEnabled__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_enableFlush__C, ".const:ti_uia_runtime_LoggerStopMode_enableFlush__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_statusLogger__C, ".const:ti_uia_runtime_LoggerStopMode_statusLogger__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_overflowLogger__C, ".const:ti_uia_runtime_LoggerStopMode_overflowLogger__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_level1Mask__C, ".const:ti_uia_runtime_LoggerStopMode_level1Mask__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_level2Mask__C, ".const:ti_uia_runtime_LoggerStopMode_level2Mask__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_level3Mask__C, ".const:ti_uia_runtime_LoggerStopMode_level3Mask__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_level4Mask__C, ".const:ti_uia_runtime_LoggerStopMode_level4Mask__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__diagsEnabled__C, ".const:ti_uia_runtime_QueueDescriptor_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__diagsIncluded__C, ".const:ti_uia_runtime_QueueDescriptor_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__diagsMask__C, ".const:ti_uia_runtime_QueueDescriptor_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__gateObj__C, ".const:ti_uia_runtime_QueueDescriptor_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__gatePrms__C, ".const:ti_uia_runtime_QueueDescriptor_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__id__C, ".const:ti_uia_runtime_QueueDescriptor_Module__id__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerDefined__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerObj__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn0__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn1__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn2__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn4__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn8__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn__C, ".const:ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__count__C, ".const:ti_uia_runtime_QueueDescriptor_Object__count__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__heap__C, ".const:ti_uia_runtime_QueueDescriptor_Object__heap__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__sizeof__C, ".const:ti_uia_runtime_QueueDescriptor_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__table__C, ".const:ti_uia_runtime_QueueDescriptor_Object__table__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsMask__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__gateObj__C, ".const:ti_uia_runtime_UIAMetaData_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__gatePrms__C, ".const:ti_uia_runtime_UIAMetaData_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__id__C, ".const:ti_uia_runtime_UIAMetaData_Module__id__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerDefined__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerObj__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__startupDoneFxn__C, ".const:ti_uia_runtime_UIAMetaData_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__count__C, ".const:ti_uia_runtime_UIAMetaData_Object__count__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__heap__C, ".const:ti_uia_runtime_UIAMetaData_Object__heap__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__sizeof__C, ".const:ti_uia_runtime_UIAMetaData_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__table__C, ".const:ti_uia_runtime_UIAMetaData_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsEnabled__C, ".const:xdc_runtime_Assert_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsIncluded__C, ".const:xdc_runtime_Assert_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsMask__C, ".const:xdc_runtime_Assert_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gateObj__C, ".const:xdc_runtime_Assert_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gatePrms__C, ".const:xdc_runtime_Assert_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__id__C, ".const:xdc_runtime_Assert_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerDefined__C, ".const:xdc_runtime_Assert_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerObj__C, ".const:xdc_runtime_Assert_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn0__C, ".const:xdc_runtime_Assert_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn1__C, ".const:xdc_runtime_Assert_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn2__C, ".const:xdc_runtime_Assert_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn4__C, ".const:xdc_runtime_Assert_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn8__C, ".const:xdc_runtime_Assert_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__startupDoneFxn__C, ".const:xdc_runtime_Assert_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Object__count__C, ".const:xdc_runtime_Assert_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Object__heap__C, ".const:xdc_runtime_Assert_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Object__sizeof__C, ".const:xdc_runtime_Assert_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Object__table__C, ".const:xdc_runtime_Assert_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Assert_E_assertFailed__C, ".const:xdc_runtime_Assert_E_assertFailed__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsEnabled__C, ".const:xdc_runtime_Core_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsIncluded__C, ".const:xdc_runtime_Core_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsMask__C, ".const:xdc_runtime_Core_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__gateObj__C, ".const:xdc_runtime_Core_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__gatePrms__C, ".const:xdc_runtime_Core_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__id__C, ".const:xdc_runtime_Core_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerDefined__C, ".const:xdc_runtime_Core_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerObj__C, ".const:xdc_runtime_Core_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn0__C, ".const:xdc_runtime_Core_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn1__C, ".const:xdc_runtime_Core_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn2__C, ".const:xdc_runtime_Core_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn4__C, ".const:xdc_runtime_Core_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn8__C, ".const:xdc_runtime_Core_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__startupDoneFxn__C, ".const:xdc_runtime_Core_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Core_Object__count__C, ".const:xdc_runtime_Core_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Core_Object__heap__C, ".const:xdc_runtime_Core_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Core_Object__sizeof__C, ".const:xdc_runtime_Core_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Core_Object__table__C, ".const:xdc_runtime_Core_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Core_A_initializedParams__C, ".const:xdc_runtime_Core_A_initializedParams__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsEnabled__C, ".const:xdc_runtime_Defaults_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsIncluded__C, ".const:xdc_runtime_Defaults_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsMask__C, ".const:xdc_runtime_Defaults_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gateObj__C, ".const:xdc_runtime_Defaults_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gatePrms__C, ".const:xdc_runtime_Defaults_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__id__C, ".const:xdc_runtime_Defaults_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerDefined__C, ".const:xdc_runtime_Defaults_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerObj__C, ".const:xdc_runtime_Defaults_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn0__C, ".const:xdc_runtime_Defaults_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn1__C, ".const:xdc_runtime_Defaults_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn2__C, ".const:xdc_runtime_Defaults_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn4__C, ".const:xdc_runtime_Defaults_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn8__C, ".const:xdc_runtime_Defaults_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__startupDoneFxn__C, ".const:xdc_runtime_Defaults_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__count__C, ".const:xdc_runtime_Defaults_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__heap__C, ".const:xdc_runtime_Defaults_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__sizeof__C, ".const:xdc_runtime_Defaults_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__table__C, ".const:xdc_runtime_Defaults_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsEnabled__C, ".const:xdc_runtime_Diags_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsIncluded__C, ".const:xdc_runtime_Diags_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsMask__C, ".const:xdc_runtime_Diags_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gateObj__C, ".const:xdc_runtime_Diags_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gatePrms__C, ".const:xdc_runtime_Diags_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__id__C, ".const:xdc_runtime_Diags_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerDefined__C, ".const:xdc_runtime_Diags_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerObj__C, ".const:xdc_runtime_Diags_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn0__C, ".const:xdc_runtime_Diags_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn1__C, ".const:xdc_runtime_Diags_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn2__C, ".const:xdc_runtime_Diags_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn4__C, ".const:xdc_runtime_Diags_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn8__C, ".const:xdc_runtime_Diags_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__startupDoneFxn__C, ".const:xdc_runtime_Diags_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Object__count__C, ".const:xdc_runtime_Diags_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Object__heap__C, ".const:xdc_runtime_Diags_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Object__sizeof__C, ".const:xdc_runtime_Diags_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Object__table__C, ".const:xdc_runtime_Diags_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Diags_setMaskEnabled__C, ".const:xdc_runtime_Diags_setMaskEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Diags_dictBase__C, ".const:xdc_runtime_Diags_dictBase__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsEnabled__C, ".const:xdc_runtime_Error_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsIncluded__C, ".const:xdc_runtime_Error_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsMask__C, ".const:xdc_runtime_Error_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__gateObj__C, ".const:xdc_runtime_Error_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__gatePrms__C, ".const:xdc_runtime_Error_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__id__C, ".const:xdc_runtime_Error_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerDefined__C, ".const:xdc_runtime_Error_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerObj__C, ".const:xdc_runtime_Error_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn0__C, ".const:xdc_runtime_Error_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn1__C, ".const:xdc_runtime_Error_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn2__C, ".const:xdc_runtime_Error_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn4__C, ".const:xdc_runtime_Error_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn8__C, ".const:xdc_runtime_Error_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__startupDoneFxn__C, ".const:xdc_runtime_Error_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Error_Object__count__C, ".const:xdc_runtime_Error_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Error_Object__heap__C, ".const:xdc_runtime_Error_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Error_Object__sizeof__C, ".const:xdc_runtime_Error_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Error_Object__table__C, ".const:xdc_runtime_Error_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Error_E_generic__C, ".const:xdc_runtime_Error_E_generic__C");
#pragma DATA_SECTION(xdc_runtime_Error_E_memory__C, ".const:xdc_runtime_Error_E_memory__C");
#pragma DATA_SECTION(xdc_runtime_Error_E_msgCode__C, ".const:xdc_runtime_Error_E_msgCode__C");
#pragma DATA_SECTION(xdc_runtime_Error_policy__C, ".const:xdc_runtime_Error_policy__C");
#pragma DATA_SECTION(xdc_runtime_Error_raiseHook__C, ".const:xdc_runtime_Error_raiseHook__C");
#pragma DATA_SECTION(xdc_runtime_Error_maxDepth__C, ".const:xdc_runtime_Error_maxDepth__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsEnabled__C, ".const:xdc_runtime_Gate_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsIncluded__C, ".const:xdc_runtime_Gate_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsMask__C, ".const:xdc_runtime_Gate_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gateObj__C, ".const:xdc_runtime_Gate_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gatePrms__C, ".const:xdc_runtime_Gate_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__id__C, ".const:xdc_runtime_Gate_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerDefined__C, ".const:xdc_runtime_Gate_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerObj__C, ".const:xdc_runtime_Gate_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn0__C, ".const:xdc_runtime_Gate_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn1__C, ".const:xdc_runtime_Gate_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn2__C, ".const:xdc_runtime_Gate_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn4__C, ".const:xdc_runtime_Gate_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn8__C, ".const:xdc_runtime_Gate_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__startupDoneFxn__C, ".const:xdc_runtime_Gate_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Object__count__C, ".const:xdc_runtime_Gate_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Object__heap__C, ".const:xdc_runtime_Gate_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Object__sizeof__C, ".const:xdc_runtime_Gate_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Object__table__C, ".const:xdc_runtime_Gate_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsEnabled__C, ".const:xdc_runtime_Log_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsIncluded__C, ".const:xdc_runtime_Log_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsMask__C, ".const:xdc_runtime_Log_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__gateObj__C, ".const:xdc_runtime_Log_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__gatePrms__C, ".const:xdc_runtime_Log_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__id__C, ".const:xdc_runtime_Log_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerDefined__C, ".const:xdc_runtime_Log_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerObj__C, ".const:xdc_runtime_Log_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn0__C, ".const:xdc_runtime_Log_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn1__C, ".const:xdc_runtime_Log_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn2__C, ".const:xdc_runtime_Log_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn4__C, ".const:xdc_runtime_Log_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn8__C, ".const:xdc_runtime_Log_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__startupDoneFxn__C, ".const:xdc_runtime_Log_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Log_Object__count__C, ".const:xdc_runtime_Log_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Log_Object__heap__C, ".const:xdc_runtime_Log_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Log_Object__sizeof__C, ".const:xdc_runtime_Log_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Log_Object__table__C, ".const:xdc_runtime_Log_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_construct__C, ".const:xdc_runtime_Log_L_construct__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_create__C, ".const:xdc_runtime_Log_L_create__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_destruct__C, ".const:xdc_runtime_Log_L_destruct__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_delete__C, ".const:xdc_runtime_Log_L_delete__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_error__C, ".const:xdc_runtime_Log_L_error__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_warning__C, ".const:xdc_runtime_Log_L_warning__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_info__C, ".const:xdc_runtime_Log_L_info__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_start__C, ".const:xdc_runtime_Log_L_start__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_stop__C, ".const:xdc_runtime_Log_L_stop__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_startInstance__C, ".const:xdc_runtime_Log_L_startInstance__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_stopInstance__C, ".const:xdc_runtime_Log_L_stopInstance__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsEnabled__C, ".const:xdc_runtime_Main_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsIncluded__C, ".const:xdc_runtime_Main_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsMask__C, ".const:xdc_runtime_Main_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__gateObj__C, ".const:xdc_runtime_Main_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__gatePrms__C, ".const:xdc_runtime_Main_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__id__C, ".const:xdc_runtime_Main_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerDefined__C, ".const:xdc_runtime_Main_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerObj__C, ".const:xdc_runtime_Main_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn0__C, ".const:xdc_runtime_Main_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn1__C, ".const:xdc_runtime_Main_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn2__C, ".const:xdc_runtime_Main_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn4__C, ".const:xdc_runtime_Main_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn8__C, ".const:xdc_runtime_Main_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__startupDoneFxn__C, ".const:xdc_runtime_Main_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Main_Object__count__C, ".const:xdc_runtime_Main_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Main_Object__heap__C, ".const:xdc_runtime_Main_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Main_Object__sizeof__C, ".const:xdc_runtime_Main_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Main_Object__table__C, ".const:xdc_runtime_Main_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsEnabled__C, ".const:xdc_runtime_Memory_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsIncluded__C, ".const:xdc_runtime_Memory_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsMask__C, ".const:xdc_runtime_Memory_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gateObj__C, ".const:xdc_runtime_Memory_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gatePrms__C, ".const:xdc_runtime_Memory_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__id__C, ".const:xdc_runtime_Memory_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerDefined__C, ".const:xdc_runtime_Memory_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerObj__C, ".const:xdc_runtime_Memory_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn0__C, ".const:xdc_runtime_Memory_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn1__C, ".const:xdc_runtime_Memory_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn2__C, ".const:xdc_runtime_Memory_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn4__C, ".const:xdc_runtime_Memory_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn8__C, ".const:xdc_runtime_Memory_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__startupDoneFxn__C, ".const:xdc_runtime_Memory_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Object__count__C, ".const:xdc_runtime_Memory_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Object__heap__C, ".const:xdc_runtime_Memory_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Object__sizeof__C, ".const:xdc_runtime_Memory_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Object__table__C, ".const:xdc_runtime_Memory_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Memory_defaultHeapInstance__C, ".const:xdc_runtime_Memory_defaultHeapInstance__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsEnabled__C, ".const:xdc_runtime_Registry_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsIncluded__C, ".const:xdc_runtime_Registry_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsMask__C, ".const:xdc_runtime_Registry_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gateObj__C, ".const:xdc_runtime_Registry_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gatePrms__C, ".const:xdc_runtime_Registry_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__id__C, ".const:xdc_runtime_Registry_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerDefined__C, ".const:xdc_runtime_Registry_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerObj__C, ".const:xdc_runtime_Registry_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn0__C, ".const:xdc_runtime_Registry_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn1__C, ".const:xdc_runtime_Registry_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn2__C, ".const:xdc_runtime_Registry_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn4__C, ".const:xdc_runtime_Registry_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn8__C, ".const:xdc_runtime_Registry_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__startupDoneFxn__C, ".const:xdc_runtime_Registry_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Object__count__C, ".const:xdc_runtime_Registry_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Object__heap__C, ".const:xdc_runtime_Registry_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Object__sizeof__C, ".const:xdc_runtime_Registry_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Object__table__C, ".const:xdc_runtime_Registry_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__A, ".const:xdc_runtime_Startup_firstFxns__A");
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__A, ".const:xdc_runtime_Startup_lastFxns__A");
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__A, ".const:xdc_runtime_Startup_sfxnTab__A");
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__A, ".const:xdc_runtime_Startup_sfxnRts__A");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsEnabled__C, ".const:xdc_runtime_Startup_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsIncluded__C, ".const:xdc_runtime_Startup_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsMask__C, ".const:xdc_runtime_Startup_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gateObj__C, ".const:xdc_runtime_Startup_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gatePrms__C, ".const:xdc_runtime_Startup_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__id__C, ".const:xdc_runtime_Startup_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerDefined__C, ".const:xdc_runtime_Startup_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerObj__C, ".const:xdc_runtime_Startup_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn0__C, ".const:xdc_runtime_Startup_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn1__C, ".const:xdc_runtime_Startup_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn2__C, ".const:xdc_runtime_Startup_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn4__C, ".const:xdc_runtime_Startup_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn8__C, ".const:xdc_runtime_Startup_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__startupDoneFxn__C, ".const:xdc_runtime_Startup_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Object__count__C, ".const:xdc_runtime_Startup_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Object__heap__C, ".const:xdc_runtime_Startup_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Object__sizeof__C, ".const:xdc_runtime_Startup_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Object__table__C, ".const:xdc_runtime_Startup_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Startup_maxPasses__C, ".const:xdc_runtime_Startup_maxPasses__C");
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__C, ".const:xdc_runtime_Startup_firstFxns__C");
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__C, ".const:xdc_runtime_Startup_lastFxns__C");
#pragma DATA_SECTION(xdc_runtime_Startup_startModsFxn__C, ".const:xdc_runtime_Startup_startModsFxn__C");
#pragma DATA_SECTION(xdc_runtime_Startup_execImpl__C, ".const:xdc_runtime_Startup_execImpl__C");
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__C, ".const:xdc_runtime_Startup_sfxnTab__C");
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__C, ".const:xdc_runtime_Startup_sfxnRts__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsEnabled__C, ".const:xdc_runtime_SysMin_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsIncluded__C, ".const:xdc_runtime_SysMin_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsMask__C, ".const:xdc_runtime_SysMin_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gateObj__C, ".const:xdc_runtime_SysMin_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gatePrms__C, ".const:xdc_runtime_SysMin_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__id__C, ".const:xdc_runtime_SysMin_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerDefined__C, ".const:xdc_runtime_SysMin_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerObj__C, ".const:xdc_runtime_SysMin_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn0__C, ".const:xdc_runtime_SysMin_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn1__C, ".const:xdc_runtime_SysMin_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn2__C, ".const:xdc_runtime_SysMin_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn4__C, ".const:xdc_runtime_SysMin_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn8__C, ".const:xdc_runtime_SysMin_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__startupDoneFxn__C, ".const:xdc_runtime_SysMin_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__count__C, ".const:xdc_runtime_SysMin_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__heap__C, ".const:xdc_runtime_SysMin_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__sizeof__C, ".const:xdc_runtime_SysMin_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__table__C, ".const:xdc_runtime_SysMin_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_bufSize__C, ".const:xdc_runtime_SysMin_bufSize__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_flushAtExit__C, ".const:xdc_runtime_SysMin_flushAtExit__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFxn__C, ".const:xdc_runtime_SysMin_outputFxn__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFunc__C, ".const:xdc_runtime_SysMin_outputFunc__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsEnabled__C, ".const:xdc_runtime_System_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsIncluded__C, ".const:xdc_runtime_System_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsMask__C, ".const:xdc_runtime_System_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__gateObj__C, ".const:xdc_runtime_System_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__gatePrms__C, ".const:xdc_runtime_System_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__id__C, ".const:xdc_runtime_System_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerDefined__C, ".const:xdc_runtime_System_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerObj__C, ".const:xdc_runtime_System_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn0__C, ".const:xdc_runtime_System_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn1__C, ".const:xdc_runtime_System_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn2__C, ".const:xdc_runtime_System_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn4__C, ".const:xdc_runtime_System_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn8__C, ".const:xdc_runtime_System_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__startupDoneFxn__C, ".const:xdc_runtime_System_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_System_Object__count__C, ".const:xdc_runtime_System_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_System_Object__heap__C, ".const:xdc_runtime_System_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_System_Object__sizeof__C, ".const:xdc_runtime_System_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_System_Object__table__C, ".const:xdc_runtime_System_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_System_A_cannotFitIntoArg__C, ".const:xdc_runtime_System_A_cannotFitIntoArg__C");
#pragma DATA_SECTION(xdc_runtime_System_maxAtexitHandlers__C, ".const:xdc_runtime_System_maxAtexitHandlers__C");
#pragma DATA_SECTION(xdc_runtime_System_extendFxn__C, ".const:xdc_runtime_System_extendFxn__C");
#pragma DATA_SECTION(xdc_runtime_Text_charTab__A, ".const:xdc_runtime_Text_charTab__A");
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__A, ".const:xdc_runtime_Text_nodeTab__A");
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsEnabled__C, ".const:xdc_runtime_Text_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsIncluded__C, ".const:xdc_runtime_Text_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsMask__C, ".const:xdc_runtime_Text_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__gateObj__C, ".const:xdc_runtime_Text_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__gatePrms__C, ".const:xdc_runtime_Text_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__id__C, ".const:xdc_runtime_Text_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerDefined__C, ".const:xdc_runtime_Text_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerObj__C, ".const:xdc_runtime_Text_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn0__C, ".const:xdc_runtime_Text_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn1__C, ".const:xdc_runtime_Text_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn2__C, ".const:xdc_runtime_Text_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn4__C, ".const:xdc_runtime_Text_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn8__C, ".const:xdc_runtime_Text_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__startupDoneFxn__C, ".const:xdc_runtime_Text_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Text_Object__count__C, ".const:xdc_runtime_Text_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Text_Object__heap__C, ".const:xdc_runtime_Text_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Text_Object__sizeof__C, ".const:xdc_runtime_Text_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Text_Object__table__C, ".const:xdc_runtime_Text_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Text_nameUnknown__C, ".const:xdc_runtime_Text_nameUnknown__C");
#pragma DATA_SECTION(xdc_runtime_Text_nameEmpty__C, ".const:xdc_runtime_Text_nameEmpty__C");
#pragma DATA_SECTION(xdc_runtime_Text_nameStatic__C, ".const:xdc_runtime_Text_nameStatic__C");
#pragma DATA_SECTION(xdc_runtime_Text_isLoaded__C, ".const:xdc_runtime_Text_isLoaded__C");
#pragma DATA_SECTION(xdc_runtime_Text_charTab__C, ".const:xdc_runtime_Text_charTab__C");
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__C, ".const:xdc_runtime_Text_nodeTab__C");
#pragma DATA_SECTION(xdc_runtime_Text_charCnt__C, ".const:xdc_runtime_Text_charCnt__C");
#pragma DATA_SECTION(xdc_runtime_Text_nodeCnt__C, ".const:xdc_runtime_Text_nodeCnt__C");
#pragma DATA_SECTION(xdc_runtime_Text_unnamedModsLastId__C, ".const:xdc_runtime_Text_unnamedModsLastId__C");
#pragma DATA_SECTION(xdc_runtime_Text_registryModsLastId__C, ".const:xdc_runtime_Text_registryModsLastId__C");
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn__C, ".const:xdc_runtime_Text_visitRopeFxn__C");
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn2__C, ".const:xdc_runtime_Text_visitRopeFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsEnabled__C, ".const:xdc_runtime_Timestamp_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsIncluded__C, ".const:xdc_runtime_Timestamp_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsMask__C, ".const:xdc_runtime_Timestamp_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gateObj__C, ".const:xdc_runtime_Timestamp_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gatePrms__C, ".const:xdc_runtime_Timestamp_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__id__C, ".const:xdc_runtime_Timestamp_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerDefined__C, ".const:xdc_runtime_Timestamp_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerObj__C, ".const:xdc_runtime_Timestamp_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn0__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn1__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn2__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn4__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn8__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__startupDoneFxn__C, ".const:xdc_runtime_Timestamp_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__count__C, ".const:xdc_runtime_Timestamp_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__heap__C, ".const:xdc_runtime_Timestamp_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__sizeof__C, ".const:xdc_runtime_Timestamp_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__table__C, ".const:xdc_runtime_Timestamp_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__diagsEnabled__C, ".const:xdc_runtime_TimestampNull_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__diagsIncluded__C, ".const:xdc_runtime_TimestampNull_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__diagsMask__C, ".const:xdc_runtime_TimestampNull_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__gateObj__C, ".const:xdc_runtime_TimestampNull_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__gatePrms__C, ".const:xdc_runtime_TimestampNull_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__id__C, ".const:xdc_runtime_TimestampNull_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerDefined__C, ".const:xdc_runtime_TimestampNull_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerObj__C, ".const:xdc_runtime_TimestampNull_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn0__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn1__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn2__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn4__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn8__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__startupDoneFxn__C, ".const:xdc_runtime_TimestampNull_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__count__C, ".const:xdc_runtime_TimestampNull_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__heap__C, ".const:xdc_runtime_TimestampNull_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__sizeof__C, ".const:xdc_runtime_TimestampNull_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__table__C, ".const:xdc_runtime_TimestampNull_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsEnabled__C, ".const:xdc_runtime_Types_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsIncluded__C, ".const:xdc_runtime_Types_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsMask__C, ".const:xdc_runtime_Types_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__gateObj__C, ".const:xdc_runtime_Types_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__gatePrms__C, ".const:xdc_runtime_Types_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__id__C, ".const:xdc_runtime_Types_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerDefined__C, ".const:xdc_runtime_Types_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerObj__C, ".const:xdc_runtime_Types_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn0__C, ".const:xdc_runtime_Types_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn1__C, ".const:xdc_runtime_Types_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn2__C, ".const:xdc_runtime_Types_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn4__C, ".const:xdc_runtime_Types_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn8__C, ".const:xdc_runtime_Types_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__startupDoneFxn__C, ".const:xdc_runtime_Types_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Types_Object__count__C, ".const:xdc_runtime_Types_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Types_Object__heap__C, ".const:xdc_runtime_Types_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Types_Object__sizeof__C, ".const:xdc_runtime_Types_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Types_Object__table__C, ".const:xdc_runtime_Types_Object__table__C");
