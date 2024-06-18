@class PSUIAddOnPlanGroup, PSSpecifier, PSUICarrierItemGroup, UIBarButtonItem;

@interface PSUICarrierListController : PSListController {
    PSSpecifier *_carrierItemGroupSpecifier;
    PSSpecifier *_addOnGroupSpecifier;
}

@property (retain, nonatomic) UIBarButtonItem *cancelButton;
@property (retain, nonatomic) PSUICarrierItemGroup *carrierItemGroup;
@property (retain, nonatomic) PSUIAddOnPlanGroup *addOnPlanGroup;

- (id)specifiers;
- (id)init;
- (void)dismiss;
- (void)loadView;
- (void).cxx_destruct;
- (void)addCancelButton;
- (id)createCarrierItemGroupIfNeeded:(id)a0;
- (id)addOnGroupSpecifier;
- (id)carrierItemGroupSpecifier;
- (void)cellularPlanChanged:(id)a0;
- (id)createAddCellularPlanSpecifierIfNeeded:(id)a0;

@end
