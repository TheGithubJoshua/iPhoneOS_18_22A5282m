@class NSString;
@protocol PLAccountingDistributionManagerDelegate;

@interface PLAccountingDistributionManager : PLAccountingOwnerDependencyManager <PLAccountingDistributionOwnerManager>

@property (weak) id<PLAccountingDistributionManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)freeTimerInterval;

- (id)init;
- (id)dependencyIDsForOwner:(id)a0;
- (void)addEnergyEstimate:(id)a0 withNow:(id)a1;
- (void)didDistributeToChildEnergyEstimate:(id)a0 fromParentEnergyEstimate:(id)a1;
- (id)ownerIDsForDependency:(id)a0;
- (void).cxx_destruct;
- (void)addDistributionEvent:(id)a0;
- (void)didDistributeEnergyEstimate:(id)a0;
- (void)closeLastDistributionEventForwardWithDistributionID:(id)a0 withEndDate:(id)a1;
- (void)reloadDependenciesNewerThanDate:(id)a0;

@end
