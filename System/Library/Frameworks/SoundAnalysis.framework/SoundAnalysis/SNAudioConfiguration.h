@class NSString, NSArray;

@interface SNAudioConfiguration : NSObject <NSCopying, NSSecureCoding> {
    BOOL _prefersNoMicrophoneUsageIndicator;
    BOOL _prefersNoInterruptions;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *mode;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) NSArray *channelMap;
@property (nonatomic) BOOL useSiriAudioRouting;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
