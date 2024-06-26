@class NSMutableArray;

@interface GEOLogMsgStateNearbyTransit : PBCodable <NSCopying> {
    NSMutableArray *_groups;
    unsigned int _pinnedLines;
    struct { unsigned char has_pinnedLines : 1; } _flags;
}

@property (nonatomic) BOOL hasPinnedLines;
@property (nonatomic) unsigned int pinnedLines;
@property (retain, nonatomic) NSMutableArray *groups;

+ (BOOL)isValid:(id)a0;
+ (Class)groupsType;

- (id)initWithDictionary:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (void)addGroups:(id)a0;
- (void)clearGroups;
- (id)groupsAtIndex:(unsigned long long)a0;
- (unsigned long long)groupsCount;

@end
