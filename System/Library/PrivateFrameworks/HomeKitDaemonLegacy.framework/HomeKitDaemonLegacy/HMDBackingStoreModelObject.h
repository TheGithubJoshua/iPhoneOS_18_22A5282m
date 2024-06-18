@class NSUUID, NSString, NSSet, NSMutableDictionary, CKRecord, HMFVersion;
@protocol HMDBackingStoreObjectProtocol;

@interface HMDBackingStoreModelObject : HMFObject <HMFLogging, NSCopying> {
    NSMutableDictionary *_reserved;
}

@property (class, readonly, copy) Class backedObjectClass;

@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSUUID *parentUUID;
@property (retain, nonatomic) NSString *bsoType;
@property (retain, nonatomic) CKRecord *bsoRecord;
@property BOOL bsoDataVersionOverride;
@property (nonatomic) unsigned long long objectChangeType;
@property (readonly, nonatomic) NSSet *dependentUUIDs;
@property (weak, nonatomic) id<HMDBackingStoreObjectProtocol> bsoDelegate;
@property (readonly) unsigned long long bsoLogRowID;
@property (readonly, nonatomic) HMFVersion *bsoDataVersion;
@property (readonly, nonatomic, getter=isReadOnly) BOOL isReadOnly;
@property (readonly, nonatomic, getter=isGenericRepresentation) BOOL isGenericRepresentation;
@property (readonly, nonatomic, getter=isReplayable) BOOL replayable;
@property (copy, nonatomic) HMFVersion *bsoIgnoredBefore;
@property (readonly, nonatomic) BOOL bsoIgnoreModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (BOOL)resolveInstanceMethod:(SEL)a0;
+ (id)properties;
+ (id)objectFromDictionaryData:(id)a0 error:(id *)a1;
+ (id)bsoSchemaHash;
+ (id)formatValue:(id)a0;
+ (Class)genericRepresentation;
+ (id)objectFromCloud:(id)a0 error:(id *)a1;
+ (id)objectFromData:(id)a0 encoding:(unsigned long long)a1 error:(id *)a2;
+ (id)objectFromData:(id)a0 encoding:(unsigned long long)a1 record:(id)a2 error:(id *)a3;
+ (id)objectFromData:(id)a0 encoding:(unsigned long long)a1 rowID:(unsigned long long)a2 error:(id *)a3;
+ (id)objectFromDictionaryData:(id)a0 type:(id)a1 error:(id *)a2;
+ (id)readonlyBefore;
+ (id)schemaHashRoot;

- (id)initWithUUID:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)debugString:(BOOL)a0;
- (id)setProperties;
- (id)merge:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)merge:(id)a0 error:(id *)a1;
- (id)encodeWithError:(id *)a0;
- (BOOL)_validateType:(id)a0 error:(id *)a1;
- (void)dumpDebug;
- (void)dumpDebug:(id)a0;
- (id)validateType:(id)a0 path:(id)a1;
- (BOOL)propertyWasSet:(id)a0;
- (id)encodeForCloud:(id *)a0;
- (BOOL)validForStorage;
- (id)backedObjectWithParent:(id)a0 error:(id *)a1;
- (void)clearVersionOverride;
- (id)debugString:(BOOL)a0 prefix:(id)a1;
- (id)defaultValueForPropertyNamed:(id)a0 isSet:(BOOL *)a1;
- (id)dependentUUIDs;
- (BOOL)diff:(id)a0 differingFields:(id *)a1;
- (void)dumpWithVerbosity:(BOOL)a0 prefix:(id)a1 logType:(unsigned char)a2;
- (id)encodeAsNSDictionaryFor:(unsigned long long)a0 error:(id *)a1;
- (id)encodeFor:(unsigned long long)a0 error:(id *)a1;
- (id)encodeWithEncoding:(unsigned long long)a0 error:(id *)a1;
- (id)encodeWithEncoding:(unsigned long long)a0 for:(unsigned long long)a1 error:(id *)a2;
- (id)initWithObjectChangeType:(unsigned long long)a0 uuid:(id)a1 parentUUID:(id)a2;
- (id)initWithUUID:(id)a0 parentUUID:(id)a1;
- (id)initWithVersion:(id)a0 changeType:(unsigned long long)a1 uuid:(id)a2 parentUUID:(id)a3;
- (id)merge:(id)a0 from:(unsigned long long)a1;
- (id)prepareFor:(unsigned long long)a0;
- (BOOL)propertyIsAvailable:(id)a0;
- (BOOL)propertyIsReadOnly:(id)a0;
- (void)setParentUUIDIfNotNil:(id)a0;
- (void)setPropertyIfNotNil:(id)a0 named:(id)a1;
- (id)typeNameForDebug;

@end