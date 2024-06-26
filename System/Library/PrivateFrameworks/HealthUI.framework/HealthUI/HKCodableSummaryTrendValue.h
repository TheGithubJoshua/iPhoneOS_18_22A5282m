@class NSData, NSString, NSMutableArray;

@interface HKCodableSummaryTrendValue : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAnalysisData;
@property (retain, nonatomic) NSData *analysisData;
@property (readonly, nonatomic) BOOL hasCoveredDateRangeRawValue;
@property (retain, nonatomic) NSString *coveredDateRangeRawValue;
@property (retain, nonatomic) NSMutableArray *dataPresencePoints;

+ (Class)dataPresencePointsType;

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
- (void)addDataPresencePoints:(id)a0;
- (void)clearDataPresencePoints;
- (id)dataPresencePointsAtIndex:(unsigned long long)a0;
- (unsigned long long)dataPresencePointsCount;

@end
