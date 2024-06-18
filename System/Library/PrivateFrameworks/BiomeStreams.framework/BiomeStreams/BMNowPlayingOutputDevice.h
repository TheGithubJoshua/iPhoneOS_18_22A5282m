@class NSString;

@interface BMNowPlayingOutputDevice : NSObject

@property (readonly, nonatomic) unsigned long long deviceType;
@property (readonly, nonatomic) unsigned long long deviceSubType;
@property (readonly, nonatomic) NSString *deviceId;

- (id)proto;
- (unsigned long long)hash;
- (id)initWithDeviceType:(unsigned long long)a0 deviceSubType:(unsigned long long)a1 deviceId:(id)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
