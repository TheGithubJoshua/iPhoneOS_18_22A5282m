@protocol UIDictationTipHandlerDelegate;

@interface UIDictationTipModelessInputHandler : NSObject

@property (weak, nonatomic) id<UIDictationTipHandlerDelegate> delegate;
@property (nonatomic) BOOL modelessInputTipDictationStoppedSignal;
@property (nonatomic) BOOL softwareKeyboardInteractionAfterDictationStoppedSignal;
@property (nonatomic) BOOL shouldAttemptToShowModelessTip;

- (BOOL)shouldShowModelessInputTip;
- (id)initWithDelegate:(id)a0;
- (void)triggerAttemptToShowModelessTipFlag;
- (void)userInteractionEndedDuringModelessInputTipDictationStoppedSignal;
- (void)resetDictationTipModelessHandlerSignalFlags;
- (void).cxx_destruct;
- (void)processSoftwareKeyboardInteraction;
- (void)showModelessInputTip;
- (void)processUserInteractionEnded;

@end
