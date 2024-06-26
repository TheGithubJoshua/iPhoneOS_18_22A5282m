@class NSString, CNMeCardSharingAudienceDataSource, CNMeCardSharingOnboardingHeaderViewController;
@protocol CNMeCardSharingOnboardingAudienceViewControllerDelegate;

@interface CNMeCardSharingOnboardingAudienceViewController : CNMeCardSharingOnboardingViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) CNMeCardSharingAudienceDataSource *sharingAudienceDataSource;
@property (retain, nonatomic) CNMeCardSharingOnboardingHeaderViewController *headerViewController;
@property (weak, nonatomic) id<CNMeCardSharingOnboardingAudienceViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)headerText;

- (void)contentSizeCategoryDidChange:(id)a0;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)handleConfirmButtonTapped;
- (id)initWithSelectedSharingAudience:(unsigned long long)a0;

@end
