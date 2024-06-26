@class NSDate, NSString, NSArray, PLEntry, PLEntryNotificationOperatorComposition, NSMutableArray, NSDictionary, PLXPCListenerOperatorComposition, AudioDevice, PLNSNotificationOperatorComposition;

@interface PLAudioAgent : PLAgent

@property int accessoryPowerState;
@property (readonly) NSMutableArray *nsOutputNotifications;
@property (readonly) NSMutableArray *nsRoutingNotifications;
@property (retain) PLEntryNotificationOperatorComposition *accessoryPowerCallback;
@property (retain) PLNSNotificationOperatorComposition *thermalMonitorListener;
@property (retain) PLXPCListenerOperatorComposition *audioAppXPCListener;
@property (retain) PLXPCListenerOperatorComposition *screenMirroringXPCListener;
@property (retain) PLXPCListenerOperatorComposition *speakerAmpXPCListener;
@property (retain) PLXPCListenerOperatorComposition *hapticsXPCListener;
@property (retain) PLXPCListenerOperatorComposition *hapticsAssertionXPCListener;
@property (retain) PLXPCListenerOperatorComposition *hapticsRunningCountListener;
@property (retain) PLXPCListenerOperatorComposition *RMSLoggingXPCListener;
@property (retain) PLXPCListenerOperatorComposition *shazamRecordingXPCListener;
@property (retain) PLXPCListenerOperatorComposition *mutedTalkerDetectionXPCListener;
@property (retain) PLEntry *entryRoutingOld;
@property BOOL audioIsActive;
@property (retain) NSArray *activePIDs;
@property BOOL headsetIsPlayingAudio;
@property BOOL speakerIsPlayingAudio;
@property double currentVolume;
@property (readonly) NSString *audioHardware;
@property (readonly) NSDictionary *audioPowerModel;
@property (retain) NSDate *lastAudioStateChangeDate;
@property (retain, nonatomic) AudioDevice *defaultOutputDevice;
@property (retain, nonatomic) AudioDevice *defaultInputDevice;
@property (copy, nonatomic) id /* block */ defaultOutputDeviceHandlerBlock;
@property (copy, nonatomic) id /* block */ defaultInputDeviceHandlerBlock;

+ (void)load;
+ (id)entryEventPointDefinitionAudioApp;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventIntervalDefinitionRMSLogging;
+ (id)entryEventForwardDefinitionRouting;
+ (id)entryEventForwardDefinitionNowPlaying;
+ (id)entryEventPointDefinitionSpeakerAmp;
+ (id)entryEventForwardDefinitionHapticsRunningCount;
+ (id)entryEventForwardDefinitionMutedTalkerDetection;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionHapticsAssertion;
+ (id)entryEventPointDefinitionHaptics;
+ (id)entryEventIntervalDefinitionShazamRecording;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventForwardDefinitionOutput;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitionAudioDevice;
+ (id)entryEventForwardDefinitions;

- (void)initOperatorDependancies;
- (BOOL)muted;
- (BOOL)initDefaultAudioDevice:(BOOL)a0;
- (id)init;
- (void)addDefaultAudioDeviceListener:(BOOL)a0;
- (id)nowPlayingAppBundleID:(id)a0;
- (void)logEventPointSpeakerAmp:(id)a0;
- (void)log;
- (id)returnVolumeOrOutPutCategory:(int)a0;
- (void)logEventPointHapticsAssertion:(id)a0;
- (void)logEventForwardHapticsRunningCount:(id)a0;
- (id)volume;
- (id)activeRoute;
- (id)outputCategory;
- (void)logEventForwardAudioDevice:(id)a0;
- (void)createCarPlayAccountingEvents:(id)a0;
- (double)audioPowerForRoute:(id)a0 forVolume:(double)a1;
- (void)handleLightningStatusCallback:(id)a0;
- (BOOL)shouldModelAudioPowerSpeakerTemp;
- (void).cxx_destruct;
- (void)logEventIntervalRMSLogging:(id)a0;
- (void)handleNowPlayingApplicationIsPlayingDidChange:(id)a0;
- (void)setupAVSystemController;
- (void)logEventForwardMutedTalkerDetection:(id)a0;
- (void)modelAudioPowerSpeaker:(id)a0;
- (void)createBluetoothAccountingEvents:(id)a0;
- (BOOL)headphonesConnected;
- (id)buildCallBack:(id)a0 withGroup:(BOOL)a1 withHandler:(id /* block */)a2;
- (void)createAudioAccountingEvents:(id)a0;
- (void)modelAudioPower;
- (void)logEventPointAudioApp:(id)a0;
- (void)logEventPointHaptics:(id)a0;
- (void)createAirPlayAccountingEvents:(id)a0;
- (void)logEventForwardRouting;
- (void)logEventForwardOutput;
- (void)modelAudioPowerCodec:(id)a0;
- (void)logEventIntervalShazamRecording:(id)a0;
- (BOOL)headsetHasInput;
- (double)convertSpeakerProtectionModeledPowerToTotalSpeakerPower:(double)a0;
- (void)closeAudioAccountingEvents;
- (double)modelAudioPowerWithVolume:(double)a0;

@end
