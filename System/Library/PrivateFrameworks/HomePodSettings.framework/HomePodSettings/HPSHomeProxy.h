@class NSString;

@interface HPSHomeProxy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL hasValidHomeLoaded;
@property (readonly, copy, nonatomic) NSString *accesoryName;
@property (nonatomic) long long minimumMediaUserPrivilege;
@property (nonatomic) BOOL isMediaPeerToPeerEnabled;
@property (nonatomic) BOOL isAutoSUEnabled;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAccessoryName:(id)a0 validHome:(BOOL)a1;

@end
