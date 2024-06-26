@class NSMutableArray;

@interface NPKProtoFeatureApplicationsForAccountIdentifierResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *deprecatedFeatureApplications;
@property (retain, nonatomic) NSMutableArray *featureApplications;

+ (Class)deprecatedFeatureApplicationsType;
+ (Class)featureApplicationsType;

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
- (void)addDeprecatedFeatureApplications:(id)a0;
- (void)addFeatureApplications:(id)a0;
- (void)clearDeprecatedFeatureApplications;
- (void)clearFeatureApplications;
- (id)deprecatedFeatureApplicationsAtIndex:(unsigned long long)a0;
- (unsigned long long)deprecatedFeatureApplicationsCount;
- (id)featureApplicationsAtIndex:(unsigned long long)a0;
- (unsigned long long)featureApplicationsCount;

@end
