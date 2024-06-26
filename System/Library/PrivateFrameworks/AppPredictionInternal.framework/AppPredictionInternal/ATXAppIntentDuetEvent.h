@class NSString, NSArray, NSNumber;

@interface ATXAppIntentDuetEvent : ATXDuetEvent <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *actionType;
@property (readonly, nonatomic) NSArray *parameterHashes;
@property (readonly, nonatomic) NSArray *slotSetHashes;
@property (readonly, nonatomic) NSNumber *paramCount;
@property (readonly, nonatomic) NSNumber *alogId;

- (id)initWithCoder:(id)a0;
- (id)initWithDKEvent:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (id)initWithCurrentContextStoreValues;
- (id)initWithBundleId:(id)a0 actionType:(id)a1 parameterHashes:(id)a2 slotSetHashes:(id)a3 paramCount:(id)a4 startDate:(id)a5 endDate:(id)a6;
- (id)initWithBundleId:(id)a0 actionType:(id)a1 parameterHashes:(id)a2 slotSetHashes:(id)a3 paramCount:(id)a4 startDate:(id)a5 endDate:(id)a6 alogId:(id)a7;

@end
