@class NSData;

@interface AVAudioDeviceTestResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long outputID;
@property (nonatomic) long long inputID;
@property (nonatomic) double sampleRate;
@property (nonatomic) double correlationValue;
@property (readonly, nonatomic) NSData *data;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 inputID:(long long)a1 outputID:(long long)a2 sampleRate:(double)a3 correlationValue:(double)a4;

@end
