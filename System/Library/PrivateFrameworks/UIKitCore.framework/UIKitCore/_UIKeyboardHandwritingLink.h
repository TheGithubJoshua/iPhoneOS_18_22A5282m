@class TIKeyboardCandidateResultSet, NSString, UIResponder;
@protocol UIKeyboardCandidateListDelegate;

@interface _UIKeyboardHandwritingLink : UIResponder <UIKeyboardCandidateListConsumer> {
    UIResponder *_previousResponder;
    UIResponder *_fallbackResponder;
    id<UIKeyboardCandidateListDelegate> _candidateListDelegate;
    long long _selectedIndex;
    BOOL _justDeleted;
}

@property (retain, nonatomic) TIKeyboardCandidateResultSet *candidateSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (unsigned long long)currentIndex;
- (void)showCandidateAtIndex:(unsigned long long)a0;
- (id)statisticsIdentifier;
- (BOOL)hasCandidates;
- (id)nextResponder;
- (BOOL)becomeFirstResponder;
- (id)keyboardBehaviors;
- (void)candidateAcceptedAtIndex:(unsigned long long)a0;
- (BOOL)showCandidate:(id)a0;
- (void)showCandidateInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (void)setCandidates:(id)a0 inlineText:(id)a1 inlineRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 maxX:(double)a3 layout:(BOOL)a4;
- (void)setUIKeyboardCandidateListDelegate:(id)a0;
- (BOOL)isExtendedList;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (void)dealloc;
- (unsigned long long)selectedSortIndex;
- (BOOL)canBecomeFirstResponder;
- (BOOL)isFloatingList;
- (id)currentCandidate;
- (void)candidateOutput:(id)a0;
- (void)candidatesUpdated;
- (BOOL)isDeleteCandidate:(id)a0;
- (void)performOutput:(id)a0;
- (void)reloadInputViews;
- (void)sendStrokes:(id)a0;
- (BOOL)shouldRestoreResponder;

@end
