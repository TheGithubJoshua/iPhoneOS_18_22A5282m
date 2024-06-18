@class NSString, NSMutableArray;

@interface BMPBSiriMemoryReferenceResolutionEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSMutableArray *entityMapElements;

+ (Class)entityMapElementsType;

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
- (void)addEntityMapElements:(id)a0;
- (void)clearEntityMapElements;
- (id)entityMapElementsAtIndex:(unsigned long long)a0;
- (unsigned long long)entityMapElementsCount;

@end
