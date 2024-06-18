@class NSString, NSDictionary, NSSet, NoteStoreObject, NSNumber;

@interface NoteAccountObject : NoteCollectionObject {
    NSNumber *_preventMovingNotesToOtherAccounts;
}

@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSString *constraintsPath;
@property (retain, nonatomic) NSDictionary *constraints;
@property (retain, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSSet *stores;
@property (retain, nonatomic) NoteStoreObject *defaultStore;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long accountType;
@property (retain, nonatomic) NSString *pathToConstraintsPlist;
@property (nonatomic) BOOL didChooseToMigrate;
@property (readonly, nonatomic) BOOL preventMovingNotesToOtherAccounts;
@property (readonly, nonatomic) BOOL isICloudIMAPAccount;

+ (BOOL)shouldDataAccessCreateAccountForACAccount:(id)a0;

- (id)collectionInfo;
- (void)willSave;
- (id)cacheKey;
- (id)storeForExternalId:(id)a0;
- (BOOL)validateDefaultStore:(id *)a0 error:(id *)a1;
- (id)basicAccountIdentifier;
- (BOOL)isAllNotesContainer;
- (void).cxx_destruct;
- (id)titleForTableViewCell;
- (id)predicateForNotes;
- (void)didTurnIntoFault;
- (BOOL)shouldMarkNotesAsDeleted;
- (id)noteVisibilityTestingForSearchingAccount;
- (id)searchDomainIdentifier;

@end
