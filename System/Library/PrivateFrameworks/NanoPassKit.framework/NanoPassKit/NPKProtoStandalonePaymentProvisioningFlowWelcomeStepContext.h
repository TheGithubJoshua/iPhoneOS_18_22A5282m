@class NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowWelcomeStepContext : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *heroImages;

+ (Class)heroImagesType;

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
- (void)clearHeroImages;
- (unsigned long long)heroImagesCount;
- (void)addHeroImages:(id)a0;
- (id)heroImagesAtIndex:(unsigned long long)a0;

@end
