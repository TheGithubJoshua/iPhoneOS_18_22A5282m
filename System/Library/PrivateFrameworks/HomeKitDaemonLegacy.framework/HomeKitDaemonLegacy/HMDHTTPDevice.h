@class NSUUID, NSString;

@interface HMDHTTPDevice : HMFObject <HMFLogging>

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)shortDescription;

- (id)init;
- (id)initWithIdentifier:(id)a0;
- (id)logIdentifier;
- (id)shortDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)descriptionWithPointer:(BOOL)a0;

@end
