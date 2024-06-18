@class NSString;
@protocol HKSPSyncAnchor;

@interface HKSPSleepModeObject : NSObject <HKSPXPCObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long sleepMode;
@property (readonly, nonatomic) id<HKSPSyncAnchor> syncAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)initWithSleepMode:(long long)a0 syncAnchor:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)objectWithSyncAnchor:(id)a0;

@end
