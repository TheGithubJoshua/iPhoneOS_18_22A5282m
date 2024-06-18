@class WebFrame, DOMHTMLElement, UIFont, UITextRange, NSDictionary, UIWebDocumentView, UIDropInteraction, UIView, UIColor, NSString, UITextInteractionAssistant, UIDragInteraction, NSAttributedString, UITextPosition, UITextInputPasswordRules;
@protocol UITextInputDelegate, UITextInputTokenizer;

@interface UITextContentView : UIView <WebPolicyDelegate, WebEditingDelegate, UIWebDraggingDelegate, UIDragInteractionDelegate_Private, UIDropInteractionDelegate_Private, UITextInput, UITextLinkInteraction, UITextInputTraits> {
    WebFrame *m_frame;
    DOMHTMLElement *m_body;
    int m_marginTop;
    double m_bottomBufferHeight;
    BOOL m_editable;
    BOOL m_becomesEditableWithGestures;
    BOOL m_becomingFirstResponder;
    BOOL m_reentrancyGuard;
    BOOL m_hasExplicitTextAlignment;
    BOOL m_allowsEditingTextAttributes;
    BOOL m_usesAttributedText;
    UITextInteractionAssistant *m_interactionAssistant;
    UIWebDocumentView *m_webView;
    UIFont *m_font;
    UIColor *m_textColor;
    long long m_textAlignment;
    UIDragInteraction *m_dragInteraction;
    UIDropInteraction *m_dropInteraction;
}

@property (nonatomic, getter=isEditing) BOOL editing;
@property (weak, nonatomic) id delegate;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long textAlignment;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } selectedRange;
@property (nonatomic, getter=isEditable) BOOL editable;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } selectionInset;
@property (nonatomic) BOOL scrollsSelectionOnWebDocumentChanges;
@property (nonatomic) BOOL allowsEditingTextAttributes;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic, getter=isDragInteractionEnabled) BOOL dragInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
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

+ (id)excludedElementsForHTML;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForPosition:(id)a0;
- (void)startAutoscroll:(struct CGPoint { double x0; double x1; })a0;
- (void)toggleBoldface:(id)a0;
- (unsigned long long)dataDetectorTypes;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectionRange;
- (void)replace:(id)a0;
- (id)positionFromPosition:(id)a0 inDirection:(long long)a1 offset:(long long)a2;
- (id)selectionRectsForRange:(id)a0;
- (void)decreaseSize:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstRectForRange:(id)a0;
- (void)setSelectionWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)selectAll;
- (id)selectedText;
- (id)initWithCoder:(id)a0;
- (BOOL)hasSelection;
- (id)selectionView;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)webView;
- (long long)baseWritingDirectionForPosition:(id)a0 inDirection:(long long)a1;
- (void)_define:(id)a0;
- (void)endSelectionChange;
- (long long)comparePosition:(id)a0 toPosition:(id)a1;
- (id)interactionAssistant;
- (BOOL)dragInteractionEnabled;
- (void)setSelectionGranularity:(long long)a0;
- (id)positionFromPosition:(id)a0 offset:(long long)a1;
- (long long)selectionGranularity;
- (id)textRangeFromPosition:(id)a0 toPosition:(id)a1;
- (void)unmarkText;
- (void)copy:(id)a0;
- (void)didMoveToSuperview;
- (void)selectAll:(id)a0;
- (void)dropInteraction:(id)a0 item:(id)a1 willAnimateDropWithAnimator:(id)a2;
- (void)_didScroll;
- (void)setBaseWritingDirection:(long long)a0 forRange:(id)a1;
- (id)_proxyTextInput;
- (BOOL)hasMarkedText;
- (id)textInputTraits;
- (id)dragInteraction:(id)a0 previewForLiftingItem:(id)a1 session:(id)a2;
- (void)removeFromSuperview;
- (void)beginSelectionChange;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isFirstResponder;
- (void)dropInteraction:(id)a0 concludeDrop:(id)a1;
- (void)_insertAttributedTextWithoutClosingTyping:(id)a0;
- (long long)_dropInteraction:(id)a0 dataOwnerForSession:(id)a1;
- (long long)_dragInteraction:(id)a0 dataOwnerForAddingToSession:(id)a1 withTouchAtPoint:(struct CGPoint { double x0; double x1; })a2;
- (BOOL)becomeFirstResponder;
- (void)insertDictationResult:(id)a0 withCorrectionIdentifier:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)makeTextWritingDirectionLeftToRight:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForDictationResultPlaceholder:(id)a0;
- (BOOL)keyboardInputChanged:(id)a0;
- (void)makeTextWritingDirectionRightToLeft:(id)a0;
- (void)setOffset:(struct CGPoint { double x0; double x1; })a0;
- (long long)_dragInteraction:(id)a0 dataOwnerForSession:(id)a1;
- (void)toggleItalics:(id)a0;
- (void)pasteAndMatchStyle:(id)a0;
- (void)setMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_addShortcut:(id)a0;
- (id)undoManager;
- (void)_translate:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)keyboardInput:(id)a0 shouldReplaceTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (id)textStylingAtPosition:(id)a0 inDirection:(long long)a1;
- (id)positionWithinRange:(id)a0 farthestInDirection:(long long)a1;
- (struct CGPoint { double x0; double x1; })offset;
- (void)_promptForReplace:(id)a0;
- (BOOL)canResignFirstResponder;
- (void)_populateArchivedSubviews:(id)a0;
- (void)scrollRangeToVisible:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (long long)offsetFromPosition:(id)a0 toPosition:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidEnd:(id)a1;
- (void)select:(id)a0;
- (void)paste:(id)a0;
- (void).cxx_destruct;
- (id)dropInteraction:(id)a0 previewForDroppingItem:(id)a1 withDefault:(id)a2;
- (id)characterRangeAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (id)fontForCaretSelection;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRect;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animated:(BOOL)a1;
- (void)setDataDetectorTypes:(unsigned long long)a0;
- (id)metadataDictionariesForDictationResults;
- (BOOL)resignFirstResponder;
- (id)dragInteraction:(id)a0 previewForCancellingItem:(id)a1 withDefault:(id)a2;
- (void)makeTextWritingDirectionNatural:(id)a0;
- (id)textInRange:(id)a0;
- (void)_showTextStyleOptions:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_selectionClipRect;
- (void)setBottomBufferHeight:(double)a0;
- (void)removeTextPlaceholder:(id)a0;
- (void)dragInteraction:(id)a0 willAnimateLiftWithAnimator:(id)a1 session:(id)a2;
- (void)dealloc;
- (id)insertTextPlaceholderWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (BOOL)canBecomeFirstResponder;
- (void)keyboardInputChangedSelection:(id)a0;
- (id)characterRangeByExtendingPosition:(id)a0 inDirection:(long long)a1;
- (void)updateSelection;
- (void)deleteBackward;
- (void)cut:(id)a0;
- (id)supportedPasteboardTypesForCurrentSelection;
- (void)increaseSize:(id)a0;
- (void)toggleUnderline:(id)a0;
- (void)scrollSelectionToVisible:(BOOL)a0;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (void)_transliterateChinese:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)dragInteraction:(id)a0 session:(id)a1 didEndWithOperation:(unsigned long long)a2;
- (void)replaceRange:(id)a0 withText:(id)a1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)keyboardInputShouldDelete:(id)a0;
- (void)removeDictationResultPlaceholder:(id)a0 willInsertResult:(BOOL)a1;
- (void)cancelAutoscroll;
- (void)dropInteraction:(id)a0 sessionDidEnter:(id)a1;
- (void)insertText:(id)a0;
- (id)automaticallySelectedOverlay;
- (void)_share:(id)a0;
- (id)closestPositionToPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)closestPositionToPoint:(struct CGPoint { double x0; double x1; })a0 withinRange:(id)a1;
- (BOOL)keyboardInput:(id)a0 shouldInsertText:(id)a1 isMarkedText:(BOOL)a2;
- (void)dropInteraction:(id)a0 sessionDidExit:(id)a1;
- (void)_removeAttribute:(id)a0 fromString:(id)a1 andSetPropertyWith:(id /* block */)a2 usingValueClass:(Class)a3;
- (void)ensureSelection;
- (unsigned long long)offsetInMarkedTextForSelection:(id)a0;
- (void)setBecomesEditableWithGestures:(BOOL)a0;
- (void)tapLinkAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updateContentEditableAttribute:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleTextRect;
- (unsigned long long)_allowedLinkTypes;
- (void)_hideSelectionCommands;
- (id)_keyboardResponder;
- (void)_removeTextViewPropertiesFromText:(id)a0;
- (BOOL)_restoreFirstResponder;
- (void)_scrollViewDidEndDecelerating;
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)a0;
- (void)_scrollViewWillBeginDragging;
- (void)_sizeChanged;
- (BOOL)becomesEditableWithGestures;
- (double)bottomBufferHeight;
- (void)cancelDataDetectorsWithWebLock;
- (void)cancelInteractionWithLink;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForVisiblePosition:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })closestCaretRectInMarkedTextRangeForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)commonInitWithWebDocumentView:(id)a0 isDecoding:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })constrainedPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)contentAsAttributedString;
- (id)contentAsHTMLString;
- (void)displayScrollerIndicators;
- (id)documentFragmentForPasteboardItemAtIndex:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 webView:(id)a1;
- (BOOL)isInteractingWithLink;
- (void)keyboardDidShow:(id)a0;
- (int)marginTop;
- (BOOL)mightHaveLinks;
- (void)performBecomeEditableTasks;
- (void)performScrollSelectionToVisible:(BOOL)a0;
- (void)recalculateStyle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForScrollToVisible;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForSelection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)resetDataDetectorsResultsWithWebLock;
- (void)setContentToAttributedString:(id)a0;
- (void)setContentToHTMLString:(id)a0;
- (void)setMarginTop:(int)a0;
- (void)setSelectionChangeCallbacksDisabled:(BOOL)a0;
- (void)setSelectionToEnd;
- (void)setSelectionToStart;
- (BOOL)shouldStartDataDetectors;
- (void)startDataDetectorsWithWebLock;
- (void)startInteractionWithLinkAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)startLongInteractionWithLinkAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)styleString;
- (id)undoManagerForWebView:(id)a0;
- (void)updateInteractionWithLinkAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)validateInteractionWithLinkAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 request:(id)a2 frame:(id)a3 decisionListener:(id)a4;
- (void)webViewDidChange:(id)a0;
- (BOOL)willInteractWithLinkAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end