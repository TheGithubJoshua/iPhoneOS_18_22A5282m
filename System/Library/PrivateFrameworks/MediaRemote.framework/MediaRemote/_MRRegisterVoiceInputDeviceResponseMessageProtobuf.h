@interface _MRRegisterVoiceInputDeviceResponseMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char deviceID : 1; unsigned char errorCode : 1; } _has;
}

@property (nonatomic) BOOL hasDeviceID;
@property (nonatomic) unsigned int deviceID;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) unsigned int errorCode;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
