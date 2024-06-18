@class NSString, NSNumber;

@interface SiriBluetoothContext : SiriContext {
    NSNumber *_isTemporaryDevice;
    NSNumber *_isEyesFree;
}

@property (readonly, nonatomic) NSString *address;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (BOOL)isTemporaryDevice;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEyesFree;
- (id)initWithBluetoothDevice:(id)a0;

@end
