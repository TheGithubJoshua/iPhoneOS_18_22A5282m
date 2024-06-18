@class HPSSetting, NSUUID, NSError;

@interface HPSResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HPSSetting *setting;
@property (readonly, nonatomic) NSUUID *accessoryIdentifier;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL isSuccess;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSetting:(id)a0 accessoryIdentifier:(id)a1 error:(id)a2 result:(BOOL)a3;

@end
