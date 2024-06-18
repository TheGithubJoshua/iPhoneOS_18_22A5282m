@class NSString, UITextField;
@protocol SearchUIKeyboardableTableViewDelegate;

@interface SearchUIKeyboardableCollectionViewController : UICollectionViewController <UIGestureRecognizerDelegate>

@property (nonatomic) double currentKeyboardHeight;
@property (nonatomic) double additionalKeyboardHeight;
@property (nonatomic) BOOL shouldHideTableCellsUnderKeyboard;
@property (weak, nonatomic) UITextField *textField;
@property (weak) id<SearchUIKeyboardableTableViewDelegate> interactionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)leftArrowPressed;
- (id)init;
- (BOOL)canHighlightRowAtIndexPath:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)rightArrowPressed;
- (void)returnKeyPressed;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)deletePressed;
- (void)moveCursorToPosition:(id)a0;
- (void)selectAllTextInTextField;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)escapeButtonPressed;
- (void)viewDidLoad;
- (double)contentHeight;
- (void)upArrowPressed:(id)a0;
- (void)highlightNextRowAtIndexPath:(id)a0 upward:(BOOL)a1;
- (void)goBack;
- (void).cxx_destruct;
- (void)moveCursorToEnd;
- (void)moveCursorToBeginning;
- (void)scrollViewDidScroll:(id)a0;
- (void)downArrowPressed:(id)a0;
- (id)indexPathToSelectForKeyboardOnQuickReturn;
- (void)addKeyCommandForKey:(id)a0 action:(SEL)a1;
- (void)selectHighlightedRow;
- (void)highlightRowAtIndexPath:(id)a0;
- (void)setCollectionView:(id)a0;
- (void)scrollIndexPathToVisible:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (double)adjustedVerticalOffset;
- (id)indexPathForNextSelectableIndexPath:(id)a0 upward:(BOOL)a1;
- (void)keyboardFrameChanged:(id)a0;
- (BOOL)isOnCard;
- (BOOL)contentVisibleUnderKeyboard;
- (void)showKeyboard;

@end
