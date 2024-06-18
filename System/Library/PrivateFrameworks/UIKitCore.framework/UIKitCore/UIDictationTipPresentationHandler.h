@interface UIDictationTipPresentationHandler : NSObject

@property (nonatomic) long long dictationTipSignaled;
@property (nonatomic) BOOL tipPresentedInCurrentDictationSession;
@property (nonatomic) BOOL isShowingTip;

- (id)init;
- (BOOL)dictationTipShownOverLimit:(long long)a0;
- (BOOL)tipShownLastDay;
- (BOOL)dictationSelectionTipShown;
- (void)signalTipPresentedInCurrentDictationSession;
- (void)resetDictationTipSignal;
- (BOOL)dictationReplacementTipShown;
- (BOOL)dictationDeletionTipShown;
- (BOOL)dictationCommandTipsEnabled;
- (long long)getDictationTipSignaled;
- (long long)dictationTipDisplayCount:(long long)a0;
- (void)resetHandler;
- (BOOL)shouldSignalDictationTip:(long long)a0;
- (BOOL)dictationInsertionTipShown;
- (BOOL)dictationStopTipShown;
- (BOOL)dictationEmojiTipShown;
- (BOOL)dictationModelessInputTipShown;

@end
