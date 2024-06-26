@class NSString;

@interface GDFeatureKey : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *viewName;
@property (readonly, nonatomic) NSString *featureName;
@property (readonly, nonatomic) NSString *subidentifierName;
@property (readonly, nonatomic) NSString *string;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithViewName:(id)a0 featureName:(id)a1 subidentifierName:(id)a2;

@end
