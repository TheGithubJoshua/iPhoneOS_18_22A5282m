@class NSMutableArray;

@interface PBBProtoTransferPerformanceResults : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *milestones;
@property (retain, nonatomic) NSMutableArray *measures;
@property (retain, nonatomic) NSMutableArray *macroActivites;

+ (Class)macroActivitesType;
+ (Class)measuresType;
+ (Class)milestonesType;

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
- (void)addMilestones:(id)a0;
- (void)clearMilestones;
- (unsigned long long)milestonesCount;
- (void)addMacroActivites:(id)a0;
- (void)addMeasures:(id)a0;
- (void)clearMacroActivites;
- (void)clearMeasures;
- (id)macroActivitesAtIndex:(unsigned long long)a0;
- (unsigned long long)macroActivitesCount;
- (id)measuresAtIndex:(unsigned long long)a0;
- (unsigned long long)measuresCount;
- (id)milestonesAtIndex:(unsigned long long)a0;

@end
