@class NSString, NSSet, NSNumber;

@interface GDKnosisIntentArgInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *intent;
@property (readonly, copy, nonatomic) NSSet *args;
@property (readonly, copy, nonatomic) NSNumber *score;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIntent:(id)a0 args:(id)a1 score:(id)a2;

@end
