@interface ComponentCarrierInfo : PBCodable <NSCopying> {
    struct { unsigned char dlBandwidth : 1; unsigned char dlEarfcn : 1; unsigned char dlRfBand : 1; } _has;
}

@property (nonatomic) BOOL hasDlEarfcn;
@property (nonatomic) unsigned int dlEarfcn;
@property (nonatomic) BOOL hasDlBandwidth;
@property (nonatomic) int dlBandwidth;
@property (nonatomic) BOOL hasDlRfBand;
@property (nonatomic) unsigned int dlRfBand;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsDlBandwidth:(id)a0;
- (id)dlBandwidthAsString:(int)a0;

@end
