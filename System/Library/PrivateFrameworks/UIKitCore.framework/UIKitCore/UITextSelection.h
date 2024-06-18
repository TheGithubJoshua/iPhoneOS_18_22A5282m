@class UIResponder, UITextRange, DOMRange;
@protocol UITextInputPrivate;

@interface UITextSelection : NSObject

@property (readonly, weak, nonatomic) UIResponder<UITextInputPrivate> *document;
@property (retain, nonatomic) UITextRange *selectedRange;
@property (nonatomic) long long granularity;
@property (readonly, nonatomic) BOOL isCommitting;
@property (readonly, nonatomic) BOOL willSelectionChange;
@property (retain, nonatomic) UITextRange *base;
@property (retain, nonatomic) UITextRange *initialExtent;
@property (readonly, nonatomic, getter=_domRange) DOMRange *domRange;

- (void)clearSelection;
- (void)collapseSelection;
- (void)setSelectionWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)selectAll;
- (id)selectedText;
- (void)setHybridSelectionWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)selectionChanged;
- (void)commit;
- (void)setRangedSelectionBaseToCurrentSelectionStart;
- (void)alterSelection:(struct CGPoint { double x0; double x1; })a0 granularity:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectAtEndOfDocument;
- (unsigned long long)offsetInMarkedText;
- (id)selectionRects;
- (BOOL)isRangedSelectionSpanningDocument;
- (void)extendSelectionToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setGranularRangedSelectionWithExtentPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)smartExtendRangedSelection:(int)a0 downstream:(BOOL)a1;
- (BOOL)_allowsSelectionInversion;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRect;
- (void)invalidate;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })closestCaretRectForPoint:(struct CGPoint { double x0; double x1; })a0 inSelection:(BOOL)a1;
- (void)moveCaretToBoundaryOfWhitespaceOrLine;
- (id)wordContainingCaretSelection;
- (id)_boundedOrInvertedSelectionRangeForExtent:(id)a0 forPoint:(struct CGPoint { double x0; double x1; })a1 fromPosition:(id)a2 inDirection:(long long)a3;
- (BOOL)hasEditableSelection;
- (id)initWithDocument:(id)a0;
- (void)increaseSelectionGranularity;
- (void)setRangedSelectionWithExtentPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectAtBeginOfDocument;
- (void)aggressivelyExpandSelectionToSmartSelectionContainingCaretSelection;
- (void)clearRangedSelectionInitialExtent;
- (BOOL)pointAtStartOfLine:(struct CGPoint { double x0; double x1; })a0;
- (void)setRangedSelectionInitialExtentToCurrentSelectionEnd;
- (void)dealloc;
- (BOOL)setRangedSelectionExtentPoint:(struct CGPoint { double x0; double x1; })a0 baseIsStart:(BOOL)a1 allowFlipping:(BOOL)a2;
- (struct CGPoint { double x0; double x1; })clipPoint:(struct CGPoint { double x0; double x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setSelectionWithFirstPoint:(struct CGPoint { double x0; double x1; })a0 secondPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)setRangedSelectionBaseToCurrentSelectionEnd;
- (void)alterSelectionGranularity:(long long)a0;
- (BOOL)pointAtEndOfLine:(struct CGPoint { double x0; double x1; })a0;
- (void)setRangedSelectionInitialExtentToCurrentSelectionStart;
- (void)aggressivelyExpandSelectionToWordContainingCaretSelection;
- (void)setRangedSelectionBaseToCurrentSelection;
- (BOOL)setRangedSelectionExtentPoint:(struct CGPoint { double x0; double x1; })a0 baseIsStart:(BOOL)a1;

@end
