@class PSUIPlanPendingTransferMenusGroup;

@interface PSUIPlanPendingTransferDetailController : PSListController

@property (retain, nonatomic) PSUIPlanPendingTransferMenusGroup *planPendingTransferMenus;

- (id)specifiers;
- (id)init;
- (id)getLogger;
- (void).cxx_destruct;
- (void)cellularPlanChanged;

@end
