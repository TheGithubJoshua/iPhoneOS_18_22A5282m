@interface SNSystemConfiguration : NSObject {
    unsigned int _channelCount;
    double _sampleRate;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
