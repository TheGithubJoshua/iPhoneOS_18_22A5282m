@interface JTAudioMediaItem : JFXMediaItem

- (id)init;
- (id)info;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)hasAudibleCharacteristic;
- (id)initWithInfo:(id)a0 delegate:(id)a1;

@end
