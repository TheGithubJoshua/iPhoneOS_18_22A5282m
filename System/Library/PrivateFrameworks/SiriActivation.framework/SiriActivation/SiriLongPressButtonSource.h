@class SiriLongPressButtonConfiguration, SiriLongPressButtonConfigurationUpdateManager, NSString, SiriLongPressButtonContext, NSMutableArray;
@protocol SiriLongPressButtonSourceDelegate;

@interface SiriLongPressButtonSource : SiriActivationSource <SiriLongPressButtonConfigurationUpdateDelegate, SiriButtonSource>

@property (nonatomic) long long buttonIdentifier;
@property (retain, nonatomic) NSMutableArray *lock_activityAssertions;
@property (retain, nonatomic) SiriLongPressButtonContext *context;
@property (copy, nonatomic) id /* block */ currentTimeGenerator;
@property (copy, nonatomic) SiriLongPressButtonConfiguration *configuration;
@property (retain, nonatomic) SiriLongPressButtonConfigurationUpdateManager *updateManager;
@property (weak, nonatomic) id<SiriLongPressButtonSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)longPressButtonForIdentifier:(long long)a0;

- (id)_deviceIdentifier;
- (id)init;
- (id)_initWithButtonIdentifier:(long long)a0;
- (id)prepareForActivation;
- (void)didRecognizeLongPress;
- (double)_timestampForSpeechInteractionActivityWithTimestamp:(double)a0;
- (void)stopConfigurationUpdates;
- (id)speechInteractionActivityWithTimestamp:(double)a0;
- (double)longPressInterval;
- (BOOL)_sourceSupportsAutomaticConfigurationUpdates;
- (void).cxx_destruct;
- (BOOL)_shouldReplaceSpeechInteractionActivityTimestampWithPrewarmTimestamp;
- (void)configureConnection;
- (void)requestConfigurationUpdatesBasedOnDeviceSettings;
- (long long)longPressBehavior;
- (void)configurationUpdateManager:(id)a0 configurationDidUpdateForLongPressSource:(id)a1;
- (void)didRecognizeButtonSinglePressUp;
- (id)prepareForActivationWithTimestamp:(double)a0;

@end
