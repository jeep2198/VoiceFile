/**
 * @file    voice_cn_pa.hpp
 * @author  Felícito Manzano (felicito.manzano@detektor.com.sv)
 * @brief   DEFINICIÓN DE ARCHIVOS DE AUDIO.
 *          Se definen los nombres de los archivos de audio como correlativos a
 *          partir del 01 y se vincula la función de cada uno de los eventos.
 * @version 0.1
 * @date    2020-09-26
 * 
 */

#ifndef __VOICE_CN_PA_HPP
#define __VOICE_CN_PA_HPP

    //extern const float DURATION_AUDIO_FILE[24];

    //! Funciones de los archivos de audio
    #define VOICE_WELLCOME                          1
    #define VOICE_DOOR_SAFETY_REMINDER              2
    #define VOICE_DRIVER_AUTHORIZED                 3
    #define VOICE_DRIVER_UNAUTHORIZED               4
    #define VOICE_DRIVER_SEATBELT_FASTENED          5
    #define VOICE_DRIVER_SEATBELT_UNFASTENED        6
    #define VOICE_COPILOT_SEATBELT_FASTENED         7
    #define VOICE_COPILOT_SEATBELT_UNFASTENED       8
    #define VOICE_CREW_SEATBELT_FASTENED            9
    #define VOICE_CREW_SEATBELT_UNFASTENED          10
    #define VOICE_WARNING_OVERSPEED                 11
    #define VOICE_OVERSPEED_ALERT                   12
    #define VOICE_WARNING_OVERSPEED_WET             13
    #define VOICE_OVERSPEED_ALERT_WET               14
    #define VOICE_HARSH_ACCELERATION                15
    #define VOICE_HARSH_BREAKING                    16
    #define VOICE_SHARP_CORNERING                   17
    #define VOICE_CRASH_DETECTION                   18  
    #define VOICE_IDLE_TIME_WARNING                 19
    #define VOICE_IDLE_ENGINE_SHUTDOWN              20
    #define VOICE_TRACK_CONDITION_WET               21
    #define VOICE_TRACK_CONDITION_DRY               22
    #define VOICE_functionality_fingerprint_reader                23
    #define VOICE_FINGERPRINT_DISABLE               24
    #define VOICE_IDLE_REMINDER                     25
    #define VOICE_BRAKE_OVERRIDE_IDLE               26

    #define VOICE_SAFETY_TIP01                      27
    #define VOICE_SAFETY_TIP02                      28
    #define VOICE_SAFETY_TIP03                      29
    #define VOICE_SAFETY_TIP04                      30
    #define VOICE_SAFETY_TIP05                      31
    #define VOICE_SAFETY_TIP06                      32
    #define VOICE_SAFETY_TIP07                      33
    #define VOICE_SAFETY_TIP08                      34
    #define VOICE_SAFETY_TIP09                      35
    #define VOICE_SAFETY_TIP10                      36
    #define VOICE_SAFETY_TIP11                      37
    #define VOICE_SAFETY_TIP12                      38
    #define VOICE_SAFETY_TIP13                      39
    #define VOICE_SAFETY_TIP14                      40

    #define VOICE_FP_AUTH_NO_BLUETOOTH              41

    

 /* NO SE IMPLEMENTAN EN CN-PA
    #define VOICE_FINGERPRINT_CAPTURE_NEW           25
    #define VOICE_FINGERPRINT_UP                    26
    #define VOICE_FINGERPRINT_DOWN                  27
    #define VOICE_FINGERPRINT_NEW_SUCCESSFUL        28
    #define VOICE_FINGERPRINT_NEW_ERROR             29
    #define VOICE_BLE_FMU130_DISCONNECTED           30
    #define VOICE_BLE_FMU130_CONNECTED              31
*/
    
    //! Niveles de volumen
    #define VOL_VERY_LOW                            1
    #define VOL_LOW                                 2
    #define VOL_MEDIUM                              3
    #define VOL_HIGH                                4
    #define VOL_VERY_HIGH                           5
    #define VOL_MAXIMUM                             6

#endif // __VOICE_CN_PA_HPP
