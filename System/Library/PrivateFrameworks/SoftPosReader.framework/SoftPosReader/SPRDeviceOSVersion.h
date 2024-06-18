@class NSString;

@interface SPRDeviceOSVersion : NSObject

@property (readonly, copy, nonatomic) NSString *shortVersion;
@property (readonly, copy, nonatomic) NSString *buildNumber;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDERRepresentation:(id)a0;

@end
