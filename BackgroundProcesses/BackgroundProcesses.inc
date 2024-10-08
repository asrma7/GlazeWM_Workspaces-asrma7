[Rainmeter]

[Variables]

;----------------------------------------------------
; # # ADD BACKGROUND PROCESSES BELOW # # # # # # # #
; # # Measures that run even when the app isn't open
;----------------------------------------------------

;----------------------------------------------------------------------
; Example # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
; Updates the top bar when CPU temperature changes
; 
; UpdateDivider=10 rechecks the temperature every 10 seconds
; Recommended this number be no lower than 10 to prevent high CPU usage
;----------------------------------------------------------------------
; Usage tips:
; Measures in this file will be part of Droptop's BackgroundProcesses.ini file.
; As a result, #MyVariablesLoc# will not work here. Instead, use the actual file location.
; eg. "#SKINSPATH#Droptop Community Apps\Apps\APP_NAME-APP_AUTHOR\Variables\Variables.inc"
;----------------------------------------------------------------------

[GlazeWM_Workspaces-asrma7___GlazeWM_WebSocket_GetWorkspaces]
Measure=Plugin
Plugin=GlazeWMWorkspaces.dll
Address="ws://localhost:6123/"
OnOpen=
OnClose=
OnWorkspaceChanged=[!WriteKeyValue Variables GlazeWM_Workspaces-asrma7___Workspace_Count "$totalWorkspaces$" "#GlazeWM_Workspaces-asrma7___Variables_Path#"][!SetVariable GlazeWM_Workspaces-asrma7___Workspace_Count "$totalWorkspaces$" "Droptop\Dropdownbar"][!WriteKeyValue Variables GlazeWM_Workspaces-asrma7___Workspace_Current "$currentWorkspace$" "#GlazeWM_Workspaces-asrma7___Variables_Path#"][!SetVariable GlazeWM_Workspaces-asrma7___Workspace_Current "$currentWorkspace$" "Droptop\Dropdownbar"][#GlazeWM_Workspaces-asrma7___TopBar_Update_0]