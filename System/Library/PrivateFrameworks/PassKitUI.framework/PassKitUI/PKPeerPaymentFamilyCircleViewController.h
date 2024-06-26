@class PKContactAvatarManager, NSString, PKPaymentService, PKPeerPaymentService, PKPeerPaymentAccount, NSArray, PKFamilyMemberCollection;
@protocol PKPassLibraryDataProvider;

@interface PKPeerPaymentFamilyCircleViewController : UITableViewController <PKPeerPaymentAssociatedAccountSetupDelegate> {
    PKPaymentService *_paymentService;
    PKFamilyMemberCollection *_familyCollection;
    PKPeerPaymentService *_peerPaymentService;
    PKPeerPaymentAccount *_account;
    BOOL _loadingFamily;
    NSArray *_sortedRows;
    PKContactAvatarManager *_avatarManager;
    id<PKPassLibraryDataProvider> _passLibraryDataProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (id)_pendingInvitations;
- (id)initWithFamilyCollection:(id)a0 avatarManager:(id)a1 passLibraryDataProvider:(id)a2;
- (id)_familyMemberWithDSID:(id)a0;
- (void)_handleRowTapped:(id)a0;
- (void)_loadAvatarImagesIfNecessary;
- (void)_peerPaymentAccountChanged:(id)a0;
- (void)_reloadSortedRows;
- (void)addPeerPaymentAssociatedAccountDidSkipSetupForFamilyMember:(id)a0;
- (void)addPeerPaymentAssociatedAccountSetupCompletedWithSucess:(BOOL)a0 updatedAccount:(id)a1 forFamilyMember:(id)a2;

@end
