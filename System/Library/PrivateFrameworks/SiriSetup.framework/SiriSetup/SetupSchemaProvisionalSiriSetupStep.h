@class NSData;

@interface SetupSchemaProvisionalSiriSetupStep : SISchemaInstrumentationMessage {
    struct { unsigned char page : 1; } _has;
}

@property (nonatomic) int page;
@property (nonatomic) BOOL hasPage;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deletePage;

@end
