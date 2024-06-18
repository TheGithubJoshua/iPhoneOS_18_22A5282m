@class NSString, NSMutableArray;

@interface SIRINLUINTERNALAdjacentSpans : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasCaptureGroupName;
@property (retain, nonatomic) NSString *captureGroupName;
@property (retain, nonatomic) NSMutableArray *spans;

+ (Class)spansType;

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
- (void)clearSpans;
- (unsigned long long)spansCount;
- (void)addSpans:(id)a0;
- (id)spansAtIndex:(unsigned long long)a0;

@end
