@class NSSet, NSString, NSMutableDictionary, NSMutableSet;
@protocol PLJournalEntryPayloadID;

@interface PLManagedObjectJournalEntryPayload : NSObject <PLManagedObjectJournalEntryPayloadClass> {
    NSMutableDictionary *_payloadAttributes;
    NSMutableSet *_nilAttributes;
    id<PLJournalEntryPayloadID> _payloadID;
    unsigned int _payloadVersion;
}

@property (readonly, nonatomic) id<PLJournalEntryPayloadID> payloadID;
@property (readonly, nonatomic) unsigned int payloadVersion;
@property (readonly, nonatomic) NSSet *nilProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (unsigned int)payloadVersion;
+ (id)relationshipKeyPathsForPrefetching;
+ (id)modelProperties;
+ (id)payloadAdapterForManagedObject:(id)a0;
+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)a0 additionalEntityName:(id)a1;
+ (void)_populateAddtionalEntityNames:(id)a0 fromModelProperties:(id)a1;
+ (void)_populatePersistedPropertyNamesForAdditionalEntityNames:(id)a0 fromModelProperties:(id)a1;
+ (id)_populateRelationshipKeyPathsForPrefetching:(id)a0 currentKeyPath:(id)a1 usingModelProperties:(id)a2;
+ (void)_populateValidationProperties:(id)a0 fromEntityDescription:(id)a1;
+ (void)_validateModelProperties:(id)a0 nonPersistedModelProperties:(id)a1 forEntityDescription:(id)a2;
+ (id)additionalEntityNames;
+ (void)applyPayloadProperty:(id)a0 toManagedObject:(id)a1 key:(id)a2 payloadAttributesToUpdate:(id)a3 payloadDictionary:(id)a4;
+ (id)fetchRelationshipPropertyValuesForRelationshipName:(id)a0 fromManagedObject:(id)a1 usingPayloadProperty:(id)a2;
+ (void)loadModelPropertiesDescription:(id)a0 parentPayloadProperty:(id)a1;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)payloadClassID;
+ (id)payloadWithData:(id)a0 forPayloadID:(id)a1 version:(unsigned int)a2 andNilProperties:(id)a3 error:(id *)a4;
+ (id)persistedPropertyNamesForEntityNames;
+ (id)persistedPropertyNamesForEntityNamesFromModelProperties;
+ (void)populateValidationPropertiesFromManagedObjectModel:(id)a0;
+ (id)relationshipKeyPathsForPrefetchingWithModelProperties:(id)a0 outUUIDPropertyName:(id *)a1;
+ (BOOL)shouldPersistForChangedKeys:(id)a0 entityName:(id)a1;
+ (id)snapshotSortDescriptors;
+ (id)sortedObjectsToAddWithUUIDs:(id)a0 uuidKey:(id)a1 andExistingObjects:(id)a2 fetchBlock:(id /* block */)a3;
+ (void)validatePayloadPropertiesForManagedObjectModel:(id)a0;

- (void).cxx_destruct;
- (BOOL)comparePayloadValue:(id)a0 toObjectDictionaryValue:(id)a1 forPayloadProperty:(id)a2;
- (id)UUIDDataForString:(id)a0;
- (id)UUIDStringForData:(id)a0;
- (void)_applyModelProperties:(id)a0 toPayloadAttributes:(id)a1 andNilAttributes:(id)a2 forManagedObject:(id)a3 changedKeys:(id)a4;
- (void)_applyPayloadToManagedObject:(id)a0 forModelProperties:(id)a1 payloadAttributesToUpdate:(id)a2;
- (id)_attributesForPayloadAttributes:(id)a0 usingModelProperties:(id)a1;
- (BOOL)_comparePayloadAttributes:(id)a0 toObjectDictionary:(id)a1 currentKeyPath:(id)a2 usingModelProperties:(id)a3 errorDescriptions:(id)a4;
- (BOOL)_decodePayloadAttributesFromData:(id)a0 error:(id *)a1;
- (id)_payloadAttributesListForSubRelationshipProperty:(id)a0 withManagedObjects:(id)a1;
- (void)_resolveRelationshipsInObjectDictionary:(id)a0 atKeyPath:(id)a1 forPayloadProperty:(id)a2;
- (void)_updateNilAttributes:(id)a0 withModelProperties:(id)a1;
- (void)addAttributesDescriptionToBuilder:(id)a0;
- (void)addNilAttributesToBuilder:(id)a0;
- (void)appendAttributeKey:(id)a0 value:(id)a1 toDescriptionBuilder:(id)a2;
- (void)applyPayloadProperty:(id)a0 toManagedObject:(id)a1 key:(id)a2 payloadAttributesToUpdate:(id)a3;
- (void)applyPayloadToManagedObject:(id)a0 payloadAttributesToUpdate:(id)a1;
- (BOOL)comparePayloadToObjectDictionary:(id)a0 usingModelProperties:(id)a1 errorDescriptions:(id)a2;
- (BOOL)containsAttributeForKey:(id)a0;
- (id)descriptionForEntry:(id)a0;
- (id)descriptionForEntry:(id)a0 withBuilder:(id)a1;
- (id)descriptionWithBuilder:(id)a0;
- (id)encodedDataForUUIDStrings:(id)a0 count:(unsigned long long)a1;
- (id)initWithManagedObject:(id)a0 changedKeys:(id)a1;
- (id)initWithPayloadID:(id)a0 payloadVersion:(unsigned int)a1 managedObject:(id)a2 changedKeys:(id)a3 modelProperties:(id)a4;
- (id)initWithPayloadID:(id)a0 payloadVersion:(unsigned int)a1 nilAttributes:(id)a2;
- (id)initWithPayloadID:(id)a0 payloadVersion:(unsigned int)a1 nilAttributes:(id)a2 managedObject:(id)a3 changedKeys:(id)a4 modelProperties:(id)a5;
- (void)mergePayload:(id)a0;
- (void)migrateMergedPayloadWithUpdatePayloads:(id)a0;
- (void)migratePayloadAttributes:(id)a0 andNilAttributes:(id)a1;
- (id)orderedSetForUUIDEncodedData:(id)a0;
- (id)payloadAttributes;
- (id)payloadDataWithError:(id *)a0;
- (id)payloadValueFromAttributes:(id)a0 forPayloadProperty:(id)a1;
- (BOOL)payloadVersionIsLessThanVersion:(unsigned int)a0 forKey:(id)a1 inUpdatePayloads:(id)a2;
- (id)prettyDescriptionForEntry:(id)a0 indent:(long long)a1;
- (id)rawPayloadAttributeForKey:(id)a0;
- (id)rawPayloadAttributes;
- (id)setForUUIDEncodedData:(id)a0;
- (void)setRawPayloadAttribute:(id)a0 forKey:(id)a1;
- (void)setRawPayloadAttributes:(id)a0;
- (void)updatePayloadAttributes:(id)a0 andNilAttributes:(id)a1 forPayloadProperty:(id)a2 withUUIDStrings:(id)a3 count:(unsigned long long)a4;
- (BOOL)updatePayloadAttributes:(id)a0 andNilAttributes:(id)a1 withManagedObject:(id)a2 forPayloadProperty:(id)a3;

@end