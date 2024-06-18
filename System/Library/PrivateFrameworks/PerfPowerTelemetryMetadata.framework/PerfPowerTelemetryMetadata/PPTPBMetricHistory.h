@class NSMutableArray;

@interface PPTPBMetricHistory : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *metrics;

+ (Class)metricsType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearMetrics;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)metricsCount;
- (void)addMetrics:(id)a0;
- (id)metricsAtIndex:(unsigned long long)a0;

@end
