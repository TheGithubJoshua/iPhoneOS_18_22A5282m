@class PLAccountingEnergyEstimateEventEntry;
@protocol PLAccountingDistributionOwnerManager;

@interface PLAccountingDistributionOwner : PLAccountingOwner

@property (weak) id<PLAccountingDistributionOwnerManager> manager;
@property (retain) PLAccountingEnergyEstimateEventEntry *energyEstimate;

- (id)ID;
- (id)range;
- (void).cxx_destruct;
- (id)activationDate;
- (id)initWithEnergyEstimate:(id)a0;
- (void)distribute;
- (void)setRunDate:(id)a0;
- (void)run;

@end
