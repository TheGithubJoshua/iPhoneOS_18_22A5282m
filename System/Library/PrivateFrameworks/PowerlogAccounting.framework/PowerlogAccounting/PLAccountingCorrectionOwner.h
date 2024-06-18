@class PLAccountingEnergyEstimateEventEntry;
@protocol PLAccountingCorrectionOwnerManager;

@interface PLAccountingCorrectionOwner : PLAccountingOwner

@property (weak) id<PLAccountingCorrectionOwnerManager> manager;
@property (retain) PLAccountingEnergyEstimateEventEntry *rootEnergyEstimate;

- (id)ID;
- (id)range;
- (id)initWithRootEnergyEstimate:(id)a0;
- (void)correct;
- (void).cxx_destruct;
- (id)activationDate;
- (void)setRunDate:(id)a0;
- (void)run;

@end
