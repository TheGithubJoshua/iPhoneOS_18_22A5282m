@class NSDate, _UIContextMenuNode, _UIContextMenuSelectionDelayGestureRecognizer, UICollectionViewDiffableDataSource, _UIContextMenuLinkedList, _UIVelocityIntegrator, UISelectionFeedbackGenerator, _UIContextMenuListView, NSString, UIHoverGestureRecognizer, _UIContextMenuSelectionGestureRecognizer, NSTimer, NSArray, NSIndexPath;
@protocol _UIContextMenuHierarchyLayout, _UIContextMenuViewDelegate;

@interface _UIContextMenuView : UIView <UIGestureRecognizerDelegate>

@property (readonly, nonatomic) _UIContextMenuListView *currentListView;
@property (retain, nonatomic) _UIContextMenuNode *departingNode;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *collectionViewDataSource;
@property (retain, nonatomic) _UIContextMenuSelectionGestureRecognizer *selectionGestureRecognizer;
@property (retain, nonatomic) _UIContextMenuSelectionDelayGestureRecognizer *selectionDelayGestureRecognizer;
@property (retain, nonatomic) NSDate *appearanceDate;
@property (retain, nonatomic) UIHoverGestureRecognizer *highlightHoverGestureRecognizer;
@property (retain, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator;
@property (retain, nonatomic) _UIContextMenuLinkedList *submenus;
@property (nonatomic) BOOL isComputingPreferredSize;
@property (nonatomic) BOOL retainHighlightOnMenuNavigation;
@property (nonatomic) BOOL shouldAvoidInputViews;
@property (retain, nonatomic) NSTimer *autoNavigationTimer;
@property (retain, nonatomic) NSTimer *autoUnhighlightTimer;
@property (copy, nonatomic) NSIndexPath *unselectableIndexPath;
@property (nonatomic) BOOL hasTrackingTouch;
@property (nonatomic) struct CGSize { double width; double height; } maxContainerSize;
@property (retain, nonatomic) id<_UIContextMenuHierarchyLayout> layout;
@property (retain, nonatomic) _UIContextMenuNode *hoveredNode;
@property (retain, nonatomic) _UIVelocityIntegrator *hoverVelocityIntegrator;
@property (retain, nonatomic) NSTimer *hoverAutoExitTimer;
@property (weak, nonatomic) id<_UIContextMenuViewDelegate> delegate;
@property (nonatomic) BOOL showsShadow;
@property (nonatomic) BOOL reversesActionOrder;
@property (nonatomic) BOOL scrubbingEnabled;
@property (nonatomic) struct CGSize { double width; double height; } visibleContentSize;
@property (nonatomic) unsigned long long hierarchyStyle;
@property (nonatomic) unsigned long long attachmentEdge;
@property (readonly, nonatomic) NSArray *visibleMenus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_handleHoverGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (void)setUserInteractionEnabled:(BOOL)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (BOOL)canBecomeFirstResponder;
- (id)preferredFocusEnvironments;
- (void)layoutSubviews;
- (id)keyCommands;
- (id)hoveredListView;
- (BOOL)_allowsChangingFirstResponderForFocusUpdateWithContext:(id)a0;
- (void)_clearAutoNavigationTimer;
- (void)_clearHoverAutoExitTimer;
- (void)_displayMenu:(id)a0 inPlaceOfMenu:(id)a1 updateType:(unsigned long long)a2 alongsideAnimations:(id /* block */)a3;
- (void)_handleEscapeKey:(id)a0;
- (void)_handleLeftArrowKey:(id)a0;
- (void)_handleMenuPressGesture:(id)a0;
- (void)_handleRightArrowKey:(id)a0;
- (void)_handleSelectPressGesture:(id)a0;
- (void)_handleSelectionForElement:(id)a0;
- (void)_handleSelectionGesture:(id)a0;
- (id)_newListViewWithMenu:(id)a0 position:(unsigned long long)a1;
- (void)_performActionForElement:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectOfNodeParentElement:(id)a0;
- (void)_selectPreviousMenuIfPossible;
- (void)_setAutoNavigationTimerIfNecessaryForElement:(id)a0;
- (void)_setHighlightedIndexPath:(id)a0 playFeedback:(BOOL)a1;
- (void)_setHoverAutoExitTimer;
- (void)_testing_tapAnAction;
- (void)_updateSelectionGestureAllowableMovement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })activeSubmenuFrameInCoordinateSpace:(id)a0;
- (void)displayMenu:(id)a0 updateType:(unsigned long long)a1 alongsideAnimations:(id /* block */)a2;
- (void)flashScrollIndicators;
- (BOOL)kickstartActionScrubbingWithGesture:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSizeWithinContainerSize:(struct CGSize { double x0; double x1; })a0;
- (void)replaceVisibleMenu:(id)a0 withMenu:(id)a1 alongsideAnimations:(id /* block */)a2;
- (void)scrollToFirstSignificantAction;

@end