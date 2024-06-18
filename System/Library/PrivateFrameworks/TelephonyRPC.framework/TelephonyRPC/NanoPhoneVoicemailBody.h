@class NSData;

@interface NanoPhoneVoicemailBody : PBCodable <NSCopying>

@property (nonatomic) long long voicemailNumber;
@property (readonly, nonatomic) BOOL hasVoicemailRecording;
@property (retain, nonatomic) NSData *voicemailRecording;

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
- (id)initWithAudioMessage:(id)a0 voicemailNumber:(unsigned long long)a1;

@end
