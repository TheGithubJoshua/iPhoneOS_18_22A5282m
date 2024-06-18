@class NSMutableArray;

@interface SIRINLUINTERNALCONTEXTUAL_SPAN_MATCHERContextualSpanMatcherResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *contextualSpans;

+ (Class)contextualSpansType;

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
- (void)addContextualSpans:(id)a0;
- (void)clearContextualSpans;
- (id)contextualSpansAtIndex:(unsigned long long)a0;
- (unsigned long long)contextualSpansCount;

@end
