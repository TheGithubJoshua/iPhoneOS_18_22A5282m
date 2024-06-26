@class HUMatterConnectedServicesItemManager, NSString;
@protocol HUMatterConnectedServicesViewControllerDelegate;

@interface HUMatterConnectedServicesViewController : HUItemTableViewController <HUPresentationDelegate, HUTitleButtonDescriptionCellDelegate, UITextViewDelegate>

@property (readonly, nonatomic) HUMatterConnectedServicesItemManager *itemManager;
@property (weak, nonatomic) id<HUMatterConnectedServicesViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)_presentHomeConnectedEcosystemDetailViewController:(id)a0;
- (void)_presentRemoveFromEcosystemConfirmation:(id)a0 atIndexPath:(id)a1;
- (void)buttonTappedForCell:(id)a0 withItem:(id)a1;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)finishPresentation:(id)a0 animated:(BOOL)a1;
- (id)initWithConnectedServicesItemProvider:(id)a0;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (BOOL)shouldHideHeaderAboveSection:(long long)a0;

@end
