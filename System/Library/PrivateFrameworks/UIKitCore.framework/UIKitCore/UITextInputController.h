@class NSDictionary, RTIInputSystemSourceSession, UITextPosition, UITextInputTraits, UITextChecker, UITextRange, NSString, UIImage, UIResponder, NSAttributedString, NSArray, UITextPlaceholder, UIInputContextHistory, UITextInputPasswordRules, UITextInteractionAssistant, _UITextServiceSession, _UITextUndoOperationTyping, NSSet, UIView, _UITextUndoManager, _UISupplementalLexicon, _UITextInputControllerTokenizer, UITextCheckingController, _UITextLayoutControllerBase, UIColor, NSIndexSet, NSLayoutManager, NSHashTable;
@protocol UITextInput, UITextInputSuggestionDelegate, UITextInputDelegate, UITextInputPrivate, _UITextLayoutController, UITextInputControllerDelegate, UITextInputTokenizer;

@interface UITextInputController : NSObject <UITextInput_Internal, UITextInput, UITextInputAdditions, UIResponderStandardEditActions, UITextInputPrivate> {
    id<UITextInputDelegate> _inputDelegate;
    UITextRange *_selectedTextRange;
    _UITextInputControllerTokenizer *_tokenizer;
    NSLayoutManager *_layoutManager;
    NSHashTable *_observedScrollViews;
    _UITextServiceSession *_learnSession;
    _UITextServiceSession *_shareSession;
    _UITextServiceSession *_lookupSession;
    _UITextServiceSession *_translateSession;
    UITextInputTraits *_textInputTraits;
    struct _NSRange { unsigned long long location; unsigned long long length; } _markedTextRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _markedTextSelection;
    NSDictionary *_markedTextStyle;
    NSAttributedString *_markedText;
    struct { unsigned char delegateRespondsToTextInputShouldBeginEditing : 1; unsigned char delegateRespondsToTextInputShouldChangeCharactersInRangeReplacementText : 1; unsigned char delegateRespondsToTextInputDidChange : 1; unsigned char delegateRespondsToTextInputDidChangeSelection : 1; unsigned char delegateRespondsToTextInputWillChangeSelectionFromCharacterRangeToCharacterRange : 1; unsigned char delegateRespondsToTextInputEditorDidChangeSelection : 1; unsigned char delegateRespondsToTextInputPrepareAttributedTextForInsertion : 1; unsigned char delegateRespondsToTextInputShouldExtendCaretHeight : 1; unsigned char delegateRespondsToIsSingleLine : 1; unsigned char textOrSelectionChangeOriginatesWithKeyboard : 1; unsigned char showingTextStyleOptions : 1; unsigned char undoRedoInProgress : 1; unsigned char textOrSelectionChangeOriginatesWithMarkedText : 1; unsigned char nextSelectionChangeMustUpdate : 1; unsigned char hasTextAlternatives : 1; unsigned char hasDictationResultMetadata : 1; unsigned char suppressDelegateChangeNotifications : 1; } _tiFlags;
    NSArray *_extraItemsBeforeTextStyleOptions;
    UIView<UITextInput> *_firstTextView;
    _UITextUndoManager *_undoManager;
    _UITextUndoOperationTyping *_undoOperationForCoalescing;
    UITextChecker *_textChecker;
    UITextCheckingController *_textCheckingController;
    NSSet *_whitelistedTypingAttributes;
    unsigned long long _dontRemoveAllActionsCount;
    UITextPlaceholder *_textPlaceholder;
}

@property (readonly, nonatomic, getter=_proxyTextInput) UIResponder<UITextInput> *__content;
@property (readonly, nonatomic) UIView<UITextInputPrivate> *_textSelectingContainer;
@property (retain, nonatomic) UITextRange *previousSelectedTextRange;
@property (copy, nonatomic, getter=_emptyStringAttributes, setter=_setEmptyStringAttributes:) NSDictionary *emptyStringAttributes;
@property (nonatomic) int currentUndoGroupType;
@property (nonatomic) BOOL shouldStartUndoGroup;
@property (weak, nonatomic) _UITextLayoutControllerBase<_UITextLayoutController> *textLayoutController;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } selectedRange;
@property (nonatomic) BOOL allowsEditingTextAttributes;
@property (copy, nonatomic) NSDictionary *typingAttributes;
@property (weak, nonatomic) id<UITextInputControllerDelegate> delegate;
@property (nonatomic) BOOL continuousSpellCheckingEnabled;
@property (copy, nonatomic, getter=_whitelistedTypingAttributes, setter=_setWhitelistedTypingAttributes:) NSSet *_whitelistedTypingAttributes;
@property (readonly, nonatomic) NSAttributedString *filteredAttributedText;
@property (copy) UITextRange *selectedTextRange;
@property (readonly, nonatomic) UITextRange *markedTextRange;
@property (copy, nonatomic) NSDictionary *markedTextStyle;
@property (readonly, nonatomic) UITextPosition *beginningOfDocument;
@property (readonly, nonatomic) UITextPosition *endOfDocument;
@property (weak, nonatomic) id<UITextInputDelegate> inputDelegate;
@property (readonly, nonatomic) id<UITextInputTokenizer> tokenizer;
@property (readonly, nonatomic) UIView *textInputView;
@property (nonatomic) long long selectionAffinity;
@property (readonly, nonatomic) id insertDictationResultPlaceholder;
@property (readonly, nonatomic) BOOL hasText;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isEditable) BOOL editable;
@property (readonly, nonatomic, getter=isEditing) BOOL editing;
@property (readonly, nonatomic, getter=_caretRect) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } caretRect;
@property (readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;
@property (nonatomic) long long selectionGranularity;
@property (readonly, nonatomic) long long cursorBehavior;
@property (readonly, nonatomic) id<UITextInputSuggestionDelegate> textInputSuggestionDelegate;
@property (nonatomic) long long _textInputSource;
@property (readonly, nonatomic) RTIInputSystemSourceSession *_rtiSourceSession;
@property (readonly, nonatomic) BOOL supportsImagePaste;
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

+ (BOOL)_shouldUseStandardTextScaling:(id)a0;

- (void)removeSpellingMarkersFromWordInRange:(id)a0;
- (void)clearText;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForPosition:(id)a0;
- (void)_moveCurrentSelection:(int)a0;
- (void)toggleBoldface:(id)a0;
- (void)preheatTextChecker;
- (void)_transpose;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })nsRangeForTextRange:(id)a0;
- (id)_moveDown:(BOOL)a0 withHistory:(id)a1;
- (void)_deleteToStartOfLine;
- (id)_moveLeft:(BOOL)a0 withHistory:(id)a1;
- (void)replace:(id)a0;
- (id)positionFromPosition:(id)a0 inDirection:(long long)a1 offset:(long long)a2;
- (id)selectionRectsForRange:(id)a0;
- (void)decreaseSize:(id)a0;
- (id)_moveUp:(BOOL)a0 withHistory:(id)a1;
- (id)validAnnotations;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstRectForRange:(id)a0;
- (void)_setSelectionToPosition:(id)a0;
- (id)_rangeOfText:(id)a0 endingAtPosition:(id)a1;
- (void)selectAll;
- (unsigned int)_characterBeforeCaretSelection;
- (id)textChecker;
- (void)changingContextWithTrigger:(id)a0;
- (id)_attributedStringForInsertionOfAttributedString:(id)a0;
- (void)_setSelectedRangeToEndIfNecessary;
- (id)selectionView;
- (void)_setMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)addTextAlternativesDisplayStyle:(long long)a0 toRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)_isDisplayingShareViewController;
- (id)_textRangeFromNSRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (long long)baseWritingDirectionForPosition:(id)a0 inDirection:(long long)a1;
- (void)_define:(id)a0;
- (void)_deleteForwardAndNotify:(BOOL)a0;
- (BOOL)_hasMarkedText;
- (void)endSelectionChange;
- (void)_detachFromLayoutManager;
- (long long)comparePosition:(id)a0 toPosition:(id)a1;
- (BOOL)_hasDictationPlaceholder;
- (id)positionFromPosition:(id)a0 offset:(long long)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeAfterCancelDictationIfNecessaryForChangeInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)textRangeFromPosition:(id)a0 toPosition:(id)a1;
- (void)validateCommand:(id)a0;
- (void)_selectionDidScroll:(id)a0;
- (void)unmarkText;
- (void)copy:(id)a0;
- (void)selectAll:(id)a0;
- (void)setBaseWritingDirection:(long long)a0 forRange:(id)a1;
- (void)_clearMarkedText;
- (void)_updateEmptyStringAttributes;
- (void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)a0;
- (unsigned long long)_validCaretPositionFromCharacterIndex:(unsigned long long)a0 downstream:(BOOL)a1;
- (id)_fontForCaretSelection;
- (void)_textContainerDidChangeView:(id)a0;
- (void)beginSelectionChange;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)_keyInput;
- (id)_moveToEndOfDocument:(BOOL)a0 withHistory:(id)a1;
- (BOOL)_delegateShouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementText:(id)a1;
- (void)_removeShareController;
- (void)_insertAttributedTextWithoutClosingTyping:(id)a0;
- (void)checkSpellingForSelectionChangeIfNecessary;
- (void)_sendDelegateWillChangeNotificationsForText:(BOOL)a0 selection:(BOOL)a1;
- (id)_newAttributedStringForInsertionOfText:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)removeTextPlaceholder:(id)a0 notifyInputDelegate:(BOOL)a1;
- (id)_rangeOfEnclosingWord:(id)a0;
- (void)insertDictationResult:(id)a0 withCorrectionIdentifier:(id)a1;
- (id)_moveToStartOfWord:(BOOL)a0 withHistory:(id)a1;
- (void)_scrollRectToVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animated:(BOOL)a1;
- (void)makeTextWritingDirectionLeftToRight:(id)a0;
- (BOOL)_selectionAtDocumentStart;
- (BOOL)_isDisplayingLookupViewController;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForDictationResultPlaceholder:(id)a0;
- (void)makeTextWritingDirectionRightToLeft:(id)a0;
- (void)changeWillBeUndone:(id)a0;
- (int)_indexForTextPosition:(id)a0;
- (void)alignRight:(id)a0;
- (void)toggleItalics:(id)a0;
- (id)_moveToStartOfParagraph:(BOOL)a0 withHistory:(id)a1;
- (id)_clampedpositionFromPosition:(id)a0 offset:(int)a1;
- (void)_invalidateTypingAttributes;
- (id)_fullRange;
- (void)pasteAndMatchStyle:(id)a0;
- (void)setMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_invalidateEmptyStringAttributes;
- (void)alignCenter:(id)a0;
- (id)_findPleasingWordBoundaryFromPosition:(id)a0;
- (void)appendUndoOperation:(id)a0 newGroup:(BOOL)a1;
- (id)_moveToStartOfDocument:(BOOL)a0 withHistory:(id)a1;
- (BOOL)_isDisplayingShortcutViewController;
- (unsigned int)_characterInRelationToRangedSelection:(int)a0;
- (void)_toggleFontTrait:(unsigned int)a0;
- (void)_addShortcut:(id)a0;
- (id)undoManager;
- (void)removeTextStylingFromString:(id)a0;
- (id)_attributesForInsertionOfText:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)pasteItemProviders:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_nsrangeForTextRange:(id)a0;
- (id)_senderForDelegateNotifications;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)a0 replacementText:(id)a1;
- (id)_rangeOfSmartSelectionIncludingRange:(id)a0;
- (void)removeEmojiAlternatives;
- (void)_translate:(id)a0;
- (void)_setInternalGestureRecognizers;
- (BOOL)_isEmptySelection;
- (void)_setSelectedTextRange:(id)a0 withAffinityDownstream:(BOOL)a1;
- (BOOL)_shouldHandleResponderAction:(SEL)a0;
- (void)_validateCommand:(id)a0 forFont:(id)a1 traits:(int)a2;
- (BOOL)dontRemoveAllActions;
- (BOOL)_isSecureTextEntry;
- (void)signalDictationSelectionTip:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)_textInputTraits;
- (void)alignLeft:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_selectedNSRange;
- (long long)writingDirectionAtPosition:(id)a0;
- (void)_expandSelectionToStartOfWordBeforeCaretSelection;
- (void)_changeTextAlignment:(long long)a0 undoString:(id)a1;
- (id)_setHistory:(id)a0 withExtending:(BOOL)a1 withAnchor:(int)a2 withAffinityDownstream:(BOOL)a3;
- (void)_deleteByWord;
- (id)_rangeOfParagraphEnclosingPosition:(id)a0;
- (BOOL)_canHandleResponderAction:(SEL)a0;
- (id)textStylingAtPosition:(id)a0 inDirection:(long long)a1;
- (void)checkSpellingForWordInRange:(id)a0;
- (id)_textColorForCaretSelection;
- (id)rangeWithTextAlternatives:(id *)a0 atPosition:(id)a1;
- (id)_firstTextView;
- (id)positionWithinRange:(id)a0 farthestInDirection:(long long)a1;
- (void)stopCoalescing;
- (id)_newAttributedStringForInsertionOfAttributedText:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)annotatedSubstringForRange:(id)a0;
- (void)_setCaretSelectionAtEndOfSelection;
- (id)initWithTextLayoutController:(id)a0;
- (void)scheduleUndoOperationForType:(int)a0 actionName:(id)a1 previousSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 replacementText:(id)a3;
- (id)_attributesForReplacementInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_promptForReplace:(id)a0;
- (void)_selectAll;
- (void)_extendCurrentSelection:(int)a0;
- (id)_moveToEndOfParagraph:(BOOL)a0 withHistory:(id)a1;
- (void)_ensureSelectionVisible;
- (id)_rangeOfLineEnclosingPosition:(id)a0;
- (void)_expandSelectionToBackwardDeletionClusterWithReinsertionOut:(id *)a0;
- (void)_copySelectionToClipboard:(id)a0;
- (void)_copySelectionToClipboard;
- (void)_insertAttributedText:(id)a0 fromKeyboard:(BOOL)a1;
- (void)undoWillChangeText;
- (void)_pasteAndMatchStyle:(BOOL)a0;
- (id)_moveToStartOfLine:(BOOL)a0 withHistory:(id)a1;
- (void)_addToTypingAttributes:(id)a0 value:(id)a1;
- (void)removeAlternativesForCurrentWord;
- (BOOL)_range:(id)a0 isEqualToRange:(id)a1;
- (void)scrollRangeToVisible:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)insertAttributedText:(id)a0;
- (void)replaceRange:(id)a0 withAnnotatedString:(id)a1 relativeReplacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)_positionFromPosition:(id)a0 pastTextUnit:(long long)a1 inDirection:(long long)a2;
- (void)_setUndoRedoInProgress:(BOOL)a0;
- (long long)offsetFromPosition:(id)a0 toPosition:(id)a1;
- (void)removeAnnotation:(id)a0 forRange:(id)a1;
- (void)_ensureSelectionValid;
- (void)select:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_caretRectForOffset:(unsigned long long)a0;
- (void)paste:(id)a0;
- (void)removeSpellingMarkersForCurrentWord;
- (id)_fallbackFont;
- (void)_forceUnmarkTextDueToEditing;
- (id)_fixupTypingAttributeForAttributes:(id)a0;
- (void).cxx_destruct;
- (BOOL)_range:(id)a0 containsRange:(id)a1;
- (id)characterRangeAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (long long)_resolveNaturalDirection:(long long)a0;
- (id)_rangeOfSentenceEnclosingPosition:(id)a0;
- (void)didEndEditing;
- (id)_wordContainingCaretSelection;
- (void)checkSmartPunctuationForWordInRange:(id)a0;
- (id)textRangeForNSRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)_userEditedTextInfo;
- (void)_setSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)signalDictationInputEvent:(id)a0 insertedText:(id)a1;
- (BOOL)_pasteFromPasteboard:(id)a0 andMatchStyle:(BOOL)a1;
- (unsigned int)_characterAfterCaretSelection;
- (BOOL)shouldStartNewUndoGroup:(id)a0 textGranularity:(long long)a1 operationType:(int)a2;
- (id)_selectedAttributedText;
- (id)_positionAtStartOfWords:(unsigned long long)a0 beforePosition:(id)a1;
- (void)_updateRectsForPlaceholder;
- (void)_replaceCurrentWordWithText:(id)a0;
- (long long)_selectionAffinity;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })markedRange;
- (BOOL)_isDisplayingReferenceLibraryViewController;
- (id)_selectedText;
- (void)updateTextAttributesWithConversionHandler:(id /* block */)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)_selectionAtWordStart;
- (id)_setSelectionRangeWithHistory:(id)a0;
- (void)replaceRange:(id)a0 withAttributedText:(id)a1;
- (void)_deleteToEndOfLine;
- (void)_pasteAttributedString:(id)a0 pasteAsRichText:(BOOL)a1;
- (BOOL)_mightHaveSelection;
- (void)_removeShortcutController;
- (void)_updateFirstTextView;
- (id)metadataDictionariesForDictationResults;
- (id)_findBoundaryPositionClosestToPosition:(id)a0 withGranularity:(long long)a1;
- (id)_intersectionOfRange:(id)a0 andRange:(id)a1;
- (id)_positionFromPosition:(id)a0 inDirection:(long long)a1 offset:(long long)a2 withAffinityDownstream:(BOOL)a3;
- (void)captureTextFromCamera:(id)a0;
- (void)_updateRangeForSmartDelete;
- (BOOL)_usesAsynchronousProtocol;
- (void)coalesceInTextView:(id)a0 actionName:(id)a1 affectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 replacementText:(id)a4;
- (void)makeTextWritingDirectionNatural:(id)a0;
- (BOOL)_isDisplayingTextService;
- (id)_postfixTokensForDictationAttributedText:(id)a0 currentDictationAttributedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 nextDictationAttributedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeToReplaceWhenInsertingText;
- (id)textInRange:(id)a0;
- (void)_showTextStyleOptions:(id)a0;
- (void)_deleteToEndOfParagraph;
- (void)_updateSelectionWithTextRange:(id)a0 withAffinityDownstream:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForTextPlaceholder:(id)a0;
- (id)_textStorage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_selectionClipRect;
- (BOOL)isCoalescing;
- (id)_selectableText;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_selectedRangeWithinMarkedText;
- (void)_undoManagerWillUndo:(id)a0;
- (void)_resetShowingTextStyle:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_selectedRange;
- (id)_findDocumentBoundaryFromPosition:(id)a0;
- (BOOL)_selectionAtDocumentEnd;
- (void)signalDictationDeletionTip;
- (BOOL)supportLetterByLetterUndo;
- (void)_textStorageDidProcessEditing:(id)a0;
- (void)pasteItemProviders:(id)a0 matchesStyle:(BOOL)a1;
- (void)removeTextPlaceholder:(id)a0;
- (void)_setAttributedMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_replaceDocumentWithText:(id)a0;
- (void)dealloc;
- (id)insertTextPlaceholderWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)_selectionGeometryChanged;
- (id)_itemProviderForCopyingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)_normalizedStringForRangeComparison:(id)a0;
- (void)_unmarkText;
- (id)_moveRight:(BOOL)a0 withHistory:(id)a1;
- (id)characterRangeByExtendingPosition:(id)a0 inDirection:(long long)a1;
- (id)_rangeOfTextUnit:(long long)a0 enclosingPosition:(id)a1;
- (id)_moveToEndOfLine:(BOOL)a0 withHistory:(id)a1;
- (void)updateSelection;
- (id)_prefixTokensForDictationAttributedText:(id)a0 lastDictationAttributedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 currentDictationAttributedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)attributedTextInRange:(id)a0;
- (void)_deleteBackwardAndNotify:(BOOL)a0;
- (void)deleteBackward;
- (id)_characterPositionForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_setGestureRecognizers;
- (void)cut:(id)a0;
- (void)_deleteForwardByWord;
- (BOOL)_isSystemAttachment:(id)a0;
- (void)_layoutManagerDidCompleteLayout;
- (long long)_opposingDirectionFromDirection:(long long)a0;
- (void)increaseSize:(id)a0;
- (void)_pasteRawAttributedString:(id)a0 asRichText:(BOOL)a1;
- (void)toggleUnderline:(id)a0;
- (BOOL)_hasMarkedTextOrRangedSelection;
- (id)_rangeSpanningTextUnit:(long long)a0 andPosition:(id)a1;
- (id)_positionWithinRange:(id)a0 farthestInDirection:(long long)a1;
- (void)_setAttributedMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 fromKeyboard:(BOOL)a2 useTextStyle:(BOOL)a3;
- (id)insertTextPlaceholderWithSize:(struct CGSize { double x0; double x1; })a0 embeddingType:(long long)a1;
- (void)_transliterateChinese:(id)a0;
- (id)attributedSubstringForMarkedRange;
- (void)replaceRange:(id)a0 withText:(id)a1;
- (void)_sendDelegateChangeNotificationsForText:(BOOL)a0 selection:(BOOL)a1;
- (unsigned int)_characterInRelationToCaretSelection:(int)a0;
- (id)_rectsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_coordinateSelectionChange:(id /* block */)a0;
- (void)_registerUndoOperationForReplacementWithActionName:(id)a0 replacementText:(id)a1;
- (void)alignJustified:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeForBackwardsDelete;
- (id)_parentScrollView;
- (void)registerUndoOperationForType:(int)a0 actionName:(id)a1 affectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 replacementText:(id)a3;
- (void)setAttributedMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_clearSelectionUI;
- (id)_pasteController;
- (void)removeDictationResultPlaceholder:(id)a0 willInsertResult:(BOOL)a1;
- (BOOL)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)a0 forText:(id)a1 checkAutocorrection:(BOOL)a2;
- (id)_fullText;
- (void)_performWhileSuppressingDelegateNotifications:(id /* block */)a0;
- (void)_insertText:(id)a0 fromKeyboard:(BOOL)a1;
- (void)_deleteTextRange:(id)a0;
- (unsigned int)_characterInRelationToPosition:(id)a0 amount:(int)a1;
- (id)_moveToEndOfWord:(BOOL)a0 withHistory:(id)a1;
- (void)insertText:(id)a0;
- (void)_insertDictationResult:(id)a0 withCorrectionIdentifier:(id)a1 replacingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 resultLength:(unsigned long long *)a3;
- (void)notifyTextCheckingControllerForSelectionChange;
- (void)_replaceRange:(id)a0 withAttributedTextFromKeyboard:(id)a1 addingUnderlinesForAlternatives:(BOOL)a2;
- (void)addTextAlternatives:(id)a0;
- (void)undoDidChangeText;
- (BOOL)_range:(id)a0 intersectsRange:(id)a1;
- (void)_share:(id)a0;
- (id)closestPositionToPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_undoRedoInProgress;
- (BOOL)_shouldConsiderTextViewForGeometry:(id)a0;
- (id)closestPositionToPoint:(struct CGPoint { double x0; double x1; })a0 withinRange:(id)a1;
- (id)_rangeFromCurrentRangeWithDelta:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_pasteAttributedString:(id)a0 toRange:(id)a1 completion:(id /* block */)a2;

@end