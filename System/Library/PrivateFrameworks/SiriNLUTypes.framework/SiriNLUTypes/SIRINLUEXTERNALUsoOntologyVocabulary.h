@class SIRINLUEXTERNALSemVer, NSMutableArray;

@interface SIRINLUEXTERNALUsoOntologyVocabulary : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUsoVersion;
@property (retain, nonatomic) SIRINLUEXTERNALSemVer *usoVersion;
@property (retain, nonatomic) NSMutableArray *elementNames;

+ (Class)elementNamesType;

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
- (void)addElementNames:(id)a0;
- (void)clearElementNames;
- (id)elementNamesAtIndex:(unsigned long long)a0;
- (unsigned long long)elementNamesCount;

@end
