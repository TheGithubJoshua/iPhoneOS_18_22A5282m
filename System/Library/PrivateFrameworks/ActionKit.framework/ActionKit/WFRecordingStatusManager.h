@class SBSStatusBarStyleOverridesAssertion;

@interface WFRecordingStatusManager : NSObject

@property (retain, nonatomic) SBSStatusBarStyleOverridesAssertion *assertion;
@property (nonatomic, getter=isRecording) BOOL recording;

+ (id)sharedManager;

- (void)acquireAssertion;
- (void).cxx_destruct;
- (void)invalidateAssertion;

@end
