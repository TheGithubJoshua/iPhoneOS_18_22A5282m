@class INFERENCESchemaINFERENCETaskSpecificInfo, NSData, SISchemaUUID;

@interface INFERENCESchemaINFERENCESimpleTaskInfoGenerated : SISchemaInstrumentationMessage {
    struct { unsigned char taskSuccessType : 1; unsigned char isSuccess : 1; unsigned char isExecuted : 1; unsigned char isSuccessfulDirectExecution : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *originalResolutionContextId;
@property (nonatomic) BOOL hasOriginalResolutionContextId;
@property (nonatomic) int taskSuccessType;
@property (nonatomic) BOOL hasTaskSuccessType;
@property (nonatomic) BOOL isSuccess;
@property (nonatomic) BOOL hasIsSuccess;
@property (nonatomic) BOOL isExecuted;
@property (nonatomic) BOOL hasIsExecuted;
@property (nonatomic) BOOL isSuccessfulDirectExecution;
@property (nonatomic) BOOL hasIsSuccessfulDirectExecution;
@property (retain, nonatomic) INFERENCESchemaINFERENCETaskSpecificInfo *taskSpecificInfo;
@property (nonatomic) BOOL hasTaskSpecificInfo;
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
- (void)deleteIsSuccess;
- (void)deleteIsExecuted;
- (void)deleteIsSuccessfulDirectExecution;
- (void)deleteOriginalResolutionContextId;
- (void)deleteTaskSpecificInfo;
- (void)deleteTaskSuccessType;

@end
