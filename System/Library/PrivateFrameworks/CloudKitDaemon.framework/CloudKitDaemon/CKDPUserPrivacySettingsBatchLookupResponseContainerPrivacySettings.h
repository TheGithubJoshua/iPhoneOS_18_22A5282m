@class NSString, NSMutableArray, CKDPUserPrivacySettings;

@interface CKDPUserPrivacySettingsBatchLookupResponseContainerPrivacySettings : PBCodable <NSCopying> {
    struct { unsigned char applicationContainerEnvironment : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasApplicationContainer;
@property (retain, nonatomic) NSString *applicationContainer;
@property (nonatomic) BOOL hasApplicationContainerEnvironment;
@property (nonatomic) int applicationContainerEnvironment;
@property (retain, nonatomic) NSMutableArray *applicationBundles;
@property (readonly, nonatomic) BOOL hasUserPrivacySettings;
@property (retain, nonatomic) CKDPUserPrivacySettings *userPrivacySettings;

+ (Class)applicationBundleType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)applicationContainerEnvironmentAsString:(int)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (int)StringAsApplicationContainerEnvironment:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addApplicationBundle:(id)a0;
- (id)applicationBundleAtIndex:(unsigned long long)a0;
- (unsigned long long)applicationBundlesCount;
- (void)clearApplicationBundles;

@end
