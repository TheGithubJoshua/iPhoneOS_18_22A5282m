@class UIButton, NSString, PXActionPerformer, UILabel, PXCuratedLibraryViewModel, PXBarAppearance;

@interface PXCuratedLibraryBarsController : PXBarsController <PXChangeObserver, PXActionPerformerDelegate>

@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel;
@property (readonly, nonatomic) PXBarAppearance *barAppearance;
@property (readonly, nonatomic) UILabel *selectModeCaptionLabel;
@property (readonly, nonatomic) UIButton *selectModeChevronButton;
@property (retain, nonatomic) PXActionPerformer *activeActionPerformer;
@property (retain, nonatomic) PXActionPerformer *lastActionPerformer;
@property (nonatomic) double interbuttonSpacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)rightBarButtonItemIdentifiers;
- (id)init;
- (double)fixedSpaceForInterButtonSpacing;
- (id)undoManagerForActionPerformer:(id)a0;
- (void)actionPerformer:(id)a0 didChangeState:(unsigned long long)a1;
- (BOOL)actionPerformer:(id)a0 presentViewController:(id)a1;
- (id)createAssetActionManagerForAssetReference:(id)a0;
- (id)hostViewControllerForActionPerformer:(id)a0;
- (void)_updateSelectModeCaption;
- (void)handleCancelBarButtonItem:(id)a0;
- (id)_selectionModeIdentifier;
- (id)initWithCuratedLibraryViewController:(id)a0 viewModel:(id)a1;
- (id)curatedLibraryViewController;
- (void).cxx_destruct;
- (void)handleSelectBarButtonItem:(id)a0;
- (double)progressToastPaddingForActionPerformer:(id)a0;
- (BOOL)actionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (id)_identifierForActionType:(id)a0;
- (void)updateBars;
- (id)progressToastViewControllerForActionPerformer:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)presentationEnvironmentForActionPerformer:(id)a0;
- (id)toolbarItemIdentifiers;
- (void)_applyZoomLevel:(long long)a0;
- (id)createBarButtonItemForIdentifier:(id)a0 placement:(unsigned long long)a1;
- (void)_invalidateToolbarItems;
- (id)_defaultToolbarItemIdentifiers;

@end
