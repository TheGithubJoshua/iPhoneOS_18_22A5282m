@class NSTextSelectionNavigation, NSMapTable, NSArray, NSTextRange;

@interface __NSTextSelectionLineFragmentInfo : NSObject {
    long long _offset;
    long long _baseDirection;
    int _visualDirection;
    struct { double x0; id x1; id x2; BOOL x3; BOOL x4; } *_carets;
    unsigned long long _numberOfCarets;
    NSMapTable *_primaryLocationTable;
    NSMapTable *_secondaryLocationTable;
    NSArray *_sortedLocations;
    NSArray *_otherLocations;
}

@property (readonly) NSTextSelectionNavigation *textSelectionNavigation;
@property (readonly) NSTextRange *textRange;
@property (readonly, getter=isMonotonicDirection) BOOL monotonicDirection;
@property long long numberOfCaretPositions;

- (void)_cache;
- (BOOL)location:(id)a0 isLeading:(out BOOL *)a1 trailing:(out BOOL *)a2 inTextRanges:(id)a3;
- (long long)caretIndexForSecondaryLocation:(id)a0;
- (long long)caretIndexForPrimaryLocation:(id)a0;
- (long long)_baseWritingDirection;
- (id)_secondaryLocationTable;
- (long long)caretIndexForEdgeLocationInTextRanges:(id)a0 leftEdge:(BOOL)a1;
- (const struct { double x0; id x1; id x2; BOOL x3; BOOL x4; } *)caretPositionClosestToLocation:(id)a0 visualDirection:(long long)a1 matchLocation:(out BOOL *)a2;
- (void)_invalidateSortedLocations;
- (long long)_sortedLocationIndexForLocation:(id)a0;
- (id)initWithTextSelectionNavigation:(id)a0 range:(id)a1;
- (const struct { double x0; id x1; id x2; BOOL x3; BOOL x4; } *)caretPositionClosestToOffset:(double)a0;
- (id)textRangeOfCharacterAtOffset:(double)a0 fractionOfDistanceThroughGlyph:(double *)a1;
- (id)_findNextCaretLocationForLocation:(id)a0;
- (void)_fetchCaretOffsets;
- (void)_computeVisualDirection;
- (id)description;
- (void)_resolveTrailingEdges;
- (double)offsetForLocation:(id)a0;
- (const struct { double x0; id x1; id x2; BOOL x3; BOOL x4; } *)logicalFirstCaret;
- (const struct { double x0; id x1; id x2; BOOL x3; BOOL x4; } *)logicalLastCaret;
- (id)_sortedLocations;
- (void)dealloc;
- (long long)numberOfCaretPositions;
- (id)rangesBetweenStartingOffset:(double)a0 endOffset:(double)a1 continuous:(BOOL)a2;
- (id)_locationForEdgeCaretAtIndex:(unsigned long long)a0 leftEdge:(BOOL)a1;
- (const struct { double x0; id x1; id x2; BOOL x3; BOOL x4; } *)caretPositionAtIndex:(long long)a0;
- (long long)caretIndexForLocation:(id)a0 inTextRanges:(id)a1 secondaryCaretIndex:(long long *)a2;

@end
