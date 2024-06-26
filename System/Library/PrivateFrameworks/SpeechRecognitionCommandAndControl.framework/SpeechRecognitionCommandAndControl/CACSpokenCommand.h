@class CACLanguageModel, NSArray, NSString, NSDictionary, NSMutableDictionary, CACCommandRecognizer;

@interface CACSpokenCommand : NSObject <NSCopying> {
    double _exectutionStartTime;
    id /* block */ _executionCompletionBlock;
    BOOL _executionCompletionDeterminedManually;
}

@property (readonly, nonatomic) BOOL isRestrictedForAAC;
@property (retain) NSArray *strings;
@property (retain) NSString *identifier;
@property (readonly) CACLanguageModel *languageModel;
@property (readonly) CACLanguageModel *languageModelCache;
@property SEL action;
@property (retain) NSDictionary *recognizedParameters;
@property (weak) CACCommandRecognizer *commandRecognizer;
@property (retain) NSMutableDictionary *contextEvaluation;
@property (readonly) BOOL isCustomCommand;
@property BOOL executedIndirectly;

+ (id)attributedStringFromRecognizedCommandParameters:(id)a0 variantOverrides:(id)a1;
+ (double)defaultDelayBetweenCommands;
+ (void)displayRecognizedMessageUsingAttributedString:(id)a0;
+ (id)languageModelFromCommandDictionary:(id)a0 tokenResolution:(id)a1 containsBuiltInIdentifier:(BOOL *)a2 error:(id *)a3;
+ (id)stringFromContextEvaluationDictionary:(id)a0 isCustom:(BOOL)a1;

- (void)takeScreenshot;
- (void)decreaseVolume;
- (void)reboot;
- (void)performAction;
- (void)toggleMute;
- (void)selectAll:(id)a0;
- (void)scrollToTop;
- (void)longPress;
- (void)deleteAll:(id)a0;
- (void)armApplePay;
- (void)zoomIn;
- (void)cancelGesture;
- (void)panDown;
- (void)panLeft;
- (void)lockScreen;
- (void)goBack;
- (void).cxx_destruct;
- (id)description;
- (void)setCompletionBlock:(id /* block */)a0;
- (void)increaseVolume;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setExecuting:(BOOL)a0;
- (BOOL)isListening;
- (void)disableAttentionAwareness;
- (void)panRight;
- (void)zoomOut;
- (void)toggleDock;
- (void)panUp;
- (id)initWithProperties:(id)a0;
- (void)delete:(id)a0;
- (void)moveUp:(id)a0;
- (void)moveDown:(id)a0;
- (void)moveLeft:(id)a0;
- (void)moveRight:(id)a0;
- (void)tap;
- (void)shake;
- (void)scrollToBottom;
- (void)hangUp;
- (void)activateSOS;
- (void)activateSiri;
- (void)showAccessibilityActions;
- (void)endDrag;
- (void)deleteNextWord:(id)a0;
- (BOOL)isCustomCommand;
- (void)maximize3DTouch;
- (void)pasteboardCopy:(id)a0;
- (void)scrollPageRight;
- (void)selectNextLine:(id)a0;
- (void)selectPrevious:(id)a0;
- (void)deleteNextLine:(id)a0;
- (void)enableVoiceOver;
- (void)moveUpLinesUsingCardinalNumber:(id)a0;
- (void)openApplication;
- (void)searchSpotlight;
- (void)selectNextWord:(id)a0;
- (void)startNumberMode;
- (void)swipeUp;
- (void)voSelectNextApp;
- (void)_didShowOverlayWithHintIdentifier:(id)a0 hint:(id)a1;
- (void)_displayNumberedGridAtCurrentNumberOfColumnsAndRows;
- (unsigned int)_getModifierFlag;
- (BOOL)_handleDisambiguationIfNeededWithBlock:(id /* block */)a0;
- (void)_handleGestureWithBlock:(id /* block */)a0;
- (void)_handleTwoPointGestureWithBlock:(id /* block */)a0;
- (id)_nBestListFromPreviousTextInsertionForAXElement:(id)a0;
- (BOOL)_performScrollingAction:(int)a0;
- (void)_postKeyboardEventWithKeyCode:(unsigned short)a0 modifierFlags:(unsigned int)a1 isKeyDown:(BOOL)a2;
- (void)_postKeyboardEventsForModifierFlags:(unsigned int)a0 isKeyDown:(BOOL)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeFromPreviousTextInsertionForAXElement:(id)a0;
- (id)_scrollAncestorsFromTopLevelElementsForAction:(int)a0 categorizedElements:(id *)a1;
- (void)_scrollWithCount:(unsigned long long)a0 forAction:(int)a1;
- (BOOL)_showGridWithNumberOfColumnsAndRows;
- (id)_strippedPhraseStringsFromStrings:(id)a0;
- (long long)_textSegmentCardinalNumber;
- (void)activateAppLibrary;
- (void)activateAppSwitcher;
- (void)activateApplePay;
- (void)activateControlCenter;
- (void)activateDock;
- (void)activateHomeButton;
- (void)activateLockButton;
- (void)activateNotificationCenter;
- (void)activateScreenItem;
- (void)activateSpeakScreen;
- (void)activateSpotlight;
- (void)activateSysdiagnose;
- (void)activateTripleClick;
- (void)addSelectionToVocabulary:(id)a0;
- (void)alwaysShowOverlayGrid;
- (void)alwaysShowOverlayGridWithNumberOfColumns;
- (void)alwaysShowOverlayGridWithNumberOfRows;
- (void)alwaysShowOverlayNames;
- (void)alwaysShowOverlayNumbers;
- (void)applyFormat:(id)a0;
- (void)chooseAllOverlayItems;
- (void)chooseOverlayItem;
- (void)completeEditing:(id)a0;
- (void)correctSelection:(id)a0;
- (void)createCustomCommand;
- (void)decreaseZoomLevel;
- (void)decrementItem;
- (void)deleteCurrentCharacter:(id)a0;
- (void)deleteCurrentLine:(id)a0;
- (void)deleteCurrentParagraph:(id)a0;
- (void)deleteCurrentSentence:(id)a0;
- (void)deleteCurrentWord:(id)a0;
- (void)deleteNextCharacter:(id)a0;
- (void)deleteNextParagraph:(id)a0;
- (void)deleteNextSentence:(id)a0;
- (void)deletePreviousCharacter:(id)a0;
- (void)deletePreviousLine:(id)a0;
- (void)deletePreviousParagraph:(id)a0;
- (void)deletePreviousSentence:(id)a0;
- (void)deletePreviousWord:(id)a0;
- (void)disableAssistiveTouch;
- (void)disableClassicInvertColors;
- (void)disableColorFilters;
- (void)disableCommandAndControl;
- (void)disableFullKeyboardAccess;
- (void)disableReduceWhitePoint;
- (void)disableSmartInvertColors;
- (void)disableSwitchControl;
- (void)disableVoiceOver;
- (void)disableWatchMirroring;
- (void)disableWatchRemoteControl;
- (void)disableZoom;
- (void)doubleTap;
- (void)dragFromPointToPoint;
- (void)enableAssistiveTouch;
- (void)enableAttentionAwareness;
- (void)enableClassicInvertColors;
- (void)enableColorFilters;
- (void)enableFullKeyboardAccess;
- (void)enableReduceWhitePoint;
- (void)enableSmartInvertColors;
- (void)enableSwitchControl;
- (void)enableWatchMirroring;
- (void)enableWatchRemoteControl;
- (void)enableZoom;
- (void)extendSelectionBackwardCharactersUsingCardinalNumber:(id)a0;
- (void)extendSelectionBackwardLinesUsingCardinalNumber:(id)a0;
- (void)extendSelectionBackwardParagraphsUsingCardinalNumber:(id)a0;
- (void)extendSelectionBackwardSentencesUsingCardinalNumber:(id)a0;
- (void)extendSelectionBackwardWordsUsingCardinalNumber:(id)a0;
- (void)extendSelectionForwardCharactersUsingCardinalNumber:(id)a0;
- (void)extendSelectionForwardLinesUsingCardinalNumber:(id)a0;
- (void)extendSelectionForwardParagraphsUsingCardinalNumber:(id)a0;
- (void)extendSelectionForwardSentencesUsingCardinalNumber:(id)a0;
- (void)extendSelectionForwardWordsUsingCardinalNumber:(id)a0;
- (void)extendSelectionToBeginning:(id)a0;
- (void)extendSelectionToEnd:(id)a0;
- (void)goToEndOfDocument:(id)a0;
- (void)goToEndOfLine:(id)a0;
- (void)goToEndOfParagraph:(id)a0;
- (void)goToEndOfSelection:(id)a0;
- (void)goToEndOfSentence:(id)a0;
- (void)goToEndOfWord:(id)a0;
- (void)goToStartOfDocument:(id)a0;
- (void)goToStartOfLine:(id)a0;
- (void)goToStartOfParagraph:(id)a0;
- (void)goToStartOfSelection:(id)a0;
- (void)goToStartOfSentence:(id)a0;
- (void)goToStartOfWord:(id)a0;
- (void)handleLabeledElementFromNameOrNumberWithBlock:(id /* block */)a0;
- (void)handleLabeledElementsFromTwoNumbersWithBlock:(id /* block */)a0;
- (void)handleSleepListening;
- (void)handleSpokenCommand:(id)a0;
- (void)handleWakeListening;
- (void)hideElementNames;
- (void)hideNumberedElements;
- (void)hideNumberedGrid;
- (void)hideVirtualKeyboard;
- (void)increaseZoomLevel;
- (void)incrementItem;
- (id)initWithSpokenCommand:(id)a0;
- (void)insertDate:(id)a0;
- (void)insertEmoji:(id)a0;
- (BOOL)isCompletionDeterminedManually;
- (BOOL)isExectuting;
- (void)maximizeZoomLevel;
- (void)minimizeZoomLevel;
- (void)moveBackwardCharactersUsingCardinalNumber:(id)a0;
- (void)moveBackwardLinesUsingCardinalNumber:(id)a0;
- (void)moveBackwardParagraphsUsingCardinalNumber:(id)a0;
- (void)moveBackwardSentencesUsingCardinalNumber:(id)a0;
- (void)moveBackwardWordsUsingCardinalNumber:(id)a0;
- (void)moveDownLinesUsingCardinalNumber:(id)a0;
- (void)moveDownParagraphsUsingCardinalNumber:(id)a0;
- (void)moveForwardCharactersUsingCardinalNumber:(id)a0;
- (void)moveForwardLinesUsingCardinalNumber:(id)a0;
- (void)moveForwardParagraphsUsingCardinalNumber:(id)a0;
- (void)moveForwardSentencesUsingCardinalNumber:(id)a0;
- (void)moveForwardWordsUsingCardinalNumber:(id)a0;
- (void)moveLeftCharactersUsingCardinalNumber:(id)a0;
- (void)moveLeftSentencesUsingCardinalNumber:(id)a0;
- (void)moveLeftWordsUsingCardinalNumber:(id)a0;
- (void)moveRightCharactersUsingCardinalNumber:(id)a0;
- (void)moveRightSentencesUsingCardinalNumber:(id)a0;
- (void)moveRightWordsUsingCardinalNumber:(id)a0;
- (void)moveUpParagraphsUsingCardinalNumber:(id)a0;
- (void)panZoomDown;
- (void)panZoomLeft;
- (void)panZoomRight;
- (void)panZoomUp;
- (void)pasteboardCut:(id)a0;
- (void)pasteboardPaste:(id)a0;
- (void)pressAndHold;
- (void)pressKeyboardKey;
- (void)pressOverlayItem;
- (void)repeatPreviousCommand;
- (void)rotateLeft;
- (void)rotateRight;
- (void)rotateToLandscape;
- (void)rotateToPortrait;
- (void)scrollPageDown;
- (void)scrollPageLeft;
- (void)scrollPageUp;
- (void)scrollToLeftEdge;
- (void)scrollToRightEdge;
- (void)searchWeb;
- (void)selectCurrentCharacter:(id)a0;
- (void)selectCurrentLine:(id)a0;
- (void)selectCurrentParagraph:(id)a0;
- (void)selectCurrentSentence:(id)a0;
- (void)selectCurrentWord:(id)a0;
- (void)selectNext:(id)a0;
- (void)selectNextCharacter:(id)a0;
- (void)selectNextParagraph:(id)a0;
- (void)selectNextSentence:(id)a0;
- (void)selectPhrase:(id)a0;
- (void)selectPhraseThroughPhrase:(id)a0;
- (void)selectPreviousCharacter:(id)a0;
- (void)selectPreviousLine:(id)a0;
- (void)selectPreviousParagraph:(id)a0;
- (void)selectPreviousSentence:(id)a0;
- (void)selectPreviousTextInsertion:(id)a0;
- (void)selectPreviousWord:(id)a0;
- (void)setCompletionDeterminedManually:(BOOL)a0;
- (void)showActiveCommands;
- (void)showCommands;
- (void)showElementNames;
- (void)showGridWithNumberOfColumns;
- (void)showGridWithNumberOfRows;
- (void)showNumberedElements;
- (void)showNumberedGrid;
- (void)showVirtualKeyboard;
- (void)showVocabulary;
- (void)start3DTouch;
- (void)startCommandMode;
- (void)startDictationMode;
- (void)startDrag;
- (void)startHoldAndDrag;
- (void)startRecordingGesture;
- (void)startRecordingUserActions;
- (void)startSpellingMode;
- (void)stopRecordingGesture;
- (void)stopRecordingUserActions;
- (void)swipeDown;
- (void)swipeLeft;
- (void)swipeRight;
- (void)toggleRingerSwitchOff;
- (void)toggleRingerSwitchOn;
- (void)tripleClick;
- (void)twoFingerDoubleTap;
- (void)twoFingerLongPress;
- (void)twoFingerPanDown;
- (void)twoFingerPanLeft;
- (void)twoFingerPanRight;
- (void)twoFingerPanUp;
- (void)twoFingerSwipeDown;
- (void)twoFingerSwipeLeft;
- (void)twoFingerSwipeRight;
- (void)twoFingerSwipeUp;
- (void)twoFingerTap;
- (void)unselect:(id)a0;
- (void)voActivate;
- (void)voMagicTap;
- (void)voReadAll;
- (void)voSelect;
- (void)voSelectFirstItem;
- (void)voSelectLastItem;
- (void)voSelectNextItem;
- (void)voSelectNextRotor;
- (void)voSelectNextRotorOption;
- (void)voSelectPreviousApp;
- (void)voSelectPreviousItem;
- (void)voSelectPreviousRotor;
- (void)voSelectPreviousRotorOption;
- (void)voSelectStatusBar;
- (void)voShowItemChooser;
- (void)voSpeakSummary;
- (void)voStopSpeaking;
- (void)voToggleScreenCurtain;

@end
