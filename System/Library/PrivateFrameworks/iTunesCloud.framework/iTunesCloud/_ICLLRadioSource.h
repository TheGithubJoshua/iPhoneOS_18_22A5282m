@class NSString, _ICLLRadioSeed;

@interface _ICLLRadioSource : PBCodable <NSCopying> {
    NSString *_featureName;
    _ICLLRadioSeed *_seed;
    NSString *_stationId;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
