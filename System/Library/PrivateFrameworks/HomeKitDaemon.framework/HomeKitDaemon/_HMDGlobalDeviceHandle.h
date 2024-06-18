@class NSData, HMDAccountHandle;

@interface _HMDGlobalDeviceHandle : _HMDDeviceHandle

@property (readonly, copy) HMDAccountHandle *accountHandle;
@property (readonly, copy, nonatomic) NSData *pushToken;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isValidDestination:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)initWithDestination:(id)a0;
- (id)destination;
- (unsigned long long)hash;
- (id)privateDescription;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithPushToken:(id)a0 accountHandle:(id)a1;
- (BOOL)isGlobal;

@end
