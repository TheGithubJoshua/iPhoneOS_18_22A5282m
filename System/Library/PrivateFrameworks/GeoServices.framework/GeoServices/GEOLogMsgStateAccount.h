@interface GEOLogMsgStateAccount : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _possibleActions;
    BOOL _signedIntoIcloud;
    struct { unsigned char has_signedIntoIcloud : 1; } _flags;
}

@property (nonatomic) BOOL hasSignedIntoIcloud;
@property (nonatomic) BOOL signedIntoIcloud;
@property (readonly, nonatomic) unsigned long long possibleActionsCount;
@property (readonly, nonatomic) int *possibleActions;

+ (BOOL)isValid:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (int)StringAsPossibleActions:(id)a0;
- (void)addPossibleAction:(int)a0;
- (void)clearPossibleActions;
- (int)possibleActionAtIndex:(unsigned long long)a0;
- (id)possibleActionsAsString:(int)a0;
- (void)setPossibleActions:(int *)a0 count:(unsigned long long)a1;

@end
