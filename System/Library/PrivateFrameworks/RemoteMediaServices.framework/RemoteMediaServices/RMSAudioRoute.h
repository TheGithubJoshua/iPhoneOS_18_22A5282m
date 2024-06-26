@class NSString;

@interface RMSAudioRoute : NSObject

@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) unsigned long long macAddress;
@property (nonatomic) BOOL supportsVideo;
@property (nonatomic, getter=isSelected) BOOL selected;

+ (id)audioRoutesFromProtobufs:(id)a0;
+ (id)protobufsFromAudioRoutes:(id)a0;

- (id)initWithProtobuf:(id)a0;
- (id)protobuf;
- (void).cxx_destruct;
- (BOOL)isEqualToAudioRoute:(id)a0;

@end
