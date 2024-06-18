@class UITextInputPasswordRules, UIFont, _UIDatePickerCalendarTimeFormat, NSNumberFormatter, UITextRange, UIInputContextHistory, _UIDatePickerCalendarTimeLabelStateMachineContext, UIColor, NSString, _UISupplementalLexicon, UITextField, NSAttributedString, NSIndexSet, UIIndirectScribbleInteraction, _UIDatePickerCalendarTimeValueStore, UIView, UIImage;
@protocol _UIDatePickerCalendarTimeLabelDelegate;

@interface _UIDatePickerCalendarTimeLabel : UIView <UIIndirectScribbleInteractionDelegate, UITextInputTraits_Private, UIKeyInput> {
    UIIndirectScribbleInteraction *_scribbleInteraction;
    UITextField *_hiddenField;
    UIView *_inputView;
    struct CGSize { double width; double height; } _lastSize;
}

@property (class, readonly, nonatomic) BOOL supportsScribbleInteraction;

@property (nonatomic) BOOL allowsTextInput;
@property (nonatomic) unsigned long long insertedDigitCount;
@property (readonly, nonatomic) _UIDatePickerCalendarTimeLabelStateMachineContext *stateContext;
@property (readonly, nonatomic) long long inputScope;
@property (retain, nonatomic) NSNumberFormatter *inputFormatter;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } hourRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } minuteRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } timeOfDayRect;
@property (readonly, nonatomic) BOOL scribbleInteractionIsActive;
@property (retain, nonatomic) _UIDatePickerCalendarTimeFormat *timeFormat;
@property (nonatomic) long long minuteInterval;
@property (nonatomic) BOOL roundsToMinuteInterval;
@property (readonly, nonatomic) long long decrementBehaviour;
@property (weak, nonatomic) id<_UIDatePickerCalendarTimeLabelDelegate> delegate;
@property (copy, nonatomic) UIFont *font;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSAttributedString *attributedText;
@property (copy, nonatomic) NSString *hourText;
@property (copy, nonatomic) NSString *minuteText;
@property (readonly, nonatomic) NSString *timeOfDayText;
@property (readonly, nonatomic) _UIDatePickerCalendarTimeValueStore *inputValue;
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
@property (readonly, nonatomic) BOOL hasText;

- (void)indirectScribbleInteraction:(id)a0 requestElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
- (void)takeTraitsFrom:(id)a0;
- (BOOL)becomeFirstResponder;
- (id)focusGroupIdentifier;
- (void)indirectScribbleInteraction:(id)a0 focusElementIfNeeded:(id)a1 referencePoint:(struct CGPoint { double x0; double x1; })a2 completion:(id /* block */)a3;
- (id)inputView;
- (void)indirectScribbleInteraction:(id)a0 willBeginWritingInElement:(id)a1;
- (void)indirectScribbleInteraction:(id)a0 didFinishWritingInElement:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })indirectScribbleInteraction:(id)a0 frameForElement:(id)a1;
- (void).cxx_destruct;
- (BOOL)_canChangeFirstResponder:(id)a0 toResponder:(id)a1;
- (BOOL)canBecomeFocused;
- (BOOL)resignFirstResponder;
- (BOOL)_wantsPriorityOverFocusUpdates;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (BOOL)canBecomeFirstResponder;
- (void)deleteBackward;
- (void)layoutSubviews;
- (id)keyCommands;
- (BOOL)_suppressSoftwareKeyboard;
- (BOOL)indirectScribbleInteraction:(id)a0 isElementFocused:(id)a1;
- (void)tintColorDidChange;
- (void)insertText:(id)a0;
- (void)_resetTextInput;
- (long long)editingInteractionConfiguration;
- (void)pushCurrentStateIntoUIAndNotify;
- (BOOL)_digits:(unsigned long long *)a0 fromText:(id)a1 count:(long long *)a2;
- (BOOL)_pointIsInsideHourSide:(struct CGPoint { double x0; double x1; })a0;
- (void)_roundInputToClosestIntervalIfNeeded;
- (void)_stateMachineSendEvent:(unsigned long long)a0;
- (BOOL)_treatMinutesAsHoursForState:(unsigned long long)a0;
- (void)_uiTest_becomeFirstResponder;
- (void)_uiTest_resignFirstResponder;
- (void)applyTextAttributesForState:(unsigned long long)a0 inputScope:(long long)a1 updater:(id /* block */)a2;
- (id)attributedTextWithRanges:(struct { struct _NSRange { unsigned long long x0; unsigned long long x1; } x0; struct _NSRange { unsigned long long x0; unsigned long long x1; } x1; struct _NSRange { unsigned long long x0; unsigned long long x1; } x2; struct _NSRange { unsigned long long x0; unsigned long long x1; } x3; } *)a0;
- (void)beginEditingWheels;
- (void)didReceiveDownArrowKey:(id)a0;
- (void)didReceiveLeftArrowKey:(id)a0;
- (void)didReceiveRightArrowKey:(id)a0;
- (void)didReceiveUpArrowKey:(id)a0;
- (void)didTapInputLabel:(id)a0;
- (BOOL)displaysTimeOfDayLabel;
- (void)endEditingWheels;
- (BOOL)indirectScribbleInteraction:(id)a0 shouldDelayFocusForElement:(id)a1;
- (id)initWithTimeFormat:(id)a0 minuteInterval:(long long)a1;
- (BOOL)processTapOutside;
- (void)pushCurrentStateIntoUI;
- (void)setInputScope:(long long)a0;
- (void)stateMachineUpdateFromState:(unsigned long long)a0 toState:(unsigned long long)a1;
- (void)wheelChanged;
- (void)willBeginWritingInScribbleInteraction;

@end