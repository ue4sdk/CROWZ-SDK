#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AkAudio.EAkCallbackType
enum class EAkCallbackType : uint8_t
{
	EAkCallbackType__EndOfEvent    = 0,
	EAkCallbackType__Marker        = 1,
	EAkCallbackType__Duration      = 2,
	EAkCallbackType__Starvation    = 3,
	EAkCallbackType__MusicPlayStarted = 4,
	EAkCallbackType__MusicSyncBeat = 5,
	EAkCallbackType__MusicSyncBar  = 6,
	EAkCallbackType__MusicSyncEntry = 7,
	EAkCallbackType__MusicSyncExit = 8,
	EAkCallbackType__MusicSyncGrid = 9,
	EAkCallbackType__MusicSyncUserCue = 10,
	EAkCallbackType__MusicSyncPoint = 11,
	EAkCallbackType__MIDIEvent     = 12,
	EAkCallbackType__EnableGetSourcePlayPosition = 13,
	EAkCallbackType__EAkCallbackType_MAX = 14
};


// Enum AkAudio.EAkResult
enum class EAkResult : uint8_t
{
	EAkResult__NotImplemented      = 0,
	EAkResult__Success             = 1,
	EAkResult__Fail                = 2,
	EAkResult__PartialSuccess      = 3,
	EAkResult__NotCompatible       = 4,
	EAkResult__AlreadyConnected    = 5,
	EAkResult__InvalidFile         = 6,
	EAkResult__AudioFileHeaderTooLarge = 7,
	EAkResult__MaxReached          = 8,
	EAkResult__InvalidID           = 9,
	EAkResult__IDNotFound          = 10,
	EAkResult__InvalidInstanceID   = 11,
	EAkResult__NoMoreData          = 12,
	EAkResult__InvalidStateGroup   = 13,
	EAkResult__ChildAlreadyHasAParent = 14,
	EAkResult__InvalidLanguage     = 15,
	EAkResult__CannotAddItseflAsAChild = 16,
	EAkResult__InvalidParameter    = 17,
	EAkResult__ElementAlreadyInList = 18,
	EAkResult__PathNotFound        = 19,
	EAkResult__PathNoVertices      = 20,
	EAkResult__PathNotRunning      = 21,
	EAkResult__PathNotPaused       = 22,
	EAkResult__PathNodeAlreadyInList = 23,
	EAkResult__PathNodeNotInList   = 24,
	EAkResult__DataNeeded          = 25,
	EAkResult__NoDataNeeded        = 26,
	EAkResult__DataReady           = 27,
	EAkResult__NoDataReady         = 28,
	EAkResult__InsufficientMemory  = 29,
	EAkResult__Cancelled           = 30,
	EAkResult__UnknownBankID       = 31,
	EAkResult__BankReadError       = 32,
	EAkResult__InvalidSwitchType   = 33,
	EAkResult__FormatNotReady      = 34,
	EAkResult__WrongBankVersion    = 35,
	EAkResult__FileNotFound        = 36,
	EAkResult__DeviceNotReady      = 37,
	EAkResult__BankAlreadyLoaded   = 38,
	EAkResult__RenderedFX          = 39,
	EAkResult__ProcessNeeded       = 40,
	EAkResult__ProcessDone         = 41,
	EAkResult__MemManagerNotInitialized = 42,
	EAkResult__StreamMgrNotInitialized = 43,
	EAkResult__SSEInstructionsNotSupported = 44,
	EAkResult__Busy                = 45,
	EAkResult__UnsupportedChannelConfig = 46,
	EAkResult__PluginMediaNotAvailable = 47,
	EAkResult__MustBeVirtualized   = 48,
	EAkResult__CommandTooLarge     = 49,
	EAkResult__RejectedByFilter    = 50,
	EAkResult__InvalidCustomPlatformName = 51,
	EAkResult__DLLCannotLoad       = 52,
	EAkResult__DLLPathNotFound     = 53,
	EAkResult__NoJavaVM            = 54,
	EAkResult__OpenSLError         = 55,
	EAkResult__PluginNotRegistered = 56,
	EAkResult__DataAlignmentError  = 57,
	EAkResult__EAkResult_MAX       = 58
};


// Enum AkAudio.EAkAndroidAudioAPI
enum class EAkAndroidAudioAPI : uint8_t
{
	EAkAndroidAudioAPI__AAudio     = 0,
	EAkAndroidAudioAPI__OpenSL_ES  = 1,
	EAkAndroidAudioAPI__EAkAndroidAudioAPI_MAX = 2
};


// Enum AkAudio.EAkAudioSessionMode
enum class EAkAudioSessionMode : uint8_t
{
	EAkAudioSessionMode__Default   = 0,
	EAkAudioSessionMode__VoiceChat = 1,
	EAkAudioSessionMode__GameChat  = 2,
	EAkAudioSessionMode__VideoRecording = 3,
	EAkAudioSessionMode__Measurement = 4,
	EAkAudioSessionMode__MoviePlayback = 5,
	EAkAudioSessionMode__VideoChat = 6,
	EAkAudioSessionMode__EAkAudioSessionMode_MAX = 7
};


// Enum AkAudio.EAkAudioSessionCategoryOptions
enum class EAkAudioSessionCategoryOptions : uint8_t
{
	EAkAudioSessionCategoryOptions__MixWithOthers = 0,
	EAkAudioSessionCategoryOptions__DuckOthers = 1,
	EAkAudioSessionCategoryOptions__AllowBluetooth = 2,
	EAkAudioSessionCategoryOptions__DefaultToSpeaker = 3,
	EAkAudioSessionCategoryOptions__EAkAudioSessionCategoryOptions_MAX = 4
};


// Enum AkAudio.EAkAudioSessionCategory
enum class EAkAudioSessionCategory : uint8_t
{
	EAkAudioSessionCategory__Ambient = 0,
	EAkAudioSessionCategory__SoloAmbient = 1,
	EAkAudioSessionCategory__PlayAndRecord = 2,
	EAkAudioSessionCategory__EAkAudioSessionCategory_MAX = 3
};


// Enum AkAudio.EReflectionFilterBits
enum class EReflectionFilterBits : uint8_t
{
	EReflectionFilterBits__Wall    = 0,
	EReflectionFilterBits__Ceiling = 1,
	EReflectionFilterBits__Floor   = 2,
	EReflectionFilterBits__EReflectionFilterBits_MAX = 3
};


// Enum AkAudio.AkCodecId
enum class EAkCodecId : uint8_t
{
	AkCodecId__Bank                = 0,
	AkCodecId__PCM                 = 1,
	AkCodecId__ADPCM               = 2,
	AkCodecId__XMA                 = 3,
	AkCodecId__Vorbis              = 4,
	AkCodecId__WiiADPCM            = 5,
	AkCodecId__PCMEX               = 6,
	AkCodecId__ExternalSource      = 7,
	AkCodecId__XWMA                = 8,
	AkCodecId__AAC                 = 9,
	AkCodecId__FilePackage         = 10,
	AkCodecId__ATRAC9              = 11,
	AkCodecId__VAG                 = 12,
	AkCodecId__ProfilerCapture     = 13,
	AkCodecId__AnalysisFile        = 14,
	AkCodecId__MIDI                = 15,
	AkCodecId__OpusNX              = 16,
	AkCodecId__CAF                 = 17,
	AkCodecId__AkOpus              = 18,
	AkCodecId__AkCodecId_MAX       = 19
};


// Enum AkAudio.EAkMidiCcValues
enum class EAkMidiCcValues : uint8_t
{
	EAkMidiCcValues__AkMidiCcBankSelectCoarse = 0,
	EAkMidiCcValues__AkMidiCcModWheelCoarse = 1,
	EAkMidiCcValues__AkMidiCcBreathCtrlCoarse = 2,
	EAkMidiCcValues__AkMidiCcCtrl3Coarse = 3,
	EAkMidiCcValues__AkMidiCcFootPedalCoarse = 4,
	EAkMidiCcValues__AkMidiCcPortamentoCoarse = 5,
	EAkMidiCcValues__AkMidiCcDataEntryCoarse = 6,
	EAkMidiCcValues__AkMidiCcVolumeCoarse = 7,
	EAkMidiCcValues__AkMidiCcBalanceCoarse = 8,
	EAkMidiCcValues__AkMidiCcCtrl9Coarse = 9,
	EAkMidiCcValues__AkMidiCcPanPositionCoarse = 10,
	EAkMidiCcValues__AkMidiCcExpressionCoarse = 11,
	EAkMidiCcValues__AkMidiCcEffectCtrl1Coarse = 12,
	EAkMidiCcValues__AkMidiCcEffectCtrl2Coarse = 13,
	EAkMidiCcValues__AkMidiCcCtrl14Coarse = 14,
	EAkMidiCcValues__AkMidiCcCtrl15Coarse = 15,
	EAkMidiCcValues__AkMidiCcGenSlider1 = 16,
	EAkMidiCcValues__AkMidiCcGenSlider2 = 17,
	EAkMidiCcValues__AkMidiCcGenSlider3 = 18,
	EAkMidiCcValues__AkMidiCcGenSlider4 = 19,
	EAkMidiCcValues__AkMidiCcCtrl20Coarse = 20,
	EAkMidiCcValues__AkMidiCcCtrl21Coarse = 21,
	EAkMidiCcValues__AkMidiCcCtrl22Coarse = 22,
	EAkMidiCcValues__AkMidiCcCtrl23Coarse = 23,
	EAkMidiCcValues__AkMidiCcCtrl24Coarse = 24,
	EAkMidiCcValues__AkMidiCcCtrl25Coarse = 25,
	EAkMidiCcValues__AkMidiCcCtrl26Coarse = 26,
	EAkMidiCcValues__AkMidiCcCtrl27Coarse = 27,
	EAkMidiCcValues__AkMidiCcCtrl28Coarse = 28,
	EAkMidiCcValues__AkMidiCcCtrl29Coarse = 29,
	EAkMidiCcValues__AkMidiCcCtrl30Coarse = 30,
	EAkMidiCcValues__AkMidiCcCtrl31Coarse = 31,
	EAkMidiCcValues__AkMidiCcBankSelectFine = 32,
	EAkMidiCcValues__AkMidiCcModWheelFine = 33,
	EAkMidiCcValues__AkMidiCcBreathCtrlFine = 34,
	EAkMidiCcValues__AkMidiCcCtrl3Fine = 35,
	EAkMidiCcValues__AkMidiCcFootPedalFine = 36,
	EAkMidiCcValues__AkMidiCcPortamentoFine = 37,
	EAkMidiCcValues__AkMidiCcDataEntryFine = 38,
	EAkMidiCcValues__AkMidiCcVolumeFine = 39,
	EAkMidiCcValues__AkMidiCcBalanceFine = 40,
	EAkMidiCcValues__AkMidiCcCtrl9Fine = 41,
	EAkMidiCcValues__AkMidiCcPanPositionFine = 42,
	EAkMidiCcValues__AkMidiCcExpressionFine = 43,
	EAkMidiCcValues__AkMidiCcEffectCtrl1Fine = 44,
	EAkMidiCcValues__AkMidiCcEffectCtrl2Fine = 45,
	EAkMidiCcValues__AkMidiCcCtrl14Fine = 46,
	EAkMidiCcValues__AkMidiCcCtrl15Fine = 47,
	EAkMidiCcValues__AkMidiCcCtrl20Fine = 48,
	EAkMidiCcValues__AkMidiCcCtrl21Fine = 49,
	EAkMidiCcValues__AkMidiCcCtrl22Fine = 50,
	EAkMidiCcValues__AkMidiCcCtrl23Fine = 51,
	EAkMidiCcValues__AkMidiCcCtrl24Fine = 52,
	EAkMidiCcValues__AkMidiCcCtrl25Fine = 53,
	EAkMidiCcValues__AkMidiCcCtrl26Fine = 54,
	EAkMidiCcValues__AkMidiCcCtrl27Fine = 55,
	EAkMidiCcValues__AkMidiCcCtrl28Fine = 56,
	EAkMidiCcValues__AkMidiCcCtrl29Fine = 57,
	EAkMidiCcValues__AkMidiCcCtrl30Fine = 58,
	EAkMidiCcValues__AkMidiCcCtrl31Fine = 59,
	EAkMidiCcValues__AkMidiCcHoldPedal = 60,
	EAkMidiCcValues__AkMidiCcPortamentoOnOff = 61,
	EAkMidiCcValues__AkMidiCcSustenutoPedal = 62,
	EAkMidiCcValues__AkMidiCcSoftPedal = 63,
	EAkMidiCcValues__AkMidiCcLegatoPedal = 64,
	EAkMidiCcValues__AkMidiCcHoldPedal2 = 65,
	EAkMidiCcValues__AkMidiCcSoundVariation = 66,
	EAkMidiCcValues__AkMidiCcSoundTimbre = 67,
	EAkMidiCcValues__AkMidiCcSoundReleaseTime = 68,
	EAkMidiCcValues__AkMidiCcSoundAttackTime = 69,
	EAkMidiCcValues__AkMidiCcSoundBrightness = 70,
	EAkMidiCcValues__AkMidiCcSoundCtrl6 = 71,
	EAkMidiCcValues__AkMidiCcSoundCtrl7 = 72,
	EAkMidiCcValues__AkMidiCcSoundCtrl8 = 73,
	EAkMidiCcValues__AkMidiCcSoundCtrl9 = 74,
	EAkMidiCcValues__AkMidiCcSoundCtrl10 = 75,
	EAkMidiCcValues__AkMidiCcGeneralButton1 = 76,
	EAkMidiCcValues__AkMidiCcGeneralButton2 = 77,
	EAkMidiCcValues__AkMidiCcGeneralButton3 = 78,
	EAkMidiCcValues__AkMidiCcGeneralButton4 = 79,
	EAkMidiCcValues__AkMidiCcReverbLevel = 80,
	EAkMidiCcValues__AkMidiCcTremoloLevel = 81,
	EAkMidiCcValues__AkMidiCcChorusLevel = 82,
	EAkMidiCcValues__AkMidiCcCelesteLevel = 83,
	EAkMidiCcValues__AkMidiCcPhaserLevel = 84,
	EAkMidiCcValues__AkMidiCcDataButtonP1 = 85,
	EAkMidiCcValues__AkMidiCcDataButtonM1 = 86,
	EAkMidiCcValues__AkMidiCcNonRegisterCoarse = 87,
	EAkMidiCcValues__AkMidiCcNonRegisterFine = 88,
	EAkMidiCcValues__AkMidiCcAllSoundOff = 89,
	EAkMidiCcValues__AkMidiCcAllControllersOff = 90,
	EAkMidiCcValues__AkMidiCcLocalKeyboard = 91,
	EAkMidiCcValues__AkMidiCcAllNotesOff = 92,
	EAkMidiCcValues__AkMidiCcOmniModeOff = 93,
	EAkMidiCcValues__AkMidiCcOmniModeOn = 94,
	EAkMidiCcValues__AkMidiCcOmniMonophonicOn = 95,
	EAkMidiCcValues__AkMidiCcOmniPolyphonicOn = 96,
	EAkMidiCcValues__EAkMidiCcValues_MAX = 97
};


// Enum AkAudio.EAkMidiEventType
enum class EAkMidiEventType : uint8_t
{
	EAkMidiEventType__AkMidiEventTypeInvalid = 0,
	EAkMidiEventType__AkMidiEventTypeNoteOff = 1,
	EAkMidiEventType__AkMidiEventTypeNoteOn = 2,
	EAkMidiEventType__AkMidiEventTypeNoteAftertouch = 3,
	EAkMidiEventType__AkMidiEventTypeController = 4,
	EAkMidiEventType__AkMidiEventTypeProgramChange = 5,
	EAkMidiEventType__AkMidiEventTypeChannelAftertouch = 6,
	EAkMidiEventType__AkMidiEventTypePitchBend = 7,
	EAkMidiEventType__AkMidiEventTypeSysex = 8,
	EAkMidiEventType__AkMidiEventTypeEscape = 9,
	EAkMidiEventType__AkMidiEventTypeMeta = 10,
	EAkMidiEventType__EAkMidiEventType_MAX = 11
};


// Enum AkAudio.ERTPCValueType
enum class ERTPCValueType : uint8_t
{
	ERTPCValueType__Default        = 0,
	ERTPCValueType__Global         = 1,
	ERTPCValueType__GameObject     = 2,
	ERTPCValueType__PlayingID      = 3,
	ERTPCValueType__Unavailable    = 4,
	ERTPCValueType__ERTPCValueType_MAX = 5
};


// Enum AkAudio.EAkCurveInterpolation
enum class EAkCurveInterpolation : uint8_t
{
	EAkCurveInterpolation__Log3    = 0,
	EAkCurveInterpolation__Sine    = 1,
	EAkCurveInterpolation__Log1    = 2,
	EAkCurveInterpolation__InvSCurve = 3,
	EAkCurveInterpolation__Linear  = 4,
	EAkCurveInterpolation__SCurve  = 5,
	EAkCurveInterpolation__Exp1    = 6,
	EAkCurveInterpolation__SineRecip = 7,
	EAkCurveInterpolation__Exp3    = 8,
	EAkCurveInterpolation__LastFadeCurve = 9,
	EAkCurveInterpolation__Constant = 10,
	EAkCurveInterpolation__EAkCurveInterpolation_MAX = 11
};


// Enum AkAudio.AkActionOnEventType
enum class EAkActionOnEventType : uint8_t
{
	AkActionOnEventType__Stop      = 0,
	AkActionOnEventType__Pause     = 1,
	AkActionOnEventType__Resume    = 2,
	AkActionOnEventType__Break     = 3,
	AkActionOnEventType__ReleaseEnvelope = 4,
	AkActionOnEventType__AkActionOnEventType_MAX = 5
};


// Enum AkAudio.AkMultiPositionType
enum class EAkMultiPositionType : uint8_t
{
	AkMultiPositionType__SingleSource = 0,
	AkMultiPositionType__MultiSources = 1,
	AkMultiPositionType__MultiDirections = 2,
	AkMultiPositionType__AkMultiPositionType_MAX = 3
};


// Enum AkAudio.AkSpeakerConfiguration
enum class EAkSpeakerConfiguration : uint8_t
{
	AkSpeakerConfiguration__Ak_Speaker_Front_Left = 0,
	AkSpeakerConfiguration__Ak_Speaker_Front_Right = 1,
	AkSpeakerConfiguration__Ak_Speaker_Front_Center = 2,
	AkSpeakerConfiguration__Ak_Speaker_Low_Frequency = 3,
	AkSpeakerConfiguration__Ak_Speaker_Back_Left = 4,
	AkSpeakerConfiguration__Ak_Speaker_Back_Right = 5,
	AkSpeakerConfiguration__Ak_Speaker_Back_Center = 6,
	AkSpeakerConfiguration__Ak_Speaker_Side_Left = 7,
	AkSpeakerConfiguration__Ak_Speaker_Side_Right = 8,
	AkSpeakerConfiguration__Ak_Speaker_Top = 9,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Left = 10,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Center = 11,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Right = 12,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Left = 13,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Center = 14,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Right = 15,
	AkSpeakerConfiguration__Ak_Speaker_MAX = 16
};


// Enum AkAudio.AkChannelConfiguration
enum class EAkChannelConfiguration : uint8_t
{
	AkChannelConfiguration__Ak_Parent = 0,
	AkChannelConfiguration__Ak_LFE = 1,
	AkChannelConfiguration__Ak_1   = 2,
	AkChannelConfiguration__Ak_2   = 3,
	AkChannelConfiguration__Ak_201 = 4,
	AkChannelConfiguration__Ak_3   = 5,
	AkChannelConfiguration__Ak_301 = 6,
	AkChannelConfiguration__Ak_4   = 7,
	AkChannelConfiguration__Ak_401 = 8,
	AkChannelConfiguration__Ak_5   = 9,
	AkChannelConfiguration__Ak_501 = 10,
	AkChannelConfiguration__Ak_7   = 11,
	AkChannelConfiguration__Ak_5_1 = 12,
	AkChannelConfiguration__Ak_7_1 = 13,
	AkChannelConfiguration__Ak_7_101 = 14,
	AkChannelConfiguration__Ak_Auro_9 = 15,
	AkChannelConfiguration__Ak_Auro_10 = 16,
	AkChannelConfiguration__Ak_Auro_11 = 17,
	AkChannelConfiguration__Ak_Auro_13 = 18,
	AkChannelConfiguration__Ak_Ambisonics_1st_order = 19,
	AkChannelConfiguration__Ak_Ambisonics_2nd_order = 20,
	AkChannelConfiguration__Ak_Ambisonics_3rd_order = 21,
	AkChannelConfiguration__Ak_MAX = 22
};


// Enum AkAudio.AkAcousticPortalState
enum class EAkAcousticPortalState : uint8_t
{
	AkAcousticPortalState__Closed  = 0,
	AkAcousticPortalState__Open    = 1,
	AkAcousticPortalState__AkAcousticPortalState_MAX = 2
};


// Enum AkAudio.PanningRule
enum class EPanningRule : uint8_t
{
	PanningRule__PanningRule_Speakers = 0,
	PanningRule__PanningRule_Headphones = 1,
	PanningRule__PanningRule_MAX   = 2
};


// Enum AkAudio.AkMeshType
enum class EAkMeshType : uint8_t
{
	AkMeshType__StaticMesh         = 0,
	AkMeshType__CollisionMesh      = 1,
	AkMeshType__AkMeshType_MAX     = 2
};


// Enum AkAudio.EAkHololensAudioAPI
enum class EAkHololensAudioAPI : uint8_t
{
	EAkHololensAudioAPI__Wasapi    = 0,
	EAkHololensAudioAPI__XAudio2   = 1,
	EAkHololensAudioAPI__DirectSound = 2,
	EAkHololensAudioAPI__EAkHololensAudioAPI_MAX = 3
};


// Enum AkAudio.EAkCommSystem
enum class EAkCommSystem : uint8_t
{
	EAkCommSystem__Socket          = 0,
	EAkCommSystem__HTCS            = 1,
	EAkCommSystem__EAkCommSystem_MAX = 2
};


// Enum AkAudio.EAkChannelMask
enum class EAkChannelMask : uint8_t
{
	EAkChannelMask__FrontLeft      = 0,
	EAkChannelMask__FrontRight     = 1,
	EAkChannelMask__FrontCenter    = 2,
	EAkChannelMask__LowFrequency   = 3,
	EAkChannelMask__BackLeft       = 4,
	EAkChannelMask__BackRight      = 5,
	EAkChannelMask__BackCenter     = 6,
	EAkChannelMask__SideLeft       = 7,
	EAkChannelMask__SideRight      = 8,
	EAkChannelMask__Top            = 9,
	EAkChannelMask__HeightFrontLeft = 10,
	EAkChannelMask__HeightFrontCenter = 11,
	EAkChannelMask__HeightFrontRight = 12,
	EAkChannelMask__HeightBackLeft = 13,
	EAkChannelMask__HeightBackCenter = 14,
	EAkChannelMask__HeightBackRight = 15,
	EAkChannelMask__EAkChannelMask_MAX = 16
};


// Enum AkAudio.EAkChannelConfigType
enum class EAkChannelConfigType : uint8_t
{
	EAkChannelConfigType__Anonymous = 0,
	EAkChannelConfigType__Standard = 1,
	EAkChannelConfigType__Ambisonic = 2,
	EAkChannelConfigType__EAkChannelConfigType_MAX = 3
};


// Enum AkAudio.EAkDiffractionFlags
enum class EAkDiffractionFlags : uint8_t
{
	EAkDiffractionFlags__UseBuiltInParam = 0,
	EAkDiffractionFlags__UseObstruction = 1,
	EAkDiffractionFlags__CalcEmitterVirtualPosition = 2,
	EAkDiffractionFlags__EAkDiffractionFlags_MAX = 3
};


// Enum AkAudio.EAkPanningRule
enum class EAkPanningRule : uint8_t
{
	EAkPanningRule__Speakers       = 0,
	EAkPanningRule__Headphones     = 1,
	EAkPanningRule__EAkPanningRule_MAX = 2
};


// Enum AkAudio.EAkWindowsAudioAPI
enum class EAkWindowsAudioAPI : uint8_t
{
	EAkWindowsAudioAPI__Wasapi     = 0,
	EAkWindowsAudioAPI__XAudio2    = 1,
	EAkWindowsAudioAPI__DirectSound = 2,
	EAkWindowsAudioAPI__EAkWindowsAudioAPI_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
