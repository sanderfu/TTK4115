/*
 * heli_q8.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "heli_q8".
 *
 * Model version              : 1.133
 * Simulink Coder version : 8.9 (R2015b) 13-Aug-2015
 * C source code generated on : Thu Nov 14 00:57:17 2019
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_heli_q8_h_
#define RTW_HEADER_heli_q8_h_
#include <stddef.h>
#include <math.h>
#include <string.h>
#ifndef heli_q8_COMMON_INCLUDES_
# define heli_q8_COMMON_INCLUDES_
#include <stdio.h>
#include <string.h>
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "dt_info.h"
#include "ext_work.h"
#include "quanser_hid.h"
#include "quanser_memory.h"
#include "quanser_messages.h"
#include "hil.h"
#include "quanser_string.h"
#include "quanser_stream.h"
#include "stream_call_block.h"
#include "quanser_utf.h"
#include "quanser_types.h"
#include "quanser_byte_order.h"
#include "quanser_extern.h"
#endif                                 /* heli_q8_COMMON_INCLUDES_ */

#include "heli_q8_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"
#include "rtGetNaN.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlkStateChangeFlag
# define rtmGetBlkStateChangeFlag(rtm) ((rtm)->ModelData.blkStateChange)
#endif

#ifndef rtmSetBlkStateChangeFlag
# define rtmSetBlkStateChangeFlag(rtm, val) ((rtm)->ModelData.blkStateChange = (val))
#endif

#ifndef rtmGetBlockIO
# define rtmGetBlockIO(rtm)            ((rtm)->ModelData.blockIO)
#endif

#ifndef rtmSetBlockIO
# define rtmSetBlockIO(rtm, val)       ((rtm)->ModelData.blockIO = (val))
#endif

#ifndef rtmGetChecksums
# define rtmGetChecksums(rtm)          ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
# define rtmSetChecksums(rtm, val)     ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
# define rtmGetConstBlockIO(rtm)       ((rtm)->ModelData.constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
# define rtmSetConstBlockIO(rtm, val)  ((rtm)->ModelData.constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->ModelData.contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->ModelData.contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->ModelData.contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->ModelData.contStates = (val))
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ()
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ()
#endif

#ifndef rtmGetDefaultParam
# define rtmGetDefaultParam(rtm)       ((rtm)->ModelData.defaultParam)
#endif

#ifndef rtmSetDefaultParam
# define rtmSetDefaultParam(rtm, val)  ((rtm)->ModelData.defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->ModelData.derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->ModelData.derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
# define rtmGetDirectFeedThrough(rtm)  ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
# define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
# define rtmGetErrorStatusFlag(rtm)    ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
# define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
# define rtmSetFinalTime(rtm, val)     ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
# define rtmGetFirstInitCondFlag(rtm)  ()
#endif

#ifndef rtmSetFirstInitCondFlag
# define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->ModelData.intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->ModelData.intgData = (val))
#endif

#ifndef rtmGetMdlRefGlobalTID
# define rtmGetMdlRefGlobalTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefGlobalTID
# define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
# define rtmGetMdlRefTriggerTID(rtm)   ()
#endif

#ifndef rtmSetMdlRefTriggerTID
# define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
# define rtmGetModelMappingInfo(rtm)   ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
# define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
# define rtmGetModelName(rtm)          ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
# define rtmSetModelName(rtm, val)     ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
# define rtmGetNonInlinedSFcns(rtm)    ()
#endif

#ifndef rtmSetNonInlinedSFcns
# define rtmSetNonInlinedSFcns(rtm, val) ()
#endif

#ifndef rtmGetNumBlockIO
# define rtmGetNumBlockIO(rtm)         ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
# define rtmSetNumBlockIO(rtm, val)    ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
# define rtmGetNumBlockParams(rtm)     ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
# define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
# define rtmGetNumBlocks(rtm)          ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
# define rtmSetNumBlocks(rtm, val)     ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
# define rtmGetNumContStates(rtm)      ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
# define rtmSetNumContStates(rtm, val) ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
# define rtmGetNumDWork(rtm)           ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
# define rtmSetNumDWork(rtm, val)      ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
# define rtmGetNumInputPorts(rtm)      ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
# define rtmSetNumInputPorts(rtm, val) ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
# define rtmGetNumNonSampledZCs(rtm)   ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
# define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
# define rtmGetNumOutputPorts(rtm)     ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
# define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
# define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
# define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
# define rtmGetNumSFcnParams(rtm)      ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
# define rtmSetNumSFcnParams(rtm, val) ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
# define rtmGetNumSFunctions(rtm)      ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
# define rtmSetNumSFunctions(rtm, val) ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
# define rtmGetNumSampleTimes(rtm)     ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
# define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
# define rtmGetNumU(rtm)               ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
# define rtmSetNumU(rtm, val)          ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
# define rtmGetNumY(rtm)               ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
# define rtmSetNumY(rtm, val)          ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ((rtm)->ModelData.odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->ModelData.odeF = (val))
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ()
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ()
#endif

#ifndef rtmGetOffsetTimeArray
# define rtmGetOffsetTimeArray(rtm)    ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
# define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
# define rtmGetOffsetTimePtr(rtm)      ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
# define rtmSetOffsetTimePtr(rtm, val) ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
# define rtmGetOptions(rtm)            ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
# define rtmSetOptions(rtm, val)       ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
# define rtmGetParamIsMalloced(rtm)    ()
#endif

#ifndef rtmSetParamIsMalloced
# define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
# define rtmGetPath(rtm)               ((rtm)->path)
#endif

#ifndef rtmSetPath
# define rtmSetPath(rtm, val)          ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
# define rtmGetPerTaskSampleHits(rtm)  ((rtm)->Timing.RateInteraction)
#endif

#ifndef rtmSetPerTaskSampleHits
# define rtmSetPerTaskSampleHits(rtm, val) ((rtm)->Timing.RateInteraction = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsArray
# define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
# define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
# define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
# define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->ModelData.periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->ModelData.periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->ModelData.periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->ModelData.periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
# define rtmGetPrevZCSigState(rtm)     ((rtm)->ModelData.prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
# define rtmSetPrevZCSigState(rtm, val) ((rtm)->ModelData.prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
# define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
# define rtmGetRTWGeneratedSFcn(rtm)   ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
# define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ()
#endif

#ifndef rtmSetRTWLogInfo
# define rtmSetRTWLogInfo(rtm, val)    ()
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
# define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
# define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
# define rtmGetRTWSfcnInfo(rtm)        ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
# define rtmSetRTWSfcnInfo(rtm, val)   ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
# define rtmGetRTWSolverInfo(rtm)      ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
# define rtmSetRTWSolverInfo(rtm, val) ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
# define rtmGetRTWSolverInfoPtr(rtm)   ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
# define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
# define rtmGetReservedForXPC(rtm)     ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
# define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
# define rtmGetRootDWork(rtm)          ((rtm)->ModelData.dwork)
#endif

#ifndef rtmSetRootDWork
# define rtmSetRootDWork(rtm, val)     ((rtm)->ModelData.dwork = (val))
#endif

#ifndef rtmGetSFunctions
# define rtmGetSFunctions(rtm)         ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
# define rtmSetSFunctions(rtm, val)    ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
# define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
# define rtmGetSampleHitPtr(rtm)       ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
# define rtmSetSampleHitPtr(rtm, val)  ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
# define rtmGetSampleTimeArray(rtm)    ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
# define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
# define rtmGetSampleTimePtr(rtm)      ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
# define rtmSetSampleTimePtr(rtm, val) ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
# define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
# define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
# define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
# define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSimMode
# define rtmGetSimMode(rtm)            ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
# define rtmSetSimMode(rtm, val)       ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
# define rtmGetSimTimeStep(rtm)        ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
# define rtmSetSimTimeStep(rtm, val)   ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
# define rtmGetStartTime(rtm)          ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
# define rtmSetStartTime(rtm, val)     ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
# define rtmSetStepSize(rtm, val)      ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
# define rtmGetStopRequestedFlag(rtm)  ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
# define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
# define rtmGetTaskCounters(rtm)       ((rtm)->Timing.TaskCounters)
#endif

#ifndef rtmSetTaskCounters
# define rtmSetTaskCounters(rtm, val)  ((rtm)->Timing.TaskCounters = (val))
#endif

#ifndef rtmGetTaskTimeArray
# define rtmGetTaskTimeArray(rtm)      ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
# define rtmSetTaskTimeArray(rtm, val) ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
# define rtmGetTimePtr(rtm)            ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
# define rtmSetTimePtr(rtm, val)       ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
# define rtmGetTimingData(rtm)         ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
# define rtmSetTimingData(rtm, val)    ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
# define rtmGetU(rtm)                  ((rtm)->ModelData.inputs)
#endif

#ifndef rtmSetU
# define rtmSetU(rtm, val)             ((rtm)->ModelData.inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
# define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
# define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
# define rtmGetY(rtm)                  ((rtm)->ModelData.outputs)
#endif

#ifndef rtmSetY
# define rtmSetY(rtm, val)             ((rtm)->ModelData.outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->ModelData.zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->ModelData.zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
# define rtmGetZCSignalValues(rtm)     ((rtm)->ModelData.zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
# define rtmSetZCSignalValues(rtm, val) ((rtm)->ModelData.zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
# define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->ModelData.derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->ModelData.derivs = (val))
#endif

#ifndef rtmGetChecksumVal
# define rtmGetChecksumVal(rtm, idx)   ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
# define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
# define rtmGetDWork(rtm, idx)         ((rtm)->ModelData.dwork[idx])
#endif

#ifndef rtmSetDWork
# define rtmSetDWork(rtm, idx, val)    ((rtm)->ModelData.dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
# define rtmGetOffsetTime(rtm, idx)    ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
# define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
# define rtmGetSFunction(rtm, idx)     ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
# define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
# define rtmGetSampleTime(rtm, idx)    ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
# define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
# define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
# define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
# define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
# define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
# define rtmIsContinuousTask(rtm, tid) ((tid) <= 1)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(rtm, sti, tid) (((rtm)->Timing.sampleTimeTaskIDPtr[sti] == (tid)))
#endif

#ifndef rtmStepTask
# define rtmStepTask(rtm, idx)         ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
# define rtmSetT(rtm, val)                                       /* Do Nothing */
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
# define rtmSetTStart(rtm, val)        ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmTaskCounter
# define rtmTaskCounter(rtm, idx)      ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

#ifndef rtmGetTaskTime
# define rtmGetTaskTime(rtm, sti)      (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
# define rtmSetTaskTime(rtm, sti, val) (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define heli_q8_rtModel                RT_MODEL_heli_q8_T
#if !defined(_t_stream_ptr)
#define _t_stream_ptr

typedef t_stream * t_stream_ptr;

#endif

/* Block signals (auto storage) */
typedef struct {
  real_T Gain1[3];                     /* '<S16>/Gain1' */
  real_T PitchCounttorad;              /* '<S12>/Pitch: Count to rad' */
  real_T ElevationCounttorad;          /* '<S12>/Elevation: Count to rad' */
  real_T Add;                          /* '<S2>/Add' */
  real_T TravelCounttorad;             /* '<S12>/Travel: Count to rad' */
  real_T Gain2[3];                     /* '<S16>/Gain2' */
  real_T TrigonometricFunction;        /* '<S17>/Trigonometric Function' */
  real_T e;                            /* '<S17>/e' */
  real_T PitchTransferFcn;             /* '<S12>/Pitch: Transfer Fcn' */
  real_T ElevationTransferFcn;         /* '<S12>/Elevation: Transfer Fcn' */
  real_T TravelTransferFcn;            /* '<S12>/Travel: Transfer Fcn' */
  real_T Switch;                       /* '<S7>/Switch' */
  real_T FrontmotorSaturation;         /* '<S12>/Front motor: Saturation' */
  real_T BackmotorSaturation;          /* '<S12>/Back motor: Saturation' */
  real_T Gain1_f;                      /* '<S17>/Gain1' */
  real_T Gain2_p;                      /* '<S17>/Gain2' */
  real_T Gain;                         /* '<S17>/Gain' */
  real_T UnitDelay[6];                 /* '<S5>/Unit Delay' */
  real_T UnitDelay1[36];               /* '<S5>/Unit Delay1' */
  real_T Gain_h[6];                    /* '<S19>/Gain' */
  real_T Constant[36];                 /* '<S5>/Constant' */
  real_T Constant1[12];                /* '<S5>/Constant1' */
  real_T Constant2[36];                /* '<S5>/Constant2' */
  real_T x_k_plus_1_bar[6];            /* '<S5>/MATLAB Function' */
  real_T P_bar_k_plus_1[36];           /* '<S5>/MATLAB Function' */
  real_T euler_rates[3];               /* '<S4>/Gyro vector to [pitch rate, elevation rate, tra vle rate]' */
  real_T pitche;                       /* '<S13>/pitch e' */
  real_T pitchratee;                   /* '<S13>/pitch rate e' */
  real_T travelencoder;                /* '<S13>/travel encoder' */
  real_T travelrateencoder;            /* '<S13>/travel rate encoder' */
  real_T elevatione;                   /* '<S13>/elevation e' */
  real_T elevationratee;               /* '<S13>/elevation rate e' */
  real_T travele;                      /* '<S13>/travel e' */
  real_T travelratee;                  /* '<S13>/travel rate e' */
  real_T pitchencoder;                 /* '<S13>/pitch encoder' */
  real_T pitchrateencoder;             /* '<S13>/pitch rate encoder' */
  real_T elevationencoder;             /* '<S13>/elevation encoder' */
  real_T elevationrateencoder;         /* '<S13>/elevation rate encoder' */
  real_T Gain_d[6];                    /* '<S13>/Gain' */
  real_T Gain1_l[6];                   /* '<S13>/Gain1' */
  real_T x_k_plus_1_bar_c[6];          /* '<S3>/MATLAB Function' */
  real_T P_bar_k_plus_1_c[36];         /* '<S3>/MATLAB Function' */
  real_T x_estimate_k[6];              /* '<S3>/MATLAB Function' */
  real_T Switch_h;                     /* '<S9>/Switch' */
  real_T pitch;                        /* '<S1>/pitch' */
  real_T pitch_rate;                   /* '<S1>/pitch_rate ' */
  real_T elevation;                    /* '<S1>/elevation ' */
  real_T elevation_rate;               /* '<S1>/elevation_rate ' */
  real_T travel;                       /* '<S1>/travel ' */
  real_T travel_rate;                  /* '<S1>/travel_rate ' */
  real_T RateTransitiony;              /* '<S10>/Rate Transition: y' */
  real_T Joystick_gain_y;              /* '<S10>/Joystick_gain_y' */
  real_T Gain_dy[2];                   /* '<S11>/Gain' */
  real_T Sum1[2];                      /* '<S11>/Sum1' */
  real_T Constant2_k;                  /* '<S11>/Constant2' */
  real_T Backgain;                     /* '<S8>/Back gain' */
  real_T Frontgain;                    /* '<S8>/Front gain' */
  real_T RateTransitionx;              /* '<S10>/Rate Transition: x' */
  real_T Joystick_gain_x;              /* '<S10>/Joystick_gain_x' */
  real_T GameController_o4;            /* '<S10>/Game Controller' */
  real_T GameController_o5;            /* '<S10>/Game Controller' */
  real_T Sum;                          /* '<S11>/Sum' */
  real_T Sum3;                         /* '<S11>/Sum3' */
  uint8_T StreamCall1_o2;              /* '<S16>/Stream Call1' */
} B_heli_q8_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE[6];          /* '<S5>/Unit Delay' */
  real_T UnitDelay1_DSTATE[36];        /* '<S5>/Unit Delay1' */
  real_T UnitDelay2_DSTATE[2];         /* '<S3>/Unit Delay2' */
  real_T UnitDelay_DSTATE_l[6];        /* '<S3>/Unit Delay' */
  real_T UnitDelay1_DSTATE_p[36];      /* '<S3>/Unit Delay1' */
  real_T HILInitialize_AIMinimums[8];  /* '<Root>/HIL Initialize' */
  real_T HILInitialize_AIMaximums[8];  /* '<Root>/HIL Initialize' */
  real_T HILInitialize_AOMinimums[8];  /* '<Root>/HIL Initialize' */
  real_T HILInitialize_AOMaximums[8];  /* '<Root>/HIL Initialize' */
  real_T HILInitialize_AOVoltages[8];  /* '<Root>/HIL Initialize' */
  real_T HILInitialize_FilterFrequency[8];/* '<Root>/HIL Initialize' */
  real_T HILInitialize_POSortedFreqs[8];/* '<Root>/HIL Initialize' */
  real_T HILInitialize_POValues[8];    /* '<Root>/HIL Initialize' */
  real_T Memory_PreviousInput;         /* '<S7>/Memory' */
  real_T HILWriteAnalog_Buffer[2];     /* '<S12>/HIL Write Analog' */
  real_T RateTransitiony_Buffer0;      /* '<S10>/Rate Transition: y' */
  real_T RateTransitionx_Buffer0;      /* '<S10>/Rate Transition: x' */
  t_game_controller GameController_Controller;/* '<S10>/Game Controller' */
  t_stream StreamCall1_Stream;         /* '<S16>/Stream Call1' */
  t_card HILInitialize_Card;           /* '<Root>/HIL Initialize' */
  t_task HILReadEncoderTimebase_Task;  /* '<S12>/HIL Read Encoder Timebase' */
  struct {
    void *LoggedData;
  } ElevationScoperads_PWORK;          /* '<S12>/Elevation: Scope [rad//s]' */

  struct {
    void *LoggedData;
  } ElevationScoperad_PWORK;           /* '<S12>/Elevation: Scope [rad]' */

  struct {
    void *LoggedData;
  } PitchScoperad_PWORK;               /* '<S12>/Pitch: Scope [rad]' */

  struct {
    void *LoggedData;
  } PtichrateScoperads_PWORK;          /* '<S12>/Ptich rate: Scope [rad//s]' */

  struct {
    void *LoggedData;
  } TravelrateScoperads_PWORK;         /* '<S12>/Travel rate: Scope [rad//s]' */

  struct {
    void *LoggedData;
  } TravelScoperad_PWORK;              /* '<S12>/Travel: Scope [rad]' */

  void *HILWriteAnalog_PWORK;          /* '<S12>/HIL Write Analog' */
  struct {
    void *LoggedData;
  } Connected_PWORK;                   /* '<S16>/Connected' */

  struct {
    void *FilePtr;
  } ToFile3_PWORK;                     /* '<S17>/To File3' */

  struct {
    void *FilePtr;
  } ToFile4_PWORK;                     /* '<S17>/To File4' */

  struct {
    void *LoggedData;
  } ToWorkspace3_PWORK;                /* '<S17>/To Workspace3' */

  struct {
    void *LoggedData;
  } ToWorkspace4_PWORK;                /* '<S17>/To Workspace4' */

  struct {
    void *LoggedData;
  } accelerationx_PWORK;               /* '<S17>/acceleration x' */

  struct {
    void *LoggedData;
  } accelerationy_PWORK;               /* '<S17>/acceleration y' */

  struct {
    void *LoggedData;
  } accelerationz_PWORK;               /* '<S17>/acceleration z ' */

  struct {
    void *LoggedData;
  } elevation_PWORK;                   /* '<S17>/elevation' */

  struct {
    void *LoggedData;
  } pitch_PWORK;                       /* '<S17>/pitch' */

  struct {
    void *FilePtr;
  } ToFile_PWORK;                      /* '<S17>/To File' */

  struct {
    void *FilePtr;
  } ToFile1_PWORK;                     /* '<S17>/To File1' */

  struct {
    void *FilePtr;
  } ToFile2_PWORK;                     /* '<S17>/To File2' */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 /* '<S17>/To Workspace' */

  struct {
    void *LoggedData;
  } ToWorkspace1_PWORK;                /* '<S17>/To Workspace1' */

  struct {
    void *LoggedData;
  } ToWorkspace2_PWORK;                /* '<S17>/To Workspace2' */

  struct {
    void *LoggedData[2];
  } elevationbetter_PWORK;             /* '<S17>/elevation  better' */

  struct {
    void *LoggedData[2];
  } elevationrate_PWORK;               /* '<S17>/elevation rate  ' */

  struct {
    void *LoggedData[2];
  } pitchrate_PWORK;                   /* '<S17>/pitch rate  ' */

  struct {
    void *LoggedData[2];
  } pitchratebetter_PWORK;             /* '<S17>/pitch rate  better' */

  struct {
    void *LoggedData[2];
  } travelrate_PWORK;                  /* '<S17>/travel rate' */

  struct {
    void *LoggedData[2];
  } travelratebetter_PWORK;            /* '<S17>/travel rate  better' */

  struct {
    void *LoggedData[2];
  } elevation_PWORK_c;                 /* '<S19>/elevation' */

  struct {
    void *LoggedData[2];
  } elevationrate_PWORK_m;             /* '<S19>/elevation rate' */

  struct {
    void *LoggedData[2];
  } pitch_PWORK_c;                     /* '<S19>/pitch' */

  struct {
    void *LoggedData[2];
  } pitchrate_PWORK_k;                 /* '<S19>/pitch rate' */

  struct {
    void *LoggedData[2];
  } travel_PWORK;                      /* '<S19>/travel' */

  struct {
    void *LoggedData[2];
  } travelrate_PWORK_n;                /* '<S19>/travel rate' */

  struct {
    void *LoggedData[2];
  } x_comp_PWORK;                      /* '<S19>/x_comp' */

  struct {
    void *LoggedData;
  } Scope1_PWORK;                      /* '<S19>/Scope1' */

  struct {
    void *FilePtr;
  } ToFile_PWORK_e;                    /* '<S13>/To File' */

  struct {
    void *FilePtr;
  } ToFile1_PWORK_a;                   /* '<S13>/To File1' */

  struct {
    void *FilePtr;
  } ToFile10_PWORK;                    /* '<S13>/To File10' */

  struct {
    void *FilePtr;
  } ToFile11_PWORK;                    /* '<S13>/To File11' */

  struct {
    void *FilePtr;
  } ToFile2_PWORK_k;                   /* '<S13>/To File2' */

  struct {
    void *FilePtr;
  } ToFile3_PWORK_b;                   /* '<S13>/To File3' */

  struct {
    void *FilePtr;
  } ToFile4_PWORK_p;                   /* '<S13>/To File4' */

  struct {
    void *FilePtr;
  } ToFile5_PWORK;                     /* '<S13>/To File5' */

  struct {
    void *FilePtr;
  } ToFile6_PWORK;                     /* '<S13>/To File6' */

  struct {
    void *FilePtr;
  } ToFile7_PWORK;                     /* '<S13>/To File7' */

  struct {
    void *FilePtr;
  } ToFile8_PWORK;                     /* '<S13>/To File8' */

  struct {
    void *FilePtr;
  } ToFile9_PWORK;                     /* '<S13>/To File9' */

  struct {
    void *LoggedData[2];
  } elevation_PWORK_p;                 /* '<S13>/elevation' */

  struct {
    void *LoggedData[2];
  } elevationestimate_PWORK;           /* '<S13>/elevation estimate' */

  struct {
    void *LoggedData[2];
  } elevationrate_PWORK_n;             /* '<S13>/elevation rate' */

  struct {
    void *LoggedData[2];
  } elevationrateestimate_PWORK;       /* '<S13>/elevation rate estimate' */

  struct {
    void *LoggedData[2];
  } pitch_PWORK_d;                     /* '<S13>/pitch' */

  struct {
    void *LoggedData[2];
  } pitchestimate_PWORK;               /* '<S13>/pitch estimate' */

  struct {
    void *LoggedData[2];
  } pitchrate_PWORK_f;                 /* '<S13>/pitch rate' */

  struct {
    void *LoggedData[2];
  } pitchrateestimate_PWORK;           /* '<S13>/pitch rate estimate' */

  struct {
    void *LoggedData[2];
  } travel_PWORK_n;                    /* '<S13>/travel' */

  struct {
    void *LoggedData[2];
  } travelestimate_PWORK;              /* '<S13>/travel estimate' */

  struct {
    void *LoggedData[2];
  } travelrate_PWORK_p;                /* '<S13>/travel rate' */

  struct {
    void *LoggedData[2];
  } travelrateestimate_PWORK;          /* '<S13>/travel rate estimate' */

  struct {
    void *LoggedData[2];
  } x_comp_PWORK_m;                    /* '<S13>/x_comp' */

  struct {
    void *LoggedData;
  } Scope1_PWORK_k;                    /* '<S13>/Scope1' */

  struct {
    void *LoggedData;
  } P_estimate_k_variances_only_PWO;   /* '<S13>/P_estimate_k_variances_only' */

  struct {
    void *LoggedData[2];
  } Pitch_PWORK;                       /* '<S1>/Pitch' */

  struct {
    void *FilePtr;
  } ToFile_PWORK_f;                    /* '<S1>/To File' */

  struct {
    void *FilePtr;
  } ToFile1_PWORK_p;                   /* '<S1>/To File1' */

  struct {
    void *FilePtr;
  } ToFile2_PWORK_d;                   /* '<S1>/To File2' */

  struct {
    void *FilePtr;
  } ToFile3_PWORK_n;                   /* '<S1>/To File3' */

  struct {
    void *FilePtr;
  } ToFile4_PWORK_d;                   /* '<S1>/To File4' */

  struct {
    void *FilePtr;
  } ToFile5_PWORK_a;                   /* '<S1>/To File5' */

  struct {
    void *FilePtr;
  } ToFile6_PWORK_c;                   /* '<S1>/To File6' */

  struct {
    void *FilePtr;
  } ToFile7_PWORK_m;                   /* '<S1>/To File7' */

  struct {
    void *LoggedData;
  } elevation_PWORK_pu;                /* '<S1>/elevation' */

  struct {
    void *LoggedData[2];
  } elevationrate_PWORK_p;             /* '<S1>/elevation rate' */

  struct {
    void *LoggedData;
  } pitchrate_PWORK_l;                 /* '<S1>/pitch rate' */

  struct {
    void *LoggedData;
  } travel_PWORK_i;                    /* '<S1>/travel' */

  struct {
    void *LoggedData;
  } travelrate_PWORK_j;                /* '<S1>/travel rate' */

  struct {
    void *LoggedData;
  } XScope_PWORK;                      /* '<S10>/X: Scope' */

  struct {
    void *LoggedData;
  } YScope_PWORK;                      /* '<S10>/Y: Scope' */

  int32_T HILInitialize_ClockModes[3]; /* '<Root>/HIL Initialize' */
  int32_T HILInitialize_QuadratureModes[8];/* '<Root>/HIL Initialize' */
  int32_T HILInitialize_InitialEICounts[8];/* '<Root>/HIL Initialize' */
  int32_T HILInitialize_POModeValues[8];/* '<Root>/HIL Initialize' */
  int32_T HILInitialize_POAlignValues[8];/* '<Root>/HIL Initialize' */
  int32_T HILInitialize_POPolarityVals[8];/* '<Root>/HIL Initialize' */
  int32_T HILReadEncoderTimebase_Buffer[3];/* '<S12>/HIL Read Encoder Timebase' */
  int32_T clockTickCounter;            /* '<S9>/Pulse Generator' */
  int32_T clockTickCounter_a;          /* '<S9>/Pulse Generator1' */
  uint32_T HILInitialize_POSortedChans[8];/* '<Root>/HIL Initialize' */
  struct {
    int_T Count;
    int_T Decimation;
  } ToFile3_IWORK;                     /* '<S17>/To File3' */

  struct {
    int_T Count;
    int_T Decimation;
  } ToFile4_IWORK;                     /* '<S17>/To File4' */

  struct {
    int_T Count;
    int_T Decimation;
  } ToFile_IWORK;                      /* '<S17>/To File' */

  struct {
    int_T Count;
    int_T Decimation;
  } ToFile1_IWORK;                     /* '<S17>/To File1' */

  struct {
    int_T Count;
    int_T Decimation;
  } ToFile2_IWORK;                     /* '<S17>/To File2' */

  struct {
    int_T Count;
    int_T Decimation;
  } ToFile_IWORK_j;                    /* '<S13>/To File' */

  struct {
    int_T Count;
    int_T Decimation;
  } ToFile1_IWORK_p;                   /* '<S13>/To File1' */

  struct {
    int_T Count;
    int_T Decimation;
  } ToFile10_IWORK;                    /* '<S13>/To File10' */

  struct {
    int_T Count;
    int_T Decimation;
  } ToFile11_IWORK;                    /* '<S13>/To File11' */

  struct {
    int_T Count;
    int_T Decimation;
  } ToFile2_IWORK_l;                   /* '<S13>/To File2' */

  struct {
    int_T Count;
    int_T Decimation;
  } ToFile3_IWORK_k;                   /* '<S13>/To File3' */

  struct {
    int_T Count;
    int_T Decimation;
  } ToFile4_IWORK_i;                   /* '<S13>/To File4' */

  struct {
    int_T Count;
    int_T Decimation;
  } ToFile5_IWORK;                     /* '<S13>/To File5' */

  struct {
    int_T Count;
    int_T Decimation;
  } ToFile6_IWORK;                     /* '<S13>/To File6' */

  struct {
    int_T Count;
    int_T Decimation;
  } ToFile7_IWORK;                     /* '<S13>/To File7' */

  struct {
    int_T Count;
    int_T Decimation;
  } ToFile8_IWORK;                     /* '<S13>/To File8' */

  struct {
    int_T Count;
    int_T Decimation;
  } ToFile9_IWORK;                     /* '<S13>/To File9' */

  struct {
    int_T Count;
    int_T Decimation;
  } ToFile_IWORK_m;                    /* '<S1>/To File' */

  struct {
    int_T Count;
    int_T Decimation;
  } ToFile1_IWORK_j;                   /* '<S1>/To File1' */

  struct {
    int_T Count;
    int_T Decimation;
  } ToFile2_IWORK_h;                   /* '<S1>/To File2' */

  struct {
    int_T Count;
    int_T Decimation;
  } ToFile3_IWORK_o;                   /* '<S1>/To File3' */

  struct {
    int_T Count;
    int_T Decimation;
  } ToFile4_IWORK_n;                   /* '<S1>/To File4' */

  struct {
    int_T Count;
    int_T Decimation;
  } ToFile5_IWORK_o;                   /* '<S1>/To File5' */

  struct {
    int_T Count;
    int_T Decimation;
  } ToFile6_IWORK_p;                   /* '<S1>/To File6' */

  struct {
    int_T Count;
    int_T Decimation;
  } ToFile7_IWORK_b;                   /* '<S1>/To File7' */

  int8_T KalmanFilter_SubsysRanBC;     /* '<Root>/Kalman Filter' */
  int8_T ControlSystem_SubsysRanBC;    /* '<Root>/Control System' */
  int8_T SampleandHold_SubsysRanBC;    /* '<S6>/Sample and Hold' */
  uint8_T StreamCall1_State;           /* '<S16>/Stream Call1' */
  boolean_T KalmanFilter_MODE;         /* '<Root>/Kalman Filter' */
  boolean_T ControlSystem_MODE;        /* '<Root>/Control System' */
} DW_heli_q8_T;

/* Continuous states (auto storage) */
typedef struct {
  real_T PitchTransferFcn_CSTATE;      /* '<S12>/Pitch: Transfer Fcn' */
  real_T ElevationTransferFcn_CSTATE;  /* '<S12>/Elevation: Transfer Fcn' */
  real_T TravelTransferFcn_CSTATE;     /* '<S12>/Travel: Transfer Fcn' */
  real_T Integrator_CSTATE;            /* '<S11>/Integrator' */
  real_T Integrator1_CSTATE;           /* '<S11>/Integrator1' */
} X_heli_q8_T;

/* State derivatives (auto storage) */
typedef struct {
  real_T PitchTransferFcn_CSTATE;      /* '<S12>/Pitch: Transfer Fcn' */
  real_T ElevationTransferFcn_CSTATE;  /* '<S12>/Elevation: Transfer Fcn' */
  real_T TravelTransferFcn_CSTATE;     /* '<S12>/Travel: Transfer Fcn' */
  real_T Integrator_CSTATE;            /* '<S11>/Integrator' */
  real_T Integrator1_CSTATE;           /* '<S11>/Integrator1' */
} XDot_heli_q8_T;

/* State disabled  */
typedef struct {
  boolean_T PitchTransferFcn_CSTATE;   /* '<S12>/Pitch: Transfer Fcn' */
  boolean_T ElevationTransferFcn_CSTATE;/* '<S12>/Elevation: Transfer Fcn' */
  boolean_T TravelTransferFcn_CSTATE;  /* '<S12>/Travel: Transfer Fcn' */
  boolean_T Integrator_CSTATE;         /* '<S11>/Integrator' */
  boolean_T Integrator1_CSTATE;        /* '<S11>/Integrator1' */
} XDis_heli_q8_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState SampleandHold_Trig_ZCE;   /* '<S6>/Sample and Hold' */
} PrevZCX_heli_q8_T;

#ifndef ODE1_INTG
#define ODE1_INTG

/* ODE1 Integration Data */
typedef struct {
  real_T *f[1];                        /* derivatives */
} ODE1_IntgData;

#endif

/* Backward compatible GRT Identifiers */
#define rtB                            heli_q8_B
#define BlockIO                        B_heli_q8_T
#define rtX                            heli_q8_X
#define ContinuousStates               X_heli_q8_T
#define rtXdot                         heli_q8_XDot
#define StateDerivatives               XDot_heli_q8_T
#define tXdis                          heli_q8_XDis
#define StateDisabled                  XDis_heli_q8_T
#define rtP                            heli_q8_P
#define Parameters                     P_heli_q8_T
#define rtDWork                        heli_q8_DW
#define D_Work                         DW_heli_q8_T
#define rtPrevZCSigState               heli_q8_PrevZCX
#define PrevZCSigStates                PrevZCX_heli_q8_T

/* Parameters (auto storage) */
struct P_heli_q8_T_ {
  real_T A_d[36];                      /* Variable: A_d
                                        * Referenced by:
                                        *   '<S3>/Constant'
                                        *   '<S5>/Constant'
                                        */
  real_T B_d[12];                      /* Variable: B_d
                                        * Referenced by:
                                        *   '<S3>/Constant1'
                                        *   '<S5>/Constant1'
                                        */
  real_T C_d[30];                      /* Variable: C_d
                                        * Referenced by: '<S3>/Constant4'
                                        */
  real_T F_aug[4];                     /* Variable: F_aug
                                        * Referenced by: '<S11>/Gain'
                                        */
  real_T Joystick_gain_x;              /* Variable: Joystick_gain_x
                                        * Referenced by: '<S10>/Joystick_gain_x'
                                        */
  real_T Joystick_gain_y;              /* Variable: Joystick_gain_y
                                        * Referenced by: '<S10>/Joystick_gain_y'
                                        */
  real_T K_aug[10];                    /* Variable: K_aug
                                        * Referenced by: '<S11>/Gain1'
                                        */
  real_T P_0[36];                      /* Variable: P_0
                                        * Referenced by:
                                        *   '<S3>/Unit Delay1'
                                        *   '<S5>/Unit Delay1'
                                        */
  real_T Q_d[36];                      /* Variable: Q_d
                                        * Referenced by:
                                        *   '<S3>/Constant2'
                                        *   '<S5>/Constant2'
                                        */
  real_T R_d[25];                      /* Variable: R_d
                                        * Referenced by: '<S3>/Constant5'
                                        */
  real_T v_s0;                         /* Variable: v_s0
                                        * Referenced by: '<S11>/Constant2'
                                        */
  real_T HILInitialize_analog_input_maxi;/* Mask Parameter: HILInitialize_analog_input_maxi
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_analog_input_mini;/* Mask Parameter: HILInitialize_analog_input_mini
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_analog_output_max;/* Mask Parameter: HILInitialize_analog_output_max
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_analog_output_min;/* Mask Parameter: HILInitialize_analog_output_min
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_final_analog_outp;/* Mask Parameter: HILInitialize_final_analog_outp
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_final_pwm_outputs;/* Mask Parameter: HILInitialize_final_pwm_outputs
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_initial_analog_ou;/* Mask Parameter: HILInitialize_initial_analog_ou
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_initial_pwm_outpu;/* Mask Parameter: HILInitialize_initial_pwm_outpu
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_pwm_frequency;  /* Mask Parameter: HILInitialize_pwm_frequency
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  real_T HILInitialize_pwm_leading_deadb;/* Mask Parameter: HILInitialize_pwm_leading_deadb
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_pwm_trailing_dead;/* Mask Parameter: HILInitialize_pwm_trailing_dead
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_set_other_outputs;/* Mask Parameter: HILInitialize_set_other_outputs
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_set_other_outpu_m;/* Mask Parameter: HILInitialize_set_other_outpu_m
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_set_other_outpu_k;/* Mask Parameter: HILInitialize_set_other_outpu_k
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_set_other_outpu_j;/* Mask Parameter: HILInitialize_set_other_outpu_j
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_watchdog_analog_o;/* Mask Parameter: HILInitialize_watchdog_analog_o
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_watchdog_pwm_outp;/* Mask Parameter: HILInitialize_watchdog_pwm_outp
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  int32_T HILReadEncoderTimebase_clock;/* Mask Parameter: HILReadEncoderTimebase_clock
                                        * Referenced by: '<S12>/HIL Read Encoder Timebase'
                                        */
  int32_T HILInitialize_hardware_clocks[3];/* Mask Parameter: HILInitialize_hardware_clocks
                                            * Referenced by: '<Root>/HIL Initialize'
                                            */
  int32_T HILInitialize_initial_encoder_c;/* Mask Parameter: HILInitialize_initial_encoder_c
                                           * Referenced by: '<Root>/HIL Initialize'
                                           */
  int32_T HILInitialize_pwm_alignment; /* Mask Parameter: HILInitialize_pwm_alignment
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  int32_T HILInitialize_pwm_configuration;/* Mask Parameter: HILInitialize_pwm_configuration
                                           * Referenced by: '<Root>/HIL Initialize'
                                           */
  int32_T HILInitialize_pwm_modes;     /* Mask Parameter: HILInitialize_pwm_modes
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  int32_T HILInitialize_pwm_polarity;  /* Mask Parameter: HILInitialize_pwm_polarity
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  int32_T HILInitialize_watchdog_digital_;/* Mask Parameter: HILInitialize_watchdog_digital_
                                           * Referenced by: '<Root>/HIL Initialize'
                                           */
  uint32_T HILInitialize_analog_input_chan[8];/* Mask Parameter: HILInitialize_analog_input_chan
                                               * Referenced by: '<Root>/HIL Initialize'
                                               */
  uint32_T HILInitialize_analog_output_cha[8];/* Mask Parameter: HILInitialize_analog_output_cha
                                               * Referenced by: '<Root>/HIL Initialize'
                                               */
  uint32_T HILReadEncoderTimebase_channels[3];/* Mask Parameter: HILReadEncoderTimebase_channels
                                               * Referenced by: '<S12>/HIL Read Encoder Timebase'
                                               */
  uint32_T HILWriteAnalog_channels[2]; /* Mask Parameter: HILWriteAnalog_channels
                                        * Referenced by: '<S12>/HIL Write Analog'
                                        */
  uint32_T HILInitialize_encoder_channels[8];/* Mask Parameter: HILInitialize_encoder_channels
                                              * Referenced by: '<Root>/HIL Initialize'
                                              */
  uint32_T HILInitialize_pwm_channels[8];/* Mask Parameter: HILInitialize_pwm_channels
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  uint32_T HILInitialize_quadrature;   /* Mask Parameter: HILInitialize_quadrature
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  uint32_T HILReadEncoderTimebase_samples_;/* Mask Parameter: HILReadEncoderTimebase_samples_
                                            * Referenced by: '<S12>/HIL Read Encoder Timebase'
                                            */
  boolean_T HILInitialize_active;      /* Mask Parameter: HILInitialize_active
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  boolean_T HILInitialize_final_digital_out;/* Mask Parameter: HILInitialize_final_digital_out
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_initial_digital_o;/* Mask Parameter: HILInitialize_initial_digital_o
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_analog_input_;/* Mask Parameter: HILInitialize_set_analog_input_
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_analog_inpu_m;/* Mask Parameter: HILInitialize_set_analog_inpu_m
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_analog_output;/* Mask Parameter: HILInitialize_set_analog_output
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_analog_outp_b;/* Mask Parameter: HILInitialize_set_analog_outp_b
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_analog_outp_e;/* Mask Parameter: HILInitialize_set_analog_outp_e
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_analog_outp_j;/* Mask Parameter: HILInitialize_set_analog_outp_j
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_analog_outp_c;/* Mask Parameter: HILInitialize_set_analog_outp_c
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_analog_out_ex;/* Mask Parameter: HILInitialize_set_analog_out_ex
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_analog_outp_p;/* Mask Parameter: HILInitialize_set_analog_outp_p
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_clock_frequen;/* Mask Parameter: HILInitialize_set_clock_frequen
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_clock_frequ_e;/* Mask Parameter: HILInitialize_set_clock_frequ_e
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_clock_params_;/* Mask Parameter: HILInitialize_set_clock_params_
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_clock_param_c;/* Mask Parameter: HILInitialize_set_clock_param_c
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_digital_outpu;/* Mask Parameter: HILInitialize_set_digital_outpu
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_digital_out_b;/* Mask Parameter: HILInitialize_set_digital_out_b
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_digital_out_c;/* Mask Parameter: HILInitialize_set_digital_out_c
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_digital_ou_c1;/* Mask Parameter: HILInitialize_set_digital_ou_c1
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_digital_out_a;/* Mask Parameter: HILInitialize_set_digital_out_a
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_digital_out_j;/* Mask Parameter: HILInitialize_set_digital_out_j
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_digital_out_m;/* Mask Parameter: HILInitialize_set_digital_out_m
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_encoder_count;/* Mask Parameter: HILInitialize_set_encoder_count
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_encoder_cou_k;/* Mask Parameter: HILInitialize_set_encoder_cou_k
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_encoder_param;/* Mask Parameter: HILInitialize_set_encoder_param
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_encoder_par_m;/* Mask Parameter: HILInitialize_set_encoder_par_m
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_other_outpu_l;/* Mask Parameter: HILInitialize_set_other_outpu_l
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_pwm_outputs_a;/* Mask Parameter: HILInitialize_set_pwm_outputs_a
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_pwm_outputs_g;/* Mask Parameter: HILInitialize_set_pwm_outputs_g
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_pwm_outputs_p;/* Mask Parameter: HILInitialize_set_pwm_outputs_p
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_pwm_output_ap;/* Mask Parameter: HILInitialize_set_pwm_output_ap
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_pwm_outputs_o;/* Mask Parameter: HILInitialize_set_pwm_outputs_o
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_pwm_params_at;/* Mask Parameter: HILInitialize_set_pwm_params_at
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_pwm_params__f;/* Mask Parameter: HILInitialize_set_pwm_params__f
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S9>/Gain'
                                        */
  real_T PulseGenerator_Amp;           /* Expression: 0.5
                                        * Referenced by: '<S9>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period;        /* Computed Parameter: PulseGenerator_Period
                                        * Referenced by: '<S9>/Pulse Generator'
                                        */
  real_T PulseGenerator_Duty;          /* Computed Parameter: PulseGenerator_Duty
                                        * Referenced by: '<S9>/Pulse Generator'
                                        */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 10
                                        * Referenced by: '<S9>/Pulse Generator'
                                        */
  real_T PulseGenerator1_Amp;          /* Expression: 0.5
                                        * Referenced by: '<S9>/Pulse Generator1'
                                        */
  real_T PulseGenerator1_Period;       /* Computed Parameter: PulseGenerator1_Period
                                        * Referenced by: '<S9>/Pulse Generator1'
                                        */
  real_T PulseGenerator1_Duty;         /* Computed Parameter: PulseGenerator1_Duty
                                        * Referenced by: '<S9>/Pulse Generator1'
                                        */
  real_T PulseGenerator1_PhaseDelay;   /* Expression: 25
                                        * Referenced by: '<S9>/Pulse Generator1'
                                        */
  real_T Enablepitchsquare_Value;      /* Expression: 1
                                        * Referenced by: '<S9>/Enable pitch square'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S9>/Switch'
                                        */
  real_T pitch_Gain;                   /* Expression: 1
                                        * Referenced by: '<S1>/pitch'
                                        */
  real_T pitch_rate_Gain;              /* Expression: 1
                                        * Referenced by: '<S1>/pitch_rate '
                                        */
  real_T elevation_Gain;               /* Expression: 1
                                        * Referenced by: '<S1>/elevation '
                                        */
  real_T elevation_rate_Gain;          /* Expression: 1
                                        * Referenced by: '<S1>/elevation_rate '
                                        */
  real_T travel_Gain;                  /* Expression: 1
                                        * Referenced by: '<S1>/travel '
                                        */
  real_T travel_rate_Gain;             /* Expression: 1
                                        * Referenced by: '<S1>/travel_rate '
                                        */
  real_T RateTransitiony_X0;           /* Expression: 0
                                        * Referenced by: '<S10>/Rate Transition: y'
                                        */
  real_T DeadZoney_Start;              /* Expression: -0.1
                                        * Referenced by: '<S10>/Dead Zone: y'
                                        */
  real_T DeadZoney_End;                /* Expression: 0.1
                                        * Referenced by: '<S10>/Dead Zone: y'
                                        */
  real_T Gainy_Gain;                   /* Expression: 10/9
                                        * Referenced by: '<S10>/Gain: y'
                                        */
  real_T Integrator_IC;                /* Expression: 0
                                        * Referenced by: '<S11>/Integrator'
                                        */
  real_T Integrator1_IC;               /* Expression: 0
                                        * Referenced by: '<S11>/Integrator1'
                                        */
  real_T Backgain_Gain;                /* Expression: 0.5
                                        * Referenced by: '<S8>/Back gain'
                                        */
  real_T Frontgain_Gain;               /* Expression: 0.5
                                        * Referenced by: '<S8>/Front gain'
                                        */
  real_T RateTransitionx_X0;           /* Expression: 0
                                        * Referenced by: '<S10>/Rate Transition: x'
                                        */
  real_T DeadZonex_Start;              /* Expression: -0.1
                                        * Referenced by: '<S10>/Dead Zone: x'
                                        */
  real_T DeadZonex_End;                /* Expression: 0.1
                                        * Referenced by: '<S10>/Dead Zone: x'
                                        */
  real_T Gainx_Gain;                   /* Expression: 10/9
                                        * Referenced by: '<S10>/Gain: x'
                                        */
  real_T UnitDelay2_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S3>/Unit Delay2'
                                        */
  real_T UnitDelay_InitialCondition[6];/* Expression: [0; 0; 0; 0; 0; 0]
                                        * Referenced by: '<S3>/Unit Delay'
                                        */
  real_T pitche_Gain;                  /* Expression: 1
                                        * Referenced by: '<S13>/pitch e'
                                        */
  real_T pitchratee_Gain;              /* Expression: 1
                                        * Referenced by: '<S13>/pitch rate e'
                                        */
  real_T travelencoder_Gain;           /* Expression: 1
                                        * Referenced by: '<S13>/travel encoder'
                                        */
  real_T travelrateencoder_Gain;       /* Expression: 1
                                        * Referenced by: '<S13>/travel rate encoder'
                                        */
  real_T elevatione_Gain;              /* Expression: 1
                                        * Referenced by: '<S13>/elevation e'
                                        */
  real_T elevationratee_Gain;          /* Expression: 1
                                        * Referenced by: '<S13>/elevation rate e'
                                        */
  real_T travele_Gain;                 /* Expression: 1
                                        * Referenced by: '<S13>/travel e'
                                        */
  real_T travelratee_Gain;             /* Expression: 1
                                        * Referenced by: '<S13>/travel rate e'
                                        */
  real_T pitchencoder_Gain;            /* Expression: 1
                                        * Referenced by: '<S13>/pitch encoder'
                                        */
  real_T pitchrateencoder_Gain;        /* Expression: 1
                                        * Referenced by: '<S13>/pitch rate encoder'
                                        */
  real_T elevationencoder_Gain;        /* Expression: 1
                                        * Referenced by: '<S13>/elevation encoder'
                                        */
  real_T elevationrateencoder_Gain;    /* Expression: 1
                                        * Referenced by: '<S13>/elevation rate encoder'
                                        */
  real_T Gain_Gain_l[6];               /* Expression: [1; 1; 1; 1; 1; 1]
                                        * Referenced by: '<S13>/Gain'
                                        */
  real_T Gain1_Gain[6];                /* Expression: [1; 1; 1; 1; 1; 1]
                                        * Referenced by: '<S13>/Gain1'
                                        */
  real_T Constant2_Value;              /* Expression: NaN
                                        * Referenced by: '<S16>/Constant2'
                                        */
  real_T _Y0;                          /* Expression: initCond
                                        * Referenced by: '<S20>/ '
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S7>/Constant'
                                        */
  real_T Constant_Value_k;             /* Expression: 0
                                        * Referenced by: '<S16>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 65
                                        * Referenced by: '<S16>/Constant1'
                                        */
  real_T Gain1_Gain_i[9];              /* Expression: [ 0, 0, 1; 0, 1, 0; -1, 0, 0]
                                        * Referenced by: '<S16>/Gain1'
                                        */
  real_T PitchCounttorad_Gain;         /* Expression: -2*pi /4096
                                        * Referenced by: '<S12>/Pitch: Count to rad'
                                        */
  real_T elevationoffset_Value;        /* Expression: -0.515
                                        * Referenced by: '<S2>/elevation offset'
                                        */
  real_T ElevationCounttorad_Gain;     /* Expression: -2 * pi /4096
                                        * Referenced by: '<S12>/Elevation: Count to rad'
                                        */
  real_T TravelCounttorad_Gain;        /* Expression: 2*pi/8192
                                        * Referenced by: '<S12>/Travel: Count to rad'
                                        */
  real_T Gain2_Gain[9];                /* Expression: [ 0, 0, 1; 0, 1, 0; -1, 0, 0]
                                        * Referenced by: '<S16>/Gain2'
                                        */
  real_T PitchTransferFcn_A;           /* Computed Parameter: PitchTransferFcn_A
                                        * Referenced by: '<S12>/Pitch: Transfer Fcn'
                                        */
  real_T PitchTransferFcn_C;           /* Computed Parameter: PitchTransferFcn_C
                                        * Referenced by: '<S12>/Pitch: Transfer Fcn'
                                        */
  real_T PitchTransferFcn_D;           /* Computed Parameter: PitchTransferFcn_D
                                        * Referenced by: '<S12>/Pitch: Transfer Fcn'
                                        */
  real_T ElevationTransferFcn_A;       /* Computed Parameter: ElevationTransferFcn_A
                                        * Referenced by: '<S12>/Elevation: Transfer Fcn'
                                        */
  real_T ElevationTransferFcn_C;       /* Computed Parameter: ElevationTransferFcn_C
                                        * Referenced by: '<S12>/Elevation: Transfer Fcn'
                                        */
  real_T ElevationTransferFcn_D;       /* Computed Parameter: ElevationTransferFcn_D
                                        * Referenced by: '<S12>/Elevation: Transfer Fcn'
                                        */
  real_T TravelTransferFcn_A;          /* Computed Parameter: TravelTransferFcn_A
                                        * Referenced by: '<S12>/Travel: Transfer Fcn'
                                        */
  real_T TravelTransferFcn_C;          /* Computed Parameter: TravelTransferFcn_C
                                        * Referenced by: '<S12>/Travel: Transfer Fcn'
                                        */
  real_T TravelTransferFcn_D;          /* Computed Parameter: TravelTransferFcn_D
                                        * Referenced by: '<S12>/Travel: Transfer Fcn'
                                        */
  real_T Memory_X0;                    /* Expression: 0
                                        * Referenced by: '<S7>/Memory'
                                        */
  real_T FrontmotorSaturation_UpperSat;/* Expression: 5
                                        * Referenced by: '<S12>/Front motor: Saturation'
                                        */
  real_T FrontmotorSaturation_LowerSat;/* Expression: -5
                                        * Referenced by: '<S12>/Front motor: Saturation'
                                        */
  real_T BackmotorSaturation_UpperSat; /* Expression: 5
                                        * Referenced by: '<S12>/Back motor: Saturation'
                                        */
  real_T BackmotorSaturation_LowerSat; /* Expression: -5
                                        * Referenced by: '<S12>/Back motor: Saturation'
                                        */
  real_T Gain1_Gain_c;                 /* Expression: 0
                                        * Referenced by: '<S17>/Gain1'
                                        */
  real_T Gain2_Gain_l;                 /* Expression: 0
                                        * Referenced by: '<S17>/Gain2'
                                        */
  real_T Gain_Gain_lp;                 /* Expression: 0
                                        * Referenced by: '<S17>/Gain'
                                        */
  real_T UnitDelay_InitialCondition_k[6];/* Expression: [0; 0; 0; 0; 0; 0]
                                          * Referenced by: '<S5>/Unit Delay'
                                          */
  real_T Gain_Gain_j[6];               /* Expression: [1; 1; 1; 1; 1; 1]
                                        * Referenced by: '<S19>/Gain'
                                        */
  int32_T StreamCall1_SendBufferSize;  /* Computed Parameter: StreamCall1_SendBufferSize
                                        * Referenced by: '<S16>/Stream Call1'
                                        */
  int32_T StreamCall1_ReceiveBufferSize;/* Computed Parameter: StreamCall1_ReceiveBufferSize
                                         * Referenced by: '<S16>/Stream Call1'
                                         */
  uint32_T StreamFormattedWrite_MaxUnits;/* Computed Parameter: StreamFormattedWrite_MaxUnits
                                          * Referenced by: '<S16>/Stream Formatted Write'
                                          */
  uint16_T GameController_BufferSize;  /* Computed Parameter: GameController_BufferSize
                                        * Referenced by: '<S10>/Game Controller'
                                        */
  uint8_T GameController_ControllerNumber;/* Computed Parameter: GameController_ControllerNumber
                                           * Referenced by: '<S10>/Game Controller'
                                           */
  uint8_T StringConstant_Value[255];   /* Expression: value
                                        * Referenced by: '<S16>/String Constant'
                                        */
  uint8_T StreamCall1_URI;             /* Expression: uri_argument
                                        * Referenced by: '<S16>/Stream Call1'
                                        */
  uint8_T StreamCall1_Endian;          /* Computed Parameter: StreamCall1_Endian
                                        * Referenced by: '<S16>/Stream Call1'
                                        */
  boolean_T GameController_AutoCenter; /* Computed Parameter: GameController_AutoCenter
                                        * Referenced by: '<S10>/Game Controller'
                                        */
  boolean_T GameController_Enabled;    /* Computed Parameter: GameController_Enabled
                                        * Referenced by: '<S10>/Game Controller'
                                        */
  boolean_T HILReadEncoderTimebase_Active;/* Computed Parameter: HILReadEncoderTimebase_Active
                                           * Referenced by: '<S12>/HIL Read Encoder Timebase'
                                           */
  boolean_T StreamCall1_Active;        /* Computed Parameter: StreamCall1_Active
                                        * Referenced by: '<S16>/Stream Call1'
                                        */
  boolean_T HILWriteAnalog_Active;     /* Computed Parameter: HILWriteAnalog_Active
                                        * Referenced by: '<S12>/HIL Write Analog'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_heli_q8_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * ModelData:
   * The following substructure contains information regarding
   * the data used in the model.
   */
  struct {
    void *blockIO;
    const void *constBlockIO;
    void *defaultParam;
    ZCSigState *prevZCSigState;
    real_T *contStates;
    int_T *periodicContStateIndices;
    real_T *periodicContStateRanges;
    real_T *derivs;
    void *zcSignalValues;
    void *inputs;
    void *outputs;
    boolean_T *contStateDisabled;
    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T blkStateChange;
    real_T odeF[1][5];
    ODE1_IntgData intgData;
    void *dwork;
  } ModelData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    uint32_T clockTick2;
    uint32_T clockTickH2;
    time_T stepSize2;
    struct {
      uint8_T TID[3];
    } TaskCounters;

    struct {
      boolean_T TID1_2;
    } RateInteraction;

    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[3];
    time_T offsetTimesArray[3];
    int_T sampleTimeTaskIDArray[3];
    int_T sampleHitArray[3];
    int_T perTaskSampleHitsArray[9];
    time_T tArray[3];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_heli_q8_T heli_q8_P;

/* Block signals (auto storage) */
extern B_heli_q8_T heli_q8_B;

/* Continuous states (auto storage) */
extern X_heli_q8_T heli_q8_X;

/* Block states (auto storage) */
extern DW_heli_q8_T heli_q8_DW;

/* External function called from main */
extern time_T rt_SimUpdateDiscreteEvents(
  int_T rtmNumSampTimes, void *rtmTimingData, int_T *rtmSampleHitPtr, int_T
  *rtmPerTaskSampleHits )
  ;

/* External data declarations for dependent source files */

/* Zero-crossing (trigger) state */
extern PrevZCX_heli_q8_T heli_q8_PrevZCX;

/* Model entry point functions */
extern void heli_q8_initialize(void);
extern void heli_q8_output0(void);
extern void heli_q8_update0(void);
extern void heli_q8_output(int_T tid);
extern void heli_q8_update(int_T tid);
extern void heli_q8_terminate(void);

/*====================*
 * External functions *
 *====================*/
extern heli_q8_rtModel *heli_q8(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Real-time Model object */
extern RT_MODEL_heli_q8_T *const heli_q8_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'heli_q8'
 * '<S1>'   : 'heli_q8/Control System'
 * '<S2>'   : 'heli_q8/Helicopter'
 * '<S3>'   : 'heli_q8/Kalman Filter'
 * '<S4>'   : 'heli_q8/Measurement System'
 * '<S5>'   : 'heli_q8/Open loop observer'
 * '<S6>'   : 'heli_q8/Sample and hold y_k'
 * '<S7>'   : 'heli_q8/Startup Sync'
 * '<S8>'   : 'heli_q8/Control System/Conversion'
 * '<S9>'   : 'heli_q8/Control System/Generate pitch ref'
 * '<S10>'  : 'heli_q8/Control System/Joystick'
 * '<S11>'  : 'heli_q8/Control System/Multivariable controller'
 * '<S12>'  : 'heli_q8/Helicopter/Heli 3D'
 * '<S13>'  : 'heli_q8/Kalman Filter/Comparison module'
 * '<S14>'  : 'heli_q8/Kalman Filter/MATLAB Function'
 * '<S15>'  : 'heli_q8/Measurement System/Gyro vector to [pitch rate, elevation rate, tra vle rate]'
 * '<S16>'  : 'heli_q8/Measurement System/IMU'
 * '<S17>'  : 'heli_q8/Measurement System/Scop i Hop'
 * '<S18>'  : 'heli_q8/Open loop observer/MATLAB Function'
 * '<S19>'  : 'heli_q8/Open loop observer/Scop i Hop V2'
 * '<S20>'  : 'heli_q8/Sample and hold y_k/Sample and Hold'
 */
#endif                                 /* RTW_HEADER_heli_q8_h_ */
