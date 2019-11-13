  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 10;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (heli_q8_P)
    ;%
      section.nData     = 28;
      section.data(28)  = dumData; %prealloc
      
	  ;% heli_q8_P.A_d
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% heli_q8_P.B_d
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 36;
	
	  ;% heli_q8_P.C_d
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 48;
	
	  ;% heli_q8_P.F_aug
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 78;
	
	  ;% heli_q8_P.Joystick_gain_x
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 82;
	
	  ;% heli_q8_P.Joystick_gain_y
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 83;
	
	  ;% heli_q8_P.K_aug
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 84;
	
	  ;% heli_q8_P.P_0
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 94;
	
	  ;% heli_q8_P.Q_d
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 130;
	
	  ;% heli_q8_P.R_d
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 166;
	
	  ;% heli_q8_P.v_s0
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 191;
	
	  ;% heli_q8_P.HILInitialize_analog_input_maxi
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 192;
	
	  ;% heli_q8_P.HILInitialize_analog_input_mini
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 193;
	
	  ;% heli_q8_P.HILInitialize_analog_output_max
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 194;
	
	  ;% heli_q8_P.HILInitialize_analog_output_min
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 195;
	
	  ;% heli_q8_P.HILInitialize_final_analog_outp
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 196;
	
	  ;% heli_q8_P.HILInitialize_final_pwm_outputs
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 197;
	
	  ;% heli_q8_P.HILInitialize_initial_analog_ou
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 198;
	
	  ;% heli_q8_P.HILInitialize_initial_pwm_outpu
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 199;
	
	  ;% heli_q8_P.HILInitialize_pwm_frequency
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 200;
	
	  ;% heli_q8_P.HILInitialize_pwm_leading_deadb
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 201;
	
	  ;% heli_q8_P.HILInitialize_pwm_trailing_dead
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 202;
	
	  ;% heli_q8_P.HILInitialize_set_other_outputs
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 203;
	
	  ;% heli_q8_P.HILInitialize_set_other_outpu_m
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 204;
	
	  ;% heli_q8_P.HILInitialize_set_other_outpu_k
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 205;
	
	  ;% heli_q8_P.HILInitialize_set_other_outpu_j
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 206;
	
	  ;% heli_q8_P.HILInitialize_watchdog_analog_o
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 207;
	
	  ;% heli_q8_P.HILInitialize_watchdog_pwm_outp
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 208;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% heli_q8_P.HILReadEncoderTimebase_clock
	  section.data(1).logicalSrcIdx = 28;
	  section.data(1).dtTransOffset = 0;
	
	  ;% heli_q8_P.HILInitialize_hardware_clocks
	  section.data(2).logicalSrcIdx = 29;
	  section.data(2).dtTransOffset = 1;
	
	  ;% heli_q8_P.HILInitialize_initial_encoder_c
	  section.data(3).logicalSrcIdx = 30;
	  section.data(3).dtTransOffset = 4;
	
	  ;% heli_q8_P.HILInitialize_pwm_alignment
	  section.data(4).logicalSrcIdx = 31;
	  section.data(4).dtTransOffset = 5;
	
	  ;% heli_q8_P.HILInitialize_pwm_configuration
	  section.data(5).logicalSrcIdx = 32;
	  section.data(5).dtTransOffset = 6;
	
	  ;% heli_q8_P.HILInitialize_pwm_modes
	  section.data(6).logicalSrcIdx = 33;
	  section.data(6).dtTransOffset = 7;
	
	  ;% heli_q8_P.HILInitialize_pwm_polarity
	  section.data(7).logicalSrcIdx = 34;
	  section.data(7).dtTransOffset = 8;
	
	  ;% heli_q8_P.HILInitialize_watchdog_digital_
	  section.data(8).logicalSrcIdx = 35;
	  section.data(8).dtTransOffset = 9;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% heli_q8_P.HILInitialize_analog_input_chan
	  section.data(1).logicalSrcIdx = 36;
	  section.data(1).dtTransOffset = 0;
	
	  ;% heli_q8_P.HILInitialize_analog_output_cha
	  section.data(2).logicalSrcIdx = 37;
	  section.data(2).dtTransOffset = 8;
	
	  ;% heli_q8_P.HILReadEncoderTimebase_channels
	  section.data(3).logicalSrcIdx = 38;
	  section.data(3).dtTransOffset = 16;
	
	  ;% heli_q8_P.HILWriteAnalog_channels
	  section.data(4).logicalSrcIdx = 39;
	  section.data(4).dtTransOffset = 19;
	
	  ;% heli_q8_P.HILInitialize_encoder_channels
	  section.data(5).logicalSrcIdx = 40;
	  section.data(5).dtTransOffset = 21;
	
	  ;% heli_q8_P.HILInitialize_pwm_channels
	  section.data(6).logicalSrcIdx = 41;
	  section.data(6).dtTransOffset = 29;
	
	  ;% heli_q8_P.HILInitialize_quadrature
	  section.data(7).logicalSrcIdx = 42;
	  section.data(7).dtTransOffset = 37;
	
	  ;% heli_q8_P.HILReadEncoderTimebase_samples_
	  section.data(8).logicalSrcIdx = 43;
	  section.data(8).dtTransOffset = 38;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 35;
      section.data(35)  = dumData; %prealloc
      
	  ;% heli_q8_P.HILInitialize_active
	  section.data(1).logicalSrcIdx = 44;
	  section.data(1).dtTransOffset = 0;
	
	  ;% heli_q8_P.HILInitialize_final_digital_out
	  section.data(2).logicalSrcIdx = 45;
	  section.data(2).dtTransOffset = 1;
	
	  ;% heli_q8_P.HILInitialize_initial_digital_o
	  section.data(3).logicalSrcIdx = 46;
	  section.data(3).dtTransOffset = 2;
	
	  ;% heli_q8_P.HILInitialize_set_analog_input_
	  section.data(4).logicalSrcIdx = 47;
	  section.data(4).dtTransOffset = 3;
	
	  ;% heli_q8_P.HILInitialize_set_analog_inpu_m
	  section.data(5).logicalSrcIdx = 48;
	  section.data(5).dtTransOffset = 4;
	
	  ;% heli_q8_P.HILInitialize_set_analog_output
	  section.data(6).logicalSrcIdx = 49;
	  section.data(6).dtTransOffset = 5;
	
	  ;% heli_q8_P.HILInitialize_set_analog_outp_b
	  section.data(7).logicalSrcIdx = 50;
	  section.data(7).dtTransOffset = 6;
	
	  ;% heli_q8_P.HILInitialize_set_analog_outp_e
	  section.data(8).logicalSrcIdx = 51;
	  section.data(8).dtTransOffset = 7;
	
	  ;% heli_q8_P.HILInitialize_set_analog_outp_j
	  section.data(9).logicalSrcIdx = 52;
	  section.data(9).dtTransOffset = 8;
	
	  ;% heli_q8_P.HILInitialize_set_analog_outp_c
	  section.data(10).logicalSrcIdx = 53;
	  section.data(10).dtTransOffset = 9;
	
	  ;% heli_q8_P.HILInitialize_set_analog_out_ex
	  section.data(11).logicalSrcIdx = 54;
	  section.data(11).dtTransOffset = 10;
	
	  ;% heli_q8_P.HILInitialize_set_analog_outp_p
	  section.data(12).logicalSrcIdx = 55;
	  section.data(12).dtTransOffset = 11;
	
	  ;% heli_q8_P.HILInitialize_set_clock_frequen
	  section.data(13).logicalSrcIdx = 56;
	  section.data(13).dtTransOffset = 12;
	
	  ;% heli_q8_P.HILInitialize_set_clock_frequ_e
	  section.data(14).logicalSrcIdx = 57;
	  section.data(14).dtTransOffset = 13;
	
	  ;% heli_q8_P.HILInitialize_set_clock_params_
	  section.data(15).logicalSrcIdx = 58;
	  section.data(15).dtTransOffset = 14;
	
	  ;% heli_q8_P.HILInitialize_set_clock_param_c
	  section.data(16).logicalSrcIdx = 59;
	  section.data(16).dtTransOffset = 15;
	
	  ;% heli_q8_P.HILInitialize_set_digital_outpu
	  section.data(17).logicalSrcIdx = 60;
	  section.data(17).dtTransOffset = 16;
	
	  ;% heli_q8_P.HILInitialize_set_digital_out_b
	  section.data(18).logicalSrcIdx = 61;
	  section.data(18).dtTransOffset = 17;
	
	  ;% heli_q8_P.HILInitialize_set_digital_out_c
	  section.data(19).logicalSrcIdx = 62;
	  section.data(19).dtTransOffset = 18;
	
	  ;% heli_q8_P.HILInitialize_set_digital_ou_c1
	  section.data(20).logicalSrcIdx = 63;
	  section.data(20).dtTransOffset = 19;
	
	  ;% heli_q8_P.HILInitialize_set_digital_out_a
	  section.data(21).logicalSrcIdx = 64;
	  section.data(21).dtTransOffset = 20;
	
	  ;% heli_q8_P.HILInitialize_set_digital_out_j
	  section.data(22).logicalSrcIdx = 65;
	  section.data(22).dtTransOffset = 21;
	
	  ;% heli_q8_P.HILInitialize_set_digital_out_m
	  section.data(23).logicalSrcIdx = 66;
	  section.data(23).dtTransOffset = 22;
	
	  ;% heli_q8_P.HILInitialize_set_encoder_count
	  section.data(24).logicalSrcIdx = 67;
	  section.data(24).dtTransOffset = 23;
	
	  ;% heli_q8_P.HILInitialize_set_encoder_cou_k
	  section.data(25).logicalSrcIdx = 68;
	  section.data(25).dtTransOffset = 24;
	
	  ;% heli_q8_P.HILInitialize_set_encoder_param
	  section.data(26).logicalSrcIdx = 69;
	  section.data(26).dtTransOffset = 25;
	
	  ;% heli_q8_P.HILInitialize_set_encoder_par_m
	  section.data(27).logicalSrcIdx = 70;
	  section.data(27).dtTransOffset = 26;
	
	  ;% heli_q8_P.HILInitialize_set_other_outpu_l
	  section.data(28).logicalSrcIdx = 71;
	  section.data(28).dtTransOffset = 27;
	
	  ;% heli_q8_P.HILInitialize_set_pwm_outputs_a
	  section.data(29).logicalSrcIdx = 72;
	  section.data(29).dtTransOffset = 28;
	
	  ;% heli_q8_P.HILInitialize_set_pwm_outputs_g
	  section.data(30).logicalSrcIdx = 73;
	  section.data(30).dtTransOffset = 29;
	
	  ;% heli_q8_P.HILInitialize_set_pwm_outputs_p
	  section.data(31).logicalSrcIdx = 74;
	  section.data(31).dtTransOffset = 30;
	
	  ;% heli_q8_P.HILInitialize_set_pwm_output_ap
	  section.data(32).logicalSrcIdx = 75;
	  section.data(32).dtTransOffset = 31;
	
	  ;% heli_q8_P.HILInitialize_set_pwm_outputs_o
	  section.data(33).logicalSrcIdx = 76;
	  section.data(33).dtTransOffset = 32;
	
	  ;% heli_q8_P.HILInitialize_set_pwm_params_at
	  section.data(34).logicalSrcIdx = 77;
	  section.data(34).dtTransOffset = 33;
	
	  ;% heli_q8_P.HILInitialize_set_pwm_params__f
	  section.data(35).logicalSrcIdx = 78;
	  section.data(35).dtTransOffset = 34;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
      section.nData     = 75;
      section.data(75)  = dumData; %prealloc
      
	  ;% heli_q8_P.Gain_Gain
	  section.data(1).logicalSrcIdx = 79;
	  section.data(1).dtTransOffset = 0;
	
	  ;% heli_q8_P.PulseGenerator_Amp
	  section.data(2).logicalSrcIdx = 80;
	  section.data(2).dtTransOffset = 1;
	
	  ;% heli_q8_P.PulseGenerator_Period
	  section.data(3).logicalSrcIdx = 81;
	  section.data(3).dtTransOffset = 2;
	
	  ;% heli_q8_P.PulseGenerator_Duty
	  section.data(4).logicalSrcIdx = 82;
	  section.data(4).dtTransOffset = 3;
	
	  ;% heli_q8_P.PulseGenerator_PhaseDelay
	  section.data(5).logicalSrcIdx = 83;
	  section.data(5).dtTransOffset = 4;
	
	  ;% heli_q8_P.PulseGenerator1_Amp
	  section.data(6).logicalSrcIdx = 84;
	  section.data(6).dtTransOffset = 5;
	
	  ;% heli_q8_P.PulseGenerator1_Period
	  section.data(7).logicalSrcIdx = 85;
	  section.data(7).dtTransOffset = 6;
	
	  ;% heli_q8_P.PulseGenerator1_Duty
	  section.data(8).logicalSrcIdx = 86;
	  section.data(8).dtTransOffset = 7;
	
	  ;% heli_q8_P.PulseGenerator1_PhaseDelay
	  section.data(9).logicalSrcIdx = 87;
	  section.data(9).dtTransOffset = 8;
	
	  ;% heli_q8_P.Enablepitchsquare_Value
	  section.data(10).logicalSrcIdx = 88;
	  section.data(10).dtTransOffset = 9;
	
	  ;% heli_q8_P.Switch_Threshold
	  section.data(11).logicalSrcIdx = 89;
	  section.data(11).dtTransOffset = 10;
	
	  ;% heli_q8_P.pitch_Gain
	  section.data(12).logicalSrcIdx = 90;
	  section.data(12).dtTransOffset = 11;
	
	  ;% heli_q8_P.pitch_rate_Gain
	  section.data(13).logicalSrcIdx = 91;
	  section.data(13).dtTransOffset = 12;
	
	  ;% heli_q8_P.elevation_Gain
	  section.data(14).logicalSrcIdx = 92;
	  section.data(14).dtTransOffset = 13;
	
	  ;% heli_q8_P.elevation_rate_Gain
	  section.data(15).logicalSrcIdx = 93;
	  section.data(15).dtTransOffset = 14;
	
	  ;% heli_q8_P.travel_rate_Gain
	  section.data(16).logicalSrcIdx = 94;
	  section.data(16).dtTransOffset = 15;
	
	  ;% heli_q8_P.RateTransitiony_X0
	  section.data(17).logicalSrcIdx = 95;
	  section.data(17).dtTransOffset = 16;
	
	  ;% heli_q8_P.DeadZoney_Start
	  section.data(18).logicalSrcIdx = 96;
	  section.data(18).dtTransOffset = 17;
	
	  ;% heli_q8_P.DeadZoney_End
	  section.data(19).logicalSrcIdx = 97;
	  section.data(19).dtTransOffset = 18;
	
	  ;% heli_q8_P.Gainy_Gain
	  section.data(20).logicalSrcIdx = 98;
	  section.data(20).dtTransOffset = 19;
	
	  ;% heli_q8_P.Integrator_IC
	  section.data(21).logicalSrcIdx = 99;
	  section.data(21).dtTransOffset = 20;
	
	  ;% heli_q8_P.Integrator1_IC
	  section.data(22).logicalSrcIdx = 100;
	  section.data(22).dtTransOffset = 21;
	
	  ;% heli_q8_P.Backgain_Gain
	  section.data(23).logicalSrcIdx = 101;
	  section.data(23).dtTransOffset = 22;
	
	  ;% heli_q8_P.Frontgain_Gain
	  section.data(24).logicalSrcIdx = 102;
	  section.data(24).dtTransOffset = 23;
	
	  ;% heli_q8_P.RateTransitionx_X0
	  section.data(25).logicalSrcIdx = 103;
	  section.data(25).dtTransOffset = 24;
	
	  ;% heli_q8_P.DeadZonex_Start
	  section.data(26).logicalSrcIdx = 104;
	  section.data(26).dtTransOffset = 25;
	
	  ;% heli_q8_P.DeadZonex_End
	  section.data(27).logicalSrcIdx = 105;
	  section.data(27).dtTransOffset = 26;
	
	  ;% heli_q8_P.Gainx_Gain
	  section.data(28).logicalSrcIdx = 106;
	  section.data(28).dtTransOffset = 27;
	
	  ;% heli_q8_P.travel_Gain
	  section.data(29).logicalSrcIdx = 107;
	  section.data(29).dtTransOffset = 28;
	
	  ;% heli_q8_P.UnitDelay2_InitialCondition
	  section.data(30).logicalSrcIdx = 108;
	  section.data(30).dtTransOffset = 29;
	
	  ;% heli_q8_P.UnitDelay_InitialCondition
	  section.data(31).logicalSrcIdx = 109;
	  section.data(31).dtTransOffset = 30;
	
	  ;% heli_q8_P.pitche_Gain
	  section.data(32).logicalSrcIdx = 110;
	  section.data(32).dtTransOffset = 36;
	
	  ;% heli_q8_P.pitchratee_Gain
	  section.data(33).logicalSrcIdx = 111;
	  section.data(33).dtTransOffset = 37;
	
	  ;% heli_q8_P.travelencoder_Gain
	  section.data(34).logicalSrcIdx = 112;
	  section.data(34).dtTransOffset = 38;
	
	  ;% heli_q8_P.travelrateencoder_Gain
	  section.data(35).logicalSrcIdx = 113;
	  section.data(35).dtTransOffset = 39;
	
	  ;% heli_q8_P.elevatione_Gain
	  section.data(36).logicalSrcIdx = 114;
	  section.data(36).dtTransOffset = 40;
	
	  ;% heli_q8_P.elevationratee_Gain
	  section.data(37).logicalSrcIdx = 115;
	  section.data(37).dtTransOffset = 41;
	
	  ;% heli_q8_P.travele_Gain
	  section.data(38).logicalSrcIdx = 116;
	  section.data(38).dtTransOffset = 42;
	
	  ;% heli_q8_P.travelratee_Gain
	  section.data(39).logicalSrcIdx = 117;
	  section.data(39).dtTransOffset = 43;
	
	  ;% heli_q8_P.pitchencoder_Gain
	  section.data(40).logicalSrcIdx = 118;
	  section.data(40).dtTransOffset = 44;
	
	  ;% heli_q8_P.pitchrateencoder_Gain
	  section.data(41).logicalSrcIdx = 119;
	  section.data(41).dtTransOffset = 45;
	
	  ;% heli_q8_P.elevationencoder_Gain
	  section.data(42).logicalSrcIdx = 120;
	  section.data(42).dtTransOffset = 46;
	
	  ;% heli_q8_P.elevationrateencoder_Gain
	  section.data(43).logicalSrcIdx = 121;
	  section.data(43).dtTransOffset = 47;
	
	  ;% heli_q8_P.Gain_Gain_l
	  section.data(44).logicalSrcIdx = 122;
	  section.data(44).dtTransOffset = 48;
	
	  ;% heli_q8_P.Gain1_Gain
	  section.data(45).logicalSrcIdx = 123;
	  section.data(45).dtTransOffset = 54;
	
	  ;% heli_q8_P.Constant2_Value
	  section.data(46).logicalSrcIdx = 124;
	  section.data(46).dtTransOffset = 60;
	
	  ;% heli_q8_P._Y0
	  section.data(47).logicalSrcIdx = 125;
	  section.data(47).dtTransOffset = 61;
	
	  ;% heli_q8_P.Constant_Value
	  section.data(48).logicalSrcIdx = 126;
	  section.data(48).dtTransOffset = 62;
	
	  ;% heli_q8_P.Constant_Value_k
	  section.data(49).logicalSrcIdx = 127;
	  section.data(49).dtTransOffset = 63;
	
	  ;% heli_q8_P.Constant1_Value
	  section.data(50).logicalSrcIdx = 128;
	  section.data(50).dtTransOffset = 64;
	
	  ;% heli_q8_P.Gain1_Gain_i
	  section.data(51).logicalSrcIdx = 129;
	  section.data(51).dtTransOffset = 65;
	
	  ;% heli_q8_P.PitchCounttorad_Gain
	  section.data(52).logicalSrcIdx = 130;
	  section.data(52).dtTransOffset = 74;
	
	  ;% heli_q8_P.elevationoffset_Value
	  section.data(53).logicalSrcIdx = 131;
	  section.data(53).dtTransOffset = 75;
	
	  ;% heli_q8_P.ElevationCounttorad_Gain
	  section.data(54).logicalSrcIdx = 132;
	  section.data(54).dtTransOffset = 76;
	
	  ;% heli_q8_P.TravelCounttorad_Gain
	  section.data(55).logicalSrcIdx = 133;
	  section.data(55).dtTransOffset = 77;
	
	  ;% heli_q8_P.Gain2_Gain
	  section.data(56).logicalSrcIdx = 134;
	  section.data(56).dtTransOffset = 78;
	
	  ;% heli_q8_P.Memory_X0
	  section.data(57).logicalSrcIdx = 135;
	  section.data(57).dtTransOffset = 87;
	
	  ;% heli_q8_P.ElevationTransferFcn_A
	  section.data(58).logicalSrcIdx = 136;
	  section.data(58).dtTransOffset = 88;
	
	  ;% heli_q8_P.ElevationTransferFcn_C
	  section.data(59).logicalSrcIdx = 137;
	  section.data(59).dtTransOffset = 89;
	
	  ;% heli_q8_P.ElevationTransferFcn_D
	  section.data(60).logicalSrcIdx = 138;
	  section.data(60).dtTransOffset = 90;
	
	  ;% heli_q8_P.PitchTransferFcn_A
	  section.data(61).logicalSrcIdx = 139;
	  section.data(61).dtTransOffset = 91;
	
	  ;% heli_q8_P.PitchTransferFcn_C
	  section.data(62).logicalSrcIdx = 140;
	  section.data(62).dtTransOffset = 92;
	
	  ;% heli_q8_P.PitchTransferFcn_D
	  section.data(63).logicalSrcIdx = 141;
	  section.data(63).dtTransOffset = 93;
	
	  ;% heli_q8_P.TravelTransferFcn_A
	  section.data(64).logicalSrcIdx = 142;
	  section.data(64).dtTransOffset = 94;
	
	  ;% heli_q8_P.TravelTransferFcn_C
	  section.data(65).logicalSrcIdx = 143;
	  section.data(65).dtTransOffset = 95;
	
	  ;% heli_q8_P.TravelTransferFcn_D
	  section.data(66).logicalSrcIdx = 144;
	  section.data(66).dtTransOffset = 96;
	
	  ;% heli_q8_P.FrontmotorSaturation_UpperSat
	  section.data(67).logicalSrcIdx = 145;
	  section.data(67).dtTransOffset = 97;
	
	  ;% heli_q8_P.FrontmotorSaturation_LowerSat
	  section.data(68).logicalSrcIdx = 146;
	  section.data(68).dtTransOffset = 98;
	
	  ;% heli_q8_P.BackmotorSaturation_UpperSat
	  section.data(69).logicalSrcIdx = 147;
	  section.data(69).dtTransOffset = 99;
	
	  ;% heli_q8_P.BackmotorSaturation_LowerSat
	  section.data(70).logicalSrcIdx = 148;
	  section.data(70).dtTransOffset = 100;
	
	  ;% heli_q8_P.Gain1_Gain_c
	  section.data(71).logicalSrcIdx = 149;
	  section.data(71).dtTransOffset = 101;
	
	  ;% heli_q8_P.Gain2_Gain_l
	  section.data(72).logicalSrcIdx = 150;
	  section.data(72).dtTransOffset = 102;
	
	  ;% heli_q8_P.Gain_Gain_lp
	  section.data(73).logicalSrcIdx = 151;
	  section.data(73).dtTransOffset = 103;
	
	  ;% heli_q8_P.UnitDelay_InitialCondition_k
	  section.data(74).logicalSrcIdx = 152;
	  section.data(74).dtTransOffset = 104;
	
	  ;% heli_q8_P.Gain_Gain_j
	  section.data(75).logicalSrcIdx = 153;
	  section.data(75).dtTransOffset = 110;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(5) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% heli_q8_P.StreamCall1_SendBufferSize
	  section.data(1).logicalSrcIdx = 154;
	  section.data(1).dtTransOffset = 0;
	
	  ;% heli_q8_P.StreamCall1_ReceiveBufferSize
	  section.data(2).logicalSrcIdx = 155;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% heli_q8_P.StreamFormattedWrite_MaxUnits
	  section.data(1).logicalSrcIdx = 156;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(7) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% heli_q8_P.GameController_BufferSize
	  section.data(1).logicalSrcIdx = 157;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(8) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% heli_q8_P.GameController_ControllerNumber
	  section.data(1).logicalSrcIdx = 158;
	  section.data(1).dtTransOffset = 0;
	
	  ;% heli_q8_P.StringConstant_Value
	  section.data(2).logicalSrcIdx = 159;
	  section.data(2).dtTransOffset = 1;
	
	  ;% heli_q8_P.StreamCall1_URI
	  section.data(3).logicalSrcIdx = 160;
	  section.data(3).dtTransOffset = 256;
	
	  ;% heli_q8_P.StreamCall1_Endian
	  section.data(4).logicalSrcIdx = 161;
	  section.data(4).dtTransOffset = 257;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(9) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% heli_q8_P.GameController_AutoCenter
	  section.data(1).logicalSrcIdx = 162;
	  section.data(1).dtTransOffset = 0;
	
	  ;% heli_q8_P.GameController_Enabled
	  section.data(2).logicalSrcIdx = 163;
	  section.data(2).dtTransOffset = 1;
	
	  ;% heli_q8_P.HILReadEncoderTimebase_Active
	  section.data(3).logicalSrcIdx = 164;
	  section.data(3).dtTransOffset = 2;
	
	  ;% heli_q8_P.StreamCall1_Active
	  section.data(4).logicalSrcIdx = 165;
	  section.data(4).dtTransOffset = 3;
	
	  ;% heli_q8_P.HILWriteAnalog_Active
	  section.data(5).logicalSrcIdx = 166;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(10) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 2;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (heli_q8_B)
    ;%
      section.nData     = 63;
      section.data(63)  = dumData; %prealloc
      
	  ;% heli_q8_B.Gain1
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% heli_q8_B.PitchCounttorad
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 3;
	
	  ;% heli_q8_B.ElevationCounttorad
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 4;
	
	  ;% heli_q8_B.Add
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 5;
	
	  ;% heli_q8_B.TravelCounttorad
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 6;
	
	  ;% heli_q8_B.Gain2
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 7;
	
	  ;% heli_q8_B.TrigonometricFunction
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 10;
	
	  ;% heli_q8_B.e
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 11;
	
	  ;% heli_q8_B.Switch
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 12;
	
	  ;% heli_q8_B.ElevationTransferFcn
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 13;
	
	  ;% heli_q8_B.PitchTransferFcn
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 14;
	
	  ;% heli_q8_B.TravelTransferFcn
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 15;
	
	  ;% heli_q8_B.FrontmotorSaturation
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 16;
	
	  ;% heli_q8_B.BackmotorSaturation
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 17;
	
	  ;% heli_q8_B.Gain1_f
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 18;
	
	  ;% heli_q8_B.Gain2_p
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 19;
	
	  ;% heli_q8_B.Gain
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 20;
	
	  ;% heli_q8_B.UnitDelay
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 21;
	
	  ;% heli_q8_B.UnitDelay1
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 27;
	
	  ;% heli_q8_B.Gain_h
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 63;
	
	  ;% heli_q8_B.Constant
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 69;
	
	  ;% heli_q8_B.Constant1
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 105;
	
	  ;% heli_q8_B.Constant2
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 117;
	
	  ;% heli_q8_B.In
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 153;
	
	  ;% heli_q8_B.x_k_plus_1_bar
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 158;
	
	  ;% heli_q8_B.P_bar_k_plus_1
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 164;
	
	  ;% heli_q8_B.euler_rates
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 200;
	
	  ;% heli_q8_B.pitche
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 203;
	
	  ;% heli_q8_B.pitchratee
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 204;
	
	  ;% heli_q8_B.travelencoder
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 205;
	
	  ;% heli_q8_B.travelrateencoder
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 206;
	
	  ;% heli_q8_B.elevatione
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 207;
	
	  ;% heli_q8_B.elevationratee
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 208;
	
	  ;% heli_q8_B.travele
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 209;
	
	  ;% heli_q8_B.travelratee
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 210;
	
	  ;% heli_q8_B.pitchencoder
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 211;
	
	  ;% heli_q8_B.pitchrateencoder
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 212;
	
	  ;% heli_q8_B.elevationencoder
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 213;
	
	  ;% heli_q8_B.elevationrateencoder
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 214;
	
	  ;% heli_q8_B.Gain_d
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 215;
	
	  ;% heli_q8_B.Gain1_l
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 221;
	
	  ;% heli_q8_B.x_k_plus_1_bar_c
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 227;
	
	  ;% heli_q8_B.P_bar_k_plus_1_c
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 233;
	
	  ;% heli_q8_B.Switch_h
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 269;
	
	  ;% heli_q8_B.pitch
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 270;
	
	  ;% heli_q8_B.pitch_rate
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 271;
	
	  ;% heli_q8_B.elevation
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 272;
	
	  ;% heli_q8_B.elevation_rate
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 273;
	
	  ;% heli_q8_B.travel_rate
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 274;
	
	  ;% heli_q8_B.RateTransitiony
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 275;
	
	  ;% heli_q8_B.Joystick_gain_y
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 276;
	
	  ;% heli_q8_B.Gain_dy
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 277;
	
	  ;% heli_q8_B.Sum1
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 279;
	
	  ;% heli_q8_B.Constant2_k
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 281;
	
	  ;% heli_q8_B.Backgain
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 282;
	
	  ;% heli_q8_B.Frontgain
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 283;
	
	  ;% heli_q8_B.RateTransitionx
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 284;
	
	  ;% heli_q8_B.Joystick_gain_x
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 285;
	
	  ;% heli_q8_B.GameController_o4
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 286;
	
	  ;% heli_q8_B.GameController_o5
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 287;
	
	  ;% heli_q8_B.Sum
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 288;
	
	  ;% heli_q8_B.Sum3
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 289;
	
	  ;% heli_q8_B.travel
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 290;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% heli_q8_B.StreamCall1_o2
	  section.data(1).logicalSrcIdx = 63;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 12;
    sectIdxOffset = 2;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (heli_q8_DW)
    ;%
      section.nData     = 17;
      section.data(17)  = dumData; %prealloc
      
	  ;% heli_q8_DW.UnitDelay_DSTATE
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% heli_q8_DW.UnitDelay1_DSTATE
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 6;
	
	  ;% heli_q8_DW.UnitDelay2_DSTATE
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 42;
	
	  ;% heli_q8_DW.UnitDelay_DSTATE_l
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 44;
	
	  ;% heli_q8_DW.UnitDelay1_DSTATE_p
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 50;
	
	  ;% heli_q8_DW.HILInitialize_AIMinimums
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 86;
	
	  ;% heli_q8_DW.HILInitialize_AIMaximums
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 94;
	
	  ;% heli_q8_DW.HILInitialize_AOMinimums
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 102;
	
	  ;% heli_q8_DW.HILInitialize_AOMaximums
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 110;
	
	  ;% heli_q8_DW.HILInitialize_AOVoltages
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 118;
	
	  ;% heli_q8_DW.HILInitialize_FilterFrequency
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 126;
	
	  ;% heli_q8_DW.HILInitialize_POSortedFreqs
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 134;
	
	  ;% heli_q8_DW.HILInitialize_POValues
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 142;
	
	  ;% heli_q8_DW.Memory_PreviousInput
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 150;
	
	  ;% heli_q8_DW.HILWriteAnalog_Buffer
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 151;
	
	  ;% heli_q8_DW.RateTransitiony_Buffer0
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 153;
	
	  ;% heli_q8_DW.RateTransitionx_Buffer0
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 154;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% heli_q8_DW.GameController_Controller
	  section.data(1).logicalSrcIdx = 17;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% heli_q8_DW.StreamCall1_Stream
	  section.data(1).logicalSrcIdx = 18;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% heli_q8_DW.HILInitialize_Card
	  section.data(1).logicalSrcIdx = 19;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% heli_q8_DW.HILReadEncoderTimebase_Task
	  section.data(1).logicalSrcIdx = 20;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 80;
      section.data(80)  = dumData; %prealloc
      
	  ;% heli_q8_DW.ElevationScoperads_PWORK.LoggedData
	  section.data(1).logicalSrcIdx = 21;
	  section.data(1).dtTransOffset = 0;
	
	  ;% heli_q8_DW.ElevationScoperad_PWORK.LoggedData
	  section.data(2).logicalSrcIdx = 22;
	  section.data(2).dtTransOffset = 1;
	
	  ;% heli_q8_DW.PitchScoperad_PWORK.LoggedData
	  section.data(3).logicalSrcIdx = 23;
	  section.data(3).dtTransOffset = 2;
	
	  ;% heli_q8_DW.PtichrateScoperads_PWORK.LoggedData
	  section.data(4).logicalSrcIdx = 24;
	  section.data(4).dtTransOffset = 3;
	
	  ;% heli_q8_DW.TravelrateScoperads_PWORK.LoggedData
	  section.data(5).logicalSrcIdx = 25;
	  section.data(5).dtTransOffset = 4;
	
	  ;% heli_q8_DW.TravelScoperad_PWORK.LoggedData
	  section.data(6).logicalSrcIdx = 26;
	  section.data(6).dtTransOffset = 5;
	
	  ;% heli_q8_DW.HILWriteAnalog_PWORK
	  section.data(7).logicalSrcIdx = 27;
	  section.data(7).dtTransOffset = 6;
	
	  ;% heli_q8_DW.Connected_PWORK.LoggedData
	  section.data(8).logicalSrcIdx = 28;
	  section.data(8).dtTransOffset = 7;
	
	  ;% heli_q8_DW.ToFile3_PWORK.FilePtr
	  section.data(9).logicalSrcIdx = 29;
	  section.data(9).dtTransOffset = 8;
	
	  ;% heli_q8_DW.ToFile4_PWORK.FilePtr
	  section.data(10).logicalSrcIdx = 30;
	  section.data(10).dtTransOffset = 9;
	
	  ;% heli_q8_DW.ToWorkspace3_PWORK.LoggedData
	  section.data(11).logicalSrcIdx = 31;
	  section.data(11).dtTransOffset = 10;
	
	  ;% heli_q8_DW.ToWorkspace4_PWORK.LoggedData
	  section.data(12).logicalSrcIdx = 32;
	  section.data(12).dtTransOffset = 11;
	
	  ;% heli_q8_DW.accelerationx_PWORK.LoggedData
	  section.data(13).logicalSrcIdx = 33;
	  section.data(13).dtTransOffset = 12;
	
	  ;% heli_q8_DW.accelerationy_PWORK.LoggedData
	  section.data(14).logicalSrcIdx = 34;
	  section.data(14).dtTransOffset = 13;
	
	  ;% heli_q8_DW.accelerationz_PWORK.LoggedData
	  section.data(15).logicalSrcIdx = 35;
	  section.data(15).dtTransOffset = 14;
	
	  ;% heli_q8_DW.elevation_PWORK.LoggedData
	  section.data(16).logicalSrcIdx = 36;
	  section.data(16).dtTransOffset = 15;
	
	  ;% heli_q8_DW.pitch_PWORK.LoggedData
	  section.data(17).logicalSrcIdx = 37;
	  section.data(17).dtTransOffset = 16;
	
	  ;% heli_q8_DW.ToFile_PWORK.FilePtr
	  section.data(18).logicalSrcIdx = 38;
	  section.data(18).dtTransOffset = 17;
	
	  ;% heli_q8_DW.ToFile1_PWORK.FilePtr
	  section.data(19).logicalSrcIdx = 39;
	  section.data(19).dtTransOffset = 18;
	
	  ;% heli_q8_DW.ToFile2_PWORK.FilePtr
	  section.data(20).logicalSrcIdx = 40;
	  section.data(20).dtTransOffset = 19;
	
	  ;% heli_q8_DW.ToWorkspace_PWORK.LoggedData
	  section.data(21).logicalSrcIdx = 41;
	  section.data(21).dtTransOffset = 20;
	
	  ;% heli_q8_DW.ToWorkspace1_PWORK.LoggedData
	  section.data(22).logicalSrcIdx = 42;
	  section.data(22).dtTransOffset = 21;
	
	  ;% heli_q8_DW.ToWorkspace2_PWORK.LoggedData
	  section.data(23).logicalSrcIdx = 43;
	  section.data(23).dtTransOffset = 22;
	
	  ;% heli_q8_DW.elevationbetter_PWORK.LoggedData
	  section.data(24).logicalSrcIdx = 44;
	  section.data(24).dtTransOffset = 23;
	
	  ;% heli_q8_DW.elevationrate_PWORK.LoggedData
	  section.data(25).logicalSrcIdx = 45;
	  section.data(25).dtTransOffset = 25;
	
	  ;% heli_q8_DW.pitchrate_PWORK.LoggedData
	  section.data(26).logicalSrcIdx = 46;
	  section.data(26).dtTransOffset = 27;
	
	  ;% heli_q8_DW.pitchratebetter_PWORK.LoggedData
	  section.data(27).logicalSrcIdx = 47;
	  section.data(27).dtTransOffset = 29;
	
	  ;% heli_q8_DW.travelrate_PWORK.LoggedData
	  section.data(28).logicalSrcIdx = 48;
	  section.data(28).dtTransOffset = 31;
	
	  ;% heli_q8_DW.travelratebetter_PWORK.LoggedData
	  section.data(29).logicalSrcIdx = 49;
	  section.data(29).dtTransOffset = 33;
	
	  ;% heli_q8_DW.elevation_PWORK_c.LoggedData
	  section.data(30).logicalSrcIdx = 50;
	  section.data(30).dtTransOffset = 35;
	
	  ;% heli_q8_DW.elevationrate_PWORK_m.LoggedData
	  section.data(31).logicalSrcIdx = 51;
	  section.data(31).dtTransOffset = 37;
	
	  ;% heli_q8_DW.pitch_PWORK_c.LoggedData
	  section.data(32).logicalSrcIdx = 52;
	  section.data(32).dtTransOffset = 39;
	
	  ;% heli_q8_DW.pitchrate_PWORK_k.LoggedData
	  section.data(33).logicalSrcIdx = 53;
	  section.data(33).dtTransOffset = 41;
	
	  ;% heli_q8_DW.travel_PWORK.LoggedData
	  section.data(34).logicalSrcIdx = 54;
	  section.data(34).dtTransOffset = 43;
	
	  ;% heli_q8_DW.travelrate_PWORK_n.LoggedData
	  section.data(35).logicalSrcIdx = 55;
	  section.data(35).dtTransOffset = 45;
	
	  ;% heli_q8_DW.x_comp_PWORK.LoggedData
	  section.data(36).logicalSrcIdx = 56;
	  section.data(36).dtTransOffset = 47;
	
	  ;% heli_q8_DW.Scope1_PWORK.LoggedData
	  section.data(37).logicalSrcIdx = 57;
	  section.data(37).dtTransOffset = 49;
	
	  ;% heli_q8_DW.ToFile_PWORK_e.FilePtr
	  section.data(38).logicalSrcIdx = 58;
	  section.data(38).dtTransOffset = 50;
	
	  ;% heli_q8_DW.ToFile1_PWORK_a.FilePtr
	  section.data(39).logicalSrcIdx = 59;
	  section.data(39).dtTransOffset = 51;
	
	  ;% heli_q8_DW.ToFile10_PWORK.FilePtr
	  section.data(40).logicalSrcIdx = 60;
	  section.data(40).dtTransOffset = 52;
	
	  ;% heli_q8_DW.ToFile11_PWORK.FilePtr
	  section.data(41).logicalSrcIdx = 61;
	  section.data(41).dtTransOffset = 53;
	
	  ;% heli_q8_DW.ToFile2_PWORK_k.FilePtr
	  section.data(42).logicalSrcIdx = 62;
	  section.data(42).dtTransOffset = 54;
	
	  ;% heli_q8_DW.ToFile3_PWORK_b.FilePtr
	  section.data(43).logicalSrcIdx = 63;
	  section.data(43).dtTransOffset = 55;
	
	  ;% heli_q8_DW.ToFile4_PWORK_p.FilePtr
	  section.data(44).logicalSrcIdx = 64;
	  section.data(44).dtTransOffset = 56;
	
	  ;% heli_q8_DW.ToFile5_PWORK.FilePtr
	  section.data(45).logicalSrcIdx = 65;
	  section.data(45).dtTransOffset = 57;
	
	  ;% heli_q8_DW.ToFile6_PWORK.FilePtr
	  section.data(46).logicalSrcIdx = 66;
	  section.data(46).dtTransOffset = 58;
	
	  ;% heli_q8_DW.ToFile7_PWORK.FilePtr
	  section.data(47).logicalSrcIdx = 67;
	  section.data(47).dtTransOffset = 59;
	
	  ;% heli_q8_DW.ToFile8_PWORK.FilePtr
	  section.data(48).logicalSrcIdx = 68;
	  section.data(48).dtTransOffset = 60;
	
	  ;% heli_q8_DW.ToFile9_PWORK.FilePtr
	  section.data(49).logicalSrcIdx = 69;
	  section.data(49).dtTransOffset = 61;
	
	  ;% heli_q8_DW.elevation_PWORK_p.LoggedData
	  section.data(50).logicalSrcIdx = 70;
	  section.data(50).dtTransOffset = 62;
	
	  ;% heli_q8_DW.elevationestimate_PWORK.LoggedData
	  section.data(51).logicalSrcIdx = 71;
	  section.data(51).dtTransOffset = 64;
	
	  ;% heli_q8_DW.elevationrate_PWORK_n.LoggedData
	  section.data(52).logicalSrcIdx = 72;
	  section.data(52).dtTransOffset = 66;
	
	  ;% heli_q8_DW.elevationrateestimate_PWORK.LoggedData
	  section.data(53).logicalSrcIdx = 73;
	  section.data(53).dtTransOffset = 68;
	
	  ;% heli_q8_DW.pitch_PWORK_d.LoggedData
	  section.data(54).logicalSrcIdx = 74;
	  section.data(54).dtTransOffset = 70;
	
	  ;% heli_q8_DW.pitchestimate_PWORK.LoggedData
	  section.data(55).logicalSrcIdx = 75;
	  section.data(55).dtTransOffset = 72;
	
	  ;% heli_q8_DW.pitchrate_PWORK_f.LoggedData
	  section.data(56).logicalSrcIdx = 76;
	  section.data(56).dtTransOffset = 74;
	
	  ;% heli_q8_DW.pitchrateestimate_PWORK.LoggedData
	  section.data(57).logicalSrcIdx = 77;
	  section.data(57).dtTransOffset = 76;
	
	  ;% heli_q8_DW.travel_PWORK_n.LoggedData
	  section.data(58).logicalSrcIdx = 78;
	  section.data(58).dtTransOffset = 78;
	
	  ;% heli_q8_DW.travelestimate_PWORK.LoggedData
	  section.data(59).logicalSrcIdx = 79;
	  section.data(59).dtTransOffset = 80;
	
	  ;% heli_q8_DW.travelrate_PWORK_p.LoggedData
	  section.data(60).logicalSrcIdx = 80;
	  section.data(60).dtTransOffset = 82;
	
	  ;% heli_q8_DW.travelrateestimate_PWORK.LoggedData
	  section.data(61).logicalSrcIdx = 81;
	  section.data(61).dtTransOffset = 84;
	
	  ;% heli_q8_DW.x_comp_PWORK_m.LoggedData
	  section.data(62).logicalSrcIdx = 82;
	  section.data(62).dtTransOffset = 86;
	
	  ;% heli_q8_DW.Scope1_PWORK_k.LoggedData
	  section.data(63).logicalSrcIdx = 83;
	  section.data(63).dtTransOffset = 88;
	
	  ;% heli_q8_DW.P_estimate_k_variances_only_PWO.LoggedData
	  section.data(64).logicalSrcIdx = 84;
	  section.data(64).dtTransOffset = 89;
	
	  ;% heli_q8_DW.Pitch_PWORK.LoggedData
	  section.data(65).logicalSrcIdx = 85;
	  section.data(65).dtTransOffset = 90;
	
	  ;% heli_q8_DW.ToFile_PWORK_f.FilePtr
	  section.data(66).logicalSrcIdx = 86;
	  section.data(66).dtTransOffset = 92;
	
	  ;% heli_q8_DW.ToFile1_PWORK_p.FilePtr
	  section.data(67).logicalSrcIdx = 87;
	  section.data(67).dtTransOffset = 93;
	
	  ;% heli_q8_DW.ToFile2_PWORK_d.FilePtr
	  section.data(68).logicalSrcIdx = 88;
	  section.data(68).dtTransOffset = 94;
	
	  ;% heli_q8_DW.ToFile3_PWORK_n.FilePtr
	  section.data(69).logicalSrcIdx = 89;
	  section.data(69).dtTransOffset = 95;
	
	  ;% heli_q8_DW.ToFile5_PWORK_a.FilePtr
	  section.data(70).logicalSrcIdx = 90;
	  section.data(70).dtTransOffset = 96;
	
	  ;% heli_q8_DW.ToFile6_PWORK_c.FilePtr
	  section.data(71).logicalSrcIdx = 91;
	  section.data(71).dtTransOffset = 97;
	
	  ;% heli_q8_DW.ToFile7_PWORK_m.FilePtr
	  section.data(72).logicalSrcIdx = 92;
	  section.data(72).dtTransOffset = 98;
	
	  ;% heli_q8_DW.elevation_PWORK_pu.LoggedData
	  section.data(73).logicalSrcIdx = 93;
	  section.data(73).dtTransOffset = 99;
	
	  ;% heli_q8_DW.elevationrate_PWORK_p.LoggedData
	  section.data(74).logicalSrcIdx = 94;
	  section.data(74).dtTransOffset = 100;
	
	  ;% heli_q8_DW.pitchrate_PWORK_l.LoggedData
	  section.data(75).logicalSrcIdx = 95;
	  section.data(75).dtTransOffset = 102;
	
	  ;% heli_q8_DW.travelrate_PWORK_j.LoggedData
	  section.data(76).logicalSrcIdx = 96;
	  section.data(76).dtTransOffset = 103;
	
	  ;% heli_q8_DW.XScope_PWORK.LoggedData
	  section.data(77).logicalSrcIdx = 97;
	  section.data(77).dtTransOffset = 104;
	
	  ;% heli_q8_DW.YScope_PWORK.LoggedData
	  section.data(78).logicalSrcIdx = 98;
	  section.data(78).dtTransOffset = 105;
	
	  ;% heli_q8_DW.ToFile4_PWORK_d.FilePtr
	  section.data(79).logicalSrcIdx = 99;
	  section.data(79).dtTransOffset = 106;
	
	  ;% heli_q8_DW.travel_PWORK_i.LoggedData
	  section.data(80).logicalSrcIdx = 100;
	  section.data(80).dtTransOffset = 107;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 9;
      section.data(9)  = dumData; %prealloc
      
	  ;% heli_q8_DW.HILInitialize_ClockModes
	  section.data(1).logicalSrcIdx = 101;
	  section.data(1).dtTransOffset = 0;
	
	  ;% heli_q8_DW.HILInitialize_QuadratureModes
	  section.data(2).logicalSrcIdx = 102;
	  section.data(2).dtTransOffset = 3;
	
	  ;% heli_q8_DW.HILInitialize_InitialEICounts
	  section.data(3).logicalSrcIdx = 103;
	  section.data(3).dtTransOffset = 11;
	
	  ;% heli_q8_DW.HILInitialize_POModeValues
	  section.data(4).logicalSrcIdx = 104;
	  section.data(4).dtTransOffset = 19;
	
	  ;% heli_q8_DW.HILInitialize_POAlignValues
	  section.data(5).logicalSrcIdx = 105;
	  section.data(5).dtTransOffset = 27;
	
	  ;% heli_q8_DW.HILInitialize_POPolarityVals
	  section.data(6).logicalSrcIdx = 106;
	  section.data(6).dtTransOffset = 35;
	
	  ;% heli_q8_DW.HILReadEncoderTimebase_Buffer
	  section.data(7).logicalSrcIdx = 107;
	  section.data(7).dtTransOffset = 43;
	
	  ;% heli_q8_DW.clockTickCounter
	  section.data(8).logicalSrcIdx = 108;
	  section.data(8).dtTransOffset = 46;
	
	  ;% heli_q8_DW.clockTickCounter_a
	  section.data(9).logicalSrcIdx = 109;
	  section.data(9).dtTransOffset = 47;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% heli_q8_DW.HILInitialize_POSortedChans
	  section.data(1).logicalSrcIdx = 110;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 25;
      section.data(25)  = dumData; %prealloc
      
	  ;% heli_q8_DW.ToFile3_IWORK.Count
	  section.data(1).logicalSrcIdx = 111;
	  section.data(1).dtTransOffset = 0;
	
	  ;% heli_q8_DW.ToFile4_IWORK.Count
	  section.data(2).logicalSrcIdx = 112;
	  section.data(2).dtTransOffset = 1;
	
	  ;% heli_q8_DW.ToFile_IWORK.Count
	  section.data(3).logicalSrcIdx = 113;
	  section.data(3).dtTransOffset = 2;
	
	  ;% heli_q8_DW.ToFile1_IWORK.Count
	  section.data(4).logicalSrcIdx = 114;
	  section.data(4).dtTransOffset = 3;
	
	  ;% heli_q8_DW.ToFile2_IWORK.Count
	  section.data(5).logicalSrcIdx = 115;
	  section.data(5).dtTransOffset = 4;
	
	  ;% heli_q8_DW.ToFile_IWORK_j.Count
	  section.data(6).logicalSrcIdx = 116;
	  section.data(6).dtTransOffset = 5;
	
	  ;% heli_q8_DW.ToFile1_IWORK_p.Count
	  section.data(7).logicalSrcIdx = 117;
	  section.data(7).dtTransOffset = 6;
	
	  ;% heli_q8_DW.ToFile10_IWORK.Count
	  section.data(8).logicalSrcIdx = 118;
	  section.data(8).dtTransOffset = 7;
	
	  ;% heli_q8_DW.ToFile11_IWORK.Count
	  section.data(9).logicalSrcIdx = 119;
	  section.data(9).dtTransOffset = 8;
	
	  ;% heli_q8_DW.ToFile2_IWORK_l.Count
	  section.data(10).logicalSrcIdx = 120;
	  section.data(10).dtTransOffset = 9;
	
	  ;% heli_q8_DW.ToFile3_IWORK_k.Count
	  section.data(11).logicalSrcIdx = 121;
	  section.data(11).dtTransOffset = 10;
	
	  ;% heli_q8_DW.ToFile4_IWORK_i.Count
	  section.data(12).logicalSrcIdx = 122;
	  section.data(12).dtTransOffset = 11;
	
	  ;% heli_q8_DW.ToFile5_IWORK.Count
	  section.data(13).logicalSrcIdx = 123;
	  section.data(13).dtTransOffset = 12;
	
	  ;% heli_q8_DW.ToFile6_IWORK.Count
	  section.data(14).logicalSrcIdx = 124;
	  section.data(14).dtTransOffset = 13;
	
	  ;% heli_q8_DW.ToFile7_IWORK.Count
	  section.data(15).logicalSrcIdx = 125;
	  section.data(15).dtTransOffset = 14;
	
	  ;% heli_q8_DW.ToFile8_IWORK.Count
	  section.data(16).logicalSrcIdx = 126;
	  section.data(16).dtTransOffset = 15;
	
	  ;% heli_q8_DW.ToFile9_IWORK.Count
	  section.data(17).logicalSrcIdx = 127;
	  section.data(17).dtTransOffset = 16;
	
	  ;% heli_q8_DW.ToFile_IWORK_m.Count
	  section.data(18).logicalSrcIdx = 128;
	  section.data(18).dtTransOffset = 17;
	
	  ;% heli_q8_DW.ToFile1_IWORK_j.Count
	  section.data(19).logicalSrcIdx = 129;
	  section.data(19).dtTransOffset = 18;
	
	  ;% heli_q8_DW.ToFile2_IWORK_h.Count
	  section.data(20).logicalSrcIdx = 130;
	  section.data(20).dtTransOffset = 19;
	
	  ;% heli_q8_DW.ToFile3_IWORK_o.Count
	  section.data(21).logicalSrcIdx = 131;
	  section.data(21).dtTransOffset = 20;
	
	  ;% heli_q8_DW.ToFile5_IWORK_o.Count
	  section.data(22).logicalSrcIdx = 132;
	  section.data(22).dtTransOffset = 21;
	
	  ;% heli_q8_DW.ToFile6_IWORK_p.Count
	  section.data(23).logicalSrcIdx = 133;
	  section.data(23).dtTransOffset = 22;
	
	  ;% heli_q8_DW.ToFile7_IWORK_b.Count
	  section.data(24).logicalSrcIdx = 134;
	  section.data(24).dtTransOffset = 23;
	
	  ;% heli_q8_DW.ToFile4_IWORK_n.Count
	  section.data(25).logicalSrcIdx = 135;
	  section.data(25).dtTransOffset = 24;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(9) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% heli_q8_DW.SampleandHold_SubsysRanBC
	  section.data(1).logicalSrcIdx = 136;
	  section.data(1).dtTransOffset = 0;
	
	  ;% heli_q8_DW.ControlSystem_SubsysRanBC
	  section.data(2).logicalSrcIdx = 137;
	  section.data(2).dtTransOffset = 1;
	
	  ;% heli_q8_DW.KalmanFilter_SubsysRanBC
	  section.data(3).logicalSrcIdx = 138;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(10) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% heli_q8_DW.StreamCall1_State
	  section.data(1).logicalSrcIdx = 139;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(11) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% heli_q8_DW.ControlSystem_MODE
	  section.data(1).logicalSrcIdx = 140;
	  section.data(1).dtTransOffset = 0;
	
	  ;% heli_q8_DW.KalmanFilter_MODE
	  section.data(2).logicalSrcIdx = 141;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(12) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 455880180;
  targMap.checksum1 = 1871691190;
  targMap.checksum2 = 1631715857;
  targMap.checksum3 = 2117810390;

