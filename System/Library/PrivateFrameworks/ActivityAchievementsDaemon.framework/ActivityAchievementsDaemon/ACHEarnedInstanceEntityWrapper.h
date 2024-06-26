@class NSString, HDProfile;
@protocol ACHEarnedInstanceEntitySyncedEarnedInstancesObserver;

@interface ACHEarnedInstanceEntityWrapper : NSObject <ACHEarnedInstanceEntitySyncedEarnedInstancesObserver>

@property (weak, nonatomic) HDProfile *profile;
@property (weak, nonatomic) id<ACHEarnedInstanceEntitySyncedEarnedInstancesObserver> syncedEarnedInstancesObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (id)earnedInstancesForTemplateUniqueName:(id)a0 error:(id *)a1;
- (BOOL)earnedInstanceEntityDidReceiveSyncedEarnedInstances:(id)a0 provenance:(long long)a1;
- (id)earnedInstancesForDateComponents:(id)a0 error:(id *)a1;
- (id)insertEarnedInstances:(id)a0 provenance:(long long)a1 databaseContext:(id)a2 error:(id *)a3;
- (BOOL)removeEarnedInstances:(id)a0 error:(id *)a1;
- (BOOL)removeEarnedInstancesForTemplateUniqueName:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)removeAllEarnedInstancesWithError:(id *)a0;
- (id)allEarnedInstancesWithError:(id *)a0;

@end
