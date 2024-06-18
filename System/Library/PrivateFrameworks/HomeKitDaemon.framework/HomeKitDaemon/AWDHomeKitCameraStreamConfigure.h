@interface AWDHomeKitCameraStreamConfigure : PBCodable <NSCopying> {
    struct { unsigned char audioCodec : 1; unsigned char cryptoSuite : 1; unsigned char framerate : 1; unsigned char resolution : 1; unsigned char sampleRate : 1; } _has;
}

@property (nonatomic) BOOL hasResolution;
@property (nonatomic) int resolution;
@property (nonatomic) BOOL hasFramerate;
@property (nonatomic) unsigned int framerate;
@property (nonatomic) BOOL hasAudioCodec;
@property (nonatomic) int audioCodec;
@property (nonatomic) BOOL hasSampleRate;
@property (nonatomic) int sampleRate;
@property (nonatomic) BOOL hasCryptoSuite;
@property (nonatomic) int cryptoSuite;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsAudioCodec:(id)a0;
- (int)StringAsSampleRate:(id)a0;
- (int)StringAsCryptoSuite:(id)a0;
- (int)StringAsResolution:(id)a0;
- (id)audioCodecAsString:(int)a0;
- (id)cryptoSuiteAsString:(int)a0;
- (id)resolutionAsString:(int)a0;
- (id)sampleRateAsString:(int)a0;

@end