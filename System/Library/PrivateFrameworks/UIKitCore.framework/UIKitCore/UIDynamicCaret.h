@class _UIDynamicCaretNoContentView, _UIDynamicCaretInput, _UIDynamicCaretHelpLabel, NSString, TIKeyboardCandidateResultSet, _UIDynamicCaretAlternatives;
@protocol UIKeyboardCandidateListDelegate;

@interface UIDynamicCaret : UIImageView <UIKeyboardCandidateList, _UIDynamicCaretDocumentContentDelegate> {
    id<UIKeyboardCandidateListDelegate> _candidateListDelegate;
    long long _selectedIndex;
    BOOL _justDeleted;
}

@property (retain, nonatomic) _UIDynamicCaretInput *inputView;
@property (retain, nonatomic) _UIDynamicCaretAlternatives *alternativesView;
@property (retain, nonatomic) _UIDynamicCaretNoContentView *noContentView;
@property (retain, nonatomic) _UIDynamicCaretHelpLabel *helpLabel;
@property (retain, nonatomic) TIKeyboardCandidateResultSet *candidateSet;
@property (nonatomic) BOOL isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)backgroundImage;
- (unsigned long long)currentIndex;
- (void)showCandidateAtIndex:(unsigned long long)a0;
- (id)statisticsIdentifier;
- (BOOL)hasCandidates;
- (void)didMoveToSuperview;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)keyboardBehaviors;
- (void)candidateAcceptedAtIndex:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)showCandidate:(id)a0;
- (void)showCandidateInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (void)setCandidates:(id)a0 inlineText:(id)a1 inlineRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 maxX:(double)a3 layout:(BOOL)a4;
- (void)setUIKeyboardCandidateListDelegate:(id)a0;
- (BOOL)isExtendedList;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (unsigned long long)selectedSortIndex;
- (void)layoutSubviews;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)isFloatingList;
- (id)currentCandidate;
- (void)alternativeTappedAtIndex:(long long)a0;
- (void)displayAlternatives:(BOOL)a0;
- (BOOL)isDeleteCandidate:(id)a0;
- (void)setDocumentHasContent:(BOOL)a0;

@end
