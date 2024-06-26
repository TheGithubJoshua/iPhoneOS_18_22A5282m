@class NSString, NSMutableArray;

@interface SIRINLUINTERNALOverrideCollection : PBCodable <NSCopying> {
    struct { unsigned char creationTimestampMsSinceUnixEpoch : 1; } _has;
}

@property (nonatomic) BOOL hasCreationTimestampMsSinceUnixEpoch;
@property (nonatomic) unsigned long long creationTimestampMsSinceUnixEpoch;
@property (readonly, nonatomic) BOOL hasAssetId;
@property (retain, nonatomic) NSString *assetId;
@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSMutableArray *parseOverrides;
@property (retain, nonatomic) NSMutableArray *componentOverrides;

+ (Class)componentOverridesType;
+ (Class)parseOverridesType;

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
- (void)addComponentOverrides:(id)a0;
- (void)addParseOverrides:(id)a0;
- (void)clearComponentOverrides;
- (void)clearParseOverrides;
- (id)componentOverridesAtIndex:(unsigned long long)a0;
- (unsigned long long)componentOverridesCount;
- (id)parseOverridesAtIndex:(unsigned long long)a0;
- (unsigned long long)parseOverridesCount;

@end
