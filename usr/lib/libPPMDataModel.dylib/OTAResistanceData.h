@interface OTAResistanceData : PBCodable <NSCopying> {
    struct { float *list; unsigned long long count; unsigned long long size; } _resistance25Cs;
    struct { float *list; unsigned long long count; unsigned long long size; } _temperatureCoeffs;
}

@property (readonly, nonatomic) unsigned long long resistance25CsCount;
@property (readonly, nonatomic) float *resistance25Cs;
@property (readonly, nonatomic) unsigned long long temperatureCoeffsCount;
@property (readonly, nonatomic) float *temperatureCoeffs;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (float)resistance25CAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)setTemperatureCoeffs:(float *)a0 count:(unsigned long long)a1;
- (void)addTemperatureCoeff:(float)a0;
- (void)clearTemperatureCoeffs;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addResistance25C:(float)a0;
- (void)dealloc;
- (void)setResistance25Cs:(float *)a0 count:(unsigned long long)a1;
- (void)clearResistance25Cs;
- (float)temperatureCoeffAtIndex:(unsigned long long)a0;

@end
