@class UILabel, NSString, UIBarButtonItem;
@protocol DevicePINControllerDelegate;

@interface DMCPINEntryViewController : DevicePINController <UIAdaptivePresentationControllerDelegate, DMCDismissalAwareViewController>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIBarButtonItem *rightBarButtonItem;
@property (weak, nonatomic) id<DevicePINControllerDelegate> delegate;
@property (readonly, nonatomic) unsigned long long style;
@property (nonatomic) BOOL inProgress;
@property (copy, nonatomic) NSString *descriptionText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_titleFont;
- (id)initWithStyle:(unsigned long long)a0;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (void)presentationControllerDidAttemptToDismiss:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updateStyle;
- (id)stringsBundle;
- (void)viewControllerHasBeenDismissed;
- (void)leftBarButtonTapped:(id)a0;

@end
