@class NSMutableArray;

@interface ATXPBSuggestionLayoutList : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *layouts;

+ (Class)layoutType;

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
- (unsigned long long)layoutsCount;
- (id)layoutAtIndex:(unsigned long long)a0;
- (void)addLayout:(id)a0;
- (void)clearLayouts;

@end
