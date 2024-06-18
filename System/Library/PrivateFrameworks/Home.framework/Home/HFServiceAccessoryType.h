@class NSString;

@interface HFServiceAccessoryType : HFAccessoryType

@property (readonly, nonatomic) NSString *serviceType;
@property (readonly, nonatomic) NSString *subtype;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (id)initWithServiceType:(id)a0 subtype:(id)a1;

@end
