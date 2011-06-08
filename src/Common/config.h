/**
 * This file is a part of LuminanceHDR package.
 * ----------------------------------------------------------------------
 * Copyright (C) 2006,2007 Giuseppe Rota
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 * ----------------------------------------------------------------------
 *
 * @author Giuseppe Rota <grota@users.sourceforge.net>
 */

#ifndef CONFIG_H
#define CONFIG_H

#define LUMINANCEVERSION "2.1.0-alpha1"
#define TMOSETTINGSVERSION "0.5"

#define KEY_TOOLBAR_MODE "MainWindowToolbarVisualizationMode"
#define KEY_TM_TOOLBAR_MODE "TonemappingWindowToolbarVisualizationMode"
#define KEY_MANUAL_AG_MASK_COLOR "ManualAntiGhostingMaskColor"
#define KEY_GUI_LANG "UserInterfaceLanguage"

#define GROUP_EXTERNALTOOLS "External_Tools_Options"
#define KEY_EXTERNAL_AIS_OPTIONS "ExternalAlignImageStackOptions"

#define GROUP_HDRVISUALIZATION "HDR_visualization"
#define KEY_NANINFCOLOR "nan_inf_color"
#define KEY_NEGCOLOR "neg_color"

#define GROUP_TONEMAPPING "Tonemapping_Options"
#define KEY_TEMP_RESULT_PATH "TemporaryFilesPath"
#define KEY_BATCH_LDR_FORMAT "Batch_LDR_Format"
#define KEY_NUM_BATCH_THREADS "Num_Batch_Threads"

#define GROUP_TIFF "TIFF_Options"
#define KEY_SAVE_LOGLUV "TiffSaveLogLuv"

#define GROUP_TMOWINDOW "TMOWindow_Options"
#define KEY_TMOWINDOW_MAX "TMOWindow_Max"
#define KEY_TMOWINDOW_SHOWPROCESSED "TMOWindow_ShowProcessed"
#define KEY_TMOWINDOW_SHOWPREVIEWPANEL "TMOWindow_ShowPreviewPanel"

#define GROUP_TMOWARNING "TMOWarning_Options"
#define KEY_TMOWARNING_FATTALSMALL "TMOWarning_fattalsmall"

#define GROUP_RAW_CONVERSION_OPTIONS "Raw_Conversion_Options"
#define KEY_ABER_0 "aber_0"
#define KEY_ABER_1 "aber_1"
#define KEY_ABER_2 "aber_2"
#define KEY_ABER_3 "aber_3"
#define KEY_GAMM_0 "gamm_0"
#define KEY_GAMM_1 "gamm_1"
#define KEY_TK "TK"
#define KEY_GREEN "green"
#define KEY_USER_MUL_0 "user_mul_0"
#define KEY_USER_MUL_1 "user_mul_1"
#define KEY_USER_MUL_2 "user_mul_2"
#define KEY_USER_MUL_3 "user_mul_3"
#define KEY_USE_AUTO_BRIGHTNESS "use_auto_brightness"
#define KEY_BRIGHTNESS "brightness"
#define KEY_THRESHOLD "threshold"
#define KEY_HALF_SIZE "half_size"
#define KEY_FOUR_COLOR_RGB "four_color_rgb"
#define KEY_HIGHLIGHTS "highlights"
#define KEY_LEVEL "level"
#define KEY_WB_METHOD "wb_method"
#define KEY_OUTPUT_COLOR "output_color"
#define KEY_OUTPUT_PROFILE "output_profile"
#define KEY_CAMERA_PROFILE "camera_profile"
#define KEY_USER_FLIP "user_flip"
#define KEY_USER_QUAL "user_qual"
#define KEY_USER_BLACK "user_black"
#define KEY_USER_SAT "user_sat"
#define KEY_MED_PASSES "med_passes"
#define KEY_AUTO_BRIGHT "auto_bright"
#define KEY_AUTO_BRIGHT_THR "auto_bright_thr"
#define KEY_ADJUST_MAXIMUM_THR "adjust_maximum_thr"
#define KEY_DO_NOT_USE_FUJI_ROTATE "do_not_use_fuji_rotate"
#define KEY_USE_BLACK "use_black"
#define KEY_USE_SAT "use_sat"
#define KEY_USE_NOISE "use_noise"
#define KEY_USE_CHROMA "use_chroma"
#define KEY_USER_QUAL_TOOLBUTTON "user_qual_toolButton"
#define KEY_MED_PASSES_TOOLBUTTON "med_passes_toolButton"
#define KEY_WB_METHOD_TOOLBUTTON "wb_method_toolButton"
#define KEY_TK_TOOLBUTTON "TK_toolButton"
#define KEY_MULTIPLIERS_TOOLBUTTON "multipliers_toolButton"
#define KEY_HIGHLIGHTS_TOOLBUTTON "highlights_toolButton"
#define KEY_LEVEL_TOOLBUTTON "level_toolButton"
#define KEY_BRIGHTNESS_TOOLBUTTON "brightness_toolButton"
#define KEY_USER_BLACK_TOOLBUTTON "user_black_toolButton"
#define KEY_USER_SAT_TOOLBUTTON "user_sat_toolButton"
#define KEY_THRESHOLD_TOOLBUTTON "threshold_toolButton"
#define KEY_RED_TOOLBUTTON "red_toolButton"
#define KEY_BLUE_TOOLBUTTON "blue_toolButton"
#define KEY_GREEN_TOOLBUTTON "green_toolButton"

//--------------------PATHS & co. ----------------
#define KEY_RECENT_PATH_LOAD_SAVE_HDR "Recent_path_loadsave_hdr"
#define KEY_RECENT_FILES "Recent_files_list"
#define KEY_RECENT_PATH_LOAD_SAVE_TMO_SETTINGS "Recent_path_TMO_settings"
#define KEY_RECENT_PATH_SAVE_LDR "Recent_path_save_ldr"
#define KEY_RECENT_PATH_LOAD_LDRs_FOR_HDR "Recent_path_input_for_hdr"
#define KEY_RECENT_PATH_EXIF_FROM "Recent_path_exif_from"
#define KEY_RECENT_PATH_EXIF_TO "Recent_path_exif_to"

#endif
