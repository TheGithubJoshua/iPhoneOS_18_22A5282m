@class NSString;

@interface HKMobileCountryCode : NSObject

@property (readonly, copy, nonatomic) NSString *code;
@property (readonly, copy, nonatomic) NSString *ISOCode;
@property (readonly, nonatomic, getter=isOverridden) BOOL overridden;
@property (readonly, nonatomic) long long provenance;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMobileCountryCode:(id)a0 ISOCode:(id)a1 isOverridden:(BOOL)a2;

@end
