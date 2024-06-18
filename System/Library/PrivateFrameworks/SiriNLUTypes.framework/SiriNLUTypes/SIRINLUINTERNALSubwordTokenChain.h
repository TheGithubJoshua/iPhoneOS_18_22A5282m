@class NSString, NSMutableArray;

@interface SIRINLUINTERNALSubwordTokenChain : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasLocale;
@property (retain, nonatomic) NSString *locale;
@property (retain, nonatomic) NSMutableArray *subwordTokens;

+ (Class)subwordTokensType;

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
- (void)addSubwordTokens:(id)a0;
- (void)clearSubwordTokens;
- (id)subwordTokensAtIndex:(unsigned long long)a0;
- (unsigned long long)subwordTokensCount;

@end
