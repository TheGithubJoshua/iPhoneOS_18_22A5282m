@class NSString, NSMutableArray;

@interface CAXPBSuggestion : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *suggestedActions;
@property (readonly, nonatomic) BOOL hasModelVersion;
@property (retain, nonatomic) NSString *modelVersion;

+ (Class)suggestedActionsType;

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
- (void)addSuggestedActions:(id)a0;
- (void)clearSuggestedActions;
- (id)suggestedActionsAtIndex:(unsigned long long)a0;
- (unsigned long long)suggestedActionsCount;

@end
