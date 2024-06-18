@class TRIDatabase;

@interface TRIContentTracker : NSObject {
    TRIDatabase *_db;
}

+ (id)contentIdentifierForFactorPackSetWithId:(id)a0;
+ (id)contentIdentifierForExperimentArtifactWithDeployment:(id)a0;
+ (id)contentIdentifierForRolloutArtifactWithDeployment:(id)a0;
+ (id)contentIdentifierForTreatmentArtifactWithTreatmentId:(id)a0 container:(id)a1;
+ (id)decodeContentIdentifier:(id)a0;

- (BOOL)clearRefsWithContentIdentifier:(id)a0;
- (id)init;
- (BOOL)_addOrDropRefWithContentIdentifier:(id)a0 changeType:(unsigned long long)a1;
- (BOOL)enumerateTrackedItemsWithBlock:(id /* block */)a0;
- (id)initWithDatabase:(id)a0;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })writeTransactionWithFailableBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)dropRefWithContentIdentifier:(id)a0;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })readTransactionWithFailableBlock:(id /* block */)a0;
- (BOOL)addRefWithContentIdentifier:(id)a0;
- (BOOL)refCountForContentIdentifier:(id)a0 refCount:(long long *)a1;

@end
