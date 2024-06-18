@class NTPBRelativePersonalizedSectionPresenceConfig, NTPBAbsolutePersonalizedSectionPresenceConfig;

@interface NTPBPersonalizedSectionPresenceConfig : PBCodable <NSCopying> {
    struct { unsigned char personalizationMethod : 1; } _has;
}

@property (nonatomic) BOOL hasPersonalizationMethod;
@property (nonatomic) int personalizationMethod;
@property (readonly, nonatomic) BOOL hasRelativeConfig;
@property (retain, nonatomic) NTPBRelativePersonalizedSectionPresenceConfig *relativeConfig;
@property (readonly, nonatomic) BOOL hasAbsoluteConfig;
@property (retain, nonatomic) NTPBAbsolutePersonalizedSectionPresenceConfig *absoluteConfig;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
