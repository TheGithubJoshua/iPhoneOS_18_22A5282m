@class UITextView;

@interface HKOrganDonationMoreAboutPrivacyViewController : HKViewController

@property (retain, nonatomic) UITextView *textView;

- (void)_updateForCurrentSizeCategory;
- (void)doneButtonTapped:(id)a0;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;

@end
