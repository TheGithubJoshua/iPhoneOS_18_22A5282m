@class NSString;

@interface _MPCProtoDelegateInfo : PBCodable <NSCopying> {
    unsigned long long _accountID;
    long long _delegateInfoID;
    NSString *_deviceGUID;
    NSString *_deviceName;
    NSString *_requestUserAgent;
    int _systemReleaseType;
    NSString *_timeZoneName;
    NSString *_uuid;
    BOOL _privateListeningEnabled;
    struct { unsigned char accountID : 1; unsigned char delegateInfoID : 1; unsigned char systemReleaseType : 1; unsigned char privateListeningEnabled : 1; } _has;
}

+ (id)currentDeviceDelegateInfo;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)playbackRequestEnvironmentWithBaseEnvironment:(id)a0 error:(id *)a1;

@end
