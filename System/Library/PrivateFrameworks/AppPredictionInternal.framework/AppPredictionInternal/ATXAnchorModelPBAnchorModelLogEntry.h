@class NSString, NSMutableArray, ATXAnchorModelPBAnchorMetadata;

@interface ATXAnchorModelPBAnchorModelLogEntry : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUserId;
@property (retain, nonatomic) NSString *userId;
@property (readonly, nonatomic) BOOL hasAnchor;
@property (retain, nonatomic) ATXAnchorModelPBAnchorMetadata *anchor;
@property (retain, nonatomic) NSMutableArray *positiveAppLaunches;
@property (retain, nonatomic) NSMutableArray *positiveActions;
@property (retain, nonatomic) NSMutableArray *negativeAppLaunches;
@property (retain, nonatomic) NSMutableArray *negativeActions;

+ (Class)negativeActionsType;
+ (Class)negativeAppLaunchesType;
+ (Class)positiveActionsType;
+ (Class)positiveAppLaunchesType;

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
- (void)addNegativeActions:(id)a0;
- (void)addNegativeAppLaunches:(id)a0;
- (void)addPositiveActions:(id)a0;
- (void)addPositiveAppLaunches:(id)a0;
- (void)clearNegativeActions;
- (void)clearNegativeAppLaunches;
- (void)clearPositiveActions;
- (void)clearPositiveAppLaunches;
- (id)negativeActionsAtIndex:(unsigned long long)a0;
- (unsigned long long)negativeActionsCount;
- (id)negativeAppLaunchesAtIndex:(unsigned long long)a0;
- (unsigned long long)negativeAppLaunchesCount;
- (id)positiveActionsAtIndex:(unsigned long long)a0;
- (unsigned long long)positiveActionsCount;
- (id)positiveAppLaunchesAtIndex:(unsigned long long)a0;
- (unsigned long long)positiveAppLaunchesCount;

@end
