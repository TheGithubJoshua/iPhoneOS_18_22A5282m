@class MSDCodeEntryView, NSString, NSArray, UILabel;
@protocol MSDCodeEntryContentViewControllerDelegate;

@interface MSDCodeEntryContentViewController : UIViewController <MSDCodeEntryViewDelegate>

@property (retain, nonatomic) NSString *verificationCode;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UILabel *promptLabel;
@property (retain, nonatomic) NSString *errorMessage;
@property (retain, nonatomic) MSDCodeEntryView *codeEntryView;
@property (retain, nonatomic) id<MSDCodeEntryContentViewControllerDelegate> delegate;
@property (retain, nonatomic) NSArray *activeConstraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)updateViewConstraints;
- (void)didEnterCode:(id)a0 forEntry:(id)a1;
- (id)initWithTitle:(id)a0 message:(id)a1 verificationCode:(id)a2 verificationErrorMesssage:(id)a3 andDelegate:(id)a4;

@end
