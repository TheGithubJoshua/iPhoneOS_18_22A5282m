@class NSString, NSMutableArray;

@interface AWDNWAccumulator : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *durations;

+ (Class)durationsType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)addDurations:(id)a0;
- (void)clearDurations;
- (id)durationsAtIndex:(unsigned long long)a0;
- (unsigned long long)durationsCount;

@end
