@class NSString, SearchUIFirstTimeExperienceViewController, UIScrollView;
@protocol UniversalSearchFirstTimeExperienceViewControllerDelegate;

@interface UniversalSearchFirstTimeExperienceViewController : UIViewController <SearchUIFirstTimeExperienceDelegate> {
    SearchUIFirstTimeExperienceViewController *_firstTimeExperienceViewController;
    UIScrollView *_scrollView;
}

@property (weak, nonatomic) id<UniversalSearchFirstTimeExperienceViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)userDidInteractWithParsecFirstTimeUserExperience;
+ (BOOL)hasShownParsecFirstTimeUserExperience;

- (void)loadView;
- (void)viewWillLayoutSubviews;
- (void)firstTimeExperienceContinueButtonPressed;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)unifiedFieldDidChange;

@end
