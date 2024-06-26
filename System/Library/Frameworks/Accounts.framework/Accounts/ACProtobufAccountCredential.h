@class NSDictionary, NSMutableArray, NSString;

@interface ACProtobufAccountCredential : PBCodable <NSCopying>

@property (copy, nonatomic) NSDictionary *credentialItemsDictionary;
@property (retain, nonatomic) NSMutableArray *credentialItems;
@property (retain, nonatomic) NSString *credentialType;
@property (retain, nonatomic) NSMutableArray *dirtyProperties;
@property (nonatomic) BOOL requiresTouchID;

+ (Class)credentialItemsType;
+ (Class)dirtyPropertiesType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearDirtyProperties;
- (void)addCredentialItems:(id)a0;
- (void)addDirtyProperties:(id)a0;
- (void)clearCredentialItems;
- (id)credentialItemsAtIndex:(unsigned long long)a0;
- (unsigned long long)credentialItemsCount;
- (id)dirtyPropertiesAtIndex:(unsigned long long)a0;
- (unsigned long long)dirtyPropertiesCount;

@end
