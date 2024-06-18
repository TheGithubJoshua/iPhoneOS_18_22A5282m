@class NSArray, NSMutableDictionary;

@interface DMCEnrollmentDirtyState : NSObject

@property (retain, nonatomic) NSMutableDictionary *stateDictionary;
@property (readonly, nonatomic) NSArray *dirtyPersonaIDs;
@property (readonly, nonatomic) NSArray *dirtyRMAccounts;
@property (readonly, nonatomic) NSArray *dirtyAltDISDs;
@property (readonly, nonatomic) NSArray *dirtyProfileIdentifiers;
@property (readonly, nonatomic) NSArray *dirtyBundleIDs;

- (id)initWithDictionary:(id)a0;
- (void)removeDirtyRMAccount:(id)a0;
- (void)removeDirtyProfileIdentifier:(id)a0;
- (void)_removeValue:(id)a0 fromArrayForKey:(id)a1;
- (void)addDirtyProfileIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)removeDirtyAltDSID:(id)a0;
- (void)addDirtyAltDSID:(id)a0;
- (void)removeDirtyBundleID:(id)a0;
- (void)addDirtyRMAccount:(id)a0;
- (void)removeDirtyPersonaID:(id)a0;
- (void)addDirtyPersonaID:(id)a0;
- (void)_addValue:(id)a0 toArrayForKey:(id)a1;
- (void)addDirtyBundleID:(id)a0;
- (id)dictionary;

@end
