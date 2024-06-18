@class NSString, NSData;

@interface RFSchemaRFGVisualResponseShownTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *responseModel;
@property (nonatomic) BOOL hasResponseModel;
@property (copy, nonatomic) NSString *patternId;
@property (nonatomic) BOOL hasPatternId;
@property (copy, nonatomic) NSString *version;
@property (nonatomic) BOOL hasVersion;
@property (copy, nonatomic) NSString *responseViewId;
@property (nonatomic) BOOL hasResponseViewId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (void)deleteVersion;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deletePatternId;
- (void)deleteResponseModel;
- (void)deleteResponseViewId;

@end
