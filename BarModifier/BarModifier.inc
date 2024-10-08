;----------------------------------------------------
; Styles
;----------------------------------------------------
[GlazeWM_Workspaces-asrma7.Style]
ImageAlpha=0
W=((((#TopHeight#+#TopBarIconHOffset#)*1)-((#TopHeight#+#TopBarIconHOffset#)*1)%1)+[GlazeWM_Workspaces-asrma7_Icon_1:W]+([GlazeWM_Workspaces-asrma7_Icon_2:W]+[GlazeWM_Workspaces-asrma7_Icon_3:W]+[GlazeWM_Workspaces-asrma7_Icon_4:W]+[GlazeWM_Workspaces-asrma7_Icon_5:W]+[GlazeWM_Workspaces-asrma7_Icon_6:W]+[GlazeWM_Workspaces-asrma7_Icon_7:W]+[GlazeWM_Workspaces-asrma7_Icon_8:W]+[GlazeWM_Workspaces-asrma7_Icon_9:W]))
SolidColor=255,255,255,30

[GlazeWM_Workspaces-asrma7_Style]
X=[#SideAppSlotXPos[#SideAppPosCustomApp[#GlazeWM_Workspaces-asrma7]]]
MouseOverAction=[]
MouseLeaveAction=
LeftMouseDownAction=
RightMouseDownAction=
LeftMouseUpAction=
Container=SystemTrayContainer
Group=CustomApp[#GlazeWM_Workspaces-asrma7]Sys | SysTray | Buttons00 | AppButton[#CustomApp[#GlazeWM_Workspaces-asrma7]] | CustomAppButton | GlazeWM_Workspaces-asrma7
DynamicVariables=1

[GlazeWM_Workspaces-asrma7_Icon]
ImageName="#GlazeWM_Workspaces-asrma7___Buttons_Path#\#GlazeWM_Workspaces-asrma7___Settings_Style#\Button[##CURRENTSECTION#][#TopIconShadows[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]]].png"
ImageTint=#TopBarFontColor1#,#TopBarTitleOpacity#
ImageAlpha=([##CURRENTSECTION#]>#GlazeWM_Workspaces-asrma7___Workspace_Count#?0:(#TopBarTitleOpacity#/([##CURRENTSECTION#]<>#GlazeWM_Workspaces-asrma7___Workspace_Current#?2:1)))
Padding=#SysIconPadding#
X=R
Y=0
H=(#TopHeight#+#TopBarIconHOffset#)
PreserveAspectRatio=1
MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha "#TopBarTitleOpacity#"][!UpdateMeter #CURRENTSECTION#][!Redraw][!Delay 10][!CommandMeasure MeasureActionTimer "Stop 3"]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!CommandMeasure GlazeWM_Workspaces-asrma7___GlazeWM_WebSocket_GetWorkspaces "command focus --workspace [##CurrentSection#]" "Droptop\Other\BackgroundProcesses"][!UpdateMeasureGroup GlazeWM_Workspaces-asrma7][!UpdateMeterGroup GlazeWM_Workspaces-asrma7][!Redraw]
RightMouseDownAction=#ResetActiveFolders#[!Zpos 1 "Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#GlazeWM_Workspaces-asrma7]Num]]\Settings"][!Zpos 0 "Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#GlazeWM_Workspaces-asrma7]Num]]\Settings"][!CommandMeasure MeasureActionTimer "Stop 3"][!SetVariable ButtonSection ""][!WriteKeyValue Variables CustomAppPosition [#CustomApp[#CustomApp[#GlazeWM_Workspaces-asrma7]Num]Num] "#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#GlazeWM_Workspaces-asrma7]Num]]\Config\MainConfig.inc"][!WriteKeyValue Variables CustomAppPosition [#CustomApp[#CustomApp[#GlazeWM_Workspaces-asrma7]Num]Num] "#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#GlazeWM_Workspaces-asrma7]Num]]\Folder\Config\FolderConfig.inc"][!WriteKeyValue Variables CustomAppPosition [#CustomApp[#CustomApp[#GlazeWM_Workspaces-asrma7]Num]Num] "#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#GlazeWM_Workspaces-asrma7]Num]]\Settings\Config\MainConfig.inc"][!WriteKeyValue Variables CustomAppPosition [#CustomApp[#CustomApp[#GlazeWM_Workspaces-asrma7]Num]Num] "#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#GlazeWM_Workspaces-asrma7]Num]]\Settings\Folder\Config\FolderConfig.inc"][!SetVariableGroup CurrentMeter "CustomApp[#GlazeWM_Workspaces-asrma7]" "PrimaryConfig"][!SetVariable CurrentTray "CustomApp[#GlazeWM_Workspaces-asrma7]" "Droptop\Other\BackgroundProcesses"][!EnableMouseActionGroup "MouseOverAction" Buttons00][!ToggleMouseAction CustomApp[#GlazeWM_Workspaces-asrma7] "MouseOverAction"][!ActivateConfig "Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#GlazeWM_Workspaces-asrma7]Num]]\Settings" "Settings.ini"][!WriteKeyValue Variables CustomApp[#GlazeWM_Workspaces-asrma7]X ([CustomApp[#GlazeWM_Workspaces-asrma7]:X]+[CustomApp[#GlazeWM_Workspaces-asrma7]:W]) "#@#GlobalVar\Control.inc"][!SetVariable CustomApp[#GlazeWM_Workspaces-asrma7]X ([CustomApp[#GlazeWM_Workspaces-asrma7]:X]+[CustomApp[#GlazeWM_Workspaces-asrma7]:W]) "Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#GlazeWM_Workspaces-asrma7]Num]]\Settings"][!HideGroup Folders][!HideGroup T[#CustomApp[#GlazeWM_Workspaces-asrma7]]][!#Hide# "Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#GlazeWM_Workspaces-asrma7]Num]]\Folder"][!Hide "Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#GlazeWM_Workspaces-asrma7]Num]]\Settings"][!Hide "Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#GlazeWM_Workspaces-asrma7]Num]]\Settings\Folder"][!SetVariable ActiveFolder 0][!SetVariable ActiveAll (#ActiveTray#=[#CustomApp[#GlazeWM_Workspaces-asrma7]]?0:1)][!SetVariable ActiveTray (#ActiveTray#=[#CustomApp[#GlazeWM_Workspaces-asrma7]]?0:[#CustomApp[#GlazeWM_Workspaces-asrma7]])][!SetVariable ActiveTray (#ActiveTray#=[#CustomApp[#GlazeWM_Workspaces-asrma7]]?0:[#CustomApp[#GlazeWM_Workspaces-asrma7]]) "Droptop\Other\BackgroundProcesses"][!SetOption HighlightSelected Hidden (#ActiveTray#=[#CustomApp[#GlazeWM_Workspaces-asrma7]]?1:0)][!SetOptionGroup CustomApp[#GlazeWM_Workspaces-asrma7]Sys ImageTint ""][!SetOptionGroup CustomApp[#GlazeWM_Workspaces-asrma7]Sys FontColor ""][!HideMeterGroup Highlight][#PowerMenuActionTimer[#PowerMenuLoadState]][!HideMeter HighlightSelected "Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#GlazeWM_Workspaces-asrma7]Num]]\Settings"][!HideGroup ContextBox][!HideGroup SettingsMenu][!SetWindowPosition ([#CURRENTCONFIGX]+[#CURRENTSECTION#:X]+(([#CURRENTCONFIGX]+[#CURRENTSECTION#:X])<([#CURRENTCONFIGWIDTH]/2)?(([#CURRENTCONFIGWIDTH]-[#CURRENTSECTION#:X])<((#SCREENAREAWIDTH#/2)+(100*#DroptopSize#))?[#CURRENTSECTION#:W]:0):[#CURRENTSECTION#:W])-1) ([#CURRENTCONFIGY]+#TopHeight#+#DropdownMenuYOffset#) "(([#CURRENTCONFIGX]+[#CURRENTSECTION#:X])<([#CURRENTCONFIGWIDTH]/2)?(([#CURRENTCONFIGWIDTH]-[#CURRENTSECTION#:X])<((#SCREENAREAWIDTH#/2)+(100*#DroptopSize#))?100:0):100)%" "0" "Droptop Community Apps\Apps\GlazeWM_Workspaces-asrma7\Settings"][!UpdateMeasure CurrentAppX "Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#GlazeWM_Workspaces-asrma7]Num]]\Settings"][!Redraw "Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#GlazeWM_Workspaces-asrma7]Num]]\Settings"][!UpdateMeter *][!Redraw][!Log "#ErrorMessage#" Notice][!ActivateConfig "Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#GlazeWM_Workspaces-asrma7]Num]]\Settings"][!#Toggle# "Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#GlazeWM_Workspaces-asrma7]Num]]\Settings"][!#Hide# "Droptop\Other\Folders\Folder#ActiveFolder#"][!Delay 105][!HideGroup SettingsMenu][!HideGroup ContextBox]

[GlazeWM_Workspaces-asrma7_Style_Icon_0]

[GlazeWM_Workspaces-asrma7_Style_Mask]
MaskImageName="#SKINSPATH#Droptop Community Apps\Apps\GlazeWM_Workspaces-asrma7\Button\Medium\Boxs\Mask\0\0.png"
W=(((((#TopHeight#+#TopBarIconHOffset#)*1)-((#TopHeight#+#TopBarIconHOffset#)*1)%1)*(#GlazeWM_Workspaces-asrma7___Workspace_Count#>=[##CURRENTSECTION#]?1:0)))


;----------------------------------------------------
; Measures
;----------------------------------------------------

[GlazeWM_Workspaces-asrma7_Measure_Set_Focus]
Measure=Calc
Formula=(#GlazeWM_Workspaces-asrma7___Workspace_Current#>=9?9:#GlazeWM_Workspaces-asrma7___Workspace_Current#)
OnUpdateAction=[!SetOptionGroup GlazeWM_Workspaces-asrma7 ImageName ""][!SetOption GlazeWM_Workspaces-asrma7_Icon_[&GlazeWM_Workspaces-asrma7_Measure_Set_Focus] ImageName "#*GlazeWM_Workspaces-asrma7___Buttons_Path*#\#*GlazeWM_Workspaces-asrma7___Settings_Style*#\Button0[#TopIconShadows[#*TopBarFontShadow*][#*ChamLum1*][#LockTopBarShadow[#*LockTopBarShadowNum*]]].png"]
DynamicVariables=1
Group=GlazeWM_Workspaces-asrma7
;----------------------------------------------------
; Meters
;----------------------------------------------------
[GlazeWM_Workspaces-asrma7_Icon_0]
Meter=Image 
MeterStyle=InfoStyle | GlazeWM_Workspaces-asrma7_Style | GlazeWM_Workspaces-asrma7_Icon
ImageAlpha=0
X=[#SideAppSlotXPos[#SideAppPosCustomApp[#GlazeWM_Workspaces-asrma7]]]
W=(((((#TopHeight#+#TopBarIconHOffset#)*1)-((#TopHeight#+#TopBarIconHOffset#)*1)%1)+[GlazeWM_Workspaces-asrma7_Icon_1:W]+[GlazeWM_Workspaces-asrma7_Icon_2:W]+[GlazeWM_Workspaces-asrma7_Icon_3:W]+[GlazeWM_Workspaces-asrma7_Icon_4:W]+[GlazeWM_Workspaces-asrma7_Icon_5:W]+[GlazeWM_Workspaces-asrma7_Icon_6:W]+[GlazeWM_Workspaces-asrma7_Icon_7:W]+[GlazeWM_Workspaces-asrma7_Icon_8:W]+[GlazeWM_Workspaces-asrma7_Icon_9:W]))
MouseOverAction=
MouseLeaveAction=
LeftMouseDownAction=[]

[GlazeWM_Workspaces-asrma7_Icon_1]
Meter=Image 
MeterStyle=InfoStyle | GlazeWM_Workspaces-asrma7_Style | GlazeWM_Workspaces-asrma7_Icon | GlazeWM_Workspaces-asrma7_Style_Mask
X=([#SideAppSlotXPos[#SideAppPosCustomApp[#GlazeWM_Workspaces-asrma7]]]+(((#TopHeight#+#TopBarIconHOffset#)*0.5)-((#TopHeight#+#TopBarIconHOffset#)*0.5)%1))

[GlazeWM_Workspaces-asrma7_Icon_2]
Meter=Image
MeterStyle=InfoStyle | GlazeWM_Workspaces-asrma7_Style | GlazeWM_Workspaces-asrma7_Icon | GlazeWM_Workspaces-asrma7_Style_Mask

[GlazeWM_Workspaces-asrma7_Icon_3]
Meter=Image
MeterStyle=InfoStyle | GlazeWM_Workspaces-asrma7_Style | GlazeWM_Workspaces-asrma7_Icon | GlazeWM_Workspaces-asrma7_Style_Mask

[GlazeWM_Workspaces-asrma7_Icon_4]
Meter=Image
MeterStyle=InfoStyle | GlazeWM_Workspaces-asrma7_Style | GlazeWM_Workspaces-asrma7_Icon | GlazeWM_Workspaces-asrma7_Style_Mask

[GlazeWM_Workspaces-asrma7_Icon_5]
Meter=Image
MeterStyle=InfoStyle | GlazeWM_Workspaces-asrma7_Style | GlazeWM_Workspaces-asrma7_Icon | GlazeWM_Workspaces-asrma7_Style_Mask

[GlazeWM_Workspaces-asrma7_Icon_6]
Meter=Image
MeterStyle=InfoStyle | GlazeWM_Workspaces-asrma7_Style | GlazeWM_Workspaces-asrma7_Icon | GlazeWM_Workspaces-asrma7_Style_Mask

[GlazeWM_Workspaces-asrma7_Icon_7]
Meter=Image
MeterStyle=InfoStyle | GlazeWM_Workspaces-asrma7_Style | GlazeWM_Workspaces-asrma7_Icon | GlazeWM_Workspaces-asrma7_Style_Mask

[GlazeWM_Workspaces-asrma7_Icon_8]
Meter=Image
MeterStyle=InfoStyle | GlazeWM_Workspaces-asrma7_Style | GlazeWM_Workspaces-asrma7_Icon | GlazeWM_Workspaces-asrma7_Style_Mask

[GlazeWM_Workspaces-asrma7_Icon_9]
Meter=Image
MeterStyle=InfoStyle | GlazeWM_Workspaces-asrma7_Style | GlazeWM_Workspaces-asrma7_Icon | GlazeWM_Workspaces-asrma7_Style_Mask
