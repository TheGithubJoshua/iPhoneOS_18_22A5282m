@class NSString;

@interface AVAudioSessionChannelDescription : NSObject {
    void *_impl;
}

@property (readonly, nonatomic) NSString *channelName;
@property (readonly, nonatomic) NSString *owningPortUID;
@property (readonly, nonatomic) unsigned long long channelNumber;
@property (readonly, nonatomic) unsigned int channelLabel;

+ (id)privateCreate:(id)a0 portUID:(id)a1 channelNumber:(unsigned int)a2;
+ (id)privateCreateArray:(id)a0 portUID:(id)a1;

- (id)init;
- (BOOL)isEqualToChannel:(id)a0;
- (struct ChannelDescriptionImpl { id x0; id x1; unsigned int x2; unsigned int x3; } *)privateGetImplementation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;

@end
