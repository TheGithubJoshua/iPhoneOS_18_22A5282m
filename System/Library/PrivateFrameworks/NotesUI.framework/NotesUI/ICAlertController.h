@class UIAlertAction;

@interface ICAlertController : UIAlertController

@property (nonatomic) BOOL didDismissWithDismissWithoutActionBlock;
@property (nonatomic) BOOL didPerformAction;
@property (copy, nonatomic) id /* block */ dismissWithoutActionBlock;
@property (retain, nonatomic) UIAlertAction *dismissAction;
@property (nonatomic) BOOL shouldDismissWhenShowingNote;
@property (nonatomic) BOOL canAppearAbovePasswordEntryView;

- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)dealloc;
- (void)dismissWhenPossible;

@end
