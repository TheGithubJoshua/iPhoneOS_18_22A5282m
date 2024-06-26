@class NSString, SBSystemApertureController, NSMapTable;

@interface SBSystemApertureAlertItemPresenter : NSObject <SBAlertItemPresenter>

@property (readonly, weak, nonatomic) SBSystemApertureController *systemApertureController;
@property (readonly, nonatomic) NSMapTable *elementsToAssertions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canPresentMultipleAlertItemsSimultaneously;
- (void)presentAlertItem:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)dismissAlertItem:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)presentsAlertItemsModally;
- (id)initWithSystemApertureController:(id)a0;

@end
