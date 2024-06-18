@class PLAccountingEnergyEventEntry;
@protocol PLAccountingQualificationManagerDelegate;

@interface PLAccountingQualificationManager : PLAccountingOwnerDependencyManager

@property (weak) id<PLAccountingQualificationManagerDelegate> delegate;
@property (retain, nonatomic) PLAccountingEnergyEventEntry *lastQualifiedEnergyEvent;

+ (double)freeTimerInterval;

- (void)addQualificationEvent:(id)a0;
- (id)dependencyIDsForOwner:(id)a0;
- (void)addEnergyEstimate:(id)a0 withNow:(id)a1;
- (void)closeLastQualificationEventForwardWithQualificationID:(id)a0 withEndDate:(id)a1;
- (id)ownerIDsForDependency:(id)a0;
- (void).cxx_destruct;
- (void)didQualifyEnergyEvent:(id)a0 withRootNodeID:(id)a1 withQualificationID:(id)a2;
- (void)reloadDependenciesNewerThanDate:(id)a0;

@end
