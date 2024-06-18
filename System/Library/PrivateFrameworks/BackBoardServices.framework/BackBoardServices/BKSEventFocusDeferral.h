@class BKSEventFocusDeferralProperties;

@interface BKSEventFocusDeferral : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BKSEventFocusDeferralProperties *properties;
@property (readonly, nonatomic) BKSEventFocusDeferralProperties *deferredProperties;
@property (readonly, nonatomic) int priority;
@property (readonly, nonatomic) BOOL isCycle;

- (id)initWithCoder:(id)a0;
- (id)conciseDescription;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)deferredPropertiesForProperties:(id)a0;
- (BOOL)defersProperties:(id)a0;
- (id)initWithProperties:(id)a0 deferredProperties:(id)a1;
- (id)initWithProperties:(id)a0 deferredProperties:(id)a1 withPriority:(int)a2;

@end
