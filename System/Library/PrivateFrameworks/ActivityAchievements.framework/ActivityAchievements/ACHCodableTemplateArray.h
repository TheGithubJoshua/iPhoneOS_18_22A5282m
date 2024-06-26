@class NSMutableArray;

@interface ACHCodableTemplateArray : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *templates;

+ (Class)templatesType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)addTemplates:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSerializedData:(id)a0 error:(id *)a1;
- (id)initWithCodableTemplates:(id)a0;
- (unsigned long long)templatesCount;
- (void)clearTemplates;
- (id)templatesAtIndex:(unsigned long long)a0;

@end
