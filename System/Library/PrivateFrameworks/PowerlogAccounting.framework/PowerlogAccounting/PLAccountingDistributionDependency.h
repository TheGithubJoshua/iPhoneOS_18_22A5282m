@class PLAccountingDistributionEventEntry;

@interface PLAccountingDistributionDependency : PLAccountingDependency

@property (retain) PLAccountingDistributionEventEntry *distributionEvent;

- (id)ID;
- (id)range;
- (id)initWithDistributionEvent:(id)a0;
- (void)setRange:(id)a0;
- (void).cxx_destruct;
- (id)activationDate;

@end
