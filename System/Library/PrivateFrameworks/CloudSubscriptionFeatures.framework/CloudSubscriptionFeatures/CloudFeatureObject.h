@class NSString, NSNumber;

@interface CloudFeatureObject : NSObject

@property (readonly, nonatomic) NSString *featureID;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSNumber *value;
@property (readonly, nonatomic) NSString *accessToken;

- (id)initWithFeatureID:(id)a0 status:(long long)a1 intValue:(long long)a2 accessToken:(id)a3;
- (id)init;
- (id)initWithFeatureID:(id)a0 status:(long long)a1 accessToken:(id)a2;
- (void).cxx_destruct;
- (id)initWithFeatureID:(id)a0 status:(long long)a1 value:(id)a2 accessToken:(id)a3;

@end
