@class NSMutableArray;

@interface GEOLogMsgStateActionButtonDetails : PBCodable <NSCopying> {
    NSMutableArray *_actionButtonDetails;
}

@property (retain, nonatomic) NSMutableArray *actionButtonDetails;

+ (BOOL)isValid:(id)a0;
+ (Class)actionButtonDetailsType;

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
- (id)actionButtonDetailsAtIndex:(unsigned long long)a0;
- (unsigned long long)actionButtonDetailsCount;
- (void)addActionButtonDetails:(id)a0;
- (void)clearActionButtonDetails;

@end
