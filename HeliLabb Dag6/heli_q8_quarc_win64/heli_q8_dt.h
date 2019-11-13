/*
 * heli_q8_dt.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "heli_q8".
 *
 * Model version              : 1.131
 * Simulink Coder version : 8.9 (R2015b) 13-Aug-2015
 * C source code generated on : Wed Nov 13 20:02:25 2019
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(t_game_controller),
  sizeof(t_stream),
  sizeof(t_stream_ptr),
  sizeof(intmax_t),
  sizeof(ptrdiff_t),
  sizeof(size_t),
  sizeof(t_int64),
  sizeof(t_uint64),
  sizeof(t_wide_char),
  sizeof(t_card),
  sizeof(t_task)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "t_game_controller",
  "t_stream",
  "t_stream_ptr",
  "intmax_t",
  "ptrdiff_t",
  "size_t",
  "t_int64",
  "t_uint64",
  "t_wide_char",
  "t_card",
  "t_task"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&heli_q8_B.Gain1[0]), 0, 0, 291 },

  { (char_T *)(&heli_q8_B.StreamCall1_o2), 3, 0, 1 }
  ,

  { (char_T *)(&heli_q8_DW.UnitDelay_DSTATE[0]), 0, 0, 155 },

  { (char_T *)(&heli_q8_DW.GameController_Controller), 14, 0, 1 },

  { (char_T *)(&heli_q8_DW.StreamCall1_Stream), 15, 0, 1 },

  { (char_T *)(&heli_q8_DW.HILInitialize_Card), 23, 0, 1 },

  { (char_T *)(&heli_q8_DW.HILReadEncoderTimebase_Task), 24, 0, 1 },

  { (char_T *)(&heli_q8_DW.ElevationScoperads_PWORK.LoggedData), 11, 0, 108 },

  { (char_T *)(&heli_q8_DW.HILInitialize_ClockModes[0]), 6, 0, 48 },

  { (char_T *)(&heli_q8_DW.HILInitialize_POSortedChans[0]), 7, 0, 8 },

  { (char_T *)(&heli_q8_DW.ToFile3_IWORK.Count), 10, 0, 25 },

  { (char_T *)(&heli_q8_DW.SampleandHold_SubsysRanBC), 2, 0, 3 },

  { (char_T *)(&heli_q8_DW.StreamCall1_State), 3, 0, 1 },

  { (char_T *)(&heli_q8_DW.ControlSystem_MODE), 8, 0, 2 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  14U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&heli_q8_P.A_d[0]), 0, 0, 209 },

  { (char_T *)(&heli_q8_P.HILReadEncoderTimebase_clock), 6, 0, 10 },

  { (char_T *)(&heli_q8_P.HILInitialize_analog_input_chan[0]), 7, 0, 39 },

  { (char_T *)(&heli_q8_P.HILInitialize_active), 8, 0, 35 },

  { (char_T *)(&heli_q8_P.Gain_Gain), 0, 0, 116 },

  { (char_T *)(&heli_q8_P.StreamCall1_SendBufferSize), 6, 0, 2 },

  { (char_T *)(&heli_q8_P.StreamFormattedWrite_MaxUnits), 7, 0, 1 },

  { (char_T *)(&heli_q8_P.GameController_BufferSize), 5, 0, 1 },

  { (char_T *)(&heli_q8_P.GameController_ControllerNumber), 3, 0, 258 },

  { (char_T *)(&heli_q8_P.GameController_AutoCenter), 8, 0, 5 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  10U,
  rtPTransitions
};

/* [EOF] heli_q8_dt.h */
