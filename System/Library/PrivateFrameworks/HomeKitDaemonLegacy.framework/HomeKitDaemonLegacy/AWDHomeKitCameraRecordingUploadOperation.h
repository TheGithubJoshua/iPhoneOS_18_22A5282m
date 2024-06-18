@class NSString;

@interface AWDHomeKitCameraRecordingUploadOperation : PBCodable <NSCopying> {
    struct { unsigned char errorCode : 1; unsigned char operationStartTime : 1; unsigned char retryCount : 1; unsigned char runTime : 1; unsigned char timestamp : 1; unsigned char totalClipDuration : 1; unsigned char operationType : 1; unsigned char didCausePreviousClipToFinalizeBecauseMaxDurationExceeded : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasClipModelUUID;
@property (retain, nonatomic) NSString *clipModelUUID;
@property (nonatomic) BOOL hasDidCausePreviousClipToFinalizeBecauseMaxDurationExceeded;
@property (nonatomic) BOOL didCausePreviousClipToFinalizeBecauseMaxDurationExceeded;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) long long errorCode;
@property (nonatomic) BOOL hasTotalClipDuration;
@property (nonatomic) unsigned long long totalClipDuration;
@property (nonatomic) BOOL hasRunTime;
@property (nonatomic) unsigned long long runTime;
@property (nonatomic) BOOL hasRetryCount;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) BOOL hasOperationType;
@property (nonatomic) int operationType;
@property (readonly, nonatomic) BOOL hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) BOOL hasOperationStartTime;
@property (nonatomic) unsigned long long operationStartTime;

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
- (int)StringAsOperationType:(id)a0;
- (id)operationTypeAsString:(int)a0;

@end
