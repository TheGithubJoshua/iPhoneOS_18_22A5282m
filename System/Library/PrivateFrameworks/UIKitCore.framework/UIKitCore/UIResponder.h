@class UIView, UITextInputMode, NSString, NSArray, NSUndoManager, UITextInputAssistantItem, NSUserActivity, UIInputViewController, UIPasteConfiguration;
@protocol UITextInput, _UICopyConfigurationReading, UITextInputPrivate, UIActivityItemsConfigurationReading;

@interface UIResponder : NSObject <UIActivityItemsConfigurationProviding, UITextInput_Internal, UITextInputAdditions, UIUserActivityRestoring, _UIStateRestorationContinuation, _UITouchesEventRespondable, _UIPressesEventRespondable, UIResponderStandardEditActions> {
    struct { unsigned char hasOverrideClient : 1; unsigned char hasOverrideHost : 1; unsigned char hasInputAssistantItem : 1; unsigned char suppressSoftwareKeyboard : 1; unsigned char conformsToUIKeyInputIsSet : 1; unsigned char conformsToUIKeyInput : 1; } _responderFlags;
}

@property (retain, nonatomic) id<UIActivityItemsConfigurationReading> activityItemsConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=_proxyTextInput) UIResponder<UITextInput> *__content;
@property (readonly, nonatomic) UIView<UITextInputPrivate> *_textSelectingContainer;
@property (readonly, nonatomic, getter=isEditable) BOOL editable;
@property (readonly, nonatomic, getter=isEditing) BOOL editing;
@property (readonly, nonatomic, getter=_caretRect) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } caretRect;
@property (readonly, nonatomic) UIView *inputView;
@property (readonly, nonatomic) UIView *inputAccessoryView;
@property (readonly, nonatomic) UITextInputAssistantItem *inputAssistantItem;
@property (readonly, nonatomic) UIInputViewController *inputViewController;
@property (readonly, nonatomic) UIInputViewController *inputAccessoryViewController;
@property (readonly, nonatomic) UITextInputMode *textInputMode;
@property (readonly, nonatomic) NSString *textInputContextIdentifier;
@property (readonly, nonatomic) NSArray *keyCommands;
@property (retain, nonatomic) NSUserActivity *userActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *restorationIdentifier;
@property (retain, nonatomic, setter=_setCopyConfiguration:) id<_UICopyConfigurationReading> _copyConfiguration;
@property (readonly, nonatomic) UIResponder *_editingDelegate;
@property (readonly, nonatomic) UIPasteConfiguration *_effectivePasteConfiguration;
@property (readonly, nonatomic) UIResponder *nextResponder;
@property (readonly, nonatomic) BOOL canBecomeFirstResponder;
@property (readonly, nonatomic) BOOL canResignFirstResponder;
@property (readonly, nonatomic) BOOL isFirstResponder;
@property (readonly, nonatomic) NSUndoManager *undoManager;
@property (readonly, nonatomic) long long editingInteractionConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_callBecomeFirstResponder:(id)a0 withIntent:(unsigned long long)a1;
+ (BOOL)_callResignFirstResponder:(id)a0 withIntent:(unsigned long long)a1;
+ (void)_cleanupAllStateRestorationTables;
+ (void)_cleanupStateRestorationObjectIdentifierTrackingTables;
+ (unsigned long long)_currentChangeIntent;
+ (void)_finishStateRestoration;
+ (id)_globalFirstResponder;
+ (void)_prepareForSecondPassStateRestoration;
+ (void)_setRestoredIdentifierPathForObject:(id)a0 identifierPath:(id)a1;
+ (void)_startDeferredTrackingObjectsWithIdentifiers;
+ (void)_stopDeferredTrackingObjectsWithIdentifiers;
+ (void)_updateStateRestorationIdentifierMap;
+ (void)clearTextInputContextIdentifier:(id)a0;
+ (id)objectWithRestorationIdentifierPath:(id)a0;

- (void)_moveCurrentSelection:(int)a0;
- (void)_transpose;
- (id)_moveDown:(BOOL)a0 withHistory:(id)a1;
- (void)_deleteToStartOfLine;
- (id)_moveLeft:(BOOL)a0 withHistory:(id)a1;
- (id)_moveUp:(BOOL)a0 withHistory:(id)a1;
- (void)_setSelectionToPosition:(id)a0;
- (id)_rangeOfText:(id)a0 endingAtPosition:(id)a1;
- (void)_becomeFirstResponder;
- (unsigned int)_characterBeforeCaretSelection;
- (void)remoteControlReceivedWithEvent:(id)a0;
- (void)_setMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)encodeRestorableStateWithCoder:(id)a0;
- (id)_textRangeFromNSRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_define:(id)a0;
- (id)_window;
- (id)_deepestActionResponder;
- (void)_didChangeDeepestUnambiguousResponder;
- (void)_deleteForwardAndNotify:(BOOL)a0;
- (BOOL)_hasMarkedText;
- (void)endSelectionChange;
- (void)_didChangeToFirstResponder:(id)a0;
- (id)_effectiveActivityItemsConfiguration;
- (id)_primaryContentResponder;
- (id)interactionAssistant;
- (void)decodeRestorableStateWithCoder:(id)a0;
- (BOOL)_disableAutomaticKeyboardBehavior;
- (void)validateCommand:(id)a0;
- (id)textInputView;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)a0;
- (id)_fontForCaretSelection;
- (void)beginSelectionChange;
- (id)_keyInput;
- (long long)selectionAffinity;
- (id)_moveToEndOfDocument:(BOOL)a0 withHistory:(id)a1;
- (BOOL)becomeFirstResponder;
- (id)_rangeOfEnclosingWord:(id)a0;
- (id)_moveToStartOfWord:(BOOL)a0 withHistory:(id)a1;
- (void)_scrollRectToVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animated:(BOOL)a1;
- (BOOL)_selectionAtDocumentStart;
- (void)_moveWithEvent:(id)a0;
- (void)_wheelChangedWithEvent:(id)a0;
- (int)_indexForTextPosition:(id)a0;
- (id)_moveToStartOfParagraph:(BOOL)a0 withHistory:(id)a1;
- (id)_clampedpositionFromPosition:(id)a0 offset:(int)a1;
- (id)_fullRange;
- (id)_findPleasingWordBoundaryFromPosition:(id)a0;
- (void)touchesEstimatedPropertiesUpdated:(id)a0;
- (id)_moveToStartOfDocument:(BOOL)a0 withHistory:(id)a1;
- (unsigned int)_characterInRelationToRangedSelection:(int)a0;
- (void)_addShortcut:(id)a0;
- (void)pasteItemProviders:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_nsrangeForTextRange:(id)a0;
- (id)_rangeOfSmartSelectionIncludingRange:(id)a0;
- (void)_translate:(id)a0;
- (BOOL)_isEmptySelection;
- (void)_setSelectedTextRange:(id)a0 withAffinityDownstream:(BOOL)a1;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_selectedNSRange;
- (void)_expandSelectionToStartOfWordBeforeCaretSelection;
- (id)_setHistory:(id)a0 withExtending:(BOOL)a1 withAnchor:(int)a2 withAffinityDownstream:(BOOL)a3;
- (void)_deleteByWord;
- (id)_rangeOfParagraphEnclosingPosition:(id)a0;
- (id)_textColorForCaretSelection;
- (void)_lookup:(id)a0;
- (void)_setCaretSelectionAtEndOfSelection;
- (BOOL)_requiresKeyboardWhenFirstResponder;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)_didChangeDeepestActionResponder;
- (void)_selectAll;
- (void)_extendCurrentSelection:(int)a0;
- (id)_moveToEndOfParagraph:(BOOL)a0 withHistory:(id)a1;
- (void)_controlTouchBegan:(id)a0 withEvent:(id)a1;
- (id)_rangeOfLineEnclosingPosition:(id)a0;
- (void)_expandSelectionToBackwardDeletionClusterWithReinsertionOut:(id *)a0;
- (id)_moveToStartOfLine:(BOOL)a0 withHistory:(id)a1;
- (BOOL)_range:(id)a0 isEqualToRange:(id)a1;
- (id)textInputSuggestionDelegate;
- (id)targetForAction:(SEL)a0 withSender:(id)a1;
- (id)_positionFromPosition:(id)a0 pastTextUnit:(long long)a1 inDirection:(long long)a2;
- (void)_handleKeyUIEvent:(id)a0;
- (BOOL)_range:(id)a0 containsRange:(id)a1;
- (id)_rangeOfSentenceEnclosingPosition:(id)a0;
- (BOOL)_canChangeFirstResponder:(id)a0 toResponder:(id)a1;
- (id)_wordContainingCaretSelection;
- (unsigned int)_characterAfterCaretSelection;
- (id)_positionAtStartOfWords:(unsigned long long)a0 beforePosition:(id)a1;
- (void)_replaceCurrentWordWithText:(id)a0;
- (long long)_selectionAffinity;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)updateTextAttributesWithConversionHandler:(id /* block */)a0;
- (void)updateUserActivityState:(id)a0;
- (BOOL)_selectionAtWordStart;
- (BOOL)_becomeFirstResponderWhenPossible;
- (id)_setSelectionRangeWithHistory:(id)a0;
- (void)_deleteToEndOfLine;
- (BOOL)resignFirstResponder;
- (id)_findBoundaryPositionClosestToPosition:(id)a0 withGranularity:(long long)a1;
- (id)_intersectionOfRange:(id)a0 andRange:(id)a1;
- (BOOL)_wantsPriorityOverFocusUpdates;
- (id)_positionFromPosition:(id)a0 inDirection:(long long)a1 offset:(long long)a2 withAffinityDownstream:(BOOL)a3;
- (void)captureTextFromCamera:(id)a0;
- (BOOL)_usesAsynchronousProtocol;
- (id)_deepestUnambiguousResponder;
- (long long)_textInputSource;
- (long long)_availableTextServices;
- (BOOL)_requiresKeyboardResetOnReload;
- (void)_deleteToEndOfParagraph;
- (id)inputDashboardViewController;
- (void)_updateSelectionWithTextRange:(id)a0 withAffinityDownstream:(BOOL)a1;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_selectionClipRect;
- (id)_selectableText;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_selectedRangeWithinMarkedText;
- (BOOL)_canResignIfContainsFirstResponder;
- (void)set_textInputSource:(long long)a0;
- (id)_findDocumentBoundaryFromPosition:(id)a0;
- (BOOL)_selectionAtDocumentEnd;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)_setAttributedMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_replaceDocumentWithText:(id)a0;
- (void)dealloc;
- (id)_normalizedStringForRangeComparison:(id)a0;
- (void)_unmarkText;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_responderSelectionRectForWindow:(id)a0;
- (id)_moveRight:(BOOL)a0 withHistory:(id)a1;
- (void)_controlTouchMoved:(id)a0 withEvent:(id)a1;
- (id)_rangeOfTextUnit:(long long)a0 enclosingPosition:(id)a1;
- (id)_moveToEndOfLine:(BOOL)a0 withHistory:(id)a1;
- (void)buildMenuWithBuilder:(id)a0;
- (void)_setFirstResponder:(id)a0;
- (id)firstResponder;
- (void)_deleteBackwardAndNotify:(BOOL)a0;
- (void)_setGestureRecognizers;
- (void)_deleteForwardByWord;
- (void)_controlTouchEnded:(id)a0 withEvent:(id)a1;
- (long long)_opposingDirectionFromDirection:(long long)a0;
- (BOOL)_hasMarkedTextOrRangedSelection;
- (id)_rangeSpanningTextUnit:(long long)a0 andPosition:(id)a1;
- (id)_positionWithinRange:(id)a0 farthestInDirection:(long long)a1;
- (BOOL)_isTransitioningFromView:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (unsigned int)_characterInRelationToCaretSelection:(int)a0;
- (id)_responderForBecomeFirstResponder;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)_suppressSoftwareKeyboard;
- (BOOL)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)a0 forText:(id)a1 checkAutocorrection:(BOOL)a2;
- (id)_fullText;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_responderExternalTouchRectForWindow:(id)a0;
- (void)_deleteTextRange:(id)a0;
- (unsigned int)_characterInRelationToPosition:(id)a0 amount:(int)a1;
- (id)_moveToEndOfWord:(BOOL)a0 withHistory:(id)a1;
- (BOOL)_range:(id)a0 intersectsRange:(id)a1;
- (BOOL)_canBecomeFirstResponder;
- (void)_share:(id)a0;
- (id)_rangeFromCurrentRangeWithDelta:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (BOOL)_disableAutomaticKeyboardUI;
- (void)doesNotRecognizeSelector:(SEL)a0;
- (void)gestureStarted:(struct __GSEvent { } *)a0;
- (void)_clearRestorableResponderStatus;
- (id)_firstResponder;
- (BOOL)_isView;
- (BOOL)_resignIfContainsFirstResponder;
- (void)gestureChanged:(struct __GSEvent { } *)a0;
- (void)__createInteractionAssistantIfNecessaryWithMode:(long long)a0;
- (BOOL)__isKindOfUIResponder;
- (void)__prepareInteractionAssistantIfNecessary;
- (void)__tearDownInteractionAssistantIfNecessary;
- (id)__textInteractionFromAssistant;
- (id)_additionalTextInputLocales;
- (BOOL)_allowsChangingFirstResponderForFocusUpdateWithContext:(id)a0;
- (BOOL)_alwaysRequireInlineCandidateView;
- (id)_asTextSelection;
- (void)_becomeFirstResponderAndMakeVisible;
- (void)_beginPinningInputViews;
- (BOOL)_canBecomeFirstResponderWhenPossible;
- (BOOL)_canShowTextServiceForType:(long long)a0;
- (id)_captureOverrideState;
- (void)_checkIsText:(BOOL *)a0 isSecure:(BOOL *)a1 isEditable:(BOOL *)a2 isFormatted:(BOOL *)a3;
- (void)_clearBecomeFirstResponderWhenCapable;
- (void)_clearOverrideHost;
- (void)_clearOverrideNextResponder;
- (void)_completeForwardingTouches:(id)a0 phase:(long long)a1 event:(id)a2;
- (void)_completeForwardingTouches:(id)a0 phase:(long long)a1 event:(id)a2 index:(unsigned long long)a3;
- (BOOL)_conformsToProtocolUIKeyInput;
- (BOOL)_containedInAbsoluteResponderChain;
- (BOOL)_containsResponder:(id)a0;
- (id)_currentOverrideClient;
- (id)_currentOverrideHost;
- (long long)_dataOwnerForCopy;
- (long long)_dataOwnerForPaste;
- (BOOL)_disallowsPresentationOfKeyboardShortcutHUD;
- (long long)_dragDataOwner;
- (long long)_dropDataOwner;
- (id)_effectiveActivityItemsConfigurationAtLocation:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1 sender:(id)a2;
- (id)_effectiveActivityItemsConfigurationForSender:(id)a0;
- (id)_effectiveActivityItemsConfigurationForView:(id)a0 location:(struct CGPoint { double x0; double x1; })a1 sender:(id)a2;
- (BOOL)_enableAutomaticKeyboardPressDone;
- (void)_endPinningInputViews;
- (void)_enumerateKeyCommandsInChainWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (BOOL)_finishResignFirstResponder;
- (BOOL)_finishResignFirstResponderFromBecomeFirstResponder:(BOOL)a0;
- (id)_firstNonnullActivityItemsConfigurationInResponderChainForLocation:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1 skipPresentingViewControllers:(BOOL)a2 sender:(id)a3 target:(id *)a4;
- (void)_gatherKeyResponders:(id)a0 indexOfSelf:(unsigned long long *)a1 visibilityTest:(id /* block */)a2 passingTest:(id /* block */)a3 subviewsTest:(id /* block */)a4;
- (BOOL)_handleActivityItemsConfigurationCanPerformAction:(SEL)a0 sender:(id)a1;
- (BOOL)_handleActivityItemsConfigurationDoesNotHandleSelector:(SEL)a0;
- (BOOL)_handleActivityItemsConfigurationShare:(id)a0;
- (BOOL)_handleActivityItemsConfigurationShare:(id)a0 activityItemsConfiguration:(id)a1;
- (void)_handleGameControllerEvent:(id)a0;
- (void)_handleKeyEvent:(struct __GSEvent { } *)a0;
- (BOOL)_isPinningInputViews;
- (BOOL)_isRootForKeyResponderCycle;
- (BOOL)_isViewController;
- (id)_keyCommandForEvent:(id)a0;
- (id)_keyCommandForEvent:(id)a0 target:(out id *)a1;
- (id)_keyCommands;
- (id)_keyboardResponder;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_lastRectForRange:(id)a0;
- (id)_nextKeyResponder;
- (BOOL)_nextResponderChainContainsResponder:(id)a0;
- (id)_nextResponderOverride;
- (id)_nextResponderThatCanBecomeFirstResponder;
- (id)_nextResponderUsingTraversalStrategy:(unsigned long long)a0;
- (void)_nonDestructivelyResignFirstResponder;
- (void)_notifyFocusEngine;
- (id)_overrideHost;
- (void)_overrideInputAccessoryViewNextResponderWithResponder:(id)a0;
- (void)_overrideInputViewNextResponderWithResponder:(id)a0;
- (void)_overrideNextResponderWithResponder:(id)a0 forType:(long long)a1;
- (BOOL)_ownsInputAccessoryView;
- (void)_preserveResponderOverridesWhilePerforming:(id /* block */)a0;
- (id)_previousKeyResponder;
- (void)_rebuildStateRestorationIdentifierPath;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectToScrollToVisibleInCellInWindow:(id)a0;
- (BOOL)_requiresKeyboardWindowWhenFirstResponder;
- (void)_resignFirstResponder;
- (id)_responderChainDescription;
- (id)_responderForEditing;
- (id)_responderSelectionContainerViewForResponder:(id)a0;
- (id)_responderSelectionImage;
- (id)_responderWindow;
- (id)_restorationIdentifierPath;
- (BOOL)_restoreFirstResponder;
- (void)_restoreOverrideState:(id)a0;
- (void)_setDataOwnerForCopy:(long long)a0;
- (void)_setDataOwnerForPaste:(long long)a0;
- (void)_setDragDataOwner:(long long)a0;
- (void)_setDropDataOwner:(long long)a0;
- (void)_setSuppressSoftwareKeyboard:(BOOL)a0;
- (BOOL)_shouldForwardMovementToFocusEngine:(long long)a0;
- (BOOL)_shouldRestorationInputViewsOnlyWhenKeepingFirstResponder;
- (BOOL)_shouldSkipKeyCommand:(id)a0 forMovement:(long long)a1;
- (id)_showServiceForText:(id)a0 selectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 type:(long long)a2 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 inView:(id)a4;
- (id)_showServiceForText:(id)a0 type:(long long)a1 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 inView:(id)a3;
- (id)_showServiceForType:(long long)a0 withContext:(id)a1;
- (BOOL)_supportsBecomeFirstResponderWhenPossible;
- (void)_tagAsRestorableResponder;
- (id)_targetActionResponderChainDescription;
- (id)_targetCanPerformBlock:(id /* block */)a0;
- (id)_textInteraction;
- (id)_textServicesResponderProxy;
- (id)_ui_findNavigatorResponder;
- (id)_undoManagerForValidatingUndoRedoCommands;
- (id)_userActivity;
- (BOOL)_wantsTargetOfKeyboardEventDeferringEnvironment;
- (void)_willChangeToFirstResponder:(id)a0;
- (void)_windowBecameKey;
- (void)_windowResignedKey;
- (BOOL)canPasteItemProviders:(id)a0;
- (void)gestureEnded:(struct __GSEvent { } *)a0;
- (void)motionBegan:(long long)a0 withEvent:(id)a1;
- (void)motionCancelled:(long long)a0 withEvent:(id)a1;
- (void)motionEnded:(long long)a0 withEvent:(id)a1;
- (id)nextFirstResponder;
- (id)pasteConfiguration;
- (id)recentsAccessoryView;
- (void)reloadInputViews;
- (void)reloadInputViewsWithoutReset;
- (void)restoreUserActivityState:(id)a0;
- (void)scrollWheel:(struct __GSEvent { } *)a0;
- (void)setPasteConfiguration:(id)a0;
- (BOOL)shouldReloadInputViews;

@end