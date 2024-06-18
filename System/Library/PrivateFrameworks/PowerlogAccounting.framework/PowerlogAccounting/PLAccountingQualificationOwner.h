@class PLAccountingEnergyEstimateEventEntry;
@protocol PLAccountingQualificationOwnerManager;

@interface PLAccountingQualificationOwner : PLAccountingOwner

@property (weak) id<PLAccountingQualificationOwnerManager> manager;
@property (retain) PLAccountingEnergyEstimateEventEntry *energyEstimate;

- (id)ID;
- (id)range;
- (void)qualify;
- (void).cxx_destruct;
- (id)activationDate;
- (id)initWithEnergyEstimate:(id)a0;
- (void)setRunDate:(id)a0;
- (void)run;

@end
