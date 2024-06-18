@class NSData;

@interface CNVSchemaCNVFlowPluginLoadContextFailed : SISchemaInstrumentationMessage {
    struct { unsigned char errorCode : 1; unsigned char hasPluginCached : 1; } _has;
}

@property (nonatomic) unsigned int errorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasPluginCached;
@property (nonatomic) BOOL hasHasPluginCached;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteErrorCode;
- (void)deleteHasPluginCached;

@end
