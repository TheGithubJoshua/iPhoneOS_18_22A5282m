@class NSString, NSData;

@interface USOSchemaUSONode : SISchemaInstrumentationMessage {
    struct { unsigned char usoElementId : 1; unsigned char usoVerbElementId : 1; } _has;
}

@property (nonatomic) unsigned int usoElementId;
@property (nonatomic) BOOL hasUsoElementId;
@property (nonatomic) unsigned int usoVerbElementId;
@property (nonatomic) BOOL hasUsoVerbElementId;
@property (copy, nonatomic) NSString *entityLabel;
@property (nonatomic) BOOL hasEntityLabel;
@property (copy, nonatomic) NSString *verbLabel;
@property (nonatomic) BOOL hasVerbLabel;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteVerbLabel;
- (void)deleteEntityLabel;
- (void)deleteUsoElementId;
- (void)deleteUsoVerbElementId;

@end
