@class NSString, NSMutableArray, FCCTimeOfDayRuleProtobuf;

@interface FCCAlmostThereConfigurationProtobuf : PBCodable <NSCopying> {
    struct { unsigned char goalBufferPercentage : 1; unsigned char minimumPercentageComplete : 1; unsigned char goalType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasMinimumPercentageComplete;
@property (nonatomic) double minimumPercentageComplete;
@property (nonatomic) BOOL hasGoalBufferPercentage;
@property (nonatomic) double goalBufferPercentage;
@property (retain, nonatomic) NSMutableArray *coalescingRules;
@property (readonly, nonatomic) BOOL hasTimeOfDayRule;
@property (retain, nonatomic) FCCTimeOfDayRuleProtobuf *timeOfDayRule;
@property (nonatomic) BOOL hasGoalType;
@property (nonatomic) int goalType;

+ (Class)coalescingRulesType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)coalescingRulesAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (void)addCoalescingRules:(id)a0;
- (void)clearCoalescingRules;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)coalescingRulesCount;

@end
