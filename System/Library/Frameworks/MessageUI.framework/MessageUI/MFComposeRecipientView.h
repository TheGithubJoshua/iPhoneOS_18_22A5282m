@class NSMutableDictionary, UIFont, MFModernComposeRecipientAtom, MFCorecipientsIndicatorAtom, UITapGestureRecognizer, NSMutableArray, UIButton, NSString, NSTimer, NSArray, NSCountedSet, _MFMailRecipientTextField, MFComposeRecipient;
@protocol MFComposeRecipientViewDelegate;

@interface MFComposeRecipientView : MFComposeHeaderView <MFCorecipientsIndicatorAtomDelegate, UITextFieldDelegate, UIGestureRecognizerDelegate, MFComposeRecipientAtomDelegate> {
    NSArray *_textFieldConstraints;
    NSCountedSet *_uncommentedAddresses;
    struct __CFDictionary { } *_atomPresentationOptionsByRecipient;
    MFModernComposeRecipientAtom *_selectedAtom;
    MFComposeRecipient *_placeholderRecipient;
    long long _dragSourceOriginalIndex;
    BOOL _picking;
    NSArray *_properties;
    BOOL _parentIsClosing;
    BOOL _deselectOnNextKeyboardInput;
    BOOL _clearSelectionUIAfterFirstResponder;
    NSTimer *_delayTimer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    BOOL _needsReflow;
    BOOL _needsLayoutConstraintUpdate;
    UIFont *_baseFont;
}

@property (retain, nonatomic) MFComposeRecipient *placeholderRecipient;
@property (nonatomic) BOOL didIgnoreFirstResponderResign;
@property (retain, nonatomic) NSMutableDictionary *atoms;
@property (retain, nonatomic) MFCorecipientsIndicatorAtom *corecipientsIndicator;
@property (copy, nonatomic) NSArray *addresses;
@property (nonatomic) BOOL editable;
@property (nonatomic) long long maxRecipients;
@property (nonatomic) double inputDelay;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) _MFMailRecipientTextField *textField;
@property (readonly, nonatomic) NSMutableArray *recipients;
@property (readonly, nonatomic) UIButton *addButton;
@property (readonly, nonatomic) double offsetForRowWithTextField;
@property (readonly, nonatomic) long long numberOfRowsOfTextInField;
@property (nonatomic) BOOL allowsDragAndDrop;
@property (nonatomic) BOOL expanded;
@property (nonatomic) unsigned long long defaultAtomPresentationOptions;
@property (nonatomic, getter=isSeparatorHidden) BOOL separatorHidden;
@property (retain, nonatomic) UIFont *baseFont;
@property (nonatomic) int hideLastAtomComma;
@property (weak, nonatomic) id<MFComposeRecipientViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearText;
- (void)textChanged:(id)a0;
- (void)setProperties:(id)a0;
- (void)addRecipient:(id)a0;
- (void)didMoveToSuperview;
- (void)_tapGestureRecognized:(id)a0;
- (BOOL)becomeFirstResponder;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setProperty:(int)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)setLabel:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)parentWillClose;
- (void)parentDidClose;
- (void).cxx_destruct;
- (id)delegate;
- (void)dealloc;
- (BOOL)hasContent;
- (void)keyboardInputChangedSelection:(id)a0;
- (BOOL)keyboardInputShouldDelete:(id)a0;
- (BOOL)keyboardInput:(id)a0 shouldInsertText:(id)a1 isMarkedText:(BOOL)a2;
- (void)removeRecipient:(id)a0;
- (void)textFieldDidBecomeFirstResponder:(id)a0;
- (void)textFieldDidResignFirstResponder:(id)a0;
- (void)addAddress:(id)a0;
- (BOOL)finishEnteringRecipient;
- (void)_removeAllRecipients;
- (void)reflow;
- (void)_setNeedsReflow;
- (void)composeRecipientAtomSelectNext:(id)a0;
- (void)_setNeedsLayoutConstraintUpdate;
- (void)_addRecord:(void *)a0 identifier:(int)a1;
- (void)_addUncommentedAddress:(id)a0;
- (BOOL)_addable;
- (unsigned long long)_addressAtomPresentationOptionsForRecipient:(id)a0;
- (void)_cancelDelayTimer;
- (void)_delayTimerFired:(id)a0;
- (void)_deleteSelectedAtom;
- (void)_deselectAtom;
- (void)_reflowAnimated:(BOOL)a0;
- (void)_removeAddressAtomPresentationOptionsForRecipient:(id)a0;
- (void)_removeUncommentedAddress:(id)a0;
- (BOOL)_shouldShowCorecipientsIndicatorAtom;
- (double)_topRowTextWidth;
- (void)_updateLayoutConstraintsAndGetNumberOfRows:(out unsigned long long *)a0 textFieldWillBeLastRow:(out BOOL *)a1;
- (void)addButtonClicked:(id)a0;
- (void)addRecipient:(id)a0 index:(unsigned long long)a1 animate:(BOOL)a2;
- (void)addRecord:(void *)a0 property:(int)a1 identifier:(int)a2;
- (void)clearAllAddressAtomPresentationOptions;
- (void)composeRecipientAtomSelectPrevious:(id)a0;
- (void)composeRecipientAtomShowPersonCard:(id)a0;
- (BOOL)containsAddress:(id)a0;
- (void)deselectComposeRecipientAtom:(id)a0;
- (void)didTapShowCorecipientsForIndicatorAtom:(id)a0 recipients:(id)a1;
- (BOOL)mf_chooseSelectedSearchResultForTextField:(id)a0;
- (void)mf_dismissSearchResults:(id)a0;
- (BOOL)mf_presentSearchResultsForTextField:(id)a0;
- (void)mf_recipientTextField:(id)a0 didAddRecipientAddress:(id)a1;
- (void)mf_selectNextSearchResultForTextField:(id)a0;
- (void)mf_selectPreviousSearchResultForTextField:(id)a0;
- (BOOL)mf_textFieldShowingSearchResults:(id)a0;
- (void)refreshPreferredContentSize;
- (void)selectComposeRecipientAtom:(id)a0;
- (void)setAddressAtomPresentationOptions:(unsigned long long)a0 forRecipient:(id)a1;
- (void)showCorecipientIndicator:(BOOL)a0 withCorecipients:(id)a1 animated:(BOOL)a2;
- (double)textFieldOffsetForNumberOfRowsToScroll:(unsigned long long)a0 numberOfRowsAboveField:(long long)a1;
- (id)uncommentedAddresses;

@end