@class SBWindowedAccessoryView, NSString;
@protocol SBWindowedAccessoryViewControllerDelegate;

@interface SBWindowedAccessoryViewController : UIViewController <SBWindowedAccessoryViewDelegate>

@property (retain, nonatomic) SBWindowedAccessoryView *windowedAccessoryView;
@property (weak, nonatomic) id<SBWindowedAccessoryViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)forceDetachWindowedAcessoryButtonTapped:(id)a0;

@end
