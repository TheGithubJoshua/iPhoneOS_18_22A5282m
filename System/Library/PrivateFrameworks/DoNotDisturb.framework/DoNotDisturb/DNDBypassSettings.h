@class NSString;

@interface DNDBypassSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long immediateBypassEventSourceType;
@property (readonly, copy, nonatomic) NSString *immediateBypassCNGroupIdentifier;
@property (readonly, nonatomic) unsigned long long repeatEventSourceBehaviorEnabledSetting;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithImmediateBypassEventSourceType:(unsigned long long)a0 immediateBypassCNGroupIdentifier:(id)a1 repeatEventSourceBehaviorEnabledSetting:(unsigned long long)a2;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)diffDescription;
- (id)_initWithSettings:(id)a0;

@end
