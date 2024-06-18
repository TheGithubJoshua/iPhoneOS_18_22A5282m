@interface UIDictationControllerAccessibility : __UIDictationControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)startDictation;
- (void)_createDictationPresenterWindowIfNecessary;
- (void)stopDictation;
- (void)updateLastHypothesis:(id)a0 WithNewHypothesis:(id)a1;
- (void)insertSerializedDictationResult:(id)a0 withCorrectionIdentifier:(id)a1;
- (void)cancelDictation;

@end
