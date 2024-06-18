@class NTPBConfig, NSMutableArray;

@interface NTPBMultiABConfig : PBCodable <NSCopying> {
    struct { unsigned char moduloForHashing : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDefaultConfig;
@property (retain, nonatomic) NTPBConfig *defaultConfig;
@property (nonatomic) BOOL hasModuloForHashing;
@property (nonatomic) long long moduloForHashing;
@property (retain, nonatomic) NSMutableArray *abConfigs;

+ (Class)abConfigsType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)abConfigsAtIndex:(unsigned long long)a0;
- (unsigned long long)abConfigsCount;
- (void)addAbConfigs:(id)a0;
- (void)clearAbConfigs;

@end
