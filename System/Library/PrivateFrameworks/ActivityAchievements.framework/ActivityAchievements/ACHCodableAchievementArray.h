@class NSMutableArray;

@interface ACHCodableAchievementArray : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *achievements;

+ (Class)achievementsType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)addAchievements:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)achievementsAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)achievementsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCodableAchievements:(id)a0;
- (id)initWithSerializedData:(id)a0 error:(id *)a1;
- (void)clearAchievements;

@end
