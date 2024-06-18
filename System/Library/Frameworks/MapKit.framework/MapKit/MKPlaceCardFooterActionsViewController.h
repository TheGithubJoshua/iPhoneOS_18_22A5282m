@class NSString;

@interface MKPlaceCardFooterActionsViewController : MKPlaceCardActionsViewController <MKModuleViewControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)reloadData;
- (BOOL)_canShowWhileLocked;

@end
