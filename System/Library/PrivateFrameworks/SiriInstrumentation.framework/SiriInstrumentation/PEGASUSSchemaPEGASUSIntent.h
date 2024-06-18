@class NSString, NSData, SISchemaUUID;

@interface PEGASUSSchemaPEGASUSIntent : SISchemaInstrumentationMessage {
    struct { unsigned char intentCategory : 1; unsigned char source : 1; unsigned char confidence : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) int intentCategory;
@property (nonatomic) BOOL hasIntentCategory;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) int source;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) float confidence;
@property (nonatomic) BOOL hasConfidence;
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
- (void)deleteConfidence;
- (void)deleteIntentCategory;
- (void)deleteLinkId;
- (void)deleteName;
- (void)deleteSource;

@end
