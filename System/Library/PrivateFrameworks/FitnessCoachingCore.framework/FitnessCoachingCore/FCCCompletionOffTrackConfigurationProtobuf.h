@class NSString, NSMutableArray, FCCPercentageOfDayRuleProtobuf;

@interface FCCCompletionOffTrackConfigurationProtobuf : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _allowedGoalTypes;
    struct { unsigned char goalBufferPercentage : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasGoalBufferPercentage;
@property (nonatomic) double goalBufferPercentage;
@property (retain, nonatomic) NSMutableArray *coalescingRules;
@property (readonly, nonatomic) BOOL hasPercentageOfDayRule;
@property (retain, nonatomic) FCCPercentageOfDayRuleProtobuf *percentageOfDayRule;
@property (readonly, nonatomic) unsigned long long allowedGoalTypesCount;
@property (readonly, nonatomic) int *allowedGoalTypes;

+ (Class)coalescingRulesType;

- (void)mergeFrom:(id)a0;
- (void)addAllowedGoalTypes:(int)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)setAllowedGoalTypes:(int *)a0 count:(unsigned long long)a1;
- (unsigned long long)hash;
- (id)coalescingRulesAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (void)addCoalescingRules:(id)a0;
- (int)allowedGoalTypesAtIndex:(unsigned long long)a0;
- (void)clearAllowedGoalTypes;
- (void)clearCoalescingRules;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)coalescingRulesCount;

@end
