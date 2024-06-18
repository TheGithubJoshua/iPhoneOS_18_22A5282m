@class NSString, NSArray, NSData, SISchemaUUID;

@interface INFERENCESchemaINFERENCEResolutionQueryInfoGenerated : SISchemaInstrumentationMessage {
    struct { unsigned char resolutionState : 1; unsigned char forcePromptType : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *originalResolutionContextId;
@property (nonatomic) BOOL hasOriginalResolutionContextId;
@property (retain, nonatomic) SISchemaUUID *queryId;
@property (nonatomic) BOOL hasQueryId;
@property (nonatomic) int resolutionState;
@property (nonatomic) BOOL hasResolutionState;
@property (nonatomic) int forcePromptType;
@property (nonatomic) BOOL hasForcePromptType;
@property (copy, nonatomic) NSString *recommenderModelVersion;
@property (nonatomic) BOOL hasRecommenderModelVersion;
@property (copy, nonatomic) NSArray *anonymizedRecommendedEntityIdentifiers;
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
- (void)addAnonymizedRecommendedEntityIdentifier:(id)a0;
- (id)anonymizedRecommendedEntityIdentifierAtIndex:(unsigned long long)a0;
- (unsigned long long)anonymizedRecommendedEntityIdentifierCount;
- (void)clearAnonymizedRecommendedEntityIdentifier;
- (void)deleteAnonymizedRecommendedEntityIdentifier;
- (void)deleteForcePromptType;
- (void)deleteOriginalResolutionContextId;
- (void)deleteQueryId;
- (void)deleteRecommenderModelVersion;
- (void)deleteResolutionState;

@end
