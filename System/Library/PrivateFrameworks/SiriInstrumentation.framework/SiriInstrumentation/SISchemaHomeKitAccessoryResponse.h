@class NSData;

@interface SISchemaHomeKitAccessoryResponse : SISchemaInstrumentationMessage {
    struct { unsigned char homeKitAccessoryType : 1; unsigned char numAccessoriesCompleted : 1; unsigned char numAccessoriesNotCompleted : 1; } _has;
}

@property (nonatomic) int homeKitAccessoryType;
@property (nonatomic) BOOL hasHomeKitAccessoryType;
@property (nonatomic) int numAccessoriesCompleted;
@property (nonatomic) BOOL hasNumAccessoriesCompleted;
@property (nonatomic) int numAccessoriesNotCompleted;
@property (nonatomic) BOOL hasNumAccessoriesNotCompleted;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteHomeKitAccessoryType;
- (void)deleteNumAccessoriesCompleted;
- (void)deleteNumAccessoriesNotCompleted;

@end
