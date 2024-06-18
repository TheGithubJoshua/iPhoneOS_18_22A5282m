@class NSData;

@interface CLPInstSchemaCLPNLv4SampleEvaluationFailed : SISchemaInstrumentationMessage {
    struct { unsigned char userProfileSandboxFailure : 1; unsigned char xpcClientDisconnected : 1; unsigned char xpcClientNLURequestTimeout : 1; } _has;
}

@property (nonatomic) BOOL userProfileSandboxFailure;
@property (nonatomic) BOOL hasUserProfileSandboxFailure;
@property (nonatomic) BOOL xpcClientDisconnected;
@property (nonatomic) BOOL hasXpcClientDisconnected;
@property (nonatomic) BOOL xpcClientNLURequestTimeout;
@property (nonatomic) BOOL hasXpcClientNLURequestTimeout;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteUserProfileSandboxFailure;
- (void)deleteXpcClientDisconnected;
- (void)deleteXpcClientNLURequestTimeout;

@end
