;----------------------------------------------------
; # # DO NOT REMOVE ANYTHING FROM THIS SECTION # # # 
;----------------------------------------------------

[Rainmeter]
Group=[#CustomAppGroup[#CustomAppPosition]]
LeftMouseDownAction=[]

DefaultSavePosition=1
DefaultAlwaysOnTop=1
DefaultDraggable=1
DefaultSnapEdges=1
DefaultStartHidden=1
DefaultAlphaValue=255
DefaultHideOnMouseOver=0
DefaultFadeDuration=105
DefaultClickThrough=0
DefaultKeepOnScreen=1
DefaultAutoSelectScreen=0

[Variables]
@Include=#SKINSPATH#Droptop\@Resources\GlobalVar\Control.inc
@Include1=#SKINSPATH#Droptop\@Resources\GlobalVar\UserSettings.inc
@Include2=#SKINSPATH#Droptop\@Resources\Themes\#ThemeNum#.inc
@Include3=#SKINSPATH#Droptop\@Resources\Meters\SystemTrayMeters.inc
@Include4=#SKINSPATH#Droptop\@Resources\GlobalVar\Languages\[#Language[#LanguageNum]].inc
@Include5=#SKINSPATH#Droptop\@Resources\GlobalVar\ThemeSettings.inc

; -----------------------------------------

CustomAppPosition=1

; -----------------------------------------

NumberOfDividers=0

Box1=1
Box2=2
Box3=3
Box4=4
Box5=5

Box1Text=1
Box2Text=2
Box3Text=3
Box4Text=4
Box5Text=5

BoxPosition1=0
BoxPosition2=1
BoxPosition3=2
BoxPosition4=3
BoxPosition5=4

[CurrentAppX]
Measure=Calc
Formula=[#CustomApp[#CustomAppPosition]X]
DynamicVariables=1
UpdateDivider=-1

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

[InfoStyle]
Text=[#ItemText[##CURRENTSECTION#]]
LeftMouseDownAction=[#Action[#ItemIsFolder[##CURRENTSECTION#]]]

[IconStyle]
ImageName=#CURRENTPATH#Icons\[#Icon[#ItemIsFolder[##CURRENTSECTION#]]].png
Hidden=(#NumberOfItems#>=[##CURRENTSECTION#]?0:1)

[ArrowStyleB]
Hidden=(#NumberOfItems#>=[##CURRENTSECTION#]?([#ItemIsFolder[##CURRENTSECTION#]]=1?0:1):1)
Y=[[##CURRENTSECTION#]:Y]

[BoxStyle]
Shape=Rectangle #DropdownCutout#,(#DropdownCutout#+(3*#DroptopSize#)),(#DropdownMenuWidth#+2-(#DropdownCutout#*2)),(([#BoxHeight[##CURRENTSECTION#]]*#DroptopSize#)-(#DropdownCutout#*2)),#BGCorner# | Fill Color #FolderBG1#,(#FolderOpacity1#<1?1:#FolderOpacity1#) | StrokeWidth #StrokeWidth2# | Stroke Color #StrokeColor2#
Hidden=(#NumberOfBoxes#>=[##CURRENTSECTION#]?0:1)
Y=[Box[#BoxPosition[##CURRENTSECTION#]]:YH]

[TextStyle]
FontColor=#SuperColor#,#DropdownItemOpacity#
FontFace=[#FontName[#ThemeNum][#AltFont[#LanguageNum]]]
FontSize=#DropdownMenuFontSize#
FontWeight=#FontWeight#
AntiAlias=#DropdownAntiAlias#
InlineSetting=CharacterSpacing | #DropdownCharacterSpacing#
W=(#DropdownMenuWidth#-([#CURRENTSECTION#:X]*2))
ClipString=1

;-----------------------------------------

[1]
Meter=String
MeterStyle=#DefaultMeterStyle#
Y=((#DropdownIconYoffset#+(#DropdownMenuHeight#/2))-((#DropdownIconYoffset#+(#DropdownMenuHeight#/2))%1)+#DropdownItemYOffset#)

[2]
Meter=String
MeterStyle=#DefaultMeterStyle#

[3]
Meter=String
MeterStyle=#DefaultMeterStyle#

[4]
Meter=String
MeterStyle=#DefaultMeterStyle#

[5]
Meter=String
MeterStyle=#DefaultMeterStyle#

[6]
Meter=String
MeterStyle=#DefaultMeterStyle#

[7]
Meter=String
MeterStyle=#DefaultMeterStyle#

[8]
Meter=String
MeterStyle=#DefaultMeterStyle#

[9]
Meter=String
MeterStyle=#DefaultMeterStyle#

[10]
Meter=String
MeterStyle=#DefaultMeterStyle#

;-----------------------------------------

[1Icon]
Meter=Image
MeterStyle=IconStyle
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#)

[2Icon]
Meter=Image
MeterStyle=IconStyle

[3Icon]
Meter=Image
MeterStyle=IconStyle

[4Icon]
Meter=Image
MeterStyle=IconStyle

[5Icon]
Meter=Image
MeterStyle=IconStyle

[6Icon]
Meter=Image
MeterStyle=IconStyle

[7Icon]
Meter=Image
MeterStyle=IconStyle

[8Icon]
Meter=Image
MeterStyle=IconStyle

[9Icon]
Meter=Image
MeterStyle=IconStyle

[10Icon]
Meter=Image
MeterStyle=IconStyle

;-----------------------------------------

[1Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

[2Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

[3Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

[4Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

[5Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

[6Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

[7Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

[8Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

[9Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

[10Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

;----------------------------------------------------

[Box1]
Meter=Shape
MeterStyle=BoxStyle
Y=[Background:H]

[Box2]
Meter=Shape
MeterStyle=BoxStyle

[Box3]
Meter=Shape
MeterStyle=BoxStyle

[Box4]
Meter=Shape
MeterStyle=BoxStyle

[Box5]
Meter=Shape
MeterStyle=BoxStyle
