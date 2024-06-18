@class SBApplication, SBSStatusBarStyleOverridesAssertion;

@interface SBAudioRecordingManager : NSObject

@property (retain, nonatomic) SBSStatusBarStyleOverridesAssertion *statusBarStyleOverrideAssertion;
@property (readonly, nonatomic) SBApplication *nowRecordingApplication;

- (id)init;
- (void)setNowRecordingAppForActiveAudioRecordingAttributions:(id)a0 callDescriptors:(id)a1;
- (void)verifyBackgroundAudioActivityForApplication:(id)a0;
- (void)_coverSheetDidPresent:(id)a0;
- (BOOL)_callProviderAttributionExistsForAttribution:(id)a0 callDescriptors:(id)a1;
- (void)_removeStatusBarStyleOverrideAssertion;
- (double)_verificationDelayForApplication:(id)a0;
- (void).cxx_destruct;
- (int)_pidForAttribution:(id)a0;
- (void)dealloc;
- (void)_verifyBackgroundAudioActivityForApplication:(id)a0 withDelay:(BOOL)a1;

@end
