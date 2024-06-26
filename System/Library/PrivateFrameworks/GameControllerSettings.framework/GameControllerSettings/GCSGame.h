@class NSString, NSDictionary, NSDate;
@protocol GCSJSONObject;

@interface GCSGame : NSObject <NSSecureCoding, GCSJSONSerializable>

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly) GCSGame *defaultGame;

@property (readonly, nonatomic) id<GCSJSONObject> jsonObject;
@property (readonly, nonatomic) NSDate *modifiedDate;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSDictionary *controllerToProfileMappings;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

+ (id)archivalClasses;
+ (id)defaultIdentifier;

- (id)initWithCoder:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 title:(id)a1 controllerToProfileMappings:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)profileUUIDForPersistentControllerIdentifier:(id)a0;
- (id)initWithJSONObject:(id)a0;
- (id)profileForController:(id)a0 profiles:(id)a1;

@end
