@class UITextInputPasswordRules, VKCTextSelectionLongPressDelegateHandler, UITextRange, UIInputContextHistory, NSDictionary, VKCTextPointerTrackingView, UITextSelectionGrabberSuppressionAssertion, UITextInteraction, UIColor, UILongPressGestureRecognizer, UIDragInteraction, NSString, NSIndexSet, UITextInputStringTokenizer, _UISupplementalLexicon, NSArray, UITextPosition, UIView, UIImage;
@protocol UITextInputDelegate;

@interface VKCImageTextSelectionView_iOS : VKCImageTextSelectionView <UITextInteractionDelegate, VKCTextRecognitionResultTextDelegate, UIDragInteractionDelegate, UIScribbleInteractionDelegatePrivate, UITextInputTraits_Private, _UITextInputRevealItemProvider, _UITextInputTranslationSupport, VKCTextSelectionLongPressHandlerDelegate, UITextInput, UIKeyInput>

@property (class, readonly, nonatomic) BOOL processHasSnapshotDragEntitlement;

@property (retain, nonatomic) UITextInputStringTokenizer *tokenizer;
@property (retain, nonatomic) UITextInteraction *textInteraction;
@property (retain, nonatomic) UIDragInteraction *dragInteraction;
@property (nonatomic) BOOL beginSelectionChangedCalled;
@property (nonatomic) BOOL manuallySettingSelectedRange;
@property (nonatomic) unsigned long long draggedRectEdge;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } preSelectionChangeSelectedRange;
@property (readonly, nonatomic) NSArray *accessibilityElements;
@property (weak, nonatomic) VKCTextPointerTrackingView *textPointerTrackingView;
@property (retain, nonatomic) VKCTextSelectionLongPressDelegateHandler *longPressHandler;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGR;
@property (nonatomic) BOOL initializationComplete;
@property (retain, nonatomic) UITextSelectionGrabberSuppressionAssertion *textSelectionGrabberSuppression;
@property (nonatomic) BOOL useFullDocumentRangeForEmptySelection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *recentInputIdentifier;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } validTextRange;
@property (copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
@property (nonatomic) struct __CFCharacterSet { } *textTrimmingSet;
@property (retain, nonatomic) UIColor *insertionPointColor;
@property (retain, nonatomic) UIColor *selectionBarColor;
@property (retain, nonatomic) UIColor *selectionHighlightColor;
@property (retain, nonatomic) UIImage *selectionDragDotImage;
@property (retain, nonatomic) UIColor *selectionBorderColor;
@property (nonatomic) double selectionBorderWidth;
@property (nonatomic) double selectionCornerRadius;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } selectionEdgeInsets;
@property (retain, nonatomic) UIColor *underlineColorForTextAlternatives;
@property (retain, nonatomic) UIColor *underlineColorForSpelling;
@property (nonatomic) unsigned long long insertionPointWidth;
@property (nonatomic) int textLoupeVisibility;
@property (nonatomic) int textSelectionBehavior;
@property (nonatomic) id textSuggestionDelegate;
@property (nonatomic) BOOL isSingleLineDocument;
@property (nonatomic) BOOL contentsIsSingleValue;
@property (nonatomic) BOOL hasDefaultContents;
@property (nonatomic) BOOL acceptsPayloads;
@property (nonatomic) BOOL acceptsEmoji;
@property (nonatomic) BOOL acceptsInitialEmojiKeyboard;
@property (nonatomic) BOOL acceptsDictationSearchResults;
@property (nonatomic) BOOL useAutomaticEndpointing;
@property (nonatomic) BOOL showDictationButton;
@property (nonatomic) BOOL forceEnableDictation;
@property (nonatomic) BOOL forceDisableDictation;
@property (nonatomic) BOOL forceSpellingDictation;
@property (nonatomic) BOOL forceDefaultDictationInfo;
@property (nonatomic) long long forceDictationKeyboardType;
@property (nonatomic) BOOL preferOnlineDictation;
@property (nonatomic) int emptyContentReturnKeyType;
@property (nonatomic) BOOL returnKeyGoesToNextResponder;
@property (nonatomic) BOOL acceptsFloatingKeyboard;
@property (nonatomic) BOOL forceFloatingKeyboard;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } floatingKeyboardEdgeInsets;
@property (nonatomic) BOOL acceptsSplitKeyboard;
@property (nonatomic) BOOL displaySecureTextUsingPlainText;
@property (nonatomic) BOOL displaySecureEditsUsingPlainText;
@property (nonatomic) BOOL learnsCorrections;
@property (nonatomic) int shortcutConversionType;
@property (nonatomic) BOOL suppressReturnKeyStyling;
@property (nonatomic) BOOL useInterfaceLanguageForLocalization;
@property (nonatomic) BOOL deferBecomingResponder;
@property (nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent;
@property (copy, nonatomic) NSString *autocorrectionContext;
@property (copy, nonatomic) NSString *responseContext;
@property (retain, nonatomic) UIInputContextHistory *inputContextHistory;
@property (nonatomic) BOOL disableInputBars;
@property (nonatomic) BOOL isCarPlayIdiom;
@property (nonatomic) long long textScriptType;
@property (nonatomic) BOOL loadKeyboardsForSiriLanguage;
@property (retain, nonatomic) _UISupplementalLexicon *supplementalLexicon;
@property (retain, nonatomic) UIImage *supplementalLexiconAmbiguousItemIcon;
@property (nonatomic) BOOL disablePrediction;
@property (nonatomic) BOOL hidePrediction;
@property (nonatomic) BOOL disableHandwritingKeyboard;
@property (nonatomic, getter=isDevicePasscodeEntry) BOOL devicePasscodeEntry;
@property (nonatomic) long long preferredKeyboardStyle;
@property (readonly, nonatomic) UITextRange *textRangeForServicesInteraction;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long spellCheckingType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (copy, nonatomic) NSString *textContentType;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (copy) UITextRange *selectedTextRange;
@property (readonly, nonatomic) UITextRange *markedTextRange;
@property (copy, nonatomic) NSDictionary *markedTextStyle;
@property (readonly, nonatomic) UITextPosition *beginningOfDocument;
@property (readonly, nonatomic) UITextPosition *endOfDocument;
@property (weak, nonatomic) id<UITextInputDelegate> inputDelegate;
@property (readonly, nonatomic) UIView *textInputView;
@property (nonatomic) long long selectionAffinity;
@property (readonly, nonatomic) id insertDictationResultPlaceholder;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly, nonatomic, getter=isImageBacked) BOOL imageBacked;

- (id)initWithCoder:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setLongPressDataDetectorsInTextMode:(BOOL)a0;
- (void)_define:(id)a0;
- (void)endSelectionChange;
- (BOOL)isEditable;
- (id)textRangeFromPosition:(id)a0 toPosition:(id)a1;
- (void)unmarkText;
- (void)setSelectedRange:(id)a0;
- (void)copy:(id)a0;
- (id)selectedRange;
- (void)selectAll:(id)a0;
- (void)takeTraitsFrom:(id)a0;
- (void)setBaseWritingDirection:(long long)a0 forRange:(id)a1;
- (id)dragInteraction:(id)a0 previewForLiftingItem:(id)a1 session:(id)a2;
- (void)setRecognitionResult:(id)a0;
- (void)useInteractionOptions:(unsigned long long)a0;
- (BOOL)scribbleInteraction:(id)a0 shouldBeginAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)beginSelectionChange;
- (id)_accessibilityUserTestingChildren;
- (BOOL)becomeFirstResponder;
- (id)_pointerInteractionDelegate;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })preSelectionChangeSelectedRangeForTextRecognitionResult:(id)a0;
- (void)setMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)currentDraggedRectEdge;
- (void)_addShortcut:(id)a0;
- (void)commonInit;
- (void)_translate:(id)a0;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_scribbleInteractionShouldDisableInputAssistant:(id)a0;
- (id)_rvItemForSelectedRange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)targetedDragPreviewWithLabelsForCurrentSelection;
- (void)_lookup:(id)a0;
- (id)text;
- (id)_rvItemInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedRangeForTextRecognitionResult:(id)a0;
- (unsigned long long)draggedRectEdgeForTextRecognitionResult:(id)a0;
- (BOOL)isEditing;
- (void)didLongPress:(id)a0;
- (void)updateSelectionRectsForWindowChange;
- (long long)_availableTextServices;
- (void)unsuppressSelectionViewGrabbers;
- (BOOL)selectable;
- (void)suppressSelectionViewGrabbers;
- (BOOL)longPressHandler:(id)a0 gestureRecognizer:(id)a1 shouldRequireFailureOfGestureRecognizer:(id)a2;
- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (BOOL)canBecomeFirstResponder;
- (void)deleteBackward;
- (void)setHidden:(BOOL)a0;
- (void)replaceRange:(id)a0 withText:(id)a1;
- (id)targetedDragPreviewForCurrentSelection;
- (BOOL)interactionShouldBegin:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)longPressHandler:(id)a0 gestureRecognizer:(id)a1 shouldRecieveTouch:(id)a2;
- (id)_textRangeForActions;
- (void)insertText:(id)a0;
- (void)_share:(id)a0;
- (id)selectedTextPathsConvertedToView:(id)a0;

@end