@class SiriTestingContext;

@interface SASTestingInputController : NSObject

@property (readonly, nonatomic) SiriTestingContext *preloadedTestingInput;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_registerForTestingNotifications;
- (void)_testingAudioInputPathsDidChange:(id)a0;
- (void)_testingStringsDidChange:(id)a0;
- (id)dequeuePreloadedTestingContext;

@end
