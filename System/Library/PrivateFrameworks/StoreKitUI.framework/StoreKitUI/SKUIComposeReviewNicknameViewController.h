@class UIScrollView, SKUIComposeReviewNicknameView, NSString;
@protocol SKUIComposeReviewNicknameDelegate;

@interface SKUIComposeReviewNicknameViewController : SUViewController <SKUIComposeReviewNicknameDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) SKUIComposeReviewNicknameView *nicknameView;
@property (weak, nonatomic) id<SKUIComposeReviewNicknameDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setupScrollView;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)_cancel;
- (void).cxx_destruct;
- (void)_submit;
- (void)_setupBarButtonItems;
- (void)_setupNicknameView;
- (void)_updateConfirmState;

@end
