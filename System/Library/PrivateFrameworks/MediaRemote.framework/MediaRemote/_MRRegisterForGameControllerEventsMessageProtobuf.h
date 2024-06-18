@interface _MRRegisterForGameControllerEventsMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char inputModeFlags : 1; } _has;
}

@property (nonatomic) BOOL hasInputModeFlags;
@property (nonatomic) int inputModeFlags;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsInputModeFlags:(id)a0;
- (id)inputModeFlagsAsString:(int)a0;

@end
