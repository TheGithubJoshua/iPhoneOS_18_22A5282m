@class NSString, PUSessionInfo, PXProgrammaticNavigationDestination;

@interface PUAlbumsGadgetViewController : PXGadgetUIViewController <PXChangeObserver, PXNavigableCollectionContainer>

@property (retain, nonatomic) PXProgrammaticNavigationDestination *px_navigationDestination;
@property (retain, nonatomic) PUSessionInfo *sessionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)routingOptionsForDestination:(id)a0;
- (void)navigateToDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)px_gridPresentation;
- (void)newSharedAlbum:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)navigationHelperCanCurrentlyNavigate:(id)a0;
- (void)newAlbum:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (long long)scrollAnimationIdentifier;
- (id)_createPlusButton;
- (BOOL)canNavigateToCollection:(id)a0;
- (void)_navigateToCollection:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)_navigableGadgetForCollection:(id)a0;
- (void)_handleDoneButton:(id)a0;
- (void).cxx_destruct;
- (void)_updateNavigationBar;
- (void)provideViewControllersForDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)allowsBarManagement;
- (void)navigateToCollection:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (BOOL)_canNavigateToCollection:(id)a0 skipGadgets:(BOOL)a1;
- (void)newFolder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)canBecomeFirstResponder;
- (void)newSmartAlbum:(id)a0;
- (void)configureSectionHeader:(id)a0;
- (id)initWithLayout:(id)a0 dataSourceManager:(id)a1;

@end
