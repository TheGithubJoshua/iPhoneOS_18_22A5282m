@interface NMSMediaSyncServiceKeepLocalResponse : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _validatorExceptions;
    struct { unsigned char errorCode : 1; } _has;
}

@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) int errorCode;
@property (readonly, nonatomic) unsigned long long validatorExceptionsCount;
@property (readonly, nonatomic) int *validatorExceptions;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (int)StringAsErrorCode:(id)a0;
- (id)errorCodeAsString:(int)a0;
- (int)StringAsValidatorExceptions:(id)a0;
- (void)addValidatorException:(int)a0;
- (void)clearValidatorExceptions;
- (void)setValidatorExceptions:(int *)a0 count:(unsigned long long)a1;
- (int)validatorExceptionAtIndex:(unsigned long long)a0;
- (id)validatorExceptionsAsString:(int)a0;

@end
