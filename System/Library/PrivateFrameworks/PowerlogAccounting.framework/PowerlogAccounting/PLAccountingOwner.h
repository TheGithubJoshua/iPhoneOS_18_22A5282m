@class NSMutableDictionary, PLAccountingRange, NSMutableSet, NSDate, NSNumber, NSString;
@protocol PLAccountingOwnerManager;

@interface PLAccountingOwner : NSObject <PLAccountingDependencyOwner>

@property (retain, nonatomic) NSMutableSet *observingDependencyIDs;
@property (retain, nonatomic) NSMutableDictionary *dependencyIDToDependenciesInRange;
@property (weak) id<PLAccountingOwnerManager> manager;
@property (retain, nonatomic) NSNumber *ID;
@property (retain, nonatomic) PLAccountingRange *range;
@property (retain, nonatomic) NSDate *activationDate;
@property (retain, nonatomic) NSDate *runDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)activate;
- (void)deactivate;
- (void).cxx_destruct;
- (void)run;
- (void)addDependency:(id)a0;
- (void)allRun;
- (void)didReceiveDependency:(id)a0;
- (BOOL)hasRun;

@end
