@class NSString, UIAlertController, _UIAlertControllerShimPresenter, NSMutableArray;
@protocol UIActionSheetDelegate;

@interface UIActionSheet : UIView <UIPopoverControllerDelegate> {
    UIAlertController *_alertController;
    _UIAlertControllerShimPresenter *_presenter;
    UIActionSheet *_retainedSelf;
    NSMutableArray *_actions;
    long long _cancelIndex;
    long long _firstOtherButtonIndex;
    long long _destructiveButtonIndex;
    long long _actionSheetStyle;
    BOOL _hasPreparedAlertActions;
    BOOL _isPresented;
    BOOL _alertControllerShouldDismiss;
    BOOL _handlingAlertActionShouldDismiss;
    BOOL _dismissingAlertController;
}

@property (retain, nonatomic) id context;
@property (weak, nonatomic) id<UIActionSheetDelegate> delegate;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long actionSheetStyle;
@property (readonly, nonatomic) long long numberOfButtons;
@property (nonatomic) long long cancelButtonIndex;
@property (nonatomic) long long destructiveButtonIndex;
@property (readonly, nonatomic) long long firstOtherButtonIndex;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBodyText:(id)a0;
- (id)_titleLabel;
- (id)bodyText;
- (void)_didPresent;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)subtitle;
- (void)setMessage:(id)a0;
- (void)setSubtitle:(id)a0;
- (id)message;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_alertController;
- (void)setTaglineText:(id)a0;
- (void)showFromBarButtonItem:(id)a0 animated:(BOOL)a1;
- (void)showFromTabBar:(id)a0;
- (void)_dismissForTappedIndex:(long long)a0;
- (void)_performPresentationDismissalWithClickedButtonIndex:(long long)a0 animated:(BOOL)a1;
- (void)_prepareAlertActions;
- (BOOL)_prepareToDismissForTappedIndex:(long long)a0;
- (id)_preparedAlertActionAtIndex:(unsigned long long)a0;
- (void)_setAttributedTitleString:(id)a0;
- (void)_setFirstOtherButtonIndex:(long long)a0;
- (void)_setIsPresented:(BOOL)a0;
- (void)_showFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 direction:(unsigned long long)a2 animated:(BOOL)a3;
- (long long)addButtonWithTitle:(id)a0;
- (id)addButtonWithTitle:(id)a0 label:(id)a1;
- (id)buttonTitleAtIndex:(long long)a0;
- (void)dismissWithClickedButtonIndex:(long long)a0 animated:(BOOL)a1;
- (id)initWithTitle:(id)a0 delegate:(id)a1 cancelButtonTitle:(id)a2 destructiveButtonTitle:(id)a3 otherButtonTitles:(id)a4;
- (void)popoverControllerDidDismissPopover:(id)a0;
- (void)presentFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 direction:(unsigned long long)a2 allowInteractionWithViews:(id)a3 backgroundStyle:(long long)a4 animated:(BOOL)a5;
- (void)showFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 animated:(BOOL)a2;
- (void)showFromToolbar:(id)a0;
- (void)showInView:(id)a0;

@end