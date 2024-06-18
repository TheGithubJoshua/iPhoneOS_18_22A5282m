@class ICTableUndoTarget, ICTableAutoScroller, NSMutableOrderedSet, NSDictionary, UIScrollView, ICTableColumnTextView, NSMutableSet, NSMutableArray, ICTableContentView, ICBaseTextView, ICTableAccessibilityController, TTTextStorage, NSIndexSet, ICTableClipView, NSMapTable, ICTableAttachmentSelection, ICTableAttachmentProvider, ICTable, ICTableAttachmentView, ICDimensionSumCache, ICTableSelectionView, ICTableTextViewManager, ICLayoutManager, UIView, NSArray, _UIDragSnappingFeedbackGenerator, NSMutableDictionary, ICAppearanceInfo, NSString, NSObject, ICTableScrollView, ICTableSelectionKnob, ICTableLayoutManager, NSUUID, NSUndoManager, ICTableColumnRowButton;
@protocol ICAuxiliaryStyling, ICAuxiliaryTextViewHosting;

@interface ICTableAttachmentViewController : ICAttachmentViewController <ICAttachmentFindable, ICTableAttachmentProviderDelegate, ICTableAutoScrollerDelegate, ICTableCellChangeObserving, ICTableDelegate, TTTextStorageDelegate, ICTableColumnTextViewDelegate, ICTableTextViewManagerDelegate, ICAvailableTableWidthProviding, TTTextUndoTarget, ICAuxiliaryStyling, ICTableSelectionDelegate, ICTableUndoHelping, ICBaseTextViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) ICTableAttachmentProvider *tableAttachmentProvider;
@property (retain, nonatomic) ICTableScrollView *scrollView;
@property (readonly, nonatomic) NSMutableDictionary *visibleEmptyCellsBeforeMerge;
@property (readonly, nonatomic) NSMutableOrderedSet *columnsBeforeMerge;
@property (readonly, nonatomic) NSMutableOrderedSet *rowsBeforeMerge;
@property (retain, nonatomic) ICTableAttachmentSelection *tableSelectionBeforeMerge;
@property (retain, nonatomic) NSArray *stringSelectionBeforeMerge;
@property (nonatomic) struct CGPoint { double x; double y; } initialDragOffset;
@property (nonatomic) unsigned long long currentDragIndex;
@property (retain, nonatomic) NSArray *stringSelectionBeforeDrag;
@property (retain, nonatomic) NSMutableArray *undoCommands;
@property (nonatomic) unsigned long long editingCount;
@property (nonatomic) struct CGPoint { double x; double y; } currentDragGestureLocation;
@property (readonly, nonatomic) NSMutableSet *columnsNeedingWidthUpdate;
@property (nonatomic, getter=isUpdatingTiles) BOOL updatingTiles;
@property (nonatomic) BOOL didRecentlyAutoAddRow;
@property (nonatomic) unsigned long long lastDraggedOverColumnOrRowIndex;
@property (retain, nonatomic) ICTableAttachmentSelection *previousAXTableSelection;
@property (nonatomic) BOOL isPerformingInitialLayout;
@property (weak, nonatomic) ICLayoutManager *noteLayoutManager;
@property (nonatomic) double previousAvailableWidth;
@property (nonatomic) BOOL shouldPreventUndoCommands;
@property (retain, nonatomic) NSDictionary *cellTimestampsBeforeMerge;
@property (retain, nonatomic) ICAppearanceInfo *draggingAppearance;
@property (retain, nonatomic) _UIDragSnappingFeedbackGenerator *feedbackGenerator;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } viewport;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } editingViewport;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } transitionViewport;
@property (readonly, nonatomic) ICTableAttachmentView *view;
@property (readonly, nonatomic) ICTableContentView *tableContentView;
@property (readonly, nonatomic) UIScrollView *noteScrollView;
@property (readonly, weak, nonatomic) NSObject<ICAuxiliaryTextViewHosting> *auxiliaryTextViewHost;
@property (readonly, nonatomic) ICTableLayoutManager *tableLayoutManager;
@property (retain, nonatomic) ICDimensionSumCache *columnWidthCache;
@property (retain, nonatomic) ICDimensionSumCache *rowHeightCache;
@property (readonly, nonatomic) NSMutableDictionary *cellHeightCache;
@property (readonly, nonatomic) ICTableClipView *headerClipView;
@property (retain, nonatomic) ICTableColumnRowButton *columnButton;
@property (retain, nonatomic) ICTableColumnRowButton *rowButton;
@property (readonly, nonatomic) ICTableSelectionView *selectionHighlightView;
@property (readonly, nonatomic) ICTableSelectionKnob *startKnob;
@property (readonly, nonatomic) ICTableSelectionKnob *endKnob;
@property (retain, nonatomic) NSUUID *rangeSelectionAnchorColumn;
@property (retain, nonatomic) NSUUID *rangeSelectionAnchorRow;
@property (retain, nonatomic) UIView *dragView;
@property (readonly, nonatomic) double scrollerOutset;
@property (nonatomic) BOOL performedInitialLayout;
@property (nonatomic) BOOL makingCellFirstResponder;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } proposedLineFragmentRect;
@property (retain, nonatomic) ICTableAccessibilityController *tableAXController;
@property (retain, nonatomic) ICTableAutoScroller *tableAutoScroller;
@property (readonly, nonatomic) ICTableTextViewManager *textViewManager;
@property (readonly, nonatomic) ICTable *table;
@property (readonly, nonatomic) ICTableColumnTextView *activeTextView;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } intrinsicSize;
@property (nonatomic) BOOL shouldBeginInitialEditing;
@property (retain, nonatomic) TTTextStorage *currentlyEditingTextStorage;
@property (retain, nonatomic) ICTableColumnTextView *currentlyEditingTextView;
@property (retain, nonatomic) UIView *inputView;
@property (retain, nonatomic) UIView *inputAccessoryView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL preventScrolling;
@property (readonly, nonatomic) BOOL isNoteEditable;
@property (readonly, nonatomic) ICBaseTextView *noteTextView;
@property (readonly, nonatomic) double availableWidth;
@property (readonly, nonatomic) BOOL canStyleText;
@property (readonly, nonatomic) BOOL canToggleTodo;
@property (readonly, nonatomic) NSIndexSet *selectedStyles;
@property (readonly, nonatomic) unsigned long long selectedStyleBIUS;
@property (nonatomic) BOOL lockSelection;
@property (readonly, weak, nonatomic) id<ICAuxiliaryStyling> auxiliaryStylingController;
@property (readonly, nonatomic, getter=isShowingTextStyleOptions) BOOL showingTextStyleOptions;
@property (readonly, nonatomic) ICTableUndoTarget *undoTarget;
@property (readonly, nonatomic) NSUndoManager *undoManager;
@property (retain, nonatomic) ICTableAttachmentSelection *tableSelection;
@property (readonly, nonatomic) NSMapTable *coalescingUndoGroupForStringDelegate;

- (void)toggleBoldface:(id)a0;
- (void)setHighlightColor:(id)a0;
- (void)contentSizeCategoryDidChange;
- (void)loadView;
- (void)toggleItalics:(id)a0;
- (id)note;
- (void).cxx_destruct;
- (void)save;
- (void)endEditing;
- (void)removeFromParentViewController;
- (void)dealloc;
- (void)toggleUnderline:(id)a0;
- (void)updateContentSize;
- (id)viewController;
- (id)account;
- (void)beginEditing;
- (void)textStorage:(id)a0 didProcessEditing:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 changeInLength:(long long)a3;
- (void)scrollToRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inFindableString:(id)a1;
- (void)applyUndoGroup:(id)a0;
- (id)rectsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inFindableString:(id)a1;
- (BOOL)allowsNewTextLength:(unsigned long long)a0;
- (BOOL)canIndent;
- (void)drawCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inFindableString:(id)a1 forContentView:(id)a2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1 inFindableString:(id)a2;
- (void)saveAfterDelay;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedRangeWithinRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inFindableString:(id)a1;
- (void)setHighlightPatternRegex:(id)a0;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inFindableString:(id)a1;
- (void)tableDidCreateColumnTextStorage:(id)a0;
- (void)tableDidPopulateCellAtColumnIndex:(unsigned long long)a0 rowIndex:(unsigned long long)a1;
- (void)textStorage:(id)a0 didReplace:(id)a1 with:(id)a2;
- (id)viewForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inFindableString:(id)a1;
- (BOOL)wantsUndoCommands;
- (void)addUndoCommandsForObject:(id)a0 block:(id /* block */)a1;
- (void)tableAttachmentSaveOnMainThread;
- (id)insertColumns:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)tableAttachmentDidMerge;
- (void)tableAttachmentWillMerge;
- (void)tableDidInsertColumnID:(id)a0;
- (void)tableValueDidChangeAtColumnID:(id)a0 rowID:(id)a1 delta:(long long)a2;
- (void)tableWillRemoveColumnID:(id)a0;
- (void)setSelectionDirection:(long long)a0;
- (id)RTFDataForSelection;
- (void)setSelectionBIUSStyle:(unsigned long long)a0 toggleOn:(BOOL)a1;
- (void)indentByamount:(long long)a0;
- (void)moveCurrentColumnOrRow:(BOOL)a0 toIndex:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionFrameFromContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTypingAttributesForTextView:(id)a0;
- (void)updateHeightCacheForColumn:(id)a0 row:(id)a1;
- (BOOL)acceptsKeystrokes;
- (void)addColumnAfterSelection:(id)a0;
- (void)addColumnAtIndex:(unsigned long long)a0;
- (void)addColumnBeforeSelection:(id)a0;
- (void)addColumnLeftOfSelection:(id)a0;
- (void)addColumnRightOfSelection:(id)a0;
- (void)addRowAboveSelection:(id)a0;
- (void)addRowAtIndex:(unsigned long long)a0;
- (void)addRowBelowSelection:(id)a0;
- (void)adjustScrollPositionByOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)announceCellRangeSelectionChangeForAccessibilityIfNecessary;
- (id)attributedStringForTableSelectionInContext:(id)a0;
- (id)attributedStringFromPasteboard;
- (BOOL)becomeFirstResponderForAuxStyling;
- (void)beginEditingCellWithColumnID:(id)a0 andRowID:(id)a1 location:(unsigned long long)a2;
- (void)beginEditingCellWithColumnID:(id)a0 andRowID:(id)a1 textRange:(id /* block */)a2;
- (void)beginEditingCellWithColumnID:(id)a0 andRowID:(id)a1 touchPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)beginEditingInitialCell;
- (void)beginEditingNoteAtOffset:(long long)a0;
- (void)beginEditingNoteAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)beginEditingSelectedRangeInTextView:(id)a0;
- (BOOL)canIndentByamount:(long long)a0;
- (BOOL)canOutdent;
- (void)cellFirstResponderChanged;
- (void)cellRangeDragBeganOnView:(id)a0;
- (void)cellRangeDraggedAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })characterRangeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(id)a1 forLayoutManager:(id)a2;
- (void)cleanDeletedColumn:(id)a0;
- (void)cleanDeletedRow:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })columnGlyphRangeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(id)a1 forLayoutManager:(id)a2;
- (BOOL)containedInNoteSelection;
- (void)convertTableToText:(id)a0;
- (void)convertUnconfirmedHashtagsMentionsIfNecessary;
- (void)copySelection:(id)a0;
- (void)copyTable:(id)a0;
- (unsigned long long)cursorPositionForLocation:(struct CGPoint { double x0; double x1; })a0 inTextView:(id)a1;
- (BOOL)cursorPrefersWordBoundary;
- (id)customPasteboardDataForSelection;
- (void)cutSelection:(id)a0;
- (id)dataForSelectionOfType:(id)a0;
- (id)dataForSelectionWithDocumentAttributes:(id)a0;
- (void)deleteColumns:(id)a0;
- (void)deleteRows:(id)a0;
- (void)deleteSelectedColumns:(id)a0;
- (void)deleteSelectedRows:(id)a0;
- (void)deleteSelection:(id)a0;
- (void)deleteSelectionCellContents;
- (void)deleteTable:(id)a0;
- (void)didBeginEditingWithTextView:(id)a0;
- (void)didPasteOrDropTextForTableColumnTextView:(id)a0;
- (void)didUpdateContentSize;
- (void)dragBeganOnColumnOrRow:(BOOL)a0 atLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)dragEndedOnColumnOrRow:(BOOL)a0 atLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)dragMovedOnColumnOrRow:(BOOL)a0 atLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)dragSnapshotFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 afterScreenUpdates:(BOOL)a1;
- (void)endCellEditingSessionWithTextView:(id)a0;
- (void)extendCellRangeSelectionInDirection:(unsigned long long)a0 toEnd:(BOOL)a1;
- (void)flashAuthorHighlightsIfNeeded;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfCellForColumnTextView:(id)a0 row:(id)a1;
- (void)hideColumnRowButtons;
- (id)htmlDataForSelection;
- (id)icTableDataForSelection;
- (id)icTableDataFromPasteboard;
- (id)icTableFromPasteboard;
- (void)ic_makeFirstResponder:(id)a0;
- (void)ic_resignFirstResponder:(id)a0;
- (id)initWithTextAttachment:(id)a0 forManualRendering:(BOOL)a1 layoutManager:(id)a2;
- (void)initializeTableAccessibilityControllerIfNecessary;
- (BOOL)isInResponderChain;
- (void)makeDelegateOfTextView:(id)a0;
- (BOOL)makeSpaceToPasteSourceTable:(id)a0;
- (void)moveDownCell;
- (void)moveDownCellAtLocation:(unsigned long long)a0;
- (void)moveIntoTableWithDirection:(unsigned long long)a0;
- (void)moveLeftCell;
- (void)moveNextCell;
- (void)moveNextCellAtLocation:(unsigned long long)a0;
- (void)moveNextLineAtLocation:(unsigned long long)a0;
- (void)movePrevCell;
- (void)movePrevCellAtLocation:(unsigned long long)a0;
- (void)moveReturnCell;
- (void)moveRightCell;
- (void)moveShiftReturnCell;
- (void)moveTabCell;
- (void)moveUpCell;
- (void)moveUpCellAtLocation:(unsigned long long)a0;
- (id)namedStylesForCurrentSelectionAndBIUS:(unsigned long long *)a0;
- (void)noteShowsAuthorHighlightsDidChange:(id)a0;
- (id)notesDataFromPasteboard;
- (BOOL)pasteCellRange;
- (void)pasteIntoSelection:(id)a0;
- (void)pasteTable:(id)a0 atColumnIndex:(unsigned long long)a1 rowIndex:(unsigned long long)a2 shouldSetSelectionToPastedRange:(BOOL)a3;
- (id)pasteboardItemsForSelection;
- (void)performInitialLayoutIfNeeded;
- (id)plainTextDataForSelection;
- (void)postChangeNotification:(unsigned long long)a0 columnOrRowUUIDs:(id)a1;
- (unsigned long long)preferredNavigationSelection;
- (void)prepareForPrinting;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfTableInNote;
- (void)redraw;
- (void)redrawAndSave;
- (BOOL)resignFirstResponderForAuxStyling;
- (void)reverseTableColumnDirection:(id)a0;
- (void)saveAttachmentChanges;
- (void)saveAttachmentChangesInBackground:(BOOL)a0;
- (void)saveOnMainThread;
- (void)scrollToCaretIfNeededForTextView:(id)a0;
- (void)scrollToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)scrollToSelectionInTextView:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)selectCurrentColumnForAccessibility;
- (void)selectCurrentRowForAccessibility;
- (void)selectTable;
- (void)selectionDidResignFirstResponder:(id)a0;
- (void)selectionWillBecomeFirstResponder:(id)a0;
- (void)setHidden:(BOOL)a0 forColumn:(id)a1;
- (void)setHidden:(BOOL)a0 forRow:(id)a1;
- (void)setNeedsSave;
- (void)setSelectionAlignment:(long long)a0;
- (void)setSelectionBIUSStyle:(unsigned long long)a0 toggleOn:(BOOL)a1 withColumns:(id)a2 rows:(id)a3;
- (void)setSelectionNamedStyle:(unsigned int)a0;
- (void)setSelectionNamedStyle:(unsigned int)a0 withColumns:(id)a1 rows:(id)a2;
- (void)setTextStyleForCurrentSelection:(unsigned int)a0;
- (void)setupEventHandling;
- (void)setupTableTextView:(id)a0;
- (void)shareTable:(id)a0;
- (void)showButtonsAtColumns:(id)a0 rows:(id)a1;
- (void)showColumnRowButtons;
- (id)soloPlainTextStringFromPasteboard;
- (void)speakAccessibilityAnnouncementForMoveToCellWithColumnID:(id)a0 rowID:(id)a1;
- (void)speakAccessibilityExitedTableAnnouncementAndDidRemoveRow:(BOOL)a0;
- (void)tableAttachmentDidChange;
- (void)tableAttachmentSelectionDidChange:(id)a0;
- (void)tableAttachmentViewControllerDidChange:(id)a0;
- (void)tableAttachmentWillChange;
- (void)tableAutoScroller:(id)a0 scrollOffsetDelta:(struct CGPoint { double x0; double x1; })a1;
- (void)tappedTableAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (long long)textAlignmentForCurrentSelection;
- (long long)textDirectionForCurrentSelection;
- (void)textRangeDragEnded;
- (void)textRangeDraggedAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)toggleBIUS:(unsigned long long)a0;
- (void)toggleStrikethrough:(id)a0;
- (void)toggleTodoStyle:(id)a0;
- (void)unselectColumnRow;
- (BOOL)updateAllColumnWidths;
- (void)updateAllColumnWidthsAndRedraw;
- (void)updateAttachmentParagraphForWritingDirection:(long long)a0;
- (void)updateAvailableWidth;
- (void)updateButtonFrames;
- (void)updateCellSizeAtColumn:(id)a0 row:(id)a1 immediateWidthUpdate:(BOOL)a2;
- (void)updateChrome;
- (void)updateColumnWidthForColumn:(id)a0;
- (BOOL)updateEditedColumnWidths;
- (void)updateEditedColumnWidthsAfterDelay;
- (void)updateTableCellsWithDirection:(long long)a0 columnIndexes:(id)a1 rowIndexes:(id)a2;
- (void)updateTableColumnDirectionForWritingDirection:(long long)a0;
- (void)updateTiles;
- (void)updateWidthsForChangeInColumn:(id)a0;
- (id)webArchiveDataForSelection;
- (void)willAddRow;
- (void)willBeginEditingWithTextView:(id)a0;
- (void)willFlashAuthorHighlights;
- (void)zoomFactorOrInsetsDidChange;

@end