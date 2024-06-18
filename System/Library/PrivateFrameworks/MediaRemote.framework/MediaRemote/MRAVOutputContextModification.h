@class NSArray, NSString;

@interface MRAVOutputContextModification : NSObject <NSSecureCoding> {
    NSString *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long modificationType;
@property (readonly, nonatomic) NSArray *concreteOutputDevices;
@property (readonly, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic) NSArray *outputDeviceUIDs;
@property (readonly, nonatomic) NSArray *avOutputDevices;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *initiator;
@property (nonatomic) BOOL shouldFadeAudio;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(unsigned long long)a0 devices:(id)a1;
- (void)modifyWithOutputContext:(id)a0 queue:(id)a1 completion:(id /* block */)a2;

@end
