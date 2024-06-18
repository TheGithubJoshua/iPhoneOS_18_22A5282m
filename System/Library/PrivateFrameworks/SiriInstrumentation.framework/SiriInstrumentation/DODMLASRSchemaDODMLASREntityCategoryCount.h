@class NSString, NSData;

@interface DODMLASRSchemaDODMLASREntityCategoryCount : SISchemaInstrumentationMessage {
    struct { unsigned char count : 1; } _has;
}

@property (copy, nonatomic) NSString *entityCategory;
@property (nonatomic) BOOL hasEntityCategory;
@property (nonatomic) unsigned int count;
@property (nonatomic) BOOL hasCount;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (void)deleteCount;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteEntityCategory;

@end
