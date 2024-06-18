@class NSMutableArray;

@interface HMUserActionPredictionDuetPredictionStore : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *predictions;

+ (Class)predictionType;

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
- (void)addPrediction:(id)a0;
- (void)clearPredictions;
- (id)predictionAtIndex:(unsigned long long)a0;
- (unsigned long long)predictionsCount;

@end
