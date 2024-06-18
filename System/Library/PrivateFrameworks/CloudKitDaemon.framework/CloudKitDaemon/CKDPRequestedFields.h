@class NSMutableArray;

@interface CKDPRequestedFields : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *fields;
@property (retain, nonatomic) NSMutableArray *listFields;

+ (Class)fieldsType;
+ (Class)listFieldType;

- (id)fieldsAtIndex:(unsigned long long)a0;
- (void)clearFields;
- (void)mergeFrom:(id)a0;
- (unsigned long long)listFieldsCount;
- (void)addFields:(id)a0;
- (void)_CKLogToFileHandle:(id)a0 atDepth:(int)a1;
- (unsigned long long)fieldsCount;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)listFieldAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)clearListFields;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addListField:(id)a0;

@end
