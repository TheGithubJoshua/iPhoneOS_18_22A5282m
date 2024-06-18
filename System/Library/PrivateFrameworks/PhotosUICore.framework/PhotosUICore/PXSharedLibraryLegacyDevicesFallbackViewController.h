@class NSString, NSArray;
@protocol PXAssistantViewControllerDelegate;

@interface PXSharedLibraryLegacyDevicesFallbackViewController : OBTableWelcomeController <PXAssistantViewController, UITableViewDelegate, UITableViewDataSource> {
    NSArray *_devices;
}

@property (weak, nonatomic) id<PXAssistantViewControllerDelegate> assistantViewControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)continueButtonTapped:(id)a0;
- (id)initWithDevices:(id)a0;
- (void)learnMoreButtonTapped:(id)a0;

@end
