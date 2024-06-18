@class NSMutableArray;

@interface ATXPBUserNotificationDerivedData : PBCodable <ATXJSONSerializableProtocol, NSCopying>

@property (retain, nonatomic) NSMutableArray *scores;

+ (Class)scoresType;

- (id)initFromJSON:(id)a0;
- (void)clearScores;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)addScores:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)scoresAtIndex:(unsigned long long)a0;
- (unsigned long long)scoresCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;

@end
