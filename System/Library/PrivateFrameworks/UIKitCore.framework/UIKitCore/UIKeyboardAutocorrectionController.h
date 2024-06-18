@class NSHashTable, TIKeyboardCandidate, TIAutocorrectionList;

@interface UIKeyboardAutocorrectionController : NSObject {
    unsigned long long _signpostToken;
    BOOL _requestedAutocorrection;
    BOOL _needsAutocorrection;
    BOOL _hasPendingAutocorrection;
    NSHashTable *_autocorrectionObservers;
}

@property (readonly, nonatomic) TIKeyboardCandidate *autocorrection;
@property (retain, nonatomic) TIAutocorrectionList *autocorrectionList;
@property (retain, nonatomic) TIAutocorrectionList *textSuggestionList;
@property (readonly, nonatomic) BOOL requestedAutocorrection;
@property (nonatomic) unsigned long long maximumNumberOfCandidates;
@property (readonly, nonatomic) BOOL hasActiveObservers;

- (id)init;
- (BOOL)hasAutocorrection;
- (BOOL)hasTextSuggestionCandidates;
- (BOOL)hasProactiveCandidates;
- (BOOL)hasAutofillCandidates;
- (void)requestAutocorrectionWithExecutionContext:(id)a0;
- (void).cxx_destruct;
- (void)updateAfterShiftStateChange;
- (BOOL)hasContinuousPathConversions;
- (void)addAutocorrectionObserver:(id)a0;
- (void)clearAutofillAndTextSuggestions;
- (void)clearAutocorrectionAndNotifyObservers:(BOOL)a0;
- (void)removeAutocorrectionObserver:(id)a0;
- (void)clearAutocorrection;
- (void)setNeedsAutocorrection;

@end
