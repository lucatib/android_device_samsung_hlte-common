/* Copyright (c) 2011-2013, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 *       copyright notice, this list of conditions and the following
 *       disclaimer in the documentation and/or other materials provided
 *       with the distribution.
 *     * Neither the name of The Linux Foundation, nor the names of its
 *       contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef LOC_CORE_LOG_H
#define LOC_CORE_LOG_H

#ifdef __cplusplus
extern "C"
{
#endif

#include <ctype.h>
#include <gps_extended.h>

// IMPORTANT: Note that the following values must match
// constants in GpsLocationProvider.java.
#define GPS_DELETE_EPHEMERIS                     0x00000001
#define GPS_DELETE_ALMANAC                       0x00000002
#define GPS_DELETE_POSITION                      0x00000004
#define GPS_DELETE_TIME                          0x00000008
#define GPS_DELETE_IONO                          0x00000010
#define GPS_DELETE_UTC                           0x00000020
#define GPS_DELETE_HEALTH                        0x00000040
#define GPS_DELETE_SVDIR                         0x00000080
#define GPS_DELETE_SVSTEER                       0x00000100
#define GPS_DELETE_SADATA                        0x00000200
#define GPS_DELETE_RTI                           0x00000400
#define GPS_DELETE_CELLDB_INFO                   0x00000800
#define GPS_DELETE_ALMANAC_CORR                  0x00001000
#define GPS_DELETE_FREQ_BIAS_EST                 0x00002000
#define GLO_DELETE_EPHEMERIS                     0x00004000
#define GLO_DELETE_ALMANAC                       0x00008000
#define GLO_DELETE_SVDIR                         0x00010000
#define GLO_DELETE_SVSTEER                       0x00020000
#define GLO_DELETE_ALMANAC_CORR                  0x00040000
#define GPS_DELETE_TIME_GPS                      0x00080000
#define GLO_DELETE_TIME                          0x00100000
#define BDS_DELETE_SVDIR                         0X00200000
#define BDS_DELETE_SVSTEER                       0X00400000
#define BDS_DELETE_TIME                          0X00800000
#define BDS_DELETE_ALMANAC_CORR                  0X01000000
#define BDS_DELETE_EPHEMERIS                     0X02000000
#define BDS_DELETE_ALMANAC                       0X04000000
    
const char* loc_get_gps_status_name(GpsStatusValue gps_status);
const char* loc_get_position_mode_name(GpsPositionMode mode);
const char* loc_get_position_recurrence_name(GpsPositionRecurrence recur);
const char* loc_get_aiding_data_mask_names(GpsAidingData data);
const char* loc_get_agps_type_name(AGpsType type);
const char* loc_get_ni_type_name(GpsNiType type);
const char* loc_get_ni_response_name(GpsUserResponseType response);
const char* loc_get_ni_encoding_name(GpsNiEncodingType encoding);
const char* loc_get_agps_bear_name(AGpsBearerType bear);
const char* loc_get_server_type_name(LocServerType type);
const char* loc_get_position_sess_status_name(enum loc_sess_status status);
const char* loc_get_agps_status_name(AGpsStatusValue status);

#ifdef __cplusplus
}
#endif

#endif /* LOC_CORE_LOG_H */
