@class UIDictationTipSelectionHandler, NSString, UIDictationTipInsertionHandler, UIDictationTipPresentationHandler, UIDictationTipEmojiHandler, UIDictationTipDeletionHandler, UIDictationTipModelessInputHandler, UIDictationTipReplacementHandler;

@interface UIDictationTipController : NSObject <UIDictationTipHandlerDelegate>

@property (retain, nonatomic) UIDictationTipPresentationHandler *dictationTipPresentationHandler;
@property (retain, nonatomic) UIDictationTipReplacementHandler *dictationReplacementTipHandler;
@property (retain, nonatomic) UIDictationTipDeletionHandler *dictationDeletionTipHandler;
@property (retain, nonatomic) UIDictationTipEmojiHandler *dictationEmojiTipHandler;
@property (retain, nonatomic) UIDictationTipSelectionHandler *dictationSelectionTipHandler;
@property (retain, nonatomic) UIDictationTipInsertionHandler *dictationInsertionTipHandler;
@property (retain, nonatomic) UIDictationTipModelessInputHandler *dictationTipModelessInputHandler;
@property (copy, nonatomic) id /* block */ delayedTip;
@property (nonatomic) unsigned long long dismissalReasonType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dictationTipPreferenceKey:(long long)a0;

- (id)init;
- (void)recordDictationTipDeletionText:(id)a0;
- (void)simulateTipShowingInstrumentation:(long long)a0;
- (void)triggerModelessInputTipDictationStoppedSignal;
- (void)incrementDictationTipDisplayCount:(long long)a0 stopFutureShowing:(BOOL)a1;
- (void)resetDeletionEventCount;
- (void)signalDictationSelectionTip:(id)a0;
- (void)resetShowModelessTipSignal;
- (long long)getDictationTipSignaled;
- (void).cxx_destruct;
- (id)replaceEmojiInStringWithEmojiDictationCommand:(id)a0;
- (void)processSoftwareKeyboardInteraction;
- (BOOL)modelessTipShown;
- (void)signalDictationDeletionTip:(id)a0;
- (void)signalDictationInsertionTip:(id)a0;
- (void)signalDictationEmojiTip:(id)a0;
- (void)emitTipShowingInstrumentation:(long long)a0;
- (void)signalShowModelessTipIfNeeded;
- (void)presentDelayedTipIfNeeded;
- (void)finalizeSelectionTip;
- (BOOL)dictationTipShown:(long long)a0;
- (long long)currentDeletionEventCount;
- (void)finalizeTextWithTipType:(long long)a0 title:(id)a1 andTipDescription:(id)a2;
- (void)logDictationTipDimissialInstrumentation;
- (void)signalDictationReplacementTip:(id)a0;
- (void)reset;
- (void)markDictationTipPreferenceToShown:(long long)a0;
- (void)addDeletionEventCount:(id)a0 deletedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)showDictationTipWithTitle:(id)a0 description:(id)a1 dictationTipType:(long long)a2;
- (void)processUserInteractionEnded;
- (void)recordDictationTipReplacementText:(id)a0;
- (void)dictationCommandUsed:(unsigned long long)a0 firstTargetString:(id)a1 secondTargetString:(id)a2;

@end
