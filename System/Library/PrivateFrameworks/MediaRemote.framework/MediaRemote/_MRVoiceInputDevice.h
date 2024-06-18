@class _MRVoiceInputDeviceDescriptorProtobuf;

@interface _MRVoiceInputDevice : PBCodable <NSCopying> {
    struct { unsigned char deviceID : 1; unsigned char recordingState : 1; } _has;
}

@property (nonatomic) BOOL hasDeviceID;
@property (nonatomic) unsigned int deviceID;
@property (readonly, nonatomic) BOOL hasDescriptor;
@property (retain, nonatomic) _MRVoiceInputDeviceDescriptorProtobuf *descriptor;
@property (nonatomic) BOOL hasRecordingState;
@property (nonatomic) int recordingState;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsRecordingState:(id)a0;
- (id)recordingStateAsString:(int)a0;

@end