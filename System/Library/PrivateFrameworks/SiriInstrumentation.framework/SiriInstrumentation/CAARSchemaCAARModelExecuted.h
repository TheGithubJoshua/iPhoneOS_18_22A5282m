@class NSData, SISchemaAsset, CAARSchemaCAARModelOutput;

@interface CAARSchemaCAARModelExecuted : SISchemaInstrumentationMessage {
    struct { unsigned char isShadowLog : 1; } _has;
}

@property (retain, nonatomic) SISchemaAsset *asset;
@property (nonatomic) BOOL hasAsset;
@property (nonatomic) BOOL isShadowLog;
@property (nonatomic) BOOL hasIsShadowLog;
@property (retain, nonatomic) CAARSchemaCAARModelOutput *modelOutput;
@property (nonatomic) BOOL hasModelOutput;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteAsset;
- (void)deleteIsShadowLog;
- (void)deleteModelOutput;

@end
